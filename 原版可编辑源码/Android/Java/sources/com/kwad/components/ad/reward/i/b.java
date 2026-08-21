package com.kwad.components.ad.reward.i;

import android.content.Context;
import com.kwad.sdk.core.report.AdTrackLog;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

public final class b {
    public static void a(final Context context, AdTemplate adTemplate, String str, final int i, JSONObject jSONObject) {
        j jVarCi = new j().ci(18);
        jVarCi.a(adTemplate, str, null, new com.kwad.sdk.g.a<AdTrackLog>() {
            @Override
            private void accept(AdTrackLog adTrackLog) {
                adTrackLog.rewardDetailStatusBarHeight = com.kwad.sdk.d.a.a.getStatusBarHeight(context);
                adTrackLog.rewardDetailCallPositionY = i;
            }
        });
        com.kwad.sdk.core.report.a.d(adTemplate, jSONObject, jVarCi);
    }

    public static void a(AdTemplate adTemplate, String str, String str2, j jVar, JSONObject jSONObject) {
        if (jVar == null) {
            jVar = new j();
        }
        jVar.a(adTemplate, str, str2, null);
        com.kwad.sdk.core.report.a.a(adTemplate, jVar, jSONObject);
    }
}
