package cz.msebera.android.httpclient.impl.client;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
@java.lang.Deprecated
class CloseableHttpResponseProxy implements java.lang.reflect.InvocationHandler {
    private static final java.lang.reflect.Constructor<?> CONSTRUCTOR = null;
    private final cz.msebera.android.httpclient.HttpResponse original;

    static {
            java.lang.Class<cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy> r0 = cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy.class
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.NoSuchMethodException -> L1f
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L1f
            java.lang.Class<cz.msebera.android.httpclient.client.methods.CloseableHttpResponse> r3 = cz.msebera.android.httpclient.client.methods.CloseableHttpResponse.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.NoSuchMethodException -> L1f
            java.lang.Class r0 = java.lang.reflect.Proxy.getProxyClass(r0, r2)     // Catch: java.lang.NoSuchMethodException -> L1f
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.NoSuchMethodException -> L1f
            java.lang.Class<java.lang.reflect.InvocationHandler> r2 = java.lang.reflect.InvocationHandler.class
            r1[r4] = r2     // Catch: java.lang.NoSuchMethodException -> L1f
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.NoSuchMethodException -> L1f
            cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy.CONSTRUCTOR = r0     // Catch: java.lang.NoSuchMethodException -> L1f
            return
        L1f:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            r1.<init>(r0)
            throw r1
    }

    CloseableHttpResponseProxy(cz.msebera.android.httpclient.HttpResponse r1) {
            r0 = this;
            r0.<init>()
            r0.original = r1
            return
    }

    public static cz.msebera.android.httpclient.client.methods.CloseableHttpResponse newProxy(cz.msebera.android.httpclient.HttpResponse r4) {
            java.lang.reflect.Constructor<?> r0 = cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy.CONSTRUCTOR     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            r2 = 0
            cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy r3 = new cz.msebera.android.httpclient.impl.client.CloseableHttpResponseProxy     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            r3.<init>(r4)     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            r1[r2] = r3     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            java.lang.Object r4 = r0.newInstance(r1)     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            cz.msebera.android.httpclient.client.methods.CloseableHttpResponse r4 = (cz.msebera.android.httpclient.client.methods.CloseableHttpResponse) r4     // Catch: java.lang.IllegalAccessException -> L14 java.lang.reflect.InvocationTargetException -> L1b java.lang.InstantiationException -> L22
            return r4
        L14:
            r4 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r4)
            throw r0
        L1b:
            r4 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r4)
            throw r0
        L22:
            r4 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r4)
            throw r0
    }

    public void close() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.HttpResponse r0 = r1.original
            cz.msebera.android.httpclient.HttpEntity r0 = r0.getEntity()
            cz.msebera.android.httpclient.util.EntityUtils.consume(r0)
            return
    }

    @Override
    public java.lang.Object invoke(java.lang.Object r2, java.lang.reflect.Method r3, java.lang.Object[] r4) throws java.lang.Throwable {
            r1 = this;
            java.lang.String r2 = r3.getName()
            java.lang.String r0 = "close"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L11
            r1.close()
            r2 = 0
            return r2
        L11:
            cz.msebera.android.httpclient.HttpResponse r2 = r1.original     // Catch: java.lang.reflect.InvocationTargetException -> L18
            java.lang.Object r2 = r3.invoke(r2, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L18
            return r2
        L18:
            r2 = move-exception
            java.lang.Throwable r3 = r2.getCause()
            if (r3 == 0) goto L20
            throw r3
        L20:
            throw r2
    }
}
