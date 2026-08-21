package okhttp3.internal.platform;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.List;
import javax.annotation.Nullable;
import javax.net.ssl.SSLParameters;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.X509TrustManager;
import okhttp3.Protocol;
import okhttp3.internal.Util;

final class Jdk9Platform extends Platform {
    final Method getProtocolMethod;
    final Method setProtocolMethod;

    Jdk9Platform(Method r1, Method r2) {
        this.setProtocolMethod = r1;
        this.getProtocolMethod = r2;
    }

    @Override
    public void configureTlsExtensions(SSLSocket r5, String r6, List<Protocol> r7) {
        SSLParameters r62 = r5.getSSLParameters();     // Catch: InvocationTargetException -> L4 Throwable -> L6
        List<String> r72 = alpnProtocolNames(r7);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        this.setProtocolMethod.invoke(r62, new Object[]{r72.toArray(new String[r72.size()])});     // Catch: InvocationTargetException -> L4 Throwable -> L6
        r5.setSSLParameters(r62);     // Catch: InvocationTargetException -> L4 Throwable -> L6
        return;
    L6:
        e = move-exception;
        throw Util.assertionError("unable to set ssl parameters", e);
    }

    @Override
    @Nullable
    public String getSelectedProtocol(SSLSocket r3) {
        String r32 = (String) this.getProtocolMethod.invoke(r3, new Object[0]);     // Catch: InvocationTargetException -> L10 Throwable -> L12
        if (r32 == null) goto L8;
        if (r32.equals("") == true) goto L17;
        return r32;
    L17:
        return null;
    L8:
        return null;
    L12:
        e = move-exception;
        throw Util.assertionError("unable to get selected protocols", e);
    }

    @Override
    public X509TrustManager trustManager(SSLSocketFactory r2) {
        throw new UnsupportedOperationException("clientBuilder.sslSocketFactory(SSLSocketFactory) not supported on JDK 9+");
    }

    public static Jdk9Platform buildIfSupported() {
        return new Jdk9Platform(SSLParameters.class.getMethod("setApplicationProtocols", new Class[]{String[].class}), SSLSocket.class.getMethod("getApplicationProtocol", new Class[0]));
    L4:
        return null;
    }
}
