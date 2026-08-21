package cz.msebera.android.httpclient.auth;

public interface ContextAwareAuthScheme extends cz.msebera.android.httpclient.auth.AuthScheme {
    cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r1, cz.msebera.android.httpclient.HttpRequest r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.AuthenticationException;
}
