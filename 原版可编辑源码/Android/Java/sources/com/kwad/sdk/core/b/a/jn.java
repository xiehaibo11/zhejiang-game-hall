package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdStyleInfo;
import org.json.JSONObject;

public final class jn implements com.kwad.sdk.core.d<AdStyleInfo.PlayDetailInfo.WidgetAdInfo> {
    private static void a(AdStyleInfo.PlayDetailInfo.WidgetAdInfo widgetAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        widgetAdInfo.widgetAdIcon = jSONObject.optString("widgetAdIcon");
        if (widgetAdInfo.widgetAdIcon == JSONObject.NULL) {
            widgetAdInfo.widgetAdIcon = "";
        }
        widgetAdInfo.downloadStartLabel = jSONObject.optString("downloadStartLabel", new String("开始下载"));
        widgetAdInfo.downloadOngoingLabel = jSONObject.optString("downloadOngoingLabel", new String("下载中"));
        widgetAdInfo.downloadResumeLabel = jSONObject.optString("downloadResumeLabel", new String("恢复下载"));
        widgetAdInfo.installAppLabel = jSONObject.optString("installAppLabel", new String("开始安装"));
        widgetAdInfo.openAppLabel = jSONObject.optString("openAppLabel", new String("立刻打开"));
        widgetAdInfo.type = jSONObject.optInt("type");
    }

    private static JSONObject b(AdStyleInfo.PlayDetailInfo.WidgetAdInfo widgetAdInfo, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (widgetAdInfo.widgetAdIcon != null && !widgetAdInfo.widgetAdIcon.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "widgetAdIcon", widgetAdInfo.widgetAdIcon);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "downloadStartLabel", widgetAdInfo.downloadStartLabel);
        com.kwad.sdk.utils.t.putValue(jSONObject, "downloadOngoingLabel", widgetAdInfo.downloadOngoingLabel);
        com.kwad.sdk.utils.t.putValue(jSONObject, "downloadResumeLabel", widgetAdInfo.downloadResumeLabel);
        com.kwad.sdk.utils.t.putValue(jSONObject, "installAppLabel", widgetAdInfo.installAppLabel);
        com.kwad.sdk.utils.t.putValue(jSONObject, "openAppLabel", widgetAdInfo.openAppLabel);
        if (widgetAdInfo.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", widgetAdInfo.type);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdStyleInfo.PlayDetailInfo.WidgetAdInfo) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdStyleInfo.PlayDetailInfo.WidgetAdInfo) bVar, jSONObject);
    }
}
