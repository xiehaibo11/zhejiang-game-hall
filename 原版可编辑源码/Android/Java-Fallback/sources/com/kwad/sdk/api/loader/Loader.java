package com.kwad.sdk.api.loader;

public class Loader {
    static final boolean $assertionsDisabled = false;
    private static android.content.Context mContext;
    private final java.util.concurrent.atomic.AtomicBoolean IP;
    private com.kwad.sdk.api.core.IKsAdSDK aiL;
    private com.kwad.sdk.api.loader.k aiM;

    static class a {
        private static final com.kwad.sdk.api.loader.Loader aiN = null;

        static {
                com.kwad.sdk.api.loader.Loader r0 = new com.kwad.sdk.api.loader.Loader
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.api.loader.Loader.a.aiN = r0
                return
        }

        static com.kwad.sdk.api.loader.Loader yv() {
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.a.aiN
                return r0
        }
    }

    static {
            return
    }

    private Loader() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aiM = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.IP = r0
            return
    }

    Loader(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static synchronized com.kwad.sdk.api.core.IKsAdSDK a(java.lang.ClassLoader r5) {
            java.lang.Class<com.kwad.sdk.api.loader.Loader> r0 = com.kwad.sdk.api.loader.Loader.class
            monitor-enter(r0)
            java.lang.Class<com.kwad.sdk.api.core.IKsAdSDK> r1 = com.kwad.sdk.api.core.IKsAdSDK.class
            java.lang.Class<com.kwad.sdk.api.core.KsAdSdkDynamicApi> r2 = com.kwad.sdk.api.core.KsAdSdkDynamicApi.class
            java.lang.annotation.Annotation r1 = r1.getAnnotation(r2)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            com.kwad.sdk.api.core.KsAdSdkDynamicApi r1 = (com.kwad.sdk.api.core.KsAdSdkDynamicApi) r1     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r1 = r1.value()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r2 = 1
            java.lang.Class r1 = java.lang.Class.forName(r1, r2, r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r2 = "get"
            r3 = 0
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            if (r1 == 0) goto L2c
            com.kwad.sdk.api.core.IKsAdSDK r1 = (com.kwad.sdk.api.core.IKsAdSDK) r1     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            monitor-exit(r0)
            return r1
        L2c:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r3 = "Can not get sdk form "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r2.append(r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
            throw r1     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L42
        L40:
            r5 = move-exception
            goto L49
        L42:
            r5 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L40
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L40
            throw r1     // Catch: java.lang.Throwable -> L40
        L49:
            monitor-exit(r0)
            throw r5
    }

    private boolean aC(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = com.kwad.sdk.api.loader.g.ay(r5)
            java.lang.String r1 = com.kwad.sdk.api.loader.g.az(r5)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            r3 = 0
            if (r2 == 0) goto L16
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L16
            return r3
        L16:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L2e
            boolean r2 = com.kwad.sdk.api.loader.g.F(r1, r0)
            if (r2 == 0) goto L2e
            com.kwad.sdk.api.loader.g.k(r5, r1)
            u(r5, r0)
            java.lang.String r0 = ""
            com.kwad.sdk.api.loader.g.l(r5, r0)
            r0 = r1
        L2e:
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L36
            r5 = 1
            return r5
        L36:
            return r3
    }

    private static void aD(android.content.Context r5) {
            java.lang.String r0 = com.kwad.sdk.api.loader.g.aA(r5)
            java.lang.String r1 = com.kwad.sdk.api.loader.g.air
            r2 = 0
            boolean r1 = com.kwad.sdk.api.loader.t.b(r5, r1, r2)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r4 = "3.3.42"
            if (r3 != 0) goto L1b
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L1b
            if (r1 == 0) goto L36
        L1b:
            java.lang.String r0 = com.kwad.sdk.api.loader.g.ay(r5)
            java.lang.String r1 = ""
            com.kwad.sdk.api.loader.g.k(r5, r1)
            com.kwad.sdk.api.loader.g.l(r5, r1)
            java.lang.String r1 = com.kwad.sdk.api.loader.g.air
            com.kwad.sdk.api.loader.t.a(r5, r1, r2)
            java.io.File r0 = com.kwad.sdk.api.loader.h.p(r5, r0)
            com.kwad.sdk.api.loader.h.j(r0)
            com.kwad.sdk.api.loader.g.m(r5, r4)
        L36:
            return
    }

    public static com.kwad.sdk.api.loader.Loader get() {
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.a.yv()
            return r0
    }

    private static void u(android.content.Context r0, java.lang.String r1) {
            com.kwad.sdk.api.loader.h.t(r0, r1)
            return
    }

    private static void yu() {
            int r0 = com.kwad.sdk.api.c.ym()     // Catch: java.lang.Throwable -> L2b
            if (r0 <= 0) goto L2a
            android.content.Context r1 = com.kwad.sdk.api.loader.Loader.mContext     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.api.loader.d r1 = com.kwad.sdk.api.loader.d.ax(r1)     // Catch: java.lang.Throwable -> L26
            java.lang.Thread$UncaughtExceptionHandler r2 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Throwable -> L26
            r1.setDefaultUncaughtExceptionHandler(r2)     // Catch: java.lang.Throwable -> L26
            android.content.Context r1 = com.kwad.sdk.api.loader.Loader.mContext     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.api.loader.d r1 = com.kwad.sdk.api.loader.d.ax(r1)     // Catch: java.lang.Throwable -> L26
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r1)     // Catch: java.lang.Throwable -> L26
            android.content.Context r1 = com.kwad.sdk.api.loader.Loader.mContext     // Catch: java.lang.Throwable -> L26
            com.kwad.sdk.api.loader.d r1 = com.kwad.sdk.api.loader.d.ax(r1)     // Catch: java.lang.Throwable -> L26
            r1.bP(r0)     // Catch: java.lang.Throwable -> L26
            goto L2f
        L26:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L2b
        L2a:
            return
        L2b:
            r0 = move-exception
            r0.printStackTrace()
        L2f:
            return
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.api.loader.Loader.mContext
            return r0
    }

    public java.lang.ClassLoader getExternalClassLoader() {
            r1 = this;
            com.kwad.sdk.api.loader.k r0 = r1.aiM
            if (r0 == 0) goto L9
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public android.content.res.Resources getExternalResource() {
            r1 = this;
            com.kwad.sdk.api.loader.k r0 = r1.aiM
            if (r0 == 0) goto L9
            android.content.res.Resources r0 = r0.yr()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.ClassLoader getRealClassLoader() {
            r1 = this;
            com.kwad.sdk.api.loader.k r0 = r1.aiM
            if (r0 == 0) goto L9
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
        L9:
            java.lang.Class r0 = r1.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            return r0
    }

    public com.kwad.sdk.api.core.IKsAdSDK init(android.content.Context r2, java.lang.ClassLoader r3) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.IP
            boolean r0 = r0.get()
            if (r0 == 0) goto Lb
            com.kwad.sdk.api.core.IKsAdSDK r2 = r1.aiL
            return r2
        Lb:
            android.content.Context r0 = r2.getApplicationContext()
            com.kwad.sdk.api.loader.Loader.mContext = r0
            aD(r2)
            boolean r0 = r1.aC(r2)
            if (r0 == 0) goto L24
            java.lang.String r0 = com.kwad.sdk.api.loader.g.ay(r2)
            com.kwad.sdk.api.loader.k r2 = com.kwad.sdk.api.loader.k.a(r2, r3, r0)
            r1.aiM = r2
        L24:
            com.kwad.sdk.api.loader.k r2 = r1.aiM
            r3 = 1
            if (r2 != 0) goto L3c
            java.lang.Class r2 = r1.getClass()
            java.lang.ClassLoader r2 = r2.getClassLoader()
            com.kwad.sdk.api.core.IKsAdSDK r2 = a(r2)
            r1.aiL = r2
            r0 = 0
            r2.setIsExternal(r0)
            goto L45
        L3c:
            com.kwad.sdk.api.core.IKsAdSDK r2 = r2.ys()
            r1.aiL = r2
            r2.setIsExternal(r3)
        L45:
            com.kwad.sdk.api.core.IKsAdSDK r2 = r1.aiL
            com.kwad.sdk.api.c.a(r2)
            com.kwad.sdk.api.loader.k r2 = r1.aiM
            if (r2 == 0) goto L51
            yu()
        L51:
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.IP
            r2.set(r3)
            com.kwad.sdk.api.core.IKsAdSDK r2 = r1.aiL
            return r2
    }

    public boolean isExternalLoaded() {
            r1 = this;
            com.kwad.sdk.api.loader.k r0 = r1.aiM
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public <T extends com.kwad.sdk.api.proxy.IComponentProxy> T newComponentProxy(android.content.Context r2, java.lang.Class<?> r3, java.lang.Object r4) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.KsAdSDK.sHasInit
            boolean r0 = r0.get()
            if (r0 != 0) goto L15
            java.lang.String r0 = "sdkconfig"
            java.lang.String r0 = com.kwad.sdk.api.loader.t.getString(r2, r0)
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.api.SdkConfig.create(r0)
            com.kwad.sdk.api.KsAdSDK.init(r2, r0)
        L15:
            com.kwad.sdk.api.core.IKsAdSDK r2 = r1.aiL
            com.kwad.sdk.api.proxy.IComponentProxy r2 = r2.newComponentProxy(r3, r4)
            return r2
    }

    public <T> T newInstance(java.lang.Class<T> r3) {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.KsAdSDK.sHasInit
            boolean r0 = r0.get()
            if (r0 != 0) goto L21
            android.content.Context r0 = com.kwad.sdk.api.loader.Loader.mContext
            if (r0 != 0) goto L14
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()
            android.app.Application r0 = r0.getApplication()
        L14:
            java.lang.String r1 = "sdkconfig"
            java.lang.String r1 = com.kwad.sdk.api.loader.t.getString(r0, r1)
            com.kwad.sdk.api.SdkConfig r1 = com.kwad.sdk.api.SdkConfig.create(r1)
            com.kwad.sdk.api.KsAdSDK.init(r0, r1)
        L21:
            com.kwad.sdk.api.core.IKsAdSDK r0 = r2.aiL
            java.lang.Object r3 = r0.newInstance(r3)
            return r3
    }

    public void rest() {
            r2 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.IP
            r1 = 0
            r0.set(r1)
            r0 = 0
            com.kwad.sdk.api.loader.Loader.mContext = r0
            r2.aiL = r0
            r2.aiM = r0
            return
    }
}
