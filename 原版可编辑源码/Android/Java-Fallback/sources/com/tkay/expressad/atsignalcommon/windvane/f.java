package com.tkay.expressad.atsignalcommon.windvane;

public class f {

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
        public java.lang.Object invoke(java.lang.Object r1, java.lang.reflect.Method r2, java.lang.Object[] r3) {
                r0 = this;
                T r1 = r0.a
                java.lang.Object r1 = r2.invoke(r1, r3)
                return r1
        }
    }

    private f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static <T> T a(java.lang.Object r1, com.tkay.expressad.atsignalcommon.windvane.f.b<T> r2, java.lang.Class<?>... r3) {
            java.lang.Class r0 = r1.getClass()
            boolean r0 = java.lang.reflect.Proxy.isProxyClass(r0)
            if (r0 == 0) goto Lb
            return r1
        Lb:
            r2.a(r1)
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.f> r1 = com.tkay.expressad.atsignalcommon.windvane.f.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            java.lang.Object r1 = java.lang.reflect.Proxy.newProxyInstance(r1, r3, r2)
            return r1
    }

    private static <T> T a(java.lang.Object r2, java.lang.Class<T> r3, com.tkay.expressad.atsignalcommon.windvane.f.b<T> r4) {
            boolean r0 = r2 instanceof com.tkay.expressad.atsignalcommon.windvane.f.a
            if (r0 == 0) goto L5
            return r2
        L5:
            r4.a(r2)
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.f> r2 = com.tkay.expressad.atsignalcommon.windvane.f.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r0 = 2
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            java.lang.Class<com.tkay.expressad.atsignalcommon.windvane.f$a> r1 = com.tkay.expressad.atsignalcommon.windvane.f.a.class
            r0[r3] = r1
            java.lang.Object r2 = java.lang.reflect.Proxy.newProxyInstance(r2, r0, r4)
            return r2
    }
}
