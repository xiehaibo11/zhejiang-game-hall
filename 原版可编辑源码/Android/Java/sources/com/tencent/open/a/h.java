package com.tencent.open.a;

import com.tencent.open.log.SLog;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import java.security.GeneralSecurityException;
import java.security.KeyManagementException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;

public class h extends SSLSocketFactory {
    private SSLSocketFactory a;
    private TrustManager[] b;

    public h() throws NoSuchAlgorithmException, KeyManagementException, KeyStoreException {
        SSLContext sSLContext = SSLContext.getInstance("TLS");
        TrustManager[] trustManagerArrB = b();
        this.b = trustManagerArrB;
        sSLContext.init(null, trustManagerArrB, null);
        this.a = sSLContext.getSocketFactory();
    }

    private TrustManager[] b() {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
            trustManagerFactory.init((KeyStore) null);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            if (trustManagers.length == 1 && (trustManagers[0] instanceof X509TrustManager)) {
                return trustManagers;
            }
            SLog.e("openSDK_LOG.Tls2SupportedSocketFactory", "Unexpected default trust managers: " + Arrays.toString(trustManagers));
            return null;
        } catch (GeneralSecurityException unused) {
            SLog.e("openSDK_LOG.Tls2SupportedSocketFactory", "The system has no TLS. Just give up.");
            return null;
        }
    }

    public TrustManager a() {
        TrustManager[] trustManagerArr = this.b;
        if (trustManagerArr == null || trustManagerArr.length <= 0) {
            return null;
        }
        return trustManagerArr[0];
    }

    @Override
    public Socket createSocket(String str, int i) throws IOException {
        return a(this.a.createSocket(str, i));
    }

    @Override
    public Socket createSocket(String str, int i, InetAddress inetAddress, int i2) throws IOException {
        return a(this.a.createSocket(str, i, inetAddress, i2));
    }

    @Override
    public Socket createSocket(InetAddress inetAddress, int i) throws IOException {
        return a(this.a.createSocket(inetAddress, i));
    }

    @Override
    public Socket createSocket(InetAddress inetAddress, int i, InetAddress inetAddress2, int i2) throws IOException {
        return a(this.a.createSocket(inetAddress, i, inetAddress2, i2));
    }

    @Override
    public Socket createSocket(Socket socket, String str, int i, boolean z) throws IOException {
        return a(this.a.createSocket(socket, str, i, z));
    }

    @Override
    public String[] getDefaultCipherSuites() {
        return this.a.getDefaultCipherSuites();
    }

    @Override
    public String[] getSupportedCipherSuites() {
        return this.a.getSupportedCipherSuites();
    }

    private Socket a(Socket socket) {
        if (socket instanceof SSLSocket) {
            SSLSocket sSLSocket = (SSLSocket) socket;
            sSLSocket.setEnabledProtocols(sSLSocket.getSupportedProtocols());
        }
        return socket;
    }
}
