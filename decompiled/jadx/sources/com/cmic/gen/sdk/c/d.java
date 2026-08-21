package com.cmic.gen.sdk.c;

import android.net.Network;
import android.net.SSLCertificateSocketFactory;
import android.os.Build;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocket;

/* JADX INFO: compiled from: TlsSniSocketFactory.java */
/* JADX INFO: loaded from: classes.dex */
public class d extends a {
    private static final String[] b = {"TLSv1.2"};
    private final HttpsURLConnection d;
    private final Network e;
    private final com.cmic.gen.sdk.a f;
    private final String c = d.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    HostnameVerifier f1657a = HttpsURLConnection.getDefaultHostnameVerifier();

    @Override // javax.net.SocketFactory
    public Socket createSocket(String str, int i) throws IOException {
        return null;
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(String str, int i, InetAddress inetAddress, int i2) throws IOException {
        return null;
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(InetAddress inetAddress, int i) throws IOException {
        return null;
    }

    @Override // javax.net.SocketFactory
    public Socket createSocket(InetAddress inetAddress, int i, InetAddress inetAddress2, int i2) throws IOException {
        return null;
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public String[] getDefaultCipherSuites() {
        return new String[0];
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public String[] getSupportedCipherSuites() {
        return new String[0];
    }

    public d(HttpsURLConnection httpsURLConnection, Network network, com.cmic.gen.sdk.a aVar) {
        this.d = httpsURLConnection;
        this.e = network;
        this.f = aVar;
    }

    @Override // javax.net.ssl.SSLSocketFactory
    public Socket createSocket(Socket socket, String str, int i, boolean z) throws IOException {
        String requestProperty = this.d.getRequestProperty("Host");
        if (requestProperty != null) {
            str = requestProperty;
        }
        com.cmic.gen.sdk.e.c.b(this.c, "customized createSocket. host: " + str);
        com.cmic.gen.sdk.e.c.b(this.c, "plainSocket localAddress: " + socket.getLocalAddress().getHostAddress());
        if (z) {
            com.cmic.gen.sdk.e.c.b(this.c, "plainSocket close");
            socket.close();
        }
        SSLCertificateSocketFactory sSLCertificateSocketFactory = (SSLCertificateSocketFactory) SSLCertificateSocketFactory.getDefault(0);
        SSLSocket sSLSocket = (SSLSocket) sSLCertificateSocketFactory.createSocket();
        if (this.e != null && Build.VERSION.SDK_INT >= 21) {
            this.e.bindSocket(sSLSocket);
        }
        sSLSocket.connect(socket.getRemoteSocketAddress());
        this.f.a("socketip", sSLSocket.getLocalAddress().getHostAddress());
        sSLSocket.setEnabledProtocols(sSLSocket.getSupportedProtocols());
        if (Build.VERSION.SDK_INT < 20) {
            com.cmic.gen.sdk.e.c.b(this.c, "5.0以下启动tls 1.2");
            sSLSocket.setEnabledProtocols(b);
            sSLSocket.setEnabledCipherSuites(new String[]{"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA", "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"});
        }
        if (Build.VERSION.SDK_INT >= 17) {
            com.cmic.gen.sdk.e.c.b(this.c, "Setting SNI hostname");
            sSLCertificateSocketFactory.setHostname(sSLSocket, str);
        } else {
            com.cmic.gen.sdk.e.c.b(this.c, "No documented SNI support on Android <4.2, trying with reflection");
            try {
                sSLSocket.getClass().getMethod("setHostname", String.class).invoke(sSLSocket, str);
            } catch (Exception e) {
                e.printStackTrace();
                com.cmic.gen.sdk.e.c.a(this.c, "SNI not useable");
            }
        }
        SSLSession session = sSLSocket.getSession();
        if (!this.f1657a.verify(str, session)) {
            throw new SSLPeerUnverifiedException("Cannot verify hostname: " + str);
        }
        com.cmic.gen.sdk.e.c.b(this.c, "Established " + session.getProtocol() + " connection with " + session.getPeerHost() + " using " + session.getCipherSuite());
        return sSLSocket;
    }
}
