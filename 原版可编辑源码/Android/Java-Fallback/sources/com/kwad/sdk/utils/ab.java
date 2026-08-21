package com.kwad.sdk.utils;

public final class ab {
    public static java.lang.String a(android.content.Context r2, java.lang.String r3, com.kwad.sdk.utils.ac.a r4, boolean r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            java.lang.String r3 = com.kwad.sdk.utils.ac.a(r3, r4)
            java.lang.String r3 = com.kwad.sdk.utils.ac.aj(r2, r3)
            java.lang.String r4 = com.kwad.sdk.utils.au.cw(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "__MAC__"
            java.lang.String r3 = r3.replace(r0, r4)
            java.lang.String r0 = com.kwad.sdk.utils.ad.bp(r4)
            java.lang.String r1 = "__MAC2__"
            java.lang.String r3 = r3.replace(r1, r0)
            java.lang.String r0 = ":"
            java.lang.String r1 = ""
            java.lang.String r4 = r4.replace(r0, r1)
            java.lang.String r4 = com.kwad.sdk.utils.ad.bp(r4)
            java.lang.String r0 = "__MAC3__"
            java.lang.String r3 = r3.replace(r0, r4)
        L3b:
            java.lang.String r4 = com.kwad.sdk.utils.au.cu(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L5f
            java.lang.String r0 = "__IMEI__"
            java.lang.String r3 = r3.replace(r0, r4)
            java.lang.String r0 = com.kwad.sdk.utils.ad.bp(r4)
            java.lang.String r1 = "__IMEI2__"
            java.lang.String r3 = r3.replace(r1, r0)
            java.lang.String r4 = com.kwad.sdk.utils.ad.fx(r4)
            java.lang.String r0 = "__IMEI3__"
            java.lang.String r3 = r3.replace(r0, r4)
        L5f:
            java.lang.String r4 = com.kwad.sdk.utils.au.getOaid()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L79
            java.lang.String r0 = "__OAID__"
            java.lang.String r3 = r3.replace(r0, r4)
            java.lang.String r4 = com.kwad.sdk.utils.ad.bp(r4)
            java.lang.String r0 = "__OAID2__"
            java.lang.String r3 = r3.replace(r0, r4)
        L79:
            java.lang.String r4 = com.kwad.sdk.utils.au.cv(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L9d
            java.lang.String r0 = com.kwad.sdk.utils.ad.bp(r4)
            java.lang.String r1 = "__ANDROIDID2__"
            java.lang.String r3 = r3.replace(r1, r0)
            java.lang.String r0 = com.kwad.sdk.utils.ad.fx(r4)
            java.lang.String r1 = "__ANDROIDID3__"
            java.lang.String r3 = r3.replace(r1, r0)
            java.lang.String r0 = "__ANDROIDID__"
            java.lang.String r3 = r3.replace(r0, r4)
        L9d:
            java.lang.String r2 = com.kwad.sdk.utils.ac.c(r2, r3, r5)
            return r2
    }
}
