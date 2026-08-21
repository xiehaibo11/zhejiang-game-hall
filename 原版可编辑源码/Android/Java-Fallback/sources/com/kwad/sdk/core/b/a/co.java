package com.kwad.sdk.core.b.a;

public final class co implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo> {
    public co() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "permissionInfo"
            java.lang.String r0 = r5.optString(r0)
            r4.permissionInfo = r0
            java.lang.String r0 = r4.permissionInfo
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r4.permissionInfo = r2
        L15:
            java.lang.String r0 = "appName"
            java.lang.String r0 = r5.optString(r0)
            r4.appName = r0
            java.lang.String r0 = r4.appName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r4.appName = r2
        L25:
            java.lang.String r0 = "corporationName"
            java.lang.String r0 = r5.optString(r0)
            r4.corporationName = r0
            java.lang.String r0 = r4.corporationName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r4.corporationName = r2
        L35:
            java.lang.String r0 = "packageSize"
            long r0 = r5.optLong(r0)
            r4.packageSize = r0
            java.lang.String r0 = "appVersion"
            java.lang.String r0 = r5.optString(r0)
            r4.appVersion = r0
            java.lang.String r0 = r4.appVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r4.appVersion = r2
        L4d:
            java.lang.String r0 = "appPrivacyUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.appPrivacyUrl = r0
            java.lang.String r0 = r4.appPrivacyUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r4.appPrivacyUrl = r2
        L5d:
            java.lang.String r0 = "appPermissionInfoUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.appPermissionInfoUrl = r0
            java.lang.String r0 = r4.appPermissionInfoUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r4.appPermissionInfoUrl = r2
        L6d:
            java.lang.String r0 = "secWindowPopNoWifiSwitch"
            boolean r0 = r5.optBoolean(r0)
            r4.secWindowPopNoWifiSwitch = r0
            java.lang.String r0 = "secWindowPopSwitch"
            boolean r0 = r5.optBoolean(r0)
            r4.secWindowPopSwitch = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "false"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r3 = "downloadPauseEnable"
            boolean r0 = r5.optBoolean(r3, r0)
            r4.downloadPauseEnable = r0
            java.lang.String r0 = "windowPopUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.windowPopUrl = r0
            java.lang.String r0 = r4.windowPopUrl
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto La0
            r4.windowPopUrl = r2
        La0:
            java.lang.Boolean r0 = new java.lang.Boolean
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "webPageTipbarSwitch"
            boolean r0 = r5.optBoolean(r1, r0)
            r4.webPageTipbarSwitch = r0
            java.lang.String r0 = "webPageTipbarText"
            java.lang.String r0 = r5.optString(r0)
            r4.webPageTipbarText = r0
            java.lang.String r0 = r4.webPageTipbarText
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lc1
            r4.webPageTipbarText = r2
        Lc1:
            java.lang.String r0 = "autoDownloadUrl"
            java.lang.String r0 = r5.optString(r0)
            r4.autoDownloadUrl = r0
            java.lang.String r0 = r4.autoDownloadUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Ld1
            r4.autoDownloadUrl = r2
        Ld1:
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r0 = new com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo
            r0.<init>()
            r4.complianceInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r4 = r4.complianceInfo
            java.lang.String r0 = "complianceInfo"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            r4.parseJson(r5)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.permissionInfo
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.permissionInfo
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.permissionInfo
            java.lang.String r2 = "permissionInfo"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.appName
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.appName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.appName
            java.lang.String r2 = "appName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            java.lang.String r0 = r6.corporationName
            if (r0 == 0) goto L42
            java.lang.String r0 = r6.corporationName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r6.corporationName
            java.lang.String r2 = "corporationName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L42:
            long r2 = r6.packageSize
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L51
            long r2 = r6.packageSize
            java.lang.String r0 = "packageSize"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L51:
            java.lang.String r0 = r6.appVersion
            if (r0 == 0) goto L64
            java.lang.String r0 = r6.appVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L64
            java.lang.String r0 = r6.appVersion
            java.lang.String r2 = "appVersion"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L64:
            java.lang.String r0 = r6.appPrivacyUrl
            if (r0 == 0) goto L77
            java.lang.String r0 = r6.appPrivacyUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L77
            java.lang.String r0 = r6.appPrivacyUrl
            java.lang.String r2 = "appPrivacyUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L77:
            java.lang.String r0 = r6.appPermissionInfoUrl
            if (r0 == 0) goto L8a
            java.lang.String r0 = r6.appPermissionInfoUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8a
            java.lang.String r0 = r6.appPermissionInfoUrl
            java.lang.String r2 = "appPermissionInfoUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L8a:
            boolean r0 = r6.secWindowPopNoWifiSwitch
            if (r0 == 0) goto L95
            boolean r0 = r6.secWindowPopNoWifiSwitch
            java.lang.String r2 = "secWindowPopNoWifiSwitch"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L95:
            boolean r0 = r6.secWindowPopSwitch
            if (r0 == 0) goto La0
            boolean r0 = r6.secWindowPopSwitch
            java.lang.String r2 = "secWindowPopSwitch"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        La0:
            boolean r0 = r6.downloadPauseEnable
            java.lang.String r2 = "downloadPauseEnable"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.windowPopUrl
            if (r0 == 0) goto Lba
            java.lang.String r0 = r6.windowPopUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lba
            java.lang.String r0 = r6.windowPopUrl
            java.lang.String r2 = "windowPopUrl"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lba:
            boolean r0 = r6.webPageTipbarSwitch
            java.lang.String r2 = "webPageTipbarSwitch"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.webPageTipbarText
            if (r0 == 0) goto Ld4
            java.lang.String r0 = r6.webPageTipbarText
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ld4
            java.lang.String r0 = r6.webPageTipbarText
            java.lang.String r2 = "webPageTipbarText"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Ld4:
            java.lang.String r0 = r6.autoDownloadUrl
            if (r0 == 0) goto Le7
            java.lang.String r0 = r6.autoDownloadUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le7
            java.lang.String r0 = r6.autoDownloadUrl
            java.lang.String r1 = "autoDownloadUrl"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Le7:
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r6 = r6.complianceInfo
            java.lang.String r0 = "complianceInfo"
            com.kwad.sdk.utils.t.a(r7, r0, r6)
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.DownloadSafeInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
