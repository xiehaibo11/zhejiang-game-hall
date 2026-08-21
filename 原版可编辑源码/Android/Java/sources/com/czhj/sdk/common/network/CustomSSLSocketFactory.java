package com.czhj.sdk.common.network;

import android.net.SSLCertificateSocketFactory;
import android.os.Build;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.logger.SigmobLog;
import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;
import java.net.SocketException;
import java.security.KeyManagementException;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import java.security.cert.X509Certificate;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

public class CustomSSLSocketFactory extends SSLSocketFactory {
    private static final TrustManager[] b = {new X509TrustManager() {
        @Override
        public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) {
        }

        @Override
        public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) {
        }

        @Override
        public X509Certificate[] getAcceptedIssuers() {
            return null;
        }
    }};
    private SSLSocketFactory a;

    private CustomSSLSocketFactory() {
    }

    private static void a(SSLCertificateSocketFactory sSLCertificateSocketFactory, SSLSocket sSLSocket, String str) {
        Preconditions.NoThrow.checkNotNull(sSLCertificateSocketFactory);
        Preconditions.NoThrow.checkNotNull(sSLSocket);
        if (Build.VERSION.SDK_INT >= 17) {
            sSLCertificateSocketFactory.setHostname(sSLSocket, str);
            return;
        }
        try {
            new ReflectionUtil.MethodBuilder(sSLSocket, "setHostname").addParam(String.class, str).execute();
        } catch (Throwable unused) {
            SigmobLog.d("Unable to call setHostname() on the socket");
        }
    }

    private void a(Socket socket) {
        if (socket instanceof SSLSocket) {
            SSLSocket sSLSocket = (SSLSocket) socket;
            sSLSocket.setEnabledProtocols(sSLSocket.getSupportedProtocols());
        }
    }

    private void a(Socket socket, String str) throws IOException {
        Preconditions.NoThrow.checkNotNull(socket);
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        if (socket instanceof SSLSocket) {
            try {
                SSLSocket sSLSocket = (SSLSocket) socket;
                if (sSLSocketFactory instanceof SSLCertificateSocketFactory) {
                    a((SSLCertificateSocketFactory) sSLSocketFactory, sSLSocket, str);
                    a(sSLSocket, str);
                }
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
            }
        }
    }

    private static void a(SSLSocket sSLSocket, String str) throws IOException {
        Preconditions.NoThrow.checkNotNull(sSLSocket);
        sSLSocket.startHandshake();
        if (!HttpsURLConnection.getDefaultHostnameVerifier().verify(str, sSLSocket.getSession())) {
            throw new SSLHandshakeException("Server Name Identification failed.");
        }
    }

    public static CustomSSLSocketFactory getDefault(int i) {
        CustomSSLSocketFactory customSSLSocketFactory = new CustomSSLSocketFactory();
        customSSLSocketFactory.a = SSLCertificateSocketFactory.getDefault(i, null);
        return customSSLSocketFactory;
    }

    public static CustomSSLSocketFactory getForceValid() {
        SSLContext sSLContext;
        String message;
        CustomSSLSocketFactory customSSLSocketFactory = new CustomSSLSocketFactory();
        try {
            sSLContext = SSLContext.getInstance("SSL");
            try {
                sSLContext.init(null, b, new SecureRandom());
            } catch (KeyManagementException e) {
                e = e;
                message = e.getMessage();
                SigmobLog.e(message);
            } catch (NoSuchAlgorithmException e2) {
                e = e2;
                message = e.getMessage();
                SigmobLog.e(message);
            }
        } catch (KeyManagementException e3) {
            e = e3;
            sSLContext = null;
        } catch (NoSuchAlgorithmException e4) {
            e = e4;
            sSLContext = null;
        }
        if (sSLContext == null) {
            return null;
        }
        customSSLSocketFactory.a = sSLContext.getSocketFactory();
        return customSSLSocketFactory;
    }

    @Deprecated
    void a(SSLSocketFactory sSLSocketFactory) {
        this.a = sSLSocketFactory;
    }

    @Override
    public Socket createSocket() throws IOException {
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        Socket socketCreateSocket = sSLSocketFactory.createSocket();
        a(socketCreateSocket);
        return socketCreateSocket;
    }

    @Override
    public Socket createSocket(String str, int i) throws IOException {
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        Socket socketCreateSocket = sSLSocketFactory.createSocket(str, i);
        a(socketCreateSocket);
        return socketCreateSocket;
    }

    @Override
    public Socket createSocket(String str, int i, InetAddress inetAddress, int i2) throws IOException {
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        Socket socketCreateSocket = sSLSocketFactory.createSocket(str, i, inetAddress, i2);
        a(socketCreateSocket);
        return socketCreateSocket;
    }

    @Override
    public Socket createSocket(InetAddress inetAddress, int i) throws IOException {
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        Socket socketCreateSocket = sSLSocketFactory.createSocket(inetAddress, i);
        a(socketCreateSocket);
        return socketCreateSocket;
    }

    @Override
    public Socket createSocket(InetAddress inetAddress, int i, InetAddress inetAddress2, int i2) throws IOException {
        SSLSocketFactory sSLSocketFactory = this.a;
        if (sSLSocketFactory == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        Socket socketCreateSocket = sSLSocketFactory.createSocket(inetAddress, i, inetAddress2, i2);
        a(socketCreateSocket);
        return socketCreateSocket;
    }

    @Override
    public Socket createSocket(Socket socket, String str, int i, boolean z) throws IOException {
        if (this.a == null) {
            throw new SocketException("SSLSocketFactory was null. Unable to create socket.");
        }
        if (Build.VERSION.SDK_INT >= 23) {
            Socket socketCreateSocket = this.a.createSocket(socket, str, i, z);
            a(socketCreateSocket);
            return socketCreateSocket;
        }
        if (z && socket != null) {
            socket.close();
        }
        Socket socketCreateSocket2 = this.a.createSocket(InetAddressUtils.getInetAddressByName(str), i);
        a(socketCreateSocket2);
        a(socketCreateSocket2, str);
        return socketCreateSocket2;
    }

    @Override
    public String[] getDefaultCipherSuites() {
        SSLSocketFactory sSLSocketFactory = this.a;
        return sSLSocketFactory == null ? new String[0] : sSLSocketFactory.getDefaultCipherSuites();
    }

    @Override
    public String[] getSupportedCipherSuites() {
        SSLSocketFactory sSLSocketFactory = this.a;
        return sSLSocketFactory == null ? new String[0] : sSLSocketFactory.getSupportedCipherSuites();
    }
}
