package cz.msebera.android.httpclient.impl.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class ResponseProxyHandler implements java.lang.reflect.InvocationHandler {
    private static final java.lang.reflect.Method CLOSE_METHOD = null;
    private final cz.msebera.android.httpclient.HttpResponse original;

    static {
            java.lang.Class<java.io.Closeable> r0 = java.io.Closeable.class
            java.lang.String r1 = "close"
            r2 = 0
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Le
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> Le
            cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler.CLOSE_METHOD = r0     // Catch: java.lang.NoSuchMethodException -> Le
            return
        Le:
            r0 = move-exception
            java.lang.Error r1 = new java.lang.Error
            r1.<init>(r0)
            throw r1
    }

    ResponseProxyHandler(cz.msebera.android.httpclient.HttpResponse r1) {
            r0 = this;
            r0.<init>()
            r0.original = r1
            return
    }

    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            cz.msebera.android.httpclient.impl.client.cache.IOUtils.consume(r0)
            return
    }

    @Override
    public java.lang.Object invoke(java.lang.Object r1, java.lang.reflect.Method r2, java.lang.Object[] r3) throws java.lang.Throwable {
            r0 = this;
            java.lang.reflect.Method r1 = cz.msebera.android.httpclient.impl.client.cache.ResponseProxyHandler.CLOSE_METHOD
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto Ld
            r0.close()
            r1 = 0
            return r1
        Ld:
            cz.msebera.android.httpclient.HttpResponse r1 = r0.original     // Catch: java.lang.reflect.InvocationTargetException -> L14
            java.lang.Object r1 = r2.invoke(r1, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L14
            return r1
        L14:
            r1 = move-exception
            java.lang.Throwable r2 = r1.getCause()
            if (r2 == 0) goto L1c
            throw r2
        L1c:
            throw r1
    }
}
