package com.tkay.core.api;

public class TYSDK {
    private static boolean HAS_INIT = false;
    public static final int NONPERSONALIZED = 1;
    public static final int PERSONALIZED = 0;
    public static final int UNKNOWN = 2;



    static {
            return
    }

    private TYSDK() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addCustomAdapterConfig(java.lang.String r1, com.tkay.core.api.TYCustomAdapterConfig r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2)
            return
    }

    public static void checkIsEuTraffic(android.content.Context r0, com.tkay.core.api.NetTrafficeCallback r1) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            r0.a(r1)
            return
    }

    public static void deniedUploadDeviceInfo(java.lang.String... r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void getArea(com.tkay.core.api.TYAreaCallback r3) {
            if (r3 != 0) goto L3
            return
        L3:
            com.tkay.core.common.h.e r0 = new com.tkay.core.common.h.e
            r0.<init>()
            r1 = 0
            com.tkay.core.api.TYSDK$2 r2 = new com.tkay.core.api.TYSDK$2
            r2.<init>(r3)
            r0.a(r1, r2)
            return
    }

    public static int getGDPRDataLevel(android.content.Context r0) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            int r0 = r0.a()
            return r0
    }

    public static int getPersionalizedAdStatus() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            int r0 = r0.d()
            return r0
    }

    public static java.lang.String getSDKVersionName() {
            java.lang.String r0 = com.tkay.core.common.l.g.a()
            return r0
    }

    public static void init(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            init(r1, r2, r3, r0)
            return
    }

    public static void init(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.tkay.core.api.TYNetworkConfig r4) {
            r0 = 0
            init(r1, r2, r3, r4, r0)
            return
    }

    @java.lang.Deprecated
    public static void init(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.tkay.core.api.TYNetworkConfig r4, com.tkay.core.api.TYSDKInitListener r5) {
            if (r1 != 0) goto Lf
            java.lang.String r1 = "init: Context is null!"
            if (r5 == 0) goto L9
            r5.onFail(r1)     // Catch: java.lang.Throwable -> L27
        L9:
            java.lang.String r2 = "tkay"
            android.util.Log.e(r2, r1)     // Catch: java.lang.Throwable -> L27
            return
        Lf:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L27
            r0.a(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L27
            if (r5 == 0) goto L1b
            r5.onSuccess()     // Catch: java.lang.Throwable -> L27
        L1b:
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L27
            com.tkay.core.api.TYSDK$1 r2 = new com.tkay.core.api.TYSDK$1     // Catch: java.lang.Throwable -> L27
            r2.<init>()     // Catch: java.lang.Throwable -> L27
            r1.a(r2)     // Catch: java.lang.Throwable -> L27
        L27:
            return
    }

    public static void initCustomMap(java.util.Map<java.lang.String, java.lang.Object> r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void initPlacementCustomMap(java.lang.String r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2)
            return
    }

    public static void integrationChecking(android.content.Context r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.b(r1)
            return
    }

    public static boolean isCnSDK() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r0 = r0.b()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static boolean isEUTraffic(android.content.Context r0) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r0)
            boolean r0 = r0.d()
            return r0
    }

    public static boolean isNetworkLogDebug() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            return r0
    }

    public static void setATPrivacyConfig(com.tkay.core.api.ATPrivacyConfig r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void setAdLogoVisible(boolean r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.c(r1)
            return
    }

    public static void setChannel(java.lang.String r1) {
            boolean r0 = com.tkay.core.common.l.g.a(r1)
            if (r0 == 0) goto Ld
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.e(r1)
        Ld:
            return
    }

    public static void setDebuggerConfig(android.content.Context r1, java.lang.String r2, com.tkay.core.api.ATDebuggerConfig r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2, r3)
            return
    }

    public static void setExcludePackageList(java.util.List<java.lang.String> r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void setFilterAdSourceIdList(java.lang.String r1, java.util.List<java.lang.String> r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2)
            return
    }

    public static void setFilterNetworkFirmIdList(java.lang.String r1, java.util.List<java.lang.String> r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.b(r1, r2)
            return
    }

    public static void setGDPRUploadDataLevel(android.content.Context r2, int r3) {
            java.lang.String r0 = "tkay"
            if (r2 != 0) goto La
            java.lang.String r2 = "setGDPRUploadDataLevel: context should not be null"
            android.util.Log.e(r0, r2)
            return
        La:
            if (r3 == 0) goto L16
            r1 = 1
            if (r3 != r1) goto L10
            goto L16
        L10:
            java.lang.String r2 = "GDPR level setting error!!! Level must be PERSONALIZED or NONPERSONALIZED."
            android.util.Log.e(r0, r2)
            return
        L16:
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.a(r2)
            r2.a(r3)
            return
    }

    public static void setInitType(int r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.b(r1)
            return
    }

    public static void setLocation(android.location.Location r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void setNetworkLogDebug(boolean r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.b(r1)
            return
    }

    public static void setPersonalizedAdStatus(int r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void setSubChannel(java.lang.String r1) {
            boolean r0 = com.tkay.core.common.l.g.b(r1)
            if (r0 == 0) goto Ld
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.f(r1)
        Ld:
            return
    }

    public static void setSystemDevFragmentType(java.lang.String r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.p(r1)
            return
    }

    public static void setTYAdFilter(java.lang.String[] r1, com.tkay.core.api.ITYAdFilter r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2)
            return
    }

    public static void setUseHTTP(boolean r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.d(r1)
            return
    }

    public static void setWXAppId(java.lang.String r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void setWXStatus(boolean r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1)
            return
    }

    public static void showGdprAuth(android.content.Context r2) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r2)
            r1 = 0
            r0.a(r2, r1)
            return
    }

    public static void showGdprAuth(android.content.Context r1, com.tkay.core.api.TYGDPRAuthCallback r2) {
            com.tkay.core.common.b.p r0 = com.tkay.core.common.b.p.a(r1)
            r0.a(r1, r2)
            return
    }

    public static void testModeDeviceInfo(android.content.Context r1, com.tkay.core.api.DeviceInfoCallback r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r1, r2)
            return
    }
}
