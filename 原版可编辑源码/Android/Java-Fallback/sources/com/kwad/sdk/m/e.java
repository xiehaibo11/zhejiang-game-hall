package com.kwad.sdk.m;

public class e {
    static final boolean $assertionsDisabled = false;
    private final java.util.concurrent.atomic.AtomicBoolean IP;
    private android.content.res.Resources aMA;
    private com.kwad.sdk.m.h aMB;
    private boolean aMC;
    private java.lang.ClassLoader aMD;
    private android.content.res.Resources aMz;

    static class a {
        private static final com.kwad.sdk.m.e aME = null;

        static {
                com.kwad.sdk.m.e r0 = new com.kwad.sdk.m.e
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.m.e.a.aME = r0
                return
        }

        static com.kwad.sdk.m.e KQ() {
                com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.a.aME
                return r0
        }
    }

    static {
            return
    }

    private e() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.IP = r0
            return
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.m.e KO() {
            com.kwad.sdk.m.e r0 = com.kwad.sdk.m.e.a.KQ()
            return r0
    }

    private boolean KP() {
            r13 = this;
            r0 = 0
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.HD()     // Catch: java.lang.Throwable -> L9c
            boolean r2 = com.kwad.sdk.m.l.dw(r1)     // Catch: java.lang.Throwable -> L9c
            if (r2 != 0) goto L1e
            java.lang.Class<com.kwad.sdk.service.a.d> r1 = com.kwad.sdk.service.a.d.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L9c
            com.kwad.sdk.service.a.d r1 = (com.kwad.sdk.service.a.d) r1     // Catch: java.lang.Throwable -> L9c
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = "KSPlugin unwrapContextIfNeed fail"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L9c
            r1.gatherException(r2)     // Catch: java.lang.Throwable -> L9c
            return r0
        L1e:
            java.lang.String r2 = "com.kwad.sdk.api.loader.Loader"
            java.lang.Class r3 = r13.getClass()     // Catch: java.lang.Throwable -> L9c
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Throwable -> L9c
            java.lang.Class r2 = java.lang.Class.forName(r2, r0, r3)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = "get"
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L9c
            java.lang.reflect.Method r3 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L9c
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L9c
            java.lang.Object r3 = r3.invoke(r4, r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.reflect.Field[] r2 = r2.getDeclaredFields()     // Catch: java.lang.Throwable -> L9c
            int r4 = r2.length     // Catch: java.lang.Throwable -> L9c
            r5 = r0
        L41:
            if (r5 >= r4) goto La8
            r6 = r2[r5]     // Catch: java.lang.Throwable -> L9c
            java.lang.Class r7 = r6.getType()     // Catch: java.lang.Throwable -> L9c
            java.lang.Class<com.kwad.sdk.api.core.IKsAdSDK> r8 = com.kwad.sdk.api.core.IKsAdSDK.class
            if (r7 == r8) goto L99
            java.lang.Class r7 = r6.getType()     // Catch: java.lang.Throwable -> L9c
            java.lang.Class<android.content.Context> r8 = android.content.Context.class
            if (r7 == r8) goto L99
            java.lang.Class r7 = r6.getType()     // Catch: java.lang.Throwable -> L9c
            java.lang.Class<java.util.concurrent.atomic.AtomicBoolean> r8 = java.util.concurrent.atomic.AtomicBoolean.class
            if (r7 == r8) goto L99
            java.lang.Object r6 = com.kwad.sdk.utils.s.a(r6, r3)     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L99
            java.lang.Class r7 = r6.getClass()     // Catch: java.lang.Throwable -> L9c
            java.lang.reflect.Field[] r7 = r7.getDeclaredFields()     // Catch: java.lang.Throwable -> L9c
            int r8 = r7.length     // Catch: java.lang.Throwable -> L9c
            r9 = r0
        L6d:
            if (r9 >= r8) goto L99
            r10 = r7[r9]     // Catch: java.lang.Throwable -> L9c
            java.lang.Class r11 = r10.getType()     // Catch: java.lang.Throwable -> L9c
            java.lang.Class<android.content.res.Resources> r12 = android.content.res.Resources.class
            if (r11 != r12) goto L96
            r2 = 1
            r10.setAccessible(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.Object r3 = r10.get(r6)     // Catch: java.lang.Throwable -> L9c
            android.content.res.Resources r3 = (android.content.res.Resources) r3     // Catch: java.lang.Throwable -> L9c
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L9c
            com.kwad.sdk.m.h r4 = new com.kwad.sdk.m.h     // Catch: java.lang.Throwable -> L9c
            r4.<init>(r3, r1)     // Catch: java.lang.Throwable -> L9c
            com.kwad.sdk.utils.s.a(r10, r6, r4)     // Catch: java.lang.Throwable -> L9c
            r13.aMz = r1     // Catch: java.lang.Throwable -> L9c
            r13.aMA = r3     // Catch: java.lang.Throwable -> L9c
            r13.aMB = r4     // Catch: java.lang.Throwable -> L9c
            return r2
        L96:
            int r9 = r9 + 1
            goto L6d
        L99:
            int r5 = r5 + 1
            goto L41
        L9c:
            r1 = move-exception
            java.lang.Class<com.kwad.sdk.service.a.d> r2 = com.kwad.sdk.service.a.d.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.d r2 = (com.kwad.sdk.service.a.d) r2
            r2.gatherException(r1)
        La8:
            return r0
    }

    private static boolean xK() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            boolean r0 = r0.xK()
            return r0
    }

    private static boolean xL() {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            boolean r0 = r0.xL()
            return r0
    }

    public final boolean Jr() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.IP
            boolean r0 = r0.get()
            return r0
    }

    public final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = r1.aMD
            return r0
    }

    public final android.content.res.Resources getResources() {
            r1 = this;
            com.kwad.sdk.m.h r0 = r1.aMB
            return r0
    }

    public final void init() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.IP
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            r0 = 1
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L45
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1     // Catch: java.lang.Throwable -> L45
            boolean r1 = r1.getIsExternal()     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L51
            boolean r1 = xK()     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L41
            boolean r1 = r3.KP()     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L41
            java.lang.Class r1 = r3.getClass()     // Catch: java.lang.Throwable -> L45
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Throwable -> L45
            r3.aMD = r1     // Catch: java.lang.Throwable -> L45
            boolean r1 = xL()     // Catch: java.lang.Throwable -> L45
            com.kwad.sdk.m.i.bW(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r1 = "KSDY/KSPlugin"
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L45
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L45
            r3.aMC = r0     // Catch: java.lang.Throwable -> L45
            goto L51
        L41:
            r1 = 0
            r3.aMC = r1     // Catch: java.lang.Throwable -> L45
            goto L51
        L45:
            r1 = move-exception
            java.lang.Class<com.kwad.sdk.service.a.d> r2 = com.kwad.sdk.service.a.d.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.d r2 = (com.kwad.sdk.service.a.d) r2
            r2.gatherException(r1)
        L51:
            java.util.concurrent.atomic.AtomicBoolean r1 = r3.IP
            r1.set(r0)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "KSPlugin{mHostResources="
            r0.<init>(r1)
            android.content.res.Resources r1 = r2.aMz
            r0.append(r1)
            java.lang.String r1 = ", mResResources="
            r0.append(r1)
            android.content.res.Resources r1 = r2.aMA
            r0.append(r1)
            java.lang.String r1 = ", mPluginResources="
            r0.append(r1)
            com.kwad.sdk.m.h r1 = r2.aMB
            r0.append(r1)
            java.lang.String r1 = ", mEnable="
            r0.append(r1)
            boolean r1 = r2.aMC
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
