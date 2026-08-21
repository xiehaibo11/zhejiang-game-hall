package cz.msebera.android.httpclient.client;

@java.lang.Deprecated
public interface AuthenticationHandler {
    java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> getChallenges(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2) throws cz.msebera.android.httpclient.auth.MalformedChallengeException;

    boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpResponse r1, cz.msebera.android.httpclient.protocol.HttpContext r2);

    cz.msebera.android.httpclient.auth.AuthScheme selectScheme(java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.AuthenticationException;
}
