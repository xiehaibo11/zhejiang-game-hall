package cz.msebera.android.httpclient.client;

public interface AuthenticationStrategy {
    void authFailed(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.protocol.HttpContext r3);

    void authSucceeded(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.auth.AuthScheme r2, cz.msebera.android.httpclient.protocol.HttpContext r3);

    java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> getChallenges(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3) throws cz.msebera.android.httpclient.auth.MalformedChallengeException;

    boolean isAuthenticationRequested(cz.msebera.android.httpclient.HttpHost r1, cz.msebera.android.httpclient.HttpResponse r2, cz.msebera.android.httpclient.protocol.HttpContext r3);

    java.util.Queue<cz.msebera.android.httpclient.auth.AuthOption> select(java.util.Map<java.lang.String, cz.msebera.android.httpclient.Header> r1, cz.msebera.android.httpclient.HttpHost r2, cz.msebera.android.httpclient.HttpResponse r3, cz.msebera.android.httpclient.protocol.HttpContext r4) throws cz.msebera.android.httpclient.auth.MalformedChallengeException;
}
