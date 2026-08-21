package com.cmic.gen.sdk.c;

import android.os.Build;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;

/* JADX INFO: compiled from: Tls12SocketFactory.java */
/* JADX INFO: loaded from: classes.dex */
public class c extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String[] f1653a = {"TLSv1.2"};
    private final com.cmic.gen.sdk.a b;

    public String toString() {
        return "Tls12SocketFactory";
    }

    public c(SSLSocketFactory sSLSocketFactory, com.cmic.gen.sdk.a aVar) {
        this.delegate = sSLSocketFactory;
        this.b = aVar;
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public String[] getDefaultCipherSuites() {
        return this.delegate.getDefaultCipherSuites();
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public String[] getSupportedCipherSuites() {
        return this.delegate.getSupportedCipherSuites();
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket() throws IOException {
        return a(this.delegate.createSocket());
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public Socket createSocket(Socket socket, String str, int i, boolean z) throws IOException {
        return a(this.delegate.createSocket(socket, str, i, z));
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(String str, int i) throws IOException {
        return a(this.delegate.createSocket(str, i));
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(String str, int i, InetAddress inetAddress, int i2) throws IOException {
        return a(this.delegate.createSocket(str, i, inetAddress, i2));
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(InetAddress inetAddress, int i) throws IOException {
        return a(this.delegate.createSocket(inetAddress, i));
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(InetAddress inetAddress, int i, InetAddress inetAddress2, int i2) throws IOException {
        return a(this.delegate.createSocket(inetAddress, i, inetAddress2, i2));
    }

    private Socket a(Socket socket) {
        if ((socket instanceof SSLSocket) && Build.VERSION.SDK_INT < 20) {
            com.cmic.gen.sdk.e.c.b("Tls12SocketFactory", "5.0以下启动tls 1.2");
            SSLSocket sSLSocket = (SSLSocket) socket;
            for (String str : sSLSocket.getEnabledProtocols()) {
                com.cmic.gen.sdk.e.c.a("enableProtocol", str);
            }
            sSLSocket.setEnabledProtocols(f1653a);
            sSLSocket.setEnabledCipherSuites(new String[]{"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA", "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"});
        }
        this.b.a("socketip", socket.getLocalAddress().getHostAddress());
        return socket;
    }
}
