package cz.msebera.android.httpclient.ssl;

public interface PrivateKeyStrategy {
    java.lang.String chooseAlias(java.util.Map<java.lang.String, cz.msebera.android.httpclient.ssl.PrivateKeyDetails> r1, java.net.Socket r2);
}
