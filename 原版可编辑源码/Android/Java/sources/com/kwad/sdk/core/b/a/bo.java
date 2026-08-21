package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.reward.k;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

public final class bo implements com.kwad.sdk.core.d<k.c> {
    private static void a(k.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        cVar.style = jSONObject.optInt("style");
        cVar.title = jSONObject.optString("title");
        if (cVar.title == JSONObject.NULL) {
            cVar.title = "";
        }
        cVar.qh = jSONObject.optString("closeBtnText");
        if (cVar.qh == JSONObject.NULL) {
            cVar.qh = "";
        }
        cVar.qi = jSONObject.optString("continueBtnText");
        if (cVar.qi == JSONObject.NULL) {
            cVar.qi = "";
        }
        cVar.qj = jSONObject.optString("viewDetailText");
        if (cVar.qj == JSONObject.NULL) {
            cVar.qj = "";
        }
        cVar.qk = jSONObject.optString("unWatchedVideoTime");
        if (cVar.qk == JSONObject.NULL) {
            cVar.qk = "";
        }
        cVar.ql = jSONObject.optString(DBDefinition.ICON_URL);
        if (cVar.ql == JSONObject.NULL) {
            cVar.ql = "";
        }
        cVar.qm = jSONObject.optString("desc");
        if (cVar.qm == JSONObject.NULL) {
            cVar.qm = "";
        }
        cVar.qn = jSONObject.optString("descTxt");
        if (cVar.qn == JSONObject.NULL) {
            cVar.qn = "";
        }
        cVar.qo = jSONObject.optString("currentPlayTime");
        if (cVar.qo == JSONObject.NULL) {
            cVar.qo = "";
        }
    }

    private static JSONObject b(k.c cVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (cVar.style != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "style", cVar.style);
        }
        if (cVar.title != null && !cVar.title.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "title", cVar.title);
        }
        if (cVar.qh != null && !cVar.qh.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "closeBtnText", cVar.qh);
        }
        if (cVar.qi != null && !cVar.qi.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "continueBtnText", cVar.qi);
        }
        if (cVar.qj != null && !cVar.qj.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "viewDetailText", cVar.qj);
        }
        if (cVar.qk != null && !cVar.qk.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "unWatchedVideoTime", cVar.qk);
        }
        if (cVar.ql != null && !cVar.ql.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, DBDefinition.ICON_URL, cVar.ql);
        }
        if (cVar.qm != null && !cVar.qm.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "desc", cVar.qm);
        }
        if (cVar.qn != null && !cVar.qn.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "descTxt", cVar.qn);
        }
        if (cVar.qo != null && !cVar.qo.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "currentPlayTime", cVar.qo);
        }
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((k.c) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((k.c) bVar, jSONObject);
    }
}
