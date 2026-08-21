package com.kwad.sdk.core.b.a;

public final class gh implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo> {
    public gh() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "weakStyleIcon"
            java.lang.String r0 = r6.optString(r0)
            r5.weakStyleIcon = r0
            java.lang.String r0 = r5.weakStyleIcon
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r5.weakStyleIcon = r2
        L15:
            java.lang.String r0 = "weakStyleTitle"
            java.lang.String r0 = r6.optString(r0)
            r5.weakStyleTitle = r0
            java.lang.String r0 = r5.weakStyleTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r5.weakStyleTitle = r2
        L25:
            java.lang.String r0 = "weakStyleDownloadingTitle"
            java.lang.String r0 = r6.optString(r0)
            r5.weakStyleDownloadingTitle = r0
            java.lang.String r0 = r5.weakStyleDownloadingTitle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r5.weakStyleDownloadingTitle = r2
        L35:
            java.lang.String r0 = "weakStyleAdMark"
            java.lang.String r0 = r6.optString(r0)
            r5.weakStyleAdMark = r0
            java.lang.String r0 = r5.weakStyleAdMark
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r5.weakStyleAdMark = r2
        L45:
            java.lang.String r0 = "weakStyleAppearTime"
            long r0 = r6.optLong(r0)
            r5.weakStyleAppearTime = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "true"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r3 = "weakStyleEnableClose"
            boolean r0 = r6.optBoolean(r3, r0)
            r5.weakStyleEnableClose = r0
            java.lang.String r0 = "typePortrait"
            int r0 = r6.optInt(r0)
            r5.typePortrait = r0
            java.lang.String r0 = "strongStyleCardUrl"
            java.lang.String r0 = r6.optString(r0)
            r5.strongStyleCardUrl = r0
            java.lang.String r0 = r5.strongStyleCardUrl
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L78
            r5.strongStyleCardUrl = r2
        L78:
            java.lang.String r0 = "strongStyleAppearTime"
            long r3 = r6.optLong(r0)
            r5.strongStyleAppearTime = r3
            java.lang.String r0 = "strongStyleTitle"
            java.lang.String r0 = r6.optString(r0)
            r5.strongStyleTitle = r0
            java.lang.String r0 = r5.strongStyleTitle
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto L90
            r5.strongStyleTitle = r2
        L90:
            java.lang.String r0 = "strongStyleSubTitle"
            java.lang.String r0 = r6.optString(r0)
            r5.strongStyleSubTitle = r0
            java.lang.String r0 = r5.strongStyleSubTitle
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto La0
            r5.strongStyleSubTitle = r2
        La0:
            java.lang.String r0 = "strongStyleAdMark"
            java.lang.String r0 = r6.optString(r0)
            r5.strongStyleAdMark = r0
            java.lang.String r0 = r5.strongStyleAdMark
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto Lb0
            r5.strongStyleAdMark = r2
        Lb0:
            java.lang.Boolean r0 = new java.lang.Boolean
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "strongStyleEnableClose"
            boolean r0 = r6.optBoolean(r1, r0)
            r5.strongStyleEnableClose = r0
            java.lang.String r0 = "weakStyleShowTime"
            long r0 = r6.optLong(r0)
            r5.weakStyleShowTime = r0
            java.lang.String r0 = "strongStyleShowTime"
            long r0 = r6.optLong(r0)
            r5.strongStyleShowTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.weakStyleIcon
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.weakStyleIcon
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.weakStyleIcon
            java.lang.String r2 = "weakStyleIcon"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.weakStyleTitle
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.weakStyleTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.weakStyleTitle
            java.lang.String r2 = "weakStyleTitle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            java.lang.String r0 = r6.weakStyleDownloadingTitle
            if (r0 == 0) goto L42
            java.lang.String r0 = r6.weakStyleDownloadingTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r6.weakStyleDownloadingTitle
            java.lang.String r2 = "weakStyleDownloadingTitle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L42:
            java.lang.String r0 = r6.weakStyleAdMark
            if (r0 == 0) goto L55
            java.lang.String r0 = r6.weakStyleAdMark
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r6.weakStyleAdMark
            java.lang.String r2 = "weakStyleAdMark"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L55:
            long r2 = r6.weakStyleAppearTime
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L64
            long r2 = r6.weakStyleAppearTime
            java.lang.String r0 = "weakStyleAppearTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L64:
            boolean r0 = r6.weakStyleEnableClose
            java.lang.String r2 = "weakStyleEnableClose"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            int r0 = r6.typePortrait
            if (r0 == 0) goto L76
            int r0 = r6.typePortrait
            java.lang.String r2 = "typePortrait"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L76:
            java.lang.String r0 = r6.strongStyleCardUrl
            if (r0 == 0) goto L89
            java.lang.String r0 = r6.strongStyleCardUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L89
            java.lang.String r0 = r6.strongStyleCardUrl
            java.lang.String r2 = "strongStyleCardUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L89:
            long r2 = r6.strongStyleAppearTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L96
            long r2 = r6.strongStyleAppearTime
            java.lang.String r0 = "strongStyleAppearTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L96:
            java.lang.String r0 = r6.strongStyleTitle
            if (r0 == 0) goto La9
            java.lang.String r0 = r6.strongStyleTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La9
            java.lang.String r0 = r6.strongStyleTitle
            java.lang.String r2 = "strongStyleTitle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        La9:
            java.lang.String r0 = r6.strongStyleSubTitle
            if (r0 == 0) goto Lbc
            java.lang.String r0 = r6.strongStyleSubTitle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lbc
            java.lang.String r0 = r6.strongStyleSubTitle
            java.lang.String r2 = "strongStyleSubTitle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lbc:
            java.lang.String r0 = r6.strongStyleAdMark
            if (r0 == 0) goto Lcf
            java.lang.String r0 = r6.strongStyleAdMark
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lcf
            java.lang.String r0 = r6.strongStyleAdMark
            java.lang.String r1 = "strongStyleAdMark"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lcf:
            boolean r0 = r6.strongStyleEnableClose
            java.lang.String r1 = "strongStyleEnableClose"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
            long r0 = r6.weakStyleShowTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto Le3
            long r0 = r6.weakStyleShowTime
            java.lang.String r2 = "weakStyleShowTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Le3:
            long r0 = r6.strongStyleShowTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto Lf0
            long r0 = r6.strongStyleShowTime
            java.lang.String r6 = "strongStyleShowTime"
            com.kwad.sdk.utils.t.putValue(r7, r6, r0)
        Lf0:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$PatchAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.PatchAdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
