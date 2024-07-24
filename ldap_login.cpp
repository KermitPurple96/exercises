#include <winldap.h>
#include <iostream>

int main() {
    LDAP* ld;
    ULONG version = LDAP_VERSION3;
    ULONG result;
    const wchar_t* ldapServer = L"192.168.1.43"; 
    const int ldapPort = LDAP_PORT;
    const wchar_t* ldapUser = L"cn=administrator,cn=Users,dc=kermit,dc=local";
    const wchar_t* ldapPassword = L"Admin123";

    ld = ldap_init(const_cast<wchar_t*>(ldapServer), ldapPort);
    if (ld == NULL) {
        std::cerr << "Failed to initialize LDAP connection." << std::endl;
        return 1;
    }

    ldap_set_option(ld, LDAP_OPT_PROTOCOL_VERSION, &version);

    result = ldap_simple_bind_s(ld, const_cast<wchar_t*>(ldapUser), const_cast<wchar_t*>(ldapPassword));
    if (result == LDAP_SUCCESS) {
        std::cout << "Login successful." << std::endl;
    }
    else {
        std::cerr << "Login failed with error: " << ldap_err2string(result) << std::endl;
    }

    ldap_unbind(ld);
    return 0;
}
