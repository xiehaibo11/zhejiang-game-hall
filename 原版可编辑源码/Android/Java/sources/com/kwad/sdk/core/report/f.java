package com.kwad.sdk.core.report;

import com.kwad.components.offline.api.BuildConfig;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.sdk.service.ServiceProvider;
import org.json.JSONObject;

public final class f {
    public double aqQ;
    public double aqR;
    public String aqS = BuildConfig.VERSION_NAME;

    private static double xI() {
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar != null) {
            return fVar.xI();
        }
        return 0.0d;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x003d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(String str, JSONObject jSONObject, String str2) {
        double dOptDouble;
        if (jSONObject.has("minSDKVersion")) {
            this.aqS = jSONObject.optString("minSDKVersion");
        }
        String str3 = com.sigmob.sdk.base.h.A + str2;
        if (ILoggerReporter.Category.ERROR_LOG.equals(str)) {
            String str4 = "ratioRE" + str2;
            dOptDouble = jSONObject.has(str4) ? jSONObject.optDouble(str4) : jSONObject.optDouble(str3);
        }
        this.aqQ = dOptDouble;
        String str5 = "ratioApmRL" + str2;
        this.aqR = jSONObject.has(str5) ? jSONObject.optDouble(str5) : xI();
    }
}
