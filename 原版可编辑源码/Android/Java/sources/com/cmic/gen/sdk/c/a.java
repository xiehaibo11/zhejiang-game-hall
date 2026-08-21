package com.cmic.gen.sdk.c;

import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

public abstract class a extends SSLSocketFactory {
    protected SSLSocketFactory delegate = HttpsURLConnection.getDefaultSSLSocketFactory();
}
