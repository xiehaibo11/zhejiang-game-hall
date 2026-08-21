package com.cmic.gen.sdk.c;

import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: compiled from: CMICTlsSocketFactory.java */
/* JADX INFO: loaded from: classes.dex */
public abstract class a extends SSLSocketFactory {
    protected SSLSocketFactory delegate = HttpsURLConnection.getDefaultSSLSocketFactory();
}
