package com.sigmob.sdk.base;

public class i {
    private static final java.lang.String a = "sdkConfigVer";
    private static com.sigmob.sdk.base.i b;
    private static boolean c;
    private final android.os.Handler d;
    private final java.lang.Runnable e;
    private final java.lang.String f;
    private boolean g;
    private long h;
    private com.sigmob.sdk.base.models.config.SdkConfig i;
    private com.sigmob.sdk.base.models.config.SdkConfig j;
    private com.sigmob.sdk.base.i.a k;



    public interface a {
        void a();
    }

    static {
            return
    }

    private i() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "4.9.0"
            r2.f = r0
            r0 = 0
            r2.h = r0
            r0 = 0
            r2.i = r0
            r2.j = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.d = r0
            com.sigmob.sdk.base.i$1 r0 = new com.sigmob.sdk.base.i$1
            r0.<init>(r2)
            r2.e = r0
            r0 = 1
            r2.g = r0
            r2.R()
            return
    }

    private void R() {
            r6 = this;
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r6.i
            if (r0 != 0) goto L8a
            com.sigmob.sdk.base.models.config.SdkConfig$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfig$Builder
            r0.<init>()
            com.sigmob.sdk.base.models.config.Common$Builder r1 = new com.sigmob.sdk.base.models.config.Common$Builder
            r1.<init>()
            com.sigmob.sdk.base.models.config.Android$Builder r2 = new com.sigmob.sdk.base.models.config.Android$Builder
            r2.<init>()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig$Builder r3 = new com.sigmob.sdk.base.models.config.CommonEndpointsConfig$Builder
            r3.<init>()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r3 = r3.build()
            r1.endpoints(r3)
            com.sigmob.sdk.base.models.config.RvConfig$Builder r3 = new com.sigmob.sdk.base.models.config.RvConfig$Builder
            r3.<init>()
            r4 = 4
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3.cacheTop(r4)
            com.sigmob.sdk.base.models.config.RvConfig r3 = r3.build()
            r1.rv_config(r3)
            r3 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.configRefresh(r3)
            r3 = 1
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r3)
            r1.disable_up_location(r4)
            r4 = 0
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r4)
            r1.is_gdpr_region(r5)
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r4)
            r1.enable_debug_level(r5)
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r3)
            r2.disable_boot_mark(r5)
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r3)
            r2.disableUpAppInfo(r5)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.oaid_api_is_disable(r3)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r4)
            r2.enable_permission(r3)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r4)
            r2.enable_report_crash(r3)
            com.sigmob.sdk.base.models.config.Common r1 = r1.build()
            r0.common_config(r1)
            com.sigmob.sdk.base.models.config.Android r1 = r2.build()
            r0.android_config(r1)
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r0.build()
            r6.i = r0
        L8a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Default config: "
            r0.append(r1)
            com.sigmob.sdk.base.models.config.SdkConfig r1 = r6.i
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            return
    }

    private void S() {
            r2 = this;
            android.content.Context r0 = com.sigmob.sdk.b.b()
            if (r0 != 0) goto L7
            return
        L7:
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r1 = c()
            boolean r0 = r0.isNetworkConnected(r1)
            if (r0 == 0) goto L24
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            boolean r0 = r0.i()
            if (r0 != 0) goto L20
            goto L24
        L20:
            r2.T()
            return
        L24:
            java.lang.String r0 = "Can't load an ad because there is no network connectivity."
            com.czhj.sdk.logger.SigmobLog.d(r0)
            r2.V()
            return
    }

    private void T() {
            r4 = this;
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            com.sigmob.sdk.base.network.e r1 = new com.sigmob.sdk.base.network.e
            java.lang.String r2 = c()
            com.sigmob.sdk.base.i$2 r3 = new com.sigmob.sdk.base.i$2
            r3.<init>(r4)
            r1.<init>(r2, r3)
            if (r0 != 0) goto L1d
            java.lang.String r0 = "queue is null"
            com.czhj.sdk.logger.SigmobLog.e(r0)
            r4.V()
            return
        L1d:
            r0.add(r1)
            java.lang.String r0 = "update sdk config"
            com.czhj.sdk.logger.SigmobLog.i(r0)
            return
    }

    private void U() {
            r2 = this;
            android.os.Handler r0 = r2.d
            java.lang.Runnable r1 = r2.e
            r0.removeCallbacks(r1)
            return
    }

    private void V() {
            r6 = this;
            r6.U()
            boolean r0 = r6.g
            if (r0 == 0) goto L16
            r0 = 30000(0x7530, double:1.4822E-319)
            android.os.Handler r2 = r6.d
            java.lang.Runnable r3 = r6.e
            long r4 = r6.h
            long r0 = java.lang.Math.max(r0, r4)
            r2.postDelayed(r3, r0)
        L16:
            return
    }

    private com.sigmob.sdk.base.models.config.SplashConfig W() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.SplashConfig r0 = r0.splash_config
            return r0
        Ld:
            r0 = 0
            return r0
    }

    private com.sigmob.sdk.base.models.config.NativeConfig X() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.NativeConfig r0 = r0.native_config
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static com.sigmob.sdk.base.i a() {
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.b
            if (r0 != 0) goto L17
            java.lang.Class<com.sigmob.sdk.base.i> r0 = com.sigmob.sdk.base.i.class
            monitor-enter(r0)
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.sigmob.sdk.base.i r1 = new com.sigmob.sdk.base.i     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.sigmob.sdk.base.i.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.b
            return r0
    }

    static void a(com.sigmob.sdk.base.i r0) {
            r0.S()
            return
    }

    static void a(com.sigmob.sdk.base.i r0, com.sigmob.sdk.base.models.config.SdkConfig r1) {
            r0.b(r1)
            return
    }

    private void a(com.sigmob.sdk.base.models.config.SdkConfig r5) {
            r4 = this;
            if (r5 == 0) goto L7f
            r0 = 0
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.sigmob.sdk.base.utils.b.a()
            r2.append(r3)
            java.lang.String r3 = "/config"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            boolean r2 = r1.exists()
            if (r2 == 0) goto L26
            r1.delete()
        L26:
            java.io.File r2 = r1.getParentFile()
            r2.mkdirs()
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L57 java.io.IOException -> L59
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L57 java.io.IOException -> L59
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L57 java.io.IOException -> L59
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L57 java.io.IOException -> L59
            r5.encode(r2)     // Catch: java.lang.Throwable -> L51 java.io.IOException -> L54
            android.content.SharedPreferences r5 = com.sigmob.sdk.base.utils.c.a()     // Catch: java.lang.Throwable -> L51 java.io.IOException -> L54
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L51 java.io.IOException -> L54
            java.lang.String r0 = "sdkConfigVer"
            java.lang.String r1 = "4.9.0"
            android.content.SharedPreferences$Editor r5 = r5.putString(r0, r1)     // Catch: java.lang.Throwable -> L51 java.io.IOException -> L54
            r5.apply()     // Catch: java.lang.Throwable -> L51 java.io.IOException -> L54
            r2.close()     // Catch: java.io.IOException -> L67
            goto L7f
        L51:
            r5 = move-exception
            r0 = r2
            goto L70
        L54:
            r5 = move-exception
            r0 = r2
            goto L5a
        L57:
            r5 = move-exception
            goto L70
        L59:
            r5 = move-exception
        L5a:
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L57
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L7f
            r0.close()     // Catch: java.io.IOException -> L67
            goto L7f
        L67:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            goto L7f
        L70:
            if (r0 == 0) goto L7e
            r0.close()     // Catch: java.io.IOException -> L76
            goto L7e
        L76:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L7e:
            throw r5
        L7f:
            return
    }

    public static java.lang.String b() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "appId="
            r0.append(r1)
            com.sigmob.windad.WindAds r1 = com.sigmob.windad.WindAds.sharedAds()
            java.lang.String r1 = r1.getAppId()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r1 = "sdkVersion=4.9.0"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    static void b(com.sigmob.sdk.base.i r0) {
            r0.V()
            return
    }

    static void b(com.sigmob.sdk.base.i r0, com.sigmob.sdk.base.models.config.SdkConfig r1) {
            r0.a(r1)
            return
    }

    private void b(com.sigmob.sdk.base.models.config.SdkConfig r9) {
            r8 = this;
            if (r9 == 0) goto L55
            com.sigmob.sdk.base.models.config.Common r0 = r9.common_config
            if (r0 == 0) goto L55
            r8.j = r9
            com.sigmob.sdk.base.models.config.Common r0 = r9.common_config
            java.lang.Integer r0 = r0.configRefresh
            int r0 = r0.intValue()
            int r0 = r0 * 1000
            long r0 = (long) r0
            r8.h = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "config: "
            r0.append(r1)
            java.lang.String r9 = r9.toString()
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r9)
            com.sigmob.sdk.base.i$a r9 = r8.k
            if (r9 == 0) goto L34
            r9.a()
        L34:
            com.czhj.sdk.common.models.Config r0 = com.czhj.sdk.common.models.Config.sharedInstance()
            boolean r1 = com.sigmob.sdk.base.i.c
            boolean r2 = r8.P()
            boolean r3 = r8.O()
            int r4 = r8.K()
            java.lang.String r5 = r8.k()
            int r6 = r8.C()
            int r7 = r8.B()
            r0.update(r1, r2, r3, r4, r5, r6, r7)
        L55:
            return
    }

    public static java.lang.String c() {
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r0 = r0.getOptions()
            java.lang.String r1 = "?"
            if (r0 == 0) goto L5f
            java.util.HashMap r2 = r0.getExtData()
            if (r2 == 0) goto L5f
            java.util.HashMap r0 = r0.getExtData()
            java.lang.String r2 = "sigdemo_conf_url"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L5f
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L5f
            r2 = 63
            int r2 = r0.indexOf(r2)
            r3 = -1
            if (r2 != r3) goto L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = b()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
        L46:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "&"
            r1.append(r0)
            java.lang.String r0 = b()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L5f:
            java.lang.String r0 = "https://adservice.sigmob.cn/sigmob/config"
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L7e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = b()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
        L7e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://adservice.sigmob.cn/sigmob/config?"
            r0.append(r1)
            java.lang.String r1 = b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String d() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "https://adservice.sigmob.cn/extconfig?"
            r0.append(r1)
            java.lang.String r1 = b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static boolean g() {
            boolean r0 = com.sigmob.sdk.base.i.c
            return r0
    }

    public int A() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            r1 = 10
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            java.lang.Integer r0 = r0.tracking_retry_interval
            r2 = 180(0xb4, float:2.52E-43)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r2)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            goto L20
        L1f:
            r0 = r1
        L20:
            if (r0 >= r1) goto L23
            goto L24
        L23:
            r1 = r0
        L24:
            int r1 = r1 * 1000
            return r1
    }

    public int B() {
            r2 = this;
            java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_MAX_SEND_LOG_RECORDS
            int r0 = r0.intValue()
            com.sigmob.sdk.base.models.config.Common r1 = r2.i()
            if (r1 == 0) goto L1e
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            java.lang.Integer r0 = r0.max_send_log_records
            java.lang.Integer r1 = com.sigmob.sdk.base.models.config.Common.DEFAULT_MAX_SEND_LOG_RECORDS
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
        L1e:
            r1 = 10
            if (r0 >= r1) goto L28
            java.lang.Integer r0 = com.sigmob.sdk.base.models.config.Common.DEFAULT_MAX_SEND_LOG_RECORDS
            int r0 = r0.intValue()
        L28:
            return r0
    }

    public int C() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            r1 = 3
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            java.lang.Integer r0 = r0.send_log_interval
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r2)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            if (r0 >= r1) goto L1e
            goto L1f
        L1e:
            r1 = r0
        L1f:
            return r1
    }

    public java.util.List<java.lang.Integer> D() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            java.util.List<java.lang.Integer> r0 = r0.dclog_blacklist
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean E() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            java.lang.Boolean r0 = r0.enable_debug_level
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            return r1
    }

    public long F() {
            r7 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r7.i()
            r1 = 0
            if (r0 == 0) goto L29
            com.sigmob.sdk.base.models.config.Common r0 = r7.i()
            java.lang.Integer r0 = r0.load_interval
            r3 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r3)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            long r3 = (long) r0
            r5 = 1
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L25
            return r1
        L25:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r0
            return r3
        L29:
            return r1
    }

    public boolean G() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            java.lang.Boolean r0 = r0.disable_up_location
            r1 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            r0 = 1
            return r0
    }

    public boolean H() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Boolean r0 = r0.disableUpAppInfo
            r1 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            r0 = 1
            return r0
    }

    public int I() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Integer r0 = r0.report_log
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L1c:
            return r1
    }

    public boolean J() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r3.j()
            r1 = 0
            if (r0 == 0) goto L1c
            java.lang.Integer r0 = r0.up_wifi_list_interval
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r2)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r2 = 60
            if (r0 < r2) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public int K() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Integer r0 = r0.disable_up_oaid
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L1c:
            return r1
    }

    public boolean L() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Boolean r0 = r0.enable_permission
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            return r1
    }

    public int M() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Integer r0 = r0.apk_expired_time
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L1c:
            return r1
    }

    public boolean N() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            r1 = 0
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Boolean r0 = r0.enable_report_crash
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            return r1
    }

    public boolean O() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Boolean r0 = r0.oaid_api_is_disable
            r1 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            r0 = 1
            return r0
    }

    public boolean P() {
            r2 = this;
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.Android r0 = r2.j()
            java.lang.Boolean r0 = r0.disable_boot_mark
            r1 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
        L1c:
            r0 = 1
            return r0
    }

    public int Q() {
            r1 = this;
            r0 = 20
            return r0
    }

    public com.sigmob.sdk.base.i a(com.sigmob.sdk.base.i.a r1) {
            r0 = this;
            r0.k = r1
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.b
            return r1
    }

    public boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.v()
            if (r0 == 0) goto L1d
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            java.util.List<java.lang.String> r0 = r0.events
            if (r0 == 0) goto L1d
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            java.util.List<java.lang.String> r0 = r0.events
            boolean r2 = r0.contains(r2)
            return r2
        L1d:
            r2 = 0
            return r2
    }

    public void e() {
            r6 = this;
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a()
            r1 = 0
            java.lang.String r2 = "sdkConfigVer"
            java.lang.String r0 = r0.getString(r2, r1)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.sigmob.sdk.base.utils.b.a()
            r3.append(r4)
            java.lang.String r4 = "/config"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.String r3 = "4.9.0"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L7d
            boolean r0 = r2.exists()
            if (r0 == 0) goto L7d
            java.io.ObjectInputStream r0 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L4e
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4e
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L4e
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L4e
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfig> r1 = com.sigmob.sdk.base.models.config.SdkConfig.ADAPTER     // Catch: java.lang.Throwable -> L4c
            java.lang.Object r1 = r1.decode(r0)     // Catch: java.lang.Throwable -> L4c
            com.sigmob.sdk.base.models.config.SdkConfig r1 = (com.sigmob.sdk.base.models.config.SdkConfig) r1     // Catch: java.lang.Throwable -> L4c
            r6.b(r1)     // Catch: java.lang.Throwable -> L4c
            r0.close()     // Catch: java.lang.Throwable -> L64
            goto L82
        L4c:
            r1 = move-exception
            goto L52
        L4e:
            r0 = move-exception
            r5 = r1
            r1 = r0
            r0 = r5
        L52:
            com.sigmob.sdk.base.models.config.SdkConfig r2 = r6.i     // Catch: java.lang.Throwable -> L6d
            r6.b(r2)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L6d
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L82
            r0.close()     // Catch: java.lang.Throwable -> L64
            goto L82
        L64:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            goto L82
        L6d:
            r1 = move-exception
            if (r0 == 0) goto L7c
            r0.close()     // Catch: java.lang.Throwable -> L74
            goto L7c
        L74:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L7c:
            throw r1
        L7d:
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r6.i
            r6.b(r0)
        L82:
            return
    }

    public void f() {
            r2 = this;
            r2.U()
            android.os.Handler r0 = r2.d
            java.lang.Runnable r1 = r2.e
            r0.post(r1)
            return
    }

    public com.sigmob.sdk.base.models.config.SdkConfig h() {
            r1 = this;
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.j
            if (r0 != 0) goto L6
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.i
        L6:
            return r0
    }

    public com.sigmob.sdk.base.models.config.Common i() {
            r1 = this;
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.h()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.h()
            com.sigmob.sdk.base.models.config.Common r0 = r0.common_config
            return r0
    }

    public com.sigmob.sdk.base.models.config.Android j() {
            r1 = this;
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.h()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.sigmob.sdk.base.models.config.SdkConfig r0 = r1.h()
            com.sigmob.sdk.base.models.config.Android r0 = r0.android_config
            return r0
    }

    public java.lang.String k() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r0 = r0.endpoints
            java.lang.String r0 = r0.log
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            java.lang.String r0 = "https://dc.sigmob.cn/log"
        L10:
            r1 = 63
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L32
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "?"
        L23:
            r1.append(r0)
            java.lang.String r0 = b()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L32:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "&"
            goto L23
    }

    public java.lang.String l() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r0 = r0.endpoints
            java.lang.String r0 = r0.ads
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            java.lang.String r0 = "https://adservice.sigmob.cn/ad/v4"
        L10:
            r1 = 63
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L32
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "?"
        L23:
            r1.append(r0)
            java.lang.String r0 = b()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L32:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "&"
            goto L23
    }

    public java.lang.String m() {
            r3 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r3.i()
            com.sigmob.sdk.base.models.config.CommonEndpointsConfig r0 = r0.endpoints
            java.lang.String r0 = r0.hb_ads
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L10
            java.lang.String r0 = "https://adservice.sigmob.cn/hb/v2/ad"
        L10:
            r1 = 63
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 != r2) goto L32
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "?"
        L23:
            r1.append(r0)
            java.lang.String r0 = b()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L32:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "&"
            goto L23
    }

    public com.sigmob.sdk.base.models.config.RvConfig n() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.RvConfig r0 = r0.rv_config
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int o() {
            r2 = this;
            com.sigmob.sdk.base.models.config.RvConfig r0 = r2.n()
            r1 = 5
            if (r0 == 0) goto L1c
            com.sigmob.sdk.base.models.config.RvConfig r0 = r2.n()
            java.lang.Integer r0 = r0.cacheTop
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L1c:
            return r1
    }

    public long p() {
            r2 = this;
            com.sigmob.sdk.base.models.config.RvConfig r0 = r2.n()
            if (r0 == 0) goto L25
            com.sigmob.sdk.base.models.config.RvConfig r0 = r2.n()
            java.lang.Integer r0 = r0.ad_load_timeout
            r1 = 45
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            r1 = 10
            if (r0 >= r1) goto L21
            r0 = r1
        L21:
            int r0 = r0 * 1000
            long r0 = (long) r0
            return r0
        L25:
            r0 = 45000(0xafc8, double:2.2233E-319)
            return r0
    }

    public com.sigmob.sdk.base.models.config.DialogSetting q() {
            r1 = this;
            com.sigmob.sdk.base.models.config.RvConfig r0 = r1.n()
            if (r0 == 0) goto Ld
            com.sigmob.sdk.base.models.config.RvConfig r0 = r1.n()
            com.sigmob.sdk.base.models.config.DialogSetting r0 = r0.close_dialog_setting
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public int r() {
            r2 = this;
            com.sigmob.sdk.base.models.config.SplashConfig r0 = r2.W()
            r1 = 50
            if (r0 != 0) goto L9
            return r1
        L9:
            com.sigmob.sdk.base.models.config.SplashConfig r0 = r2.W()
            java.lang.Integer r0 = r0.cacheTop
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public long s() {
            r4 = this;
            com.sigmob.sdk.base.models.config.SplashConfig r0 = r4.W()
            r1 = 2
            if (r0 == 0) goto L1b
            com.sigmob.sdk.base.models.config.SplashConfig r0 = r4.W()
            java.lang.Integer r0 = r0.material_expired_time
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r1 = r0.intValue()
        L1b:
            if (r1 >= 0) goto L1f
            long r0 = (long) r1
            return r0
        L1f:
            long r0 = (long) r1
            r2 = 24
            long r0 = r0 * r2
            r2 = 60
            long r0 = r0 * r2
            long r0 = r0 * r2
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public int t() {
            r2 = this;
            com.sigmob.sdk.base.models.config.NativeConfig r0 = r2.X()
            r1 = 50
            if (r0 == 0) goto L1d
            com.sigmob.sdk.base.models.config.NativeConfig r0 = r2.X()
            java.lang.Integer r0 = r0.cacheTop
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
        L1d:
            return r1
    }

    public long u() {
            r2 = this;
            com.sigmob.sdk.base.models.config.NativeConfig r0 = r2.X()
            if (r0 == 0) goto L19
            com.sigmob.sdk.base.models.config.NativeConfig r0 = r2.X()
            java.lang.Integer r0 = r0.ad_load_timeout
            int r0 = r0.intValue()
            r1 = 10
            if (r0 >= r1) goto L15
            r0 = r1
        L15:
            int r0 = r0 * 1000
            long r0 = (long) r0
            return r0
        L19:
            r0 = 45000(0xafc8, double:2.2233E-319)
            return r0
    }

    public boolean v() {
            r1 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            if (r0 == 0) goto L1a
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            if (r0 == 0) goto L1a
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            java.util.List<java.lang.String> r0 = r0.events
            if (r0 == 0) goto L1a
            r0 = 1
            goto L1b
        L1a:
            r0 = 0
        L1b:
            return r0
    }

    public int w() {
            r1 = this;
            boolean r0 = r1.v()
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            java.lang.Integer r0 = r0.interval
            int r0 = r0.intValue()
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public int x() {
            r1 = this;
            boolean r0 = r1.v()
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            if (r0 == 0) goto L1f
            com.sigmob.sdk.base.models.config.Common r0 = r1.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            java.lang.Integer r0 = r0.count
            int r0 = r0.intValue()
            return r0
        L1f:
            r0 = 0
            return r0
    }

    public int y() {
            r2 = this;
            boolean r0 = r2.v()
            if (r0 == 0) goto L54
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            if (r0 == 0) goto L54
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            java.lang.Integer r0 = r0.queue_max
            int r0 = r0.intValue()
            int r0 = r0 + (-50)
            com.sigmob.sdk.base.models.config.Common r1 = r2.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r1 = r1.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r1 = r1.motion_config
            java.lang.Integer r1 = r1.count
            int r1 = r1.intValue()
            int r1 = r1 * 2
            if (r0 >= r1) goto L45
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            java.lang.Integer r0 = r0.count
            int r0 = r0.intValue()
            int r0 = r0 * 2
            int r0 = r0 + 50
            return r0
        L45:
            com.sigmob.sdk.base.models.config.Common r0 = r2.i()
            com.sigmob.sdk.base.models.config.AntiFraudLogConfig r0 = r0.anti_fraud_log
            com.sigmob.sdk.base.models.config.MotionConfig r0 = r0.motion_config
            java.lang.Integer r0 = r0.queue_max
            int r0 = r0.intValue()
            return r0
        L54:
            r0 = 0
            return r0
    }

    public long z() {
            r5 = this;
            com.sigmob.sdk.base.models.config.Common r0 = r5.i()
            r1 = 180(0xb4, double:8.9E-322)
            if (r0 == 0) goto L21
            com.sigmob.sdk.base.models.config.Common r0 = r5.i()
            java.lang.Integer r0 = r0.tracking_expiration_time
            r3 = 86400(0x15180, float:1.21072E-40)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.Object r0 = com.czhj.wire.Wire.get(r0, r3)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            long r3 = (long) r0
            goto L22
        L21:
            r3 = r1
        L22:
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 >= 0) goto L27
            goto L28
        L27:
            r1 = r3
        L28:
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            return r1
    }
}
