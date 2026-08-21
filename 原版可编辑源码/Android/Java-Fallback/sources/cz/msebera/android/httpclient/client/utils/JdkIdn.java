package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
@java.lang.Deprecated
public class JdkIdn implements cz.msebera.android.httpclient.client.utils.Idn {
    private final java.lang.reflect.Method toUnicode;

    public JdkIdn() throws java.lang.ClassNotFoundException {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "java.net.IDN"
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.String r1 = "toUnicode"
            r2 = 1
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1a java.lang.SecurityException -> L25
            r3 = 0
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L1a java.lang.SecurityException -> L25
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L1a java.lang.SecurityException -> L25
            r5.toUnicode = r0     // Catch: java.lang.NoSuchMethodException -> L1a java.lang.SecurityException -> L25
            return
        L1a:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = r0.getMessage()
            r1.<init>(r2, r0)
            throw r1
        L25:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = r0.getMessage()
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    public java.lang.String toUnicode(java.lang.String r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.toUnicode     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L1f
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L1f
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L1f
            java.lang.Object r5 = r0.invoke(r1, r2)     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L1f
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.reflect.InvocationTargetException -> L10 java.lang.IllegalAccessException -> L1f
            return r5
        L10:
            r5 = move-exception
            java.lang.Throwable r5 = r5.getCause()
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = r5.getMessage()
            r0.<init>(r1, r5)
            throw r0
        L1f:
            r5 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r5.getMessage()
            r0.<init>(r1, r5)
            throw r0
    }
}
