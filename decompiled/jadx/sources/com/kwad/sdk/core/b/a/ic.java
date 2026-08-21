package com.kwad.sdk.core.b.a;

import com.kwad.components.ad.splashscreen.local.SplashSkipViewModel;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class ic implements com.kwad.sdk.core.d<SplashSkipViewModel> {
    private static void a(SplashSkipViewModel splashSkipViewModel, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        splashSkipViewModel.skipSecond = jSONObject.optInt("skipSecond");
    }

    private static JSONObject b(SplashSkipViewModel splashSkipViewModel, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (splashSkipViewModel.skipSecond != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "skipSecond", splashSkipViewModel.skipSecond);
        }
        return jSONObject;
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((SplashSkipViewModel) bVar, jSONObject);
    }

    @Override // com.kwad.sdk.core.d
    public final /* bridge */ /* synthetic */ JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((SplashSkipViewModel) bVar, jSONObject);
    }
}
