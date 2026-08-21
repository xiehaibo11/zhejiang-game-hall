package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.ThreadSafe
public class BasicAuthCache implements cz.msebera.android.httpclient.client.AuthCache {
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> map;
    private final cz.msebera.android.httpclient.conn.SchemePortResolver schemePortResolver;

    public BasicAuthCache() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public BasicAuthCache(cz.msebera.android.httpclient.conn.SchemePortResolver r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.map = r0
            if (r3 == 0) goto L18
            goto L1a
        L18:
            cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver r3 = cz.msebera.android.httpclient.impl.conn.DefaultSchemePortResolver.INSTANCE
        L1a:
            r2.schemePortResolver = r3
            return
    }

    @Override
    public void clear() {
            r1 = this;
            java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> r0 = r1.map
            r0.clear()
            return
    }

    @Override
    public cz.msebera.android.httpclient.auth.AuthScheme get(cz.msebera.android.httpclient.HttpHost r4) {
            r3 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r4, r0)
            java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> r0 = r3.map
            cz.msebera.android.httpclient.HttpHost r4 = r3.getKey(r4)
            java.lang.Object r4 = r0.get(r4)
            byte[] r4 = (byte[]) r4
            r0 = 0
            if (r4 == 0) goto L49
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            r1.<init>(r4)     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            java.io.ObjectInputStream r4 = new java.io.ObjectInputStream     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            r4.<init>(r1)     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            java.lang.Object r1 = r4.readObject()     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            cz.msebera.android.httpclient.auth.AuthScheme r1 = (cz.msebera.android.httpclient.auth.AuthScheme) r1     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            r4.close()     // Catch: java.lang.ClassNotFoundException -> L28 java.io.IOException -> L39
            return r1
        L28:
            r4 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            boolean r1 = r1.isWarnEnabled()
            if (r1 == 0) goto L38
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "Unexpected error while de-serializing auth scheme"
            r1.warn(r2, r4)
        L38:
            return r0
        L39:
            r4 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            boolean r1 = r1.isWarnEnabled()
            if (r1 == 0) goto L49
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r3.log
            java.lang.String r2 = "Unexpected I/O error while de-serializing auth scheme"
            r1.warn(r2, r4)
        L49:
            return r0
    }

    protected cz.msebera.android.httpclient.HttpHost getKey(cz.msebera.android.httpclient.HttpHost r4) {
            r3 = this;
            int r0 = r4.getPort()
            if (r0 > 0) goto L1a
            cz.msebera.android.httpclient.conn.SchemePortResolver r0 = r3.schemePortResolver     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L1a
            int r0 = r0.resolve(r4)     // Catch: cz.msebera.android.httpclient.conn.UnsupportedSchemeException -> L1a
            cz.msebera.android.httpclient.HttpHost r1 = new cz.msebera.android.httpclient.HttpHost
            java.lang.String r2 = r4.getHostName()
            java.lang.String r4 = r4.getSchemeName()
            r1.<init>(r2, r0, r4)
            return r1
        L1a:
            return r4
    }

    @Override
    public void put(cz.msebera.android.httpclient.HttpHost r3, cz.msebera.android.httpclient.auth.AuthScheme r4) {
            r2 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r3, r0)
            if (r4 != 0) goto L8
            return
        L8:
            boolean r0 = r4 instanceof java.io.Serializable
            if (r0 == 0) goto L3b
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L2a
            r0.<init>()     // Catch: java.io.IOException -> L2a
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L2a
            r1.<init>(r0)     // Catch: java.io.IOException -> L2a
            r1.writeObject(r4)     // Catch: java.io.IOException -> L2a
            r1.close()     // Catch: java.io.IOException -> L2a
            java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> r4 = r2.map     // Catch: java.io.IOException -> L2a
            cz.msebera.android.httpclient.HttpHost r3 = r2.getKey(r3)     // Catch: java.io.IOException -> L2a
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L2a
            r4.put(r3, r0)     // Catch: java.io.IOException -> L2a
            goto L62
        L2a:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            boolean r4 = r4.isWarnEnabled()
            if (r4 == 0) goto L62
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            java.lang.String r0 = "Unexpected I/O error while serializing auth scheme"
            r4.warn(r0, r3)
            goto L62
        L3b:
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r2.log
            boolean r3 = r3.isDebugEnabled()
            if (r3 == 0) goto L62
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r3 = r2.log
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Auth scheme "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            r0.append(r4)
            java.lang.String r4 = " is not serializable"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.debug(r4)
        L62:
            return
    }

    @Override
    public void remove(cz.msebera.android.httpclient.HttpHost r2) {
            r1 = this;
            java.lang.String r0 = "HTTP host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> r0 = r1.map
            cz.msebera.android.httpclient.HttpHost r2 = r1.getKey(r2)
            r0.remove(r2)
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<cz.msebera.android.httpclient.HttpHost, byte[]> r0 = r1.map
            java.lang.String r0 = r0.toString()
            return r0
    }
}
