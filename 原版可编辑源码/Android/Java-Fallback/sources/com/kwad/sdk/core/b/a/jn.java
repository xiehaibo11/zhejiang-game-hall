package com.kwad.sdk.core.b.a;

public final class jn implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.WidgetAdInfo> {
    public jn() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.WidgetAdInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "widgetAdIcon"
            java.lang.String r0 = r3.optString(r0)
            r2.widgetAdIcon = r0
            java.lang.String r0 = r2.widgetAdIcon
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15
            java.lang.String r0 = ""
            r2.widgetAdIcon = r0
        L15:
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "开始下载"
            r0.<init>(r1)
            java.lang.String r1 = "downloadStartLabel"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.downloadStartLabel = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "下载中"
            r0.<init>(r1)
            java.lang.String r1 = "downloadOngoingLabel"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.downloadOngoingLabel = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "恢复下载"
            r0.<init>(r1)
            java.lang.String r1 = "downloadResumeLabel"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.downloadResumeLabel = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "开始安装"
            r0.<init>(r1)
            java.lang.String r1 = "installAppLabel"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.installAppLabel = r0
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "立刻打开"
            r0.<init>(r1)
            java.lang.String r1 = "openAppLabel"
            java.lang.String r0 = r3.optString(r1, r0)
            r2.openAppLabel = r0
            java.lang.String r0 = "type"
            int r3 = r3.optInt(r0)
            r2.type = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.WidgetAdInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.lang.String r0 = r2.widgetAdIcon
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.widgetAdIcon
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r2.widgetAdIcon
            java.lang.String r1 = "widgetAdIcon"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1c:
            java.lang.String r0 = r2.downloadStartLabel
            java.lang.String r1 = "downloadStartLabel"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r0 = r2.downloadOngoingLabel
            java.lang.String r1 = "downloadOngoingLabel"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r0 = r2.downloadResumeLabel
            java.lang.String r1 = "downloadResumeLabel"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r0 = r2.installAppLabel
            java.lang.String r1 = "installAppLabel"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r0 = r2.openAppLabel
            java.lang.String r1 = "openAppLabel"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.type
            if (r0 == 0) goto L4a
            int r2 = r2.type
            java.lang.String r0 = "type"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L4a:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$WidgetAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.WidgetAdInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$WidgetAdInfo r1 = (com.kwad.sdk.core.response.model.AdStyleInfo.PlayDetailInfo.WidgetAdInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
