package com.tkay.expressad.atsignalcommon.b;

public class b {

    private interface a {
    }

    public static abstract class b<T> implements java.lang.reflect.InvocationHandler {
        private T a;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        private T a() {
                r1 = this;
                T r0 = r1.a
                return r0
        }

        final void a(T r1) {
                r0 = this;
                r0.a = r1
                return
        }

        @Override
        public java.lang.Object invoke(java.lang.Object r2, java.lang.reflect.Method r3, java.lang.Object[] r4) {
                r1 = this;
                r2 = 0
                T r0 = r1.a     // Catch: java.lang.reflect.InvocationTargetException -> L8 java.lang.IllegalAccessException -> Le java.lang.IllegalArgumentException -> L13
                java.lang.Object r2 = r3.invoke(r0, r4)     // Catch: java.lang.reflect.InvocationTargetException -> L8 java.lang.IllegalAccessException -> Le java.lang.IllegalArgumentException -> L13
                return r2
            L8:
                r2 = move-exception
                java.lang.Throwable r2 = r2.getTargetException()
                throw r2
            Le:
                r3 = move-exception
                r3.printStackTrace()
                return r2
            L13:
                r3 = move-exception
                r3.printStackTrace()
                return r2
        }
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T a(java.lang.Object r0, com.tkay.expressad.atsignalcommon.b.b.b<T> r1, java.lang.Class<?>... r2) {
            r1.a(r0)
            java.lang.Class<com.tkay.expressad.atsignalcommon.b.b> r0 = com.tkay.expressad.atsignalcommon.b.b.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.lang.Object r0 = java.lang.reflect.Proxy.newProxyInstance(r0, r2, r1)
            return r0
    }

    private static <T> T a(java.lang.Object r2, java.lang.Class<T> r3, com.tkay.expressad.atsignalcommon.b.b.b<T> r4) {
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.b.b.a
            if (r0 == 0) goto L5
            return r2
        L5:
            r4.a(r2)
            java.lang.Class<com.tkay.expressad.atsignalcommon.b.b> r2 = com.tkay.expressad.atsignalcommon.b.b.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            java.lang.Class<com.tkay.expressad.atsignalcommon.b.b$a> r1 = com.tkay.expressad.atsignalcommon.b.b.a.class
            r0[r3] = r1
            java.lang.Object r2 = java.lang.reflect.Proxy.newProxyInstance(r2, r0, r4)
            return r2
    }
}
