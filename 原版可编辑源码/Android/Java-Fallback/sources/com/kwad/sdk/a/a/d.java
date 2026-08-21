package com.kwad.sdk.a.a;

public final class d {
    public static java.lang.String A(com.kwad.sdk.core.response.model.AdInfo r4) {
            java.lang.String r0 = com.kwad.sdk.core.config.d.zU()
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r4.adBaseInfo
            java.lang.String r1 = r1.appName
            java.lang.String r2 = "[appname]"
            java.lang.String r0 = r0.replace(r2, r1)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r4.adBaseInfo
            long r1 = r1.packageSize
            r3 = 1
            java.lang.String r1 = com.kwad.components.core.t.e.a(r1, r3)
            java.lang.String r2 = "[appsize]"
            java.lang.String r0 = r0.replace(r2, r1)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r4 = r4.adBaseInfo
            java.lang.String r4 = r4.appVersion
            java.lang.String r1 = "[appver]"
            java.lang.String r4 = r0.replace(r1, r4)
            return r4
    }

    public static java.lang.String yh() {
            java.lang.String r0 = com.kwad.sdk.core.config.d.zV()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lc
            java.lang.String r0 = "安装"
        Lc:
            return r0
    }

    public static java.lang.String yi() {
            java.lang.String r0 = com.kwad.sdk.core.config.d.zW()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lc
            java.lang.String r0 = "取消"
        Lc:
            return r0
    }
}
