package com.kwad.components.core.m;

public class a extends com.kwad.sdk.core.network.m<com.kwad.components.core.p.a, com.kwad.components.core.response.model.AdResultData> {
    private com.kwad.components.core.p.a.b Lj;

    public a(com.kwad.components.core.p.a.b r1) {
            r0 = this;
            r0.<init>()
            r0.Lj = r1
            return
    }

    private void g(com.kwad.components.core.response.model.AdResultData r1) {
            r0 = this;
            super.afterParseData(r1)
            h(r1)
            return
    }

    private static void h(com.kwad.components.core.response.model.AdResultData r3) {
            java.util.List r3 = r3.getProceedTemplateList()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L49
            java.lang.Object r0 = r3.next()
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r2 = com.kwad.sdk.core.response.b.a.aV(r1)
            if (r2 == 0) goto L32
            java.util.List r1 = com.kwad.sdk.core.response.b.a.aT(r1)
            int r1 = r1.size()
            if (r1 != 0) goto L8
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r2 = 21005(0x520d, float:2.9434E-41)
        L2e:
            r1.g(r0, r2)
            goto L8
        L32:
            boolean r2 = com.kwad.sdk.core.response.b.a.aZ(r1)
            if (r2 == 0) goto L8
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.F(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L8
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r2 = 21006(0x520e, float:2.9436E-41)
            goto L2e
        L49:
            return
    }

    @Override
    public void afterParseData(com.kwad.sdk.core.network.BaseResultData r1) {
            r0 = this;
            com.kwad.components.core.response.model.AdResultData r1 = (com.kwad.components.core.response.model.AdResultData) r1
            r0.g(r1)
            return
    }

    protected com.kwad.components.core.response.model.AdResultData ag(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            com.kwad.components.core.response.model.AdResultData r3 = new com.kwad.components.core.response.model.AdResultData
            com.kwad.components.core.p.a.b r1 = r2.Lj
            com.kwad.sdk.internal.api.SceneImpl r1 = r1.PN
            r3.<init>(r1)
            r3.parseJson(r0)
            return r3
    }

    @Override
    public com.kwad.sdk.core.network.g createRequest() {
            r1 = this;
            com.kwad.components.core.p.a r0 = r1.mm()
            return r0
    }

    protected com.kwad.components.core.p.a mm() {
            r2 = this;
            com.kwad.components.core.p.a r0 = new com.kwad.components.core.p.a
            com.kwad.components.core.p.a.b r1 = r2.Lj
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.kwad.sdk.core.network.BaseResultData parseData(java.lang.String r1) {
            r0 = this;
            com.kwad.components.core.response.model.AdResultData r1 = r0.ag(r1)
            return r1
    }
}
