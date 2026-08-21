package cz.msebera.android.httpclient.util;

@java.lang.Deprecated
public final class ExceptionUtils {
    private static final java.lang.reflect.Method INIT_CAUSE_METHOD = null;

    static {
            java.lang.reflect.Method r0 = getInitCauseMethod()
            cz.msebera.android.httpclient.util.ExceptionUtils.INIT_CAUSE_METHOD = r0
            return
    }

    private ExceptionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.reflect.Method getInitCauseMethod() {
            r0 = 1
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L11
            r1 = 0
            java.lang.Class<java.lang.Throwable> r2 = java.lang.Throwable.class
            r0[r1] = r2     // Catch: java.lang.NoSuchMethodException -> L11
            java.lang.Class<java.lang.Throwable> r1 = java.lang.Throwable.class
            java.lang.String r2 = "initCause"
            java.lang.reflect.Method r0 = r1.getMethod(r2, r0)     // Catch: java.lang.NoSuchMethodException -> L11
            return r0
        L11:
            r0 = 0
            return r0
    }

    public static void initCause(java.lang.Throwable r3, java.lang.Throwable r4) {
            java.lang.reflect.Method r0 = cz.msebera.android.httpclient.util.ExceptionUtils.INIT_CAUSE_METHOD
            if (r0 == 0) goto Ld
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Ld
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> Ld
            r0.invoke(r3, r1)     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }
}
