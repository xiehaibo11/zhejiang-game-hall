package com.kwad.components.core.m;

import android.text.TextUtils;
import com.kwad.components.core.p.a.b;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a extends m<com.kwad.components.core.p.a, AdResultData> {
    private b Lj;

    public a(b bVar) {
        this.Lj = bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.network.m
    /* JADX INFO: renamed from: g, reason: merged with bridge method [inline-methods] */
    public void afterParseData(AdResultData adResultData) {
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

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.kwad.sdk.core.network.m
    /* JADX INFO: renamed from: ag, reason: merged with bridge method [inline-methods] */
    public AdResultData parseData(String str) {
        JSONObject jSONObject = new JSONObject(str);
        AdResultData adResultData = new AdResultData(this.Lj.PN);
        adResultData.parseJson(jSONObject);
        return adResultData;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.kwad.sdk.core.network.a
    /* JADX INFO: renamed from: mm */
    public com.kwad.components.core.p.a createRequest() {
        return new com.kwad.components.core.p.a(this.Lj);
    }
}
