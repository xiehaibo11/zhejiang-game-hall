package com.kwad.components.offline.tk;

public final class b extends com.kwad.components.core.offline.init.a {
    private static long Zz;
    private final java.util.concurrent.atomic.AtomicBoolean ZA;
    private final java.util.List<com.kwad.components.core.offline.api.b.a> Zy;

    final class 1 implements com.kwad.components.offline.api.InitCallBack {
        final boolean Lq;
        final com.kwad.components.offline.api.tk.ITkOfflineCompo ZB;
        final long ZC;
        final long ZD;
        final com.kwad.components.offline.tk.b ZE;
        final android.content.Context jz;


        1(com.kwad.components.offline.tk.b r1, com.kwad.components.offline.api.tk.ITkOfflineCompo r2, boolean r3, long r4, long r6, android.content.Context r8) {
                r0 = this;
                r0.ZE = r1
                r0.ZB = r2
                r0.Lq = r3
                r0.ZC = r4
                r0.ZD = r6
                r0.jz = r8
                r0.<init>()
                return
        }

        @Override
        public final void onSuccess(boolean r11) {
                r10 = this;
                com.kwad.components.offline.tk.TkCompoImpl r0 = new com.kwad.components.offline.tk.TkCompoImpl
                com.kwad.components.offline.api.tk.ITkOfflineCompo r1 = r10.ZB
                r0.<init>(r1)
                java.lang.Class<com.kwad.components.core.offline.api.b.c> r1 = com.kwad.components.core.offline.api.b.c.class
                com.kwad.sdk.components.c.a(r1, r0)
                com.kwad.components.offline.tk.b r1 = r10.ZE
                java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.components.offline.tk.b.a(r1)
                r2 = 1
                r1.set(r2)
                r1 = 2
                if (r11 == 0) goto L1b
                r4 = r1
                goto L1c
            L1b:
                r4 = r2
            L1c:
                boolean r11 = r10.Lq
                if (r11 == 0) goto L22
                r5 = r2
                goto L23
            L22:
                r5 = r1
            L23:
                com.kwad.components.offline.api.tk.TkLoggerReporter r11 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = new com.kwad.components.offline.api.tk.model.report.TKDownloadMsg
                r1.<init>()
                r2 = 3
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = r1.setDownloadState(r2)
                long r2 = r10.ZC
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = r1.setOfflineLoadTime(r2)
                long r2 = android.os.SystemClock.elapsedRealtime()
                long r6 = r10.ZD
                long r2 = r2 - r6
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = r1.setSoLoadTime(r2)
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = r1.setOfflineSource(r5)
                com.kwad.components.offline.api.tk.model.report.TKDownloadMsg r1 = r1.setSoSource(r4)
                org.json.JSONObject r1 = r1.toJson()
                java.lang.String r2 = "ad_client_apm_log"
                r11.reportTKSOLoad(r2, r1)
                com.kwad.components.offline.tk.b r11 = r10.ZE
                java.lang.String r11 = r11.getTag()
                java.lang.String r1 = "offlineComponent load success"
                com.kwad.sdk.core.e.c.i(r11, r1)
                com.kwad.components.offline.tk.b r11 = r10.ZE
                com.kwad.components.offline.tk.b.b(r11)
                com.kwad.components.offline.tk.b r3 = r10.ZE
                long r1 = android.os.SystemClock.elapsedRealtime()
                long r6 = r10.ZD
                long r6 = r1 - r6
                long r8 = r10.ZC
                com.kwad.components.offline.tk.b.a(r3, r4, r5, r6, r8)
                com.kwad.components.offline.tk.b$1$1 r11 = new com.kwad.components.offline.tk.b$1$1
                r11.<init>(r10, r0)
                com.kwad.components.core.p.f.a(r11)
                return
        }
    }

    static final class a {
        private static final com.kwad.components.offline.tk.b ZI = null;

        static {
                com.kwad.components.offline.tk.b r0 = new com.kwad.components.offline.tk.b
                r1 = 0
                r0.<init>(r1)
                com.kwad.components.offline.tk.b.a.ZI = r0
                return
        }

        static com.kwad.components.offline.tk.b sM() {
                com.kwad.components.offline.tk.b r0 = com.kwad.components.offline.tk.b.a.ZI
                return r0
        }
    }

    private b() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.Zy = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.ZA = r0
            return
    }

    b(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.concurrent.atomic.AtomicBoolean a(com.kwad.components.offline.tk.b r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.ZA
            return r0
    }

    static void a(com.kwad.components.offline.tk.b r0, int r1, int r2, long r3, long r5) {
            r0.b(r1, r2, r3, r5)
            return
    }

    public static void am(android.content.Context r2) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.kwad.components.offline.tk.b.Zz = r0
            com.kwad.components.offline.tk.b r0 = sL()
            r0.init(r2)
            return
    }

    private void b(int r10, int r11, long r12, long r14) {
            r9 = this;
            java.util.List<com.kwad.components.core.offline.api.b.a> r0 = r9.Zy
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            r2 = r1
            com.kwad.components.core.offline.api.b.a r2 = (com.kwad.components.core.offline.api.b.a) r2
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r14
            r2.a(r3, r4, r5, r7)
            goto L6
        L1b:
            return
    }

    static void b(com.kwad.components.offline.tk.b r0) {
            r0.om()
            return
    }

    public static com.kwad.components.offline.tk.b sL() {
            com.kwad.components.offline.tk.b r0 = com.kwad.components.offline.tk.b.a.sM()
            return r0
    }

    public final void a(com.kwad.components.core.offline.api.b.a r9) {
            r8 = this;
            if (r9 != 0) goto L3
            return
        L3:
            java.util.concurrent.atomic.AtomicBoolean r0 = r8.ZA
            boolean r0 = r0.get()
            if (r0 == 0) goto L15
            r2 = 1
            r3 = 1
            r4 = 0
            r6 = 0
            r1 = r9
            r1.a(r2, r3, r4, r6)
        L15:
            java.util.List<com.kwad.components.core.offline.api.b.a> r0 = r8.Zy
            r0.add(r9)
            return
    }

    public final void b(com.kwad.components.core.offline.api.b.a r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.List<com.kwad.components.core.offline.api.b.a> r0 = r1.Zy
            r0.remove(r2)
            return
    }

    @Override
    public final boolean b(android.content.Context r13, java.lang.ClassLoader r14) {
            r12 = this;
            java.lang.String r0 = "com.kwad.tachikoma.TkOfflineCompoImpl"
            com.kwad.components.offline.api.IOfflineCompo r14 = r12.a(r14, r0)
            com.kwad.components.offline.api.tk.ITkOfflineCompo r14 = (com.kwad.components.offline.api.tk.ITkOfflineCompo) r14
            if (r14 != 0) goto L13
            java.lang.String r13 = "TkInitModule"
            java.lang.String r14 = "onPluginLoaded components is null"
            com.kwad.sdk.core.e.c.d(r13, r14)
            r13 = 0
            return r13
        L13:
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = com.kwad.components.offline.tk.b.Zz
            long r4 = r0 - r2
            java.lang.String r0 = r12.oh()
            java.lang.String r1 = r12.oi()
            boolean r3 = com.kwad.sdk.utils.y.h(r13, r0, r1)
            java.lang.String r0 = r12.getTag()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "offlineComponent load "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r2 = " components classLoader: "
            r1.append(r2)
            java.lang.Class r2 = r14.getClass()
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.api.SdkConfig r9 = com.kwad.sdk.service.ServiceProvider.HE()
            com.kwad.components.offline.tk.c r10 = new com.kwad.components.offline.tk.c
            r10.<init>()
            com.kwad.components.offline.tk.b$1 r11 = new com.kwad.components.offline.tk.b$1
            r0 = r11
            r1 = r12
            r2 = r14
            r8 = r13
            r0.<init>(r1, r2, r3, r4, r6, r8)
            r14.initReal(r13, r9, r10, r11)
            r13 = 1
            return r13
    }

    @Override
    public final java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = "TkInitModule"
            return r0
    }

    @Override
    public final boolean isEnabled() {
            r1 = this;
            com.kwad.sdk.core.config.item.d r0 = com.kwad.sdk.core.config.c.alr
            java.lang.Object r0 = com.kwad.sdk.core.config.d.b(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    @Override
    public final int oe() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final boolean of() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final java.lang.String oh() {
            r1 = this;
            java.lang.String r0 = "com.kwad.components.tachikoma"
            return r0
    }

    @Override
    public final java.lang.String oi() {
            r1 = this;
            java.lang.String r0 = "3.3.42.1"
            return r0
    }

    @Override
    public final java.lang.String oj() {
            r1 = this;
            java.lang.String r0 = "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/tk/ks_so-tachikomaNoSoRelease-3.3.42.1-0c3ca3fb40-292.zip"
            return r0
    }

    @Override
    public final java.lang.String ok() {
            r1 = this;
            java.lang.String r0 = "a9773d86c23129ad0598b6ab5adfc8a8"
            return r0
    }

    @Override
    public final java.lang.String ol() {
            r1 = this;
            java.lang.String r0 = "ks_tk_134ad9665"
            return r0
    }
}
