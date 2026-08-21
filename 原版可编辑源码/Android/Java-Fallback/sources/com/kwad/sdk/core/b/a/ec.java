package com.kwad.sdk.core.b.a;

public final class ec implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.HttpDnsInfo> {
    public ec() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.HttpDnsInfo r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.recommendList = r0
            java.lang.String r0 = "recommendList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L2e
            r2 = r1
        L14:
            int r3 = r0.length()
            if (r2 >= r3) goto L2e
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r3 = new com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r2)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = r5.recommendList
            r4.add(r3)
            int r2 = r2 + 1
            goto L14
        L2e:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.backUpList = r0
            java.lang.String r0 = "backUpList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L58
            r2 = r1
        L3e:
            int r3 = r0.length()
            if (r2 >= r3) goto L58
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r3 = new com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r2)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r4 = r5.backUpList
            r4.add(r3)
            int r2 = r2 + 1
            goto L3e
        L58:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.otherList = r0
            java.lang.String r0 = "otherList"
            org.json.JSONArray r6 = r6.optJSONArray(r0)
            if (r6 == 0) goto L81
        L67:
            int r0 = r6.length()
            if (r1 >= r0) goto L81
            com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo r0 = new com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo
            r0.<init>()
            org.json.JSONObject r2 = r6.optJSONObject(r1)
            r0.parseJson(r2)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r2 = r5.otherList
            r2.add(r0)
            int r1 = r1 + 1
            goto L67
        L81:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.HttpDnsInfo r2, org.json.JSONObject r3) {
            if (r3 != 0) goto L7
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
        L7:
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = r2.recommendList
            java.lang.String r1 = "recommendList"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r0 = r2.backUpList
            java.lang.String r1 = "backUpList"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo$IpInfo> r2 = r2.otherList
            java.lang.String r0 = "otherList"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.HttpDnsInfo r1 = (com.kwad.sdk.core.response.model.HttpDnsInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.HttpDnsInfo r1 = (com.kwad.sdk.core.response.model.HttpDnsInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
