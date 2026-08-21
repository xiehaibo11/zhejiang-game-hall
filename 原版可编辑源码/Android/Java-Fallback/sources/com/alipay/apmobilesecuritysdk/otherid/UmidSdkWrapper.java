package com.alipay.apmobilesecuritysdk.otherid;

public class UmidSdkWrapper {
    public static final java.lang.String UMIDTOKEN_FILE_NAME = "xxxwww_v2";
    public static final java.lang.String UMIDTOKEN_KEY_NAME = "umidtk";
    public static volatile java.lang.String cachedUmidToken = "";
    public static volatile boolean initUmidFinished;

    static {
            return
    }

    public UmidSdkWrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String compatUmidBug(android.content.Context r1, java.lang.String r2) {
            boolean r0 = com.alipay.sdk.m.z.a.a(r2)
            if (r0 != 0) goto L10
            java.lang.String r0 = "000000000000000000000000"
            boolean r0 = com.alipay.sdk.m.z.a.a(r2, r0)
            if (r0 == 0) goto Lf
            goto L10
        Lf:
            return r2
        L10:
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.otherid.UtdidWrapper.getUtdid(r1)
            java.lang.String r2 = ""
            if (r1 == 0) goto L21
            java.lang.String r0 = "?"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L21
            r1 = r2
        L21:
            boolean r0 = com.alipay.sdk.m.z.a.a(r1)
            if (r0 == 0) goto L28
            goto L29
        L28:
            r2 = r1
        L29:
            return r2
    }

    public static synchronized java.lang.String getSecurityToken(android.content.Context r1) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper> r1 = com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.class
            monitor-enter(r1)
            java.lang.String r0 = com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.cachedUmidToken     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return r0
        L7:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public static java.lang.String startUmidTaskSync(android.content.Context r0, int r1) {
            java.lang.String r0 = ""
            return r0
    }

    public static synchronized void updateLocalUmidToken(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper> r0 = com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.class
            monitor-enter(r0)
            boolean r1 = com.alipay.sdk.m.z.a.b(r4)     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L12
            java.lang.String r1 = "xxxwww_v2"
            java.lang.String r2 = "umidtk"
            com.alipay.sdk.m.b0.d.a(r3, r1, r2, r4)     // Catch: java.lang.Throwable -> L14
            com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper.cachedUmidToken = r4     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)
            return
        L14:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}
