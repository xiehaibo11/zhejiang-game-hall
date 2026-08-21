package com.kwad.sdk.core.report;

import com.kwad.sdk.core.response.model.AdTemplate;

public class k extends com.kwad.sdk.core.response.a.a {
    public int aqZ;
    public long creativeId;
    public long llsid;
    public int score;
    public String source = "union";

    public static k aJ(AdTemplate adTemplate) {
        k kVar = new k();
        kVar.creativeId = com.kwad.sdk.core.response.b.d.cq(adTemplate);
        kVar.llsid = com.kwad.sdk.core.response.b.d.cd(adTemplate);
        int iCv = com.kwad.sdk.core.response.b.d.cv(adTemplate);
        kVar.score = iCv;
        kVar.aqZ = iCv > 0 ? 1 : 0;
        return kVar;
    }

    public final String Cc() {
        return toJson().toString();
    }
}
