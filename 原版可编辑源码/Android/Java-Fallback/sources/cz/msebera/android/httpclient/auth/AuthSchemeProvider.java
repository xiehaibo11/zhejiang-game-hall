package cz.msebera.android.httpclient.auth;

public interface AuthSchemeProvider {
    cz.msebera.android.httpclient.auth.AuthScheme create(cz.msebera.android.httpclient.protocol.HttpContext r1);
}
