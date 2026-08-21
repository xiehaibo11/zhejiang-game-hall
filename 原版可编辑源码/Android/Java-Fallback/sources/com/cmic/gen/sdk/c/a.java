package com.cmic.gen.sdk.c;

public abstract class a extends javax.net.ssl.SSLSocketFactory {
    protected javax.net.ssl.SSLSocketFactory delegate;

    public a() {
            r1 = this;
            r1.<init>()
            javax.net.ssl.SSLSocketFactory r0 = javax.net.ssl.HttpsURLConnection.getDefaultSSLSocketFactory()
            r1.delegate = r0
            return
    }
}
