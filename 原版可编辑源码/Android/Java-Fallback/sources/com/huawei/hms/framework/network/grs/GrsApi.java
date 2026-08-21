package com.huawei.hms.framework.network.grs;

public class GrsApi {
    private static final java.lang.String TAG = "GrsApi";
    private static com.huawei.hms.framework.network.grs.GrsClient grsClient;

    public GrsApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void ayncGetGrsUrl(java.lang.String r1, java.lang.String r2, com.huawei.hms.framework.network.grs.IQueryUrlCallBack r3) {
            if (r3 != 0) goto La
            java.lang.String r1 = "GrsApi"
            java.lang.String r2 = "IQueryUrlCallBack is must not null for process continue."
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            return
        La:
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 == 0) goto L17
            if (r1 == 0) goto L17
            if (r2 != 0) goto L13
            goto L17
        L13:
            r0.ayncGetGrsUrl(r1, r2, r3)
            return
        L17:
            r1 = -6
            r3.onCallBackFail(r1)
            return
    }

    public static void ayncGetGrsUrls(java.lang.String r1, com.huawei.hms.framework.network.grs.IQueryUrlsCallBack r2) {
            if (r2 != 0) goto La
            java.lang.String r1 = "GrsApi"
            java.lang.String r2 = "IQueryUrlsCallBack is must not null for process continue."
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            return
        La:
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 == 0) goto L15
            if (r1 != 0) goto L11
            goto L15
        L11:
            r0.ayncGetGrsUrls(r1, r2)
            return
        L15:
            r1 = -6
            r2.onCallBackFail(r1)
            return
    }

    public static void clearSp() {
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 != 0) goto Lc
            java.lang.String r0 = "GrsApi"
            java.lang.String r1 = "GrsApi.clearSp return because grsClient is null."
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            return
        Lc:
            r0.clearSp()
            return
    }

    public static boolean forceExpire() {
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 != 0) goto Ld
            java.lang.String r0 = "GrsApi"
            java.lang.String r1 = "GrsApi.forceExpire return false because grsClient is null."
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            r0 = 0
            return r0
        Ld:
            boolean r0 = r0.forceExpire()
            return r0
    }

    @java.lang.Deprecated
    public static com.huawei.hms.framework.network.grs.local.model.CountryCodeBean getCountryCode(android.content.Context r0, boolean r1) {
            com.huawei.hms.framework.network.grs.local.model.CountryCodeBean r0 = com.huawei.hms.framework.network.grs.a.a(r0, r1)
            return r0
    }

    public static int grsSdkInit(android.content.Context r1, com.huawei.hms.framework.network.grs.GrsBaseInfo r2) {
            com.huawei.hms.framework.network.grs.GrsClient r0 = new com.huawei.hms.framework.network.grs.GrsClient
            r0.<init>(r1, r2)
            com.huawei.hms.framework.network.grs.GrsApi.grsClient = r0
            r1 = 0
            return r1
    }

    public static java.lang.String synGetGrsUrl(java.lang.String r1, java.lang.String r2) {
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 == 0) goto Le
            if (r1 == 0) goto Le
            if (r2 != 0) goto L9
            goto Le
        L9:
            java.lang.String r1 = r0.synGetGrsUrl(r1, r2)
            return r1
        Le:
            java.lang.String r1 = "GrsApi"
            java.lang.String r2 = "GrsApi.synGetGrsUrl method maybe grsSdkInit has not completed and grsClient is null."
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            r1 = 0
            return r1
    }

    public static java.util.Map<java.lang.String, java.lang.String> synGetGrsUrls(java.lang.String r1) {
            com.huawei.hms.framework.network.grs.GrsClient r0 = com.huawei.hms.framework.network.grs.GrsApi.grsClient
            if (r0 == 0) goto Lc
            if (r1 != 0) goto L7
            goto Lc
        L7:
            java.util.Map r1 = r0.synGetGrsUrls(r1)
            return r1
        Lc:
            java.lang.String r1 = "GrsApi"
            java.lang.String r0 = "GrsApi.synGetGrsUrls method maybe grsSdkInit has not completed and grsClient is null."
            com.huawei.hms.framework.common.Logger.w(r1, r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            return r1
    }
}
