package cz.msebera.android.httpclient.auth;

public interface AuthScheme {
    @java.lang.Deprecated
    cz.msebera.android.httpclient.Header authenticate(cz.msebera.android.httpclient.auth.Credentials r1, cz.msebera.android.httpclient.HttpRequest r2) throws cz.msebera.android.httpclient.auth.AuthenticationException;

    java.lang.String getParameter(java.lang.String r1);

    java.lang.String getRealm();

    java.lang.String getSchemeName();

    boolean isComplete();

    boolean isConnectionBased();

    void processChallenge(cz.msebera.android.httpclient.Header r1) throws cz.msebera.android.httpclient.auth.MalformedChallengeException;
}
