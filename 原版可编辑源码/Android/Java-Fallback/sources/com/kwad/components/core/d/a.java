package com.kwad.components.core.d;

public final class a {
    private static boolean IO;
    private static final java.util.concurrent.atomic.AtomicBoolean IP = null;
    private static java.util.List<java.lang.Throwable> IQ;





    static class a {
        public static java.lang.String aa(android.content.Context r2) {
                java.io.File r0 = new java.io.File
                java.io.File r2 = getDataDir(r2)
                java.lang.String r1 = "kwad_ex"
                r0.<init>(r2, r1)
                boolean r2 = r0.exists()
                if (r2 != 0) goto L14
                r0.mkdir()
            L14:
                java.lang.String r2 = r0.getAbsolutePath()
                return r2
        }

        private static java.io.File getDataDir(android.content.Context r3) {
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 0
                r2 = 29
                if (r0 < r2) goto L15
                java.io.File r0 = new java.io.File
                java.io.File r3 = r3.getExternalFilesDir(r1)
                java.lang.String r3 = r3.getAbsolutePath()
                r0.<init>(r3)
                return r0
            L15:
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 24
                if (r0 < r2) goto L1f
                java.io.File r1 = r3.getDataDir()
            L1f:
                if (r1 != 0) goto L64
                java.io.File r1 = new java.io.File
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.io.File r2 = android.os.Environment.getDataDirectory()
                java.lang.String r2 = r2.getPath()
                r0.append(r2)
                java.lang.String r2 = "/data/"
                r0.append(r2)
                java.lang.String r2 = r3.getPackageName()
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                r1.<init>(r0)
                boolean r0 = r1.exists()
                if (r0 != 0) goto L64
                java.io.File r0 = new java.io.File
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "/data/data/"
                r1.<init>(r2)
                java.lang.String r3 = r3.getPackageName()
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                r0.<init>(r3)
                return r0
            L64:
                return r1
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.components.core.d.a.IP = r0
            return
    }

    private static java.lang.String ah(java.lang.String r2) {
            r0 = 46
            int r1 = r2.indexOf(r0)     // Catch: java.lang.Throwable -> L14
            int r1 = r1 + 1
            int r0 = r2.indexOf(r0, r1)     // Catch: java.lang.Throwable -> L14
            if (r0 <= 0) goto L18
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)     // Catch: java.lang.Throwable -> L14
            return r2
        L14:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L18:
            r2 = 0
            return r2
    }

    public static void b(java.lang.Throwable r1) {
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.core.d.a.IP
            boolean r0 = r0.get()
            if (r0 != 0) goto Lf
            c(r1)
            return
        Lf:
            com.kwad.sdk.crash.b.l(r1)
            return
    }

    private static void c(java.lang.Throwable r1) {
            java.util.List<java.lang.Throwable> r0 = com.kwad.components.core.d.a.IQ
            if (r0 != 0) goto Lb
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.components.core.d.a.IQ = r0
        Lb:
            java.util.List<java.lang.Throwable> r0 = com.kwad.components.core.d.a.IQ
            r0.add(r1)
            return
    }

    public static synchronized void initAsync(android.content.Context r1) {
            java.lang.Class<com.kwad.components.core.d.a> r0 = com.kwad.components.core.d.a.class
            monitor-enter(r0)
            if (r1 == 0) goto L22
            java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.components.core.d.a.IP     // Catch: java.lang.Throwable -> L1f
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L22
            boolean r1 = com.kwad.components.core.d.a.IO     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L12
            goto L22
        L12:
            r1 = 1
            com.kwad.components.core.d.a.IO = r1     // Catch: java.lang.Throwable -> L1f
            com.kwad.components.core.d.a$1 r1 = new com.kwad.components.core.d.a$1     // Catch: java.lang.Throwable -> L1f
            r1.<init>()     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.utils.g.execute(r1)     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r0)
            return
        L1f:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L22:
            monitor-exit(r0)
            return
    }

    private static void mC() {
            java.util.List<java.lang.Throwable> r0 = com.kwad.components.core.d.a.IQ
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            com.kwad.sdk.crash.b.l(r1)
            goto L9
        L19:
            java.util.List<java.lang.Throwable> r0 = com.kwad.components.core.d.a.IQ
            r0.clear()
            r0 = 0
            com.kwad.components.core.d.a.IQ = r0
            com.kwad.components.core.d.a$2 r0 = new com.kwad.components.core.d.a$2
            r0.<init>()
            com.kwad.sdk.service.ServiceProvider.d(r0)
            return
    }

    private static com.kwad.sdk.crash.c mD() {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r1 = com.kwad.components.core.d.a.a.aa(r0)
            com.kwad.sdk.crash.c$a r2 = new com.kwad.sdk.crash.c$a
            r2.<init>()
            com.kwad.sdk.crash.c$a r2 = r2.bv(r0)
            com.kwad.sdk.core.config.item.k r3 = com.kwad.sdk.core.config.c.aly
            boolean r3 = com.kwad.sdk.core.config.d.b(r3)
            com.kwad.sdk.crash.c$a r2 = r2.bn(r3)
            com.kwad.sdk.core.config.item.k r3 = com.kwad.sdk.core.config.c.alz
            boolean r3 = com.kwad.sdk.core.config.d.b(r3)
            com.kwad.sdk.crash.c$a r2 = r2.bo(r3)
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r3 = r3.getIsExternal()
            com.kwad.sdk.crash.c$a r2 = r2.bp(r3)
            com.kwad.sdk.core.config.item.p r3 = com.kwad.sdk.core.config.c.alA
            java.lang.String r3 = com.kwad.sdk.core.config.d.a(r3)
            com.kwad.sdk.crash.c$a r2 = r2.em(r3)
            com.kwad.sdk.core.config.item.p r3 = com.kwad.sdk.core.config.c.alB
            java.lang.String r3 = com.kwad.sdk.core.config.d.a(r3)
            com.kwad.sdk.crash.c$a r2 = r2.el(r3)
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r3 = r3.getSDKVersion()
            r4 = 1
            java.lang.String r3 = com.kwad.sdk.crash.model.message.ExceptionMessage.getSdkCrashVersionName(r3, r4)
            com.kwad.sdk.crash.c$a r2 = r2.es(r3)
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            int r3 = r3.getSDKVersionCode()
            com.kwad.sdk.crash.c$a r2 = r2.cC(r3)
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r3 = r3.getApiVersion()
            java.lang.String r3 = com.kwad.sdk.crash.model.message.ExceptionMessage.getSdkCrashVersionName(r3, r4)
            com.kwad.sdk.crash.c$a r2 = r2.et(r3)
            com.kwad.sdk.KsAdSDKImpl r3 = com.kwad.sdk.KsAdSDKImpl.get()
            int r3 = r3.getApiVersionCode()
            com.kwad.sdk.crash.c$a r2 = r2.cD(r3)
            com.kwad.sdk.crash.c$a r2 = r2.cE(r4)
            java.lang.String r3 = "com.kwad.sdk"
            com.kwad.sdk.crash.c$a r2 = r2.er(r3)
            java.lang.String r3 = r0.getPackageName()
            com.kwad.sdk.crash.c$a r2 = r2.eu(r3)
            com.kwad.sdk.api.SdkConfig r3 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r3 = r3.appId
            com.kwad.sdk.crash.c$a r2 = r2.ev(r3)
            com.kwad.sdk.api.SdkConfig r3 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r3 = r3.appName
            com.kwad.sdk.crash.c$a r2 = r2.ew(r3)
            java.lang.String r3 = com.kwad.sdk.utils.k.bQ(r0)
            com.kwad.sdk.crash.c$a r2 = r2.ex(r3)
            java.lang.String r3 = com.kwad.sdk.utils.au.getDeviceId()
            com.kwad.sdk.crash.c$a r2 = r2.eo(r3)
            com.kwad.sdk.api.SdkConfig r3 = com.kwad.sdk.service.ServiceProvider.HE()
            java.lang.String r3 = r3.appId
            com.kwad.sdk.crash.c$a r2 = r2.ep(r3)
            java.lang.String r3 = "Android"
            com.kwad.sdk.crash.c$a r2 = r2.en(r3)
            com.kwad.sdk.crash.c$a r1 = r2.eq(r1)
            com.kwad.components.core.d.a$4 r2 = new com.kwad.components.core.d.a$4
            r2.<init>(r0)
            com.kwad.sdk.crash.c$a r0 = r1.a(r2)
            com.kwad.components.core.d.a$3 r1 = new com.kwad.components.core.d.a$3
            r1.<init>()
            com.kwad.sdk.crash.c$a r0 = r0.a(r1)
            java.lang.String[] r1 = mE()
            com.kwad.sdk.crash.c$a r0 = r0.d(r1)
            java.lang.String[] r1 = mF()
            com.kwad.sdk.crash.c$a r0 = r0.e(r1)
            java.util.List r1 = com.kwad.sdk.core.config.d.za()
            com.kwad.sdk.crash.c$a r0 = r0.A(r1)
            com.kwad.sdk.core.config.item.f r1 = com.kwad.sdk.core.config.c.amu
            double r1 = com.kwad.sdk.core.config.d.a(r1)
            com.kwad.sdk.crash.c$a r0 = r0.j(r1)
            com.kwad.sdk.crash.c r0 = r0.EB()
            return r0
    }

    private static java.lang.String[] mE() {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Class<com.kwad.sdk.KsAdSDKImpl> r1 = com.kwad.sdk.KsAdSDKImpl.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = ah(r1)     // Catch: java.lang.Throwable -> L20
            r0.add(r1)     // Catch: java.lang.Throwable -> L20
            java.lang.Class<com.kwad.sdk.DownloadTask> r1 = com.kwad.sdk.DownloadTask.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = ah(r1)     // Catch: java.lang.Throwable -> L20
            r0.add(r1)     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L24:
            java.lang.Class<com.kwai.CpuMemoryProfiler> r1 = com.kwai.CpuMemoryProfiler.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = ah(r1)     // Catch: java.lang.Throwable -> L3f
            r0.add(r1)     // Catch: java.lang.Throwable -> L3f
            java.lang.Class<com.kuaishou.aegon.Aegon> r1 = com.kuaishou.aegon.Aegon.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = ah(r1)     // Catch: java.lang.Throwable -> L3f
            r0.add(r1)     // Catch: java.lang.Throwable -> L3f
            goto L43
        L3f:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L43:
            int r1 = r0.size()
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.Object[] r0 = r0.toArray(r1)
            java.lang.String[] r0 = (java.lang.String[]) r0
            return r0
    }

    private static java.lang.String[] mF() {
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Class<com.kwad.sdk.crash.d> r1 = com.kwad.sdk.crash.d.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = "."
            int r2 = r1.lastIndexOf(r2)     // Catch: java.lang.Throwable -> L17
            r3 = 0
            java.lang.String r1 = r1.substring(r3, r2)     // Catch: java.lang.Throwable -> L17
            r0[r3] = r1     // Catch: java.lang.Throwable -> L17
            goto L1b
        L17:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L1b:
            return r0
    }

    static com.kwad.sdk.crash.c mG() {
            com.kwad.sdk.crash.c r0 = mD()
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean mH() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.components.core.d.a.IP
            return r0
    }

    static void mI() {
            mC()
            return
    }
}
