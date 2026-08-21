package cz.msebera.android.httpclient.auth;

public interface Credentials {
    java.lang.String getPassword();

    java.security.Principal getUserPrincipal();
}
