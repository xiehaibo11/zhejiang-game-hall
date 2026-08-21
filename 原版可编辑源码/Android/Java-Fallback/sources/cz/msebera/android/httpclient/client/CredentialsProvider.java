package cz.msebera.android.httpclient.client;

public interface CredentialsProvider {
    void clear();

    cz.msebera.android.httpclient.auth.Credentials getCredentials(cz.msebera.android.httpclient.auth.AuthScope r1);

    void setCredentials(cz.msebera.android.httpclient.auth.AuthScope r1, cz.msebera.android.httpclient.auth.Credentials r2);
}
