package com.kwad.sdk.core.b.a;

public final class bo implements com.kwad.sdk.core.d<com.kwad.components.ad.reward.k.c> {
    public bo() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.reward.k.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "style"
            int r0 = r4.optInt(r0)
            r3.style = r0
            java.lang.String r0 = "title"
            java.lang.String r0 = r4.optString(r0)
            r3.title = r0
            java.lang.String r0 = r3.title
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.title = r2
        L1d:
            java.lang.String r0 = "closeBtnText"
            java.lang.String r0 = r4.optString(r0)
            r3.qh = r0
            java.lang.String r0 = r3.qh
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.qh = r2
        L2d:
            java.lang.String r0 = "continueBtnText"
            java.lang.String r0 = r4.optString(r0)
            r3.qi = r0
            java.lang.String r0 = r3.qi
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.qi = r2
        L3d:
            java.lang.String r0 = "viewDetailText"
            java.lang.String r0 = r4.optString(r0)
            r3.qj = r0
            java.lang.String r0 = r3.qj
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.qj = r2
        L4d:
            java.lang.String r0 = "unWatchedVideoTime"
            java.lang.String r0 = r4.optString(r0)
            r3.qk = r0
            java.lang.String r0 = r3.qk
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.qk = r2
        L5d:
            java.lang.String r0 = "iconUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.ql = r0
            java.lang.String r0 = r3.ql
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.ql = r2
        L6d:
            java.lang.String r0 = "desc"
            java.lang.String r0 = r4.optString(r0)
            r3.qm = r0
            java.lang.String r0 = r3.qm
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L7d
            r3.qm = r2
        L7d:
            java.lang.String r0 = "descTxt"
            java.lang.String r0 = r4.optString(r0)
            r3.qn = r0
            java.lang.String r0 = r3.qn
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8d
            r3.qn = r2
        L8d:
            java.lang.String r0 = "currentPlayTime"
            java.lang.String r4 = r4.optString(r0)
            r3.qo = r4
            java.lang.String r4 = r3.qo
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L9d
            r3.qo = r2
        L9d:
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.reward.k.c r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            int r0 = r3.style
            if (r0 == 0) goto L12
            int r0 = r3.style
            java.lang.String r1 = "style"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L12:
            java.lang.String r0 = r3.title
            java.lang.String r1 = ""
            if (r0 == 0) goto L27
            java.lang.String r0 = r3.title
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L27:
            java.lang.String r0 = r3.qh
            if (r0 == 0) goto L3a
            java.lang.String r0 = r3.qh
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3a
            java.lang.String r0 = r3.qh
            java.lang.String r2 = "closeBtnText"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            java.lang.String r0 = r3.qi
            if (r0 == 0) goto L4d
            java.lang.String r0 = r3.qi
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r0 = r3.qi
            java.lang.String r2 = "continueBtnText"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L4d:
            java.lang.String r0 = r3.qj
            if (r0 == 0) goto L60
            java.lang.String r0 = r3.qj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L60
            java.lang.String r0 = r3.qj
            java.lang.String r2 = "viewDetailText"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L60:
            java.lang.String r0 = r3.qk
            if (r0 == 0) goto L73
            java.lang.String r0 = r3.qk
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L73
            java.lang.String r0 = r3.qk
            java.lang.String r2 = "unWatchedVideoTime"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L73:
            java.lang.String r0 = r3.ql
            if (r0 == 0) goto L86
            java.lang.String r0 = r3.ql
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L86
            java.lang.String r0 = r3.ql
            java.lang.String r2 = "iconUrl"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L86:
            java.lang.String r0 = r3.qm
            if (r0 == 0) goto L99
            java.lang.String r0 = r3.qm
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L99
            java.lang.String r0 = r3.qm
            java.lang.String r2 = "desc"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L99:
            java.lang.String r0 = r3.qn
            if (r0 == 0) goto Lac
            java.lang.String r0 = r3.qn
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lac
            java.lang.String r0 = r3.qn
            java.lang.String r2 = "descTxt"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        Lac:
            java.lang.String r0 = r3.qo
            if (r0 == 0) goto Lbf
            java.lang.String r0 = r3.qo
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lbf
            java.lang.String r3 = r3.qo
            java.lang.String r0 = "currentPlayTime"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        Lbf:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.k$c r1 = (com.kwad.components.ad.reward.k.c) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.reward.k$c r1 = (com.kwad.components.ad.reward.k.c) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
