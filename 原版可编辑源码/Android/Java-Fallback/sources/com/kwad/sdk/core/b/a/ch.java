package com.kwad.sdk.core.b.a;

public final class ch implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo> {
    public ch() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.sceneConf = r0
            java.lang.String r0 = "sceneConf"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L28
            r2 = r1
        L14:
            int r3 = r0.length()
            if (r2 >= r3) goto L28
            java.util.List<java.lang.Integer> r3 = r5.sceneConf
            java.lang.Object r4 = r0.opt(r2)
            java.lang.Integer r4 = (java.lang.Integer) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L14
        L28:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.areaConf = r0
            java.lang.String r0 = "areaConf"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L4b
        L37:
            int r2 = r0.length()
            if (r1 >= r2) goto L4b
            java.util.List<java.lang.Integer> r2 = r5.areaConf
            java.lang.Object r3 = r0.opt(r1)
            java.lang.Integer r3 = (java.lang.Integer) r3
            r2.add(r3)
            int r1 = r1 + 1
            goto L37
        L4b:
            java.lang.String r0 = "url"
            java.lang.String r6 = r6.optString(r0)
            r5.url = r6
            java.lang.String r6 = r5.url
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r6 != r0) goto L5d
            java.lang.String r6 = ""
            r5.url = r6
        L5d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.util.List<java.lang.Integer> r0 = r2.sceneConf
            java.lang.String r1 = "sceneConf"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<java.lang.Integer> r0 = r2.areaConf
            java.lang.String r1 = "areaConf"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.lang.String r0 = r2.url
            if (r0 == 0) goto L2a
            java.lang.String r0 = r2.url
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2a
            java.lang.String r2 = r2.url
            java.lang.String r0 = "url"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
        L2a:
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
