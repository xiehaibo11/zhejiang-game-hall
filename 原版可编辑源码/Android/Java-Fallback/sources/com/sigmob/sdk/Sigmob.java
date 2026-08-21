package com.sigmob.sdk;

public class Sigmob {
    private static com.sigmob.sdk.Sigmob a;
    private static boolean b;
    public static com.sigmob.sdk.base.models.SigMacroCommon macroCommon;
    private com.sigmob.windad.WindAdError c;
    private com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable d;









    static {
            return
    }

    private Sigmob() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            return
    }

    static com.sigmob.windad.WindAdError a(com.sigmob.sdk.Sigmob r0, com.sigmob.windad.WindAdError r1) {
            r0.c = r1
            return r1
    }

    private java.lang.String a(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto L28
            int r0 = r3.length
            if (r0 != 0) goto L6
            goto L28
        L6:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.DeflaterOutputStream r1 = new java.util.zip.DeflaterOutputStream
            r1.<init>(r0)
            r1.write(r3)     // Catch: java.lang.Exception -> L1a
            r1.flush()     // Catch: java.lang.Exception -> L1a
            r1.close()     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r3 = move-exception
            r3.printStackTrace()
        L1e:
            byte[] r3 = r0.toByteArray()
            r0 = 2
            java.lang.String r3 = android.util.Base64.encodeToString(r3, r0)
            return r3
        L28:
            r3 = 0
            return r3
    }

    static void a() {
            d()
            return
    }

    static void a(com.sigmob.sdk.Sigmob r0) {
            r0.k()
            return
    }

    static void b() {
            f()
            return
    }

    static void b(com.sigmob.sdk.Sigmob r0) {
            r0.h()
            return
    }

    private void c() {
            r0 = this;
            com.sigmob.sdk.base.common.f.b()
            com.sigmob.sdk.base.common.f.j()
            com.sigmob.sdk.base.common.f.h()
            com.sigmob.sdk.base.common.f.g()
            com.sigmob.sdk.base.common.f.f()
            com.sigmob.sdk.base.common.f.i()
            return
    }

    static void c(com.sigmob.sdk.Sigmob r0) {
            r0.c()
            return
    }

    public static com.czhj.sdk.common.models.BidRequest.Builder createRequest() {
            java.lang.String r0 = "4.9.0"
            com.czhj.sdk.common.models.BidRequest$Builder r1 = new com.czhj.sdk.common.models.BidRequest$Builder
            r1.<init>()
            com.czhj.sdk.common.models.App$Builder r2 = com.sigmob.sdk.base.network.a.b()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.App r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.app(r2)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Device$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createDevice()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.DeviceId$Builder r3 = com.czhj.sdk.common.models.ModelBuilderCreator.createDeviceId()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.DeviceId r3 = r3.build()     // Catch: java.lang.Throwable -> L11d
            r2.did(r3)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Device r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.device(r2)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Network$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createNetwork()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Network r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.network(r2)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.AdSlot$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createAdSlot()     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.material_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.splash.a r4 = com.sigmob.sdk.splash.a.b     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.material_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.splash.a r4 = com.sigmob.sdk.splash.a.c     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.material_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.splash.a r4 = com.sigmob.sdk.splash.a.d     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.b     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.g     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.a     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.c     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.e     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.f     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<java.lang.Integer> r3 = r2.creative_type     // Catch: java.lang.Throwable -> L11d
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.h     // Catch: java.lang.Throwable -> L11d
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L11d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L11d
            r3.add(r4)     // Catch: java.lang.Throwable -> L11d
            java.util.List<com.czhj.sdk.common.models.AdSlot> r3 = r1.slots     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.AdSlot r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r3.add(r2)     // Catch: java.lang.Throwable -> L11d
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L11d
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L11d
            r1.req_timestamp = r2     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Privacy$Builder r2 = com.sigmob.sdk.base.network.a.d()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Privacy r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.privacy(r2)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.User$Builder r2 = com.sigmob.sdk.base.network.a.c()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.User r2 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.user(r2)     // Catch: java.lang.Throwable -> L11d
            r2 = 1
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> L11d
            r1.disable_mediation = r2     // Catch: java.lang.Throwable -> L11d
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L11d
            if (r2 != 0) goto L111
            com.czhj.sdk.common.models.Version$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createVersion(r0)     // Catch: java.lang.Throwable -> L11d
            r2.version_str(r0)     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.Version r0 = r2.build()     // Catch: java.lang.Throwable -> L11d
            r1.sdk_version(r0)     // Catch: java.lang.Throwable -> L11d
        L111:
            com.czhj.sdk.common.models.WXProgramReq$Builder r0 = com.czhj.sdk.common.models.ModelBuilderCreator.createWXProgramReq()     // Catch: java.lang.Throwable -> L11d
            com.czhj.sdk.common.models.WXProgramReq r0 = r0.build()     // Catch: java.lang.Throwable -> L11d
            r1.wx_program_req(r0)     // Catch: java.lang.Throwable -> L11d
            goto L125
        L11d:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L125:
            return r1
    }

    private static void d() {
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L1d
            boolean r0 = r0.i()     // Catch: java.lang.Throwable -> L1d
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L1d
            boolean r1 = r1.G()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "LocationService"
            if (r0 == 0) goto L18
            if (r1 != 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            com.sigmob.sdk.base.services.j.a(r2, r0)     // Catch: java.lang.Throwable -> L1d
            goto L23
        L1d:
            r0 = move-exception
            java.lang.String r1 = "updateLocationMonitor fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L23:
            return
    }

    static void d(com.sigmob.sdk.Sigmob r0) {
            r0.i()
            return
    }

    static com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable e(com.sigmob.sdk.Sigmob r0) {
            com.czhj.sdk.common.ThreadPool.RepeatingHandlerRunnable r0 = r0.d
            return r0
    }

    private static void e() {
            java.lang.String r0 = "AppInstallService"
            r1 = 1
            com.sigmob.sdk.base.services.j.a(r0, r1)     // Catch: java.lang.Throwable -> L7
            goto Ld
        L7:
            r0 = move-exception
            java.lang.String r1 = "initAppInstallService fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        Ld:
            return
    }

    private static void f() {
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> L1d
            boolean r0 = r0.i()     // Catch: java.lang.Throwable -> L1d
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L1d
            boolean r1 = r1.J()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "WifiScanService"
            if (r0 == 0) goto L18
            if (r1 == 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            com.sigmob.sdk.base.services.j.a(r2, r0)     // Catch: java.lang.Throwable -> L1d
            goto L23
        L1d:
            r0 = move-exception
            java.lang.String r1 = "updateWifiScanService fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        L23:
            return
    }

    private static void g() {
            java.lang.String r0 = "DownloadService"
            r1 = 1
            com.sigmob.sdk.base.services.j.a(r0, r1)     // Catch: java.lang.Throwable -> L7
            goto Ld
        L7:
            r0 = move-exception
            java.lang.String r1 = "initDownloadService fail"
            com.czhj.sdk.logger.SigmobLog.e(r1, r0)
        Ld:
            return
    }

    public static synchronized com.sigmob.sdk.Sigmob getInstance() {
            java.lang.Class<com.sigmob.sdk.Sigmob> r0 = com.sigmob.sdk.Sigmob.class
            monitor-enter(r0)
            com.sigmob.sdk.Sigmob r1 = com.sigmob.sdk.Sigmob.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L14
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L18
            com.sigmob.sdk.Sigmob r1 = new com.sigmob.sdk.Sigmob     // Catch: java.lang.Throwable -> L11
            r1.<init>()     // Catch: java.lang.Throwable -> L11
            com.sigmob.sdk.Sigmob.a = r1     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            goto L14
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L18
        L14:
            com.sigmob.sdk.Sigmob r1 = com.sigmob.sdk.Sigmob.a     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private void h() {
            r4 = this;
            com.czhj.sdk.common.network.JsonRequest r0 = new com.czhj.sdk.common.network.JsonRequest
            java.lang.String r1 = com.sigmob.sdk.base.i.d()
            com.sigmob.sdk.Sigmob$5 r2 = new com.sigmob.sdk.Sigmob$5
            r2.<init>(r4)
            r3 = 0
            r0.<init>(r1, r2, r3)
            com.czhj.sdk.common.network.SigmobRequestQueue r1 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            r1.add(r0)
            return
    }

    private void i() {
            r4 = this;
            g()
            e()
            com.sigmob.sdk.b.a()
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            com.sigmob.sdk.Sigmob$6 r1 = new com.sigmob.sdk.Sigmob$6
            r1.<init>(r4)
            com.sigmob.sdk.base.i r0 = r0.a(r1)
            r0.f()
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            boolean r0 = r0.N()
            if (r0 == 0) goto L5d
            java.lang.Class<com.sigmob.windad.WindAds> r0 = com.sigmob.windad.WindAds.class
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "\\."
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r2 = 2
            if (r1 > r2) goto L34
            return
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
            r2 = r0[r2]
            r1.append(r2)
            java.lang.String r2 = "."
            r1.append(r2)
            r3 = 1
            r0 = r0[r3]
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
            com.czhj.sdk.common.exceptions.CrashHandler r1 = com.czhj.sdk.common.exceptions.CrashHandler.getInstance()
            com.sigmob.sdk.Sigmob$7 r2 = new com.sigmob.sdk.Sigmob$7
            r2.<init>(r4, r0)
            r1.add(r2)
        L5d:
            r4.j()
            return
    }

    private void j() {
            r1 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            com.czhj.sdk.common.utils.ImageManager r0 = com.czhj.sdk.common.utils.ImageManager.with(r0)
            r0.clearCache()
            return
    }

    private void k() {
            r3 = this;
            com.sigmob.sdk.Sigmob$8 r0 = new com.sigmob.sdk.Sigmob$8
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r0.<init>(r3, r1)
            r3.d = r0
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()
            int r1 = r1.A()
            long r1 = (long) r1
            r0.startRepeating(r1)
            return
    }

    public com.sigmob.sdk.base.models.SigMacroCommon getMacroCommon() {
            r1 = this;
            com.sigmob.sdk.base.models.SigMacroCommon r0 = com.sigmob.sdk.Sigmob.macroCommon
            if (r0 != 0) goto Lb
            com.sigmob.sdk.base.models.SigMacroCommon r0 = new com.sigmob.sdk.base.models.SigMacroCommon
            r0.<init>()
            com.sigmob.sdk.Sigmob.macroCommon = r0
        Lb:
            com.sigmob.sdk.base.models.SigMacroCommon r0 = com.sigmob.sdk.Sigmob.macroCommon
            return r0
    }

    public java.lang.String getSDKToken() {
            r3 = this;
            com.czhj.sdk.common.models.BidRequest$Builder r0 = createRequest()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "2.01|"
            r1.append(r2)
            com.czhj.sdk.common.models.BidRequest r0 = r0.build()
            byte[] r0 = r0.encode()
            java.lang.String r0 = r3.a(r0)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 0
            java.lang.String r2 = "token_request"
            com.sigmob.sdk.base.common.z.a(r2, r1, r1, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getSDKToken: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            return r0
    }

    public com.sigmob.windad.WindAdError getSigMobError() {
            r1 = this;
            com.sigmob.windad.WindAdError r0 = r1.c
            return r0
    }

    public void init() {
            r4 = this;
            java.lang.Boolean r0 = com.sigmob.sdk.base.h.e
            boolean r0 = r0.booleanValue()
            com.czhj.volley.VolleyLog.DEBUG = r0
            com.sigmob.sdk.Sigmob$1 r0 = new com.sigmob.sdk.Sigmob$1
            r0.<init>(r4)
            java.lang.String r1 = "init"
            com.sigmob.sdk.base.common.z.a(r1, r0)
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            boolean r0 = r0.L()
            if (r0 == 0) goto L27
            r0 = 0
            com.sigmob.sdk.Sigmob$2 r2 = new com.sigmob.sdk.Sigmob$2
            r2.<init>(r4)
            java.lang.String r3 = "permission"
            com.sigmob.sdk.base.common.z.a(r3, r1, r0, r2)
        L27:
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.sigmob.sdk.Sigmob$3 r1 = new com.sigmob.sdk.Sigmob$3
            r1.<init>(r4)
            r0.submit(r1)
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.sigmob.sdk.Sigmob$4 r1 = new com.sigmob.sdk.Sigmob$4
            r1.<init>(r4)
            r0.submit(r1)
            r0 = 1
            com.sigmob.sdk.Sigmob.b = r0
            return
    }
}
