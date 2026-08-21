package com.kwad.components.core.p.a;

public final class b implements com.kwad.sdk.core.b {
    public com.kwad.sdk.internal.api.SceneImpl PN;
    public long PO;
    public long PP;
    public java.lang.String sdkExtraData;

    public b(com.kwad.sdk.internal.api.SceneImpl r5) {
            r4 = this;
            r4.<init>()
            r4.PN = r5
            r0 = 0
            r4.PO = r0
            r4.PP = r0
            long r2 = com.kwad.sdk.utils.bf.getPosId()
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 == 0) goto L1c
            com.kwad.sdk.internal.api.SceneImpl r5 = r4.PN
            long r2 = com.kwad.sdk.utils.bf.getPosId()
            r5.setPosId(r2)
        L1c:
            long r2 = com.kwad.sdk.utils.bf.Ka()
            int r5 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r5 == 0) goto L2e
            com.kwad.sdk.internal.api.SceneImpl r5 = r4.PN
            long r0 = com.kwad.sdk.utils.bf.Ka()
            int r0 = (int) r0
            r5.setAdNum(r0)
        L2e:
            return
    }

    public final java.lang.String av(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.internal.api.SceneImpl r0 = r3.PN
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.util.Map r0 = r0.getRewardCallbackExtraData()
            if (r0 == 0) goto L1a
            boolean r2 = r0.containsKey(r4)
            if (r2 != 0) goto L13
            goto L1a
        L13:
            java.lang.Object r4 = r0.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            return r4
        L1a:
            return r1
    }

    public final com.kwad.sdk.internal.api.a pJ() {
            r1 = this;
            com.kwad.sdk.internal.api.SceneImpl r0 = r1.PN
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.kwad.sdk.internal.api.a r0 = r0.mKsAdLabel
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r4 = this;
            com.kwad.sdk.internal.api.SceneImpl r0 = r4.PN
            org.json.JSONObject r0 = r0.toJson()
            long r1 = r4.PO
            java.lang.String r3 = "pageScene"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            long r1 = r4.PP
            java.lang.String r3 = "subPageScene"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.sdkExtraData
            java.lang.String r2 = "sdkExtraData"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = "extraData"
            java.lang.String r2 = r4.av(r1)
            if (r2 == 0) goto L26
            com.kwad.sdk.utils.t.putValue(r0, r1, r2)
        L26:
            return r0
    }
}
