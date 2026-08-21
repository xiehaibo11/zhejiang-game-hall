package com.kwad.sdk.core.report;

import android.text.TextUtils;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;

public final class h extends com.kwad.sdk.core.network.d {
    protected String aqT;

    public h(String str) {
        this.aqT = "";
        this.aqT = str;
    }

    public h(List<r> list) {
        this.aqT = "";
        if (list == null || list.size() <= 0) {
            return;
        }
        JSONArray jSONArray = new JSONArray();
        Iterator<r> it = list.iterator();
        while (it.hasNext()) {
            com.kwad.sdk.utils.t.putValue(jSONArray, it.next().buildReportData());
        }
        putBody("actionList", jSONArray);
    }

    @Override
    public final String getBodyParamsString() {
        String bodyParamsString = super.getBodyParamsString();
        try {
            if (TextUtils.isEmpty(this.aqT)) {
                return bodyParamsString;
            }
            StringBuilder sb = new StringBuilder(bodyParamsString);
            sb.insert(sb.length() - 1, this.aqT);
            return sb.toString();
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return bodyParamsString;
        }
    }

    @Override
    public final String getUrl() {
        return com.kwad.sdk.h.xe();
    }
}
