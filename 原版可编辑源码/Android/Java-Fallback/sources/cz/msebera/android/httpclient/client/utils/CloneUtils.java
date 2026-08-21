package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.Immutable
public class CloneUtils {
    private CloneUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Object clone(java.lang.Object r0) throws java.lang.CloneNotSupportedException {
            java.lang.Object r0 = cloneObject(r0)
            return r0
    }

    public static <T> T cloneObject(T r4) throws java.lang.CloneNotSupportedException {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r1 = r4 instanceof java.lang.Cloneable
            if (r1 == 0) goto L46
            java.lang.Class r1 = r4.getClass()
            java.lang.String r2 = "clone"
            r3 = r0
            java.lang.Class[] r3 = (java.lang.Class[]) r3     // Catch: java.lang.NoSuchMethodException -> L3b
            java.lang.reflect.Method r1 = r1.getMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L3b
            java.lang.Object[] r0 = (java.lang.Object[]) r0     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L27
            java.lang.Object r4 = r1.invoke(r4, r0)     // Catch: java.lang.IllegalAccessException -> L1c java.lang.reflect.InvocationTargetException -> L27
            return r4
        L1c:
            r4 = move-exception
            java.lang.IllegalAccessError r0 = new java.lang.IllegalAccessError
            java.lang.String r4 = r4.getMessage()
            r0.<init>(r4)
            throw r0
        L27:
            r4 = move-exception
            java.lang.Throwable r4 = r4.getCause()
            boolean r0 = r4 instanceof java.lang.CloneNotSupportedException
            if (r0 == 0) goto L33
            java.lang.CloneNotSupportedException r4 = (java.lang.CloneNotSupportedException) r4
            throw r4
        L33:
            java.lang.Error r0 = new java.lang.Error
            java.lang.String r1 = "Unexpected exception"
            r0.<init>(r1, r4)
            throw r0
        L3b:
            r4 = move-exception
            java.lang.NoSuchMethodError r0 = new java.lang.NoSuchMethodError
            java.lang.String r4 = r4.getMessage()
            r0.<init>(r4)
            throw r0
        L46:
            java.lang.CloneNotSupportedException r4 = new java.lang.CloneNotSupportedException
            r4.<init>()
            throw r4
    }
}
