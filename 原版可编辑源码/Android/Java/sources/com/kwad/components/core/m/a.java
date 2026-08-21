package com.kwad.components.core.m;

import android.text.TextUtils;
import com.kwad.components.core.p.a.b;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

public class a extends m<com.kwad.components.core.p.a, AdResultData> {
    private b Lj;

    public a(b bVar) {
        this.Lj = bVar;
    }

    @Override
    private void afterParseData(AdResultData adResultData) {
        super.afterParseData(adResultData);
        h(adResultData);
    }

    private static void h(AdResultData adResultData) {
        com.kwad.components.core.o.a aVarPA;
        int i;
        for (AdTemplate adTemplate : adResultData.getProceedTemplateList()) {
            AdInfo adInfoCg = d.cg(adTemplate);
            if (com.kwad.sdk.core.response.b.a.aV(adInfoCg)) {
                if (com.kwad.sdk.core.response.b.a.aT(adInfoCg).size() == 0) {
                    aVarPA = com.kwad.components.core.o.a.pA();
                    i = 21005;
                    aVarPA.g(adTemplate, i);
                }
            } else if (com.kwad.sdk.core.response.b.a.aZ(adInfoCg) && TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.F(adInfoCg))) {
                aVarPA = com.kwad.components.core.o.a.pA();
                i = 21006;
                aVarPA.g(adTemplate, i);
            }
        }
    }

    @Override
    protected AdResultData parseData(String str) {
        JSONObject jSONObject = new JSONObject(str);
        AdResultData adResultData = new AdResultData(this.Lj.PN);
        adResultData.parseJson(jSONObject);
        return adResultData;
    }

    @Override
    protected com.kwad.components.core.p.a createRequest() {
        return new com.kwad.components.core.p.a(this.Lj);
    }
}
