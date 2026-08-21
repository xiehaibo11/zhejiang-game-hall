package com.kwad.sdk.core.response.b;

public final class c {
    public static long bS(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 != 0) goto L5
            r0 = 0
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdStyleInfo r2 = bW(r2)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r2 = r2.playDetailInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r2 = r2.detailTopToolBarInfo
            long r0 = r2.callButtonShowTime
            return r0
    }

    public static java.lang.String bT(com.kwad.sdk.core.response.model.AdTemplate r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = bW(r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r0 = r0.playDetailInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailTopToolBarInfo r0 = r0.detailTopToolBarInfo
            java.lang.String r0 = r0.callButtonDescription
            return r0
    }

    public static java.lang.String bU(com.kwad.sdk.core.response.model.AdTemplate r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = bW(r0)
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo r0 = r0.playEndInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayEndInfo$EndTopToolBarInfo r0 = r0.endTopToolBarInfo
            java.lang.String r0 = r0.callButtonDescription
            return r0
    }

    public static boolean bV(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = com.kwad.sdk.core.response.b.d.bY(r2)
            if (r1 != 0) goto Lb
            return r0
        Lb:
            com.kwad.sdk.core.response.model.AdStyleInfo r2 = bW(r2)
            boolean r2 = r2.slideClick
            return r2
    }

    private static com.kwad.sdk.core.response.model.AdStyleInfo bW(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdStyleInfo r0 = r0.adStyleInfo
            return r0
    }

    public static java.util.List<java.lang.String> bX(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdStyleInfo r2 = bW(r2)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.response.model.AdStyleInfo$ExtraDisplayInfo r2 = r2.extraDisplayInfo     // Catch: java.lang.Exception -> L23
            java.util.List<com.kwad.sdk.core.response.model.AdStyleInfo$ExposeTagInfo> r2 = r2.exposeTagInfoList     // Catch: java.lang.Exception -> L23
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L23
        L11:
            boolean r1 = r2.hasNext()     // Catch: java.lang.Exception -> L23
            if (r1 == 0) goto L23
            java.lang.Object r1 = r2.next()     // Catch: java.lang.Exception -> L23
            com.kwad.sdk.core.response.model.AdStyleInfo$ExposeTagInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.ExposeTagInfo) r1     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = r1.text     // Catch: java.lang.Exception -> L23
            r0.add(r1)     // Catch: java.lang.Exception -> L23
            goto L11
        L23:
            return r0
    }
}
