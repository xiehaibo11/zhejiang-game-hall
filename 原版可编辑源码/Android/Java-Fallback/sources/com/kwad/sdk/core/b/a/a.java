package com.kwad.sdk.core.b.a;

public final class a implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.ABParams> {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.ABParams r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "videoBlackAreaClick"
            int r0 = r3.optInt(r0)
            r2.videoBlackAreaClick = r0
            java.lang.String r0 = "videoBlackAreaNewStyle"
            int r0 = r3.optInt(r0)
            r2.videoBlackAreaNewStyle = r0
            java.lang.String r0 = "drawActionBarTimes"
            java.lang.String r0 = r3.optString(r0)
            r2.drawActionBarTimes = r0
            java.lang.String r0 = r2.drawActionBarTimes
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            java.lang.String r0 = ""
            r2.drawActionBarTimes = r0
        L25:
            java.lang.String r0 = "showVideoAtH5"
            int r0 = r3.optInt(r0)
            r2.showVideoAtH5 = r0
            java.lang.String r0 = "playableStyle"
            int r3 = r3.optInt(r0)
            r2.playableStyle = r3
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.ABParams r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            int r0 = r2.videoBlackAreaClick
            if (r0 == 0) goto L12
            int r0 = r2.videoBlackAreaClick
            java.lang.String r1 = "videoBlackAreaClick"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L12:
            int r0 = r2.videoBlackAreaNewStyle
            if (r0 == 0) goto L1d
            int r0 = r2.videoBlackAreaNewStyle
            java.lang.String r1 = "videoBlackAreaNewStyle"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L1d:
            java.lang.String r0 = r2.drawActionBarTimes
            if (r0 == 0) goto L32
            java.lang.String r0 = r2.drawActionBarTimes
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L32
            java.lang.String r0 = r2.drawActionBarTimes
            java.lang.String r1 = "drawActionBarTimes"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L32:
            int r0 = r2.showVideoAtH5
            if (r0 == 0) goto L3d
            int r0 = r2.showVideoAtH5
            java.lang.String r1 = "showVideoAtH5"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
        L3d:
            int r0 = r2.playableStyle
            if (r0 == 0) goto L48
            int r2 = r2.playableStyle
            java.lang.String r0 = "playableStyle"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L48:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.ABParams r1 = (com.kwad.sdk.core.response.model.ABParams) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.ABParams r1 = (com.kwad.sdk.core.response.model.ABParams) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
