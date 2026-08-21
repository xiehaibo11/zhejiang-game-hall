package okhttp3.internal.platform;

import android.os.Build;
import android.util.Log;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.security.Security;
import java.security.cert.Certificate;
import java.security.cert.TrustAnchor;
import java.security.cert.X509Certificate;
import java.util.List;
import javax.annotation.Nullable;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.X509TrustManager;
import okhttp3.Protocol;
import okhttp3.internal.Util;
import okhttp3.internal.tls.CertificateChainCleaner;
import okhttp3.internal.tls.TrustRootIndex;

class AndroidPlatform extends Platform {
    private static final int MAX_LOG_LENGTH = 4000;
    private final CloseGuard closeGuard;
    private final OptionalMethod<Socket> getAlpnSelectedProtocol;
    private final OptionalMethod<Socket> setAlpnProtocols;
    private final OptionalMethod<Socket> setHostname;
    private final OptionalMethod<Socket> setUseSessionTickets;
    private final Class<?> sslParametersClass;

    static final class AndroidCertificateChainCleaner extends CertificateChainCleaner {
        private final Method checkServerTrusted;
        private final Object x509TrustManagerExtensions;

        public int hashCode() {
            return 0;
        }

        AndroidCertificateChainCleaner(Object r1, Method r2) {
            this.x509TrustManagerExtensions = r1;
            this.checkServerTrusted = r2;
        }

        @Override
        public List<Certificate> clean(List<Certificate> r5, String r6) throws SSLPeerUnverifiedException {
            X509Certificate[] r52 = (X509Certificate[]) r5.toArray(new X509Certificate[r5.size()]);     // Catch: IllegalAccessException -> L4 InvocationTargetException -> L7
            return (List) this.checkServerTrusted.invoke(this.x509TrustManagerExtensions, new Object[]{r52, "RSA", r6});
        L4:
            e = move-exception;
            throw new AssertionError(e);
        L7:
            e = move-exception;
            SSLPeerUnverifiedException r62 = new SSLPeerUnverifiedException(e.getMessage());
            r62.initCause(e);
            throw r62;
        }

        public boolean equals(Object r1) {
            return r1 instanceof AndroidCertificateChainCleaner;
        }
    }

    static final class AndroidTrustRootIndex implements TrustRootIndex {
        private final Method findByIssuerAndSignatureMethod;
        private final X509TrustManager trustManager;

        AndroidTrustRootIndex(X509TrustManager r1, Method r2) {
            this.findByIssuerAndSignatureMethod = r2;
            this.trustManager = r1;
        }

        @Override
        public X509Certificate findByIssuerAndSignature(X509Certificate r6) {
            TrustAnchor r62 = (TrustAnchor) this.findByIssuerAndSignatureMethod.invoke(this.trustManager, new Object[]{r6});     // Catch: InvocationTargetException -> L10 IllegalAccessException -> L7
            if (r62 == null) goto L13;
            return r62.getTrustedCert();
            goto L14
        L13:
            return null;
        L7:
            e = move-exception;
            throw Util.assertionError("unable to get issues and signature", e);
        L14:
            return null;
        }

        public boolean equals(Object r5) {
            if (r5 != this) goto L6;
            return true;
        L6:
            if ((r5 instanceof AndroidTrustRootIndex) == true) goto L8;
            return false;
        L8:
            AndroidTrustRootIndex r52 = (AndroidTrustRootIndex) r5;
            if (this.trustManager.equals(r52.trustManager) == true) goto L11;
        L13:
            return false;
        L11:
            if (this.findByIssuerAndSignatureMethod.equals(r52.findByIssuerAndSignatureMethod) == false) goto L13;
            return true;
        }

        public int hashCode() {
            return this.trustManager.hashCode() + (this.findByIssuerAndSignatureMethod.hashCode() * 31);
        }
    }

    static final class CloseGuard {
        private final Method getMethod;
        private final Method openMethod;
        private final Method warnIfOpenMethod;

        CloseGuard(Method r1, Method r2, Method r3) {
            this.getMethod = r1;
            this.openMethod = r2;
            this.warnIfOpenMethod = r3;
        }

        Object createAndOpen(String r6) {
            Method r0 = this.getMethod;
            if (r0 != null) goto L9;
        L7:
            return null;
        L9:
            Object r02 = r0.invoke(null, new Object[0]);     // Catch: Exception -> L8
            this.openMethod.invoke(r02, new Object[]{r6});     // Catch: Exception -> L8
            return r02;
        }

        boolean warnIfOpen(Object r4) {
            if (r4 == null) goto L10;
            this.warnIfOpenMethod.invoke(r4, new Object[0]);     // Catch: Exception -> L7
            return true;
        L11:
            return false;
        L10:
            return false;
        }

        static CloseGuard get() {
            Method r0 = null;
            Class<?> r1 = Class.forName("dalvik.system.CloseGuard");     // Catch: Exception -> L5
            Method r2 = r1.getMethod("get", new Class[0]);     // Catch: Exception -> L5
            Method r4 = r1.getMethod("open", new Class[]{String.class});     // Catch: Exception -> L5
            Method r12 = r1.getMethod("warnIfOpen", new Class[0]);     // Catch: Exception -> L5
            r0 = r2;
        L7:
            return new CloseGuard(r0, r4, r12);
        L5:
            r12 = null;
            r4 = null;
            goto L7
        }
    }

    AndroidPlatform(Class<?> r2, OptionalMethod<Socket> r3, OptionalMethod<Socket> r4, OptionalMethod<Socket> r5, OptionalMethod<Socket> r6) {
        this.closeGuard = CloseGuard.get();
        this.sslParametersClass = r2;
        this.setUseSessionTickets = r3;
        this.setHostname = r4;
        this.getAlpnSelectedProtocol = r5;
        this.setAlpnProtocols = r6;
    }

    @Override
    public void connectSocket(Socket r2, InetSocketAddress r3, int r4) throws IOException {
        r2.connect(r3, r4);     // Catch: ClassCastException -> L5 SecurityException -> L11 AssertionError -> L14
        return;
    L14:
        e = move-exception;
        if (Util.isAndroidGetsocknameError(e) == true) goto L18;
        throw e;
    L18:
        throw new IOException(e);
    L5:
        e = move-exception;
        if (Build.VERSION.SDK_INT != 26) goto L10;
        IOException r32 = new IOException("Exception in connect");
        r32.initCause(e);
        throw r32;
    L10:
        throw e;
    L11:
        e = move-exception;
        IOException r33 = new IOException("Exception in connect");
        r33.initCause(e);
        throw r33;
    }

    @Override
    @Nullable
    protected X509TrustManager trustManager(SSLSocketFactory r5) {
        Object r0 = readFieldOrNull(r5, this.sslParametersClass, "sslParameters");
        if (r0 == null) goto L13;
    L8:
        X509TrustManager r52 = (X509TrustManager) readFieldOrNull(r0, X509TrustManager.class, "x509TrustManager");
        if (r52 == null) goto L12;
        return r52;
    L12:
        return (X509TrustManager) readFieldOrNull(r0, X509TrustManager.class, "trustManager");
    L13:
        r0 = readFieldOrNull(r5, Class.forName("com.google.android.gms.org.conscrypt.SSLParametersImpl", false, r5.getClass().getClassLoader()), "sslParameters");     // Catch: ClassNotFoundException -> L6
    L7:
        return super.trustManager(r5);
    }

    @Override
    public void configureTlsExtensions(SSLSocket r6, String r7, List<Protocol> r8) {
        if (r7 == null) goto L5;
        this.setUseSessionTickets.invokeOptionalWithoutCheckedException(r6, new Object[]{true});
        this.setHostname.invokeOptionalWithoutCheckedException(r6, new Object[]{r7});
    L5:
        OptionalMethod<Socket> r72 = this.setAlpnProtocols;
        if (r72 != null) goto L8;
        return;
    L8:
        if (r72.isSupported(r6) == false) goto L12;
        this.setAlpnProtocols.invokeWithoutCheckedException(r6, new Object[]{concatLengthPrefixed(r8)});
        return;
    }

    @Override
    @Nullable
    public String getSelectedProtocol(SSLSocket r4) {
        OptionalMethod<Socket> r0 = this.getAlpnSelectedProtocol;
        if (r0 != null) goto L6;
        return null;
    L6:
        if (r0.isSupported(r4) == true) goto L8;
        return null;
    L8:
        byte[] r42 = (byte[]) this.getAlpnSelectedProtocol.invokeWithoutCheckedException(r4, new Object[0]);
        if (r42 != null) goto L11;
        return null;
    L11:
        return new String(r42, Util.UTF_8);
    }

    @Override
    public void log(int r6, String r7, @Nullable Throwable r8) {
        int r0 = 5;
        if (r6 == 5) goto L7;
        r0 = 3;
    L7:
        if (r8 == null) goto L9;
        r7 = r7 + '\n' + Log.getStackTraceString(r8);
    L9:
        int r82 = 0;
        int r1 = r7.length();
    L10:
        if (r82 >= r1) goto L19;
        int r2 = r7.indexOf(10, r82);
        if (r2 != (-1)) goto L15;
        r2 = r1;
    L15:
        int r3 = Math.min(r2, r82 + MAX_LOG_LENGTH);
        Log.println(r0, "OkHttp", r7.substring(r82, r3));
        if (r3 >= r2) goto L17;
        r82 = r3;
        goto L15
    L17:
        r82 = r3 + 1;
        goto L10
    }

    @Override
    public Object getStackTraceForCloseable(String r2) {
        return this.closeGuard.createAndOpen(r2);
    }

    @Override
    public void logCloseableLeak(String r2, Object r3) {
        if (this.closeGuard.warnIfOpen(r3) == true) goto L6;
        log(5, r2, null);
        return;
    }

    @Override
    public boolean isCleartextTrafficPermitted(String r5) {
        Class<?> r0 = Class.forName("android.security.NetworkSecurityPolicy");     // Catch: InvocationTargetException -> L4 IllegalArgumentException -> L6 IllegalAccessException -> L8 Throwable -> L11
        return api24IsCleartextTrafficPermitted(r5, r0, r0.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]));
    L8:
        e = e;
    L10:
        throw Util.assertionError("unable to determine cleartext support", e);
    L6:
        e = e;
    L4:
        e = e;
    L12:
        return super.isCleartextTrafficPermitted(r5);
    }

    private boolean api24IsCleartextTrafficPermitted(String r6, Class<?> r7, Object r8) throws InvocationTargetException, IllegalAccessException {
        return ((Boolean) r7.getMethod("isCleartextTrafficPermitted", new Class[]{String.class}).invoke(r8, new Object[]{r6})).booleanValue();
    L5:
        return api23IsCleartextTrafficPermitted(r6, r7, r8);
    }

    private boolean api23IsCleartextTrafficPermitted(String r4, Class<?> r5, Object r6) throws InvocationTargetException, IllegalAccessException {
        return ((Boolean) r5.getMethod("isCleartextTrafficPermitted", new Class[0]).invoke(r6, new Object[0])).booleanValue();
    L5:
        return super.isCleartextTrafficPermitted(r4);
    }

    private static boolean supportsAlpn() {
        if (Security.getProvider("GMSCore_OpenSSL") == null) goto L9;
        return true;
    L9:
        Class.forName("android.net.Network");     // Catch: ClassNotFoundException -> L7
        return true;
    L7:
        return false;
    }

    @Override
    public CertificateChainCleaner buildCertificateChainCleaner(X509TrustManager r8) {
        Class<?> r0 = Class.forName("android.net.http.X509TrustManagerExtensions");     // Catch: Exception -> L4
        return new AndroidCertificateChainCleaner(r0.getConstructor(new Class[]{X509TrustManager.class}).newInstance(new Object[]{r8}), r0.getMethod("checkServerTrusted", new Class[]{X509Certificate[].class, String.class, String.class}));
    L5:
        return super.buildCertificateChainCleaner(r8);
    }

    public static Platform buildIfSupported() {
        Class<?> r1 = Class.forName("com.android.org.conscrypt.SSLParametersImpl");     // Catch: ClassNotFoundException -> L5
    L4:
        Class<?> r3 = r1;
        OptionalMethod r4 = new OptionalMethod(null, "setUseSessionTickets", new Class[]{Boolean.TYPE});     // Catch: ClassNotFoundException -> L12
        OptionalMethod r5 = new OptionalMethod(null, "setHostname", new Class[]{String.class});     // Catch: ClassNotFoundException -> L12
        if (supportsAlpn() == false) goto L9;
        OptionalMethod r12 = new OptionalMethod(byte[].class, "getAlpnSelectedProtocol", new Class[0]);     // Catch: ClassNotFoundException -> L12
        OptionalMethod r7 = new OptionalMethod(null, "setAlpnProtocols", new Class[]{byte[].class});     // Catch: ClassNotFoundException -> L12
        OptionalMethod r6 = r12;
    L10:
        return new AndroidPlatform(r3, r4, r5, r6, r7);
    L9:
        r6 = null;
        r7 = null;
        goto L10
    L12:
        return null;
    L5:
        r1 = Class.forName("org.apache.harmony.xnet.provider.jsse.SSLParametersImpl");     // Catch: ClassNotFoundException -> L12
        goto L4
    }

    @Override
    public TrustRootIndex buildTrustRootIndex(X509TrustManager r7) {
        Method r0 = r7.getClass().getDeclaredMethod("findTrustAnchorByIssuerAndSignature", new Class[]{X509Certificate.class});     // Catch: NoSuchMethodException -> L4
        r0.setAccessible(true);     // Catch: NoSuchMethodException -> L4
        return new AndroidTrustRootIndex(r7, r0);
    L5:
        return super.buildTrustRootIndex(r7);
    }

    @Override
    public SSLContext getSSLContext() {
        boolean r0 = true;
        if (Build.VERSION.SDK_INT < 16) goto L9;
        if (Build.VERSION.SDK_INT < 22) goto L10;
    L9:
        r0 = false;
    L10:
        if (r0 == false) goto L24;
        return SSLContext.getInstance("TLSv1.2");
    L24:
        return SSLContext.getInstance("TLS");
    L15:
        e = move-exception;
        throw new IllegalStateException("No TLS provider", e);
    }
}
