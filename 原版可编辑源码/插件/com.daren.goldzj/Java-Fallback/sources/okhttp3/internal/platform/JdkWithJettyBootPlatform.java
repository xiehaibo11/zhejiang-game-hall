package okhttp3.internal.platform;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.List;
import javax.annotation.Nullable;
import javax.net.ssl.SSLSocket;
import okhttp3.Protocol;
import okhttp3.internal.Util;

class JdkWithJettyBootPlatform extends Platform {
    private final Class<?> clientProviderClass;
    private final Method getMethod;
    private final Method putMethod;
    private final Method removeMethod;
    private final Class<?> serverProviderClass;

    private static class JettyNegoProvider implements InvocationHandler {
        private final List<String> protocols;
        String selected;
        boolean unsupported;

        JettyNegoProvider(List<String> r1) {
            this.protocols = r1;
        }

        @Override
        public Object invoke(Object r6, Method r7, Object[] r8) throws Throwable {
            String r62 = r7.getName();
            Class<?> r0 = r7.getReturnType();
            if (r8 != null) goto L6;
            r8 = Util.EMPTY_STRING_ARRAY;
        L6:
            if (r62.equals("supports") == false) goto L12;
            if (Boolean.TYPE != r0) goto L12;
            return true;
        L12:
            if (r62.equals("unsupported") == false) goto L18;
            if (Void.TYPE != r0) goto L18;
            this.unsupported = true;
            return null;
        L18:
            if (r62.equals("protocols") == false) goto L24;
            if (r8.length != 0) goto L24;
            return this.protocols;
        L24:
            if (r62.equals("selectProtocol") == true) goto L28;
            if (r62.equals("select") == true) goto L28;
        L43:
            if (r62.equals("protocolSelected") == true) goto L47;
            if (r62.equals("selected") == true) goto L47;
        L51:
            return r7.invoke(this, r8);
        L47:
            if (r8.length != 1) goto L51;
            this.selected = (String) r8[0];
            return null;
        L28:
            if (String.class != r0) goto L43;
            if (r8.length != 1) goto L43;
            if ((r8[0] instanceof List) == false) goto L43;
            List r63 = (List) r8[0];
            int r72 = r63.size();
            int r82 = 0;
        L34:
            if (r82 >= r72) goto L40;
            if (this.protocols.contains(r63.get(r82)) == true) goto L37;
            r82 = r82 + 1;
            goto L34
        L37:
            String r64 = (String) r63.get(r82);
            this.selected = r64;
            return r64;
        L40:
            String r65 = this.protocols.get(0);
            this.selected = r65;
            return r65;
        }
    }

    JdkWithJettyBootPlatform(Method r1, Method r2, Method r3, Class<?> r4, Class<?> r5) {
        this.putMethod = r1;
        this.getMethod = r2;
        this.removeMethod = r3;
        this.clientProviderClass = r4;
        this.serverProviderClass = r5;
    }

    @Override
    public void configureTlsExtensions(SSLSocket r6, String r7, List<Protocol> r8) {
        List<String> r72 = alpnProtocolNames(r8);
        Object r73 = Proxy.newProxyInstance(Platform.class.getClassLoader(), new Class[]{this.clientProviderClass, this.serverProviderClass}, new JettyNegoProvider(r72));     // Catch: IllegalAccessException -> L5 Throwable -> L7
        this.putMethod.invoke(null, new Object[]{r6, r73});     // Catch: IllegalAccessException -> L5 Throwable -> L7
        return;
    L7:
        e = move-exception;
        throw Util.assertionError("unable to set alpn", e);
    }

    @Override
    public void afterHandshake(SSLSocket r5) {
        this.removeMethod.invoke(null, new Object[]{r5});     // Catch: InvocationTargetException -> L4 Throwable -> L6
        return;
    L6:
        e = move-exception;
        throw Util.assertionError("unable to remove alpn", e);
    }

    @Override
    @Nullable
    public String getSelectedProtocol(SSLSocket r4) {
        JettyNegoProvider r0 = (JettyNegoProvider) Proxy.getInvocationHandler(this.getMethod.invoke(null, new Object[]{r4}));     // Catch: IllegalAccessException -> L13 Throwable -> L15
        if (r0.unsupported == true) goto L9;
        if (r0.selected != null) goto L9;
        Platform.get().log(4, "ALPN callback dropped: HTTP/2 is disabled. Is alpn-boot on the boot class path?", null);     // Catch: IllegalAccessException -> L13 Throwable -> L15
        return null;
    L9:
        if (r0.unsupported == false) goto L12;
        return null;
    L12:
        return r0.selected;
    L15:
        e = move-exception;
        throw Util.assertionError("unable to get selected protocol", e);
    }

    public static Platform buildIfSupported() {
        Class<?> r1 = Class.forName("org.eclipse.jetty.alpn.ALPN");     // Catch: Throwable -> L4
        Class<?> r2 = Class.forName("org.eclipse.jetty.alpn.ALPN$Provider");     // Catch: Throwable -> L4
        return new JdkWithJettyBootPlatform(r1.getMethod("put", new Class[]{SSLSocket.class, r2}), r1.getMethod("get", new Class[]{SSLSocket.class}), r1.getMethod("remove", new Class[]{SSLSocket.class}), Class.forName("org.eclipse.jetty.alpn.ALPN$ClientProvider"), Class.forName("org.eclipse.jetty.alpn.ALPN$ServerProvider"));
    L4:
        return null;
    }
}
