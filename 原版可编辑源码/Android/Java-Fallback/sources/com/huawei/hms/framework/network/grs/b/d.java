package com.huawei.hms.framework.network.grs.b;

public class d extends com.huawei.hms.framework.network.grs.b.a {
    public d(android.content.Context r3, boolean r4) {
            r2 = this;
            r2.<init>()
            r2.e = r4
            com.huawei.hms.framework.network.grs.GrsApp r4 = com.huawei.hms.framework.network.grs.GrsApp.getInstance()
            java.lang.String r4 = r4.getAppConfigName()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "appConfigName is"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "LocalManagerV2"
            com.huawei.hms.framework.common.Logger.i(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L2b
            java.lang.String r4 = "grs_app_global_route_config.json"
        L2b:
            r0 = 1
            int r3 = r2.a(r4, r3, r0)
            if (r3 != 0) goto L34
            r2.d = r0
        L34:
            return
    }

    @Override
    public int a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "customservices"
            com.huawei.hms.framework.network.grs.local.model.a r1 = new com.huawei.hms.framework.network.grs.local.model.a
            r1.<init>()
            r5.a = r1
            r1 = -1
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L43
            r2.<init>(r6)     // Catch: org.json.JSONException -> L43
            java.lang.String r6 = "applications"
            org.json.JSONArray r6 = r2.getJSONArray(r6)     // Catch: org.json.JSONException -> L43
            r2 = 0
            org.json.JSONObject r6 = r6.getJSONObject(r2)     // Catch: org.json.JSONException -> L43
            java.lang.String r3 = "name"
            java.lang.String r3 = r6.getString(r3)     // Catch: org.json.JSONException -> L43
            com.huawei.hms.framework.network.grs.local.model.a r4 = r5.a     // Catch: org.json.JSONException -> L43
            r4.b(r3)     // Catch: org.json.JSONException -> L43
            java.lang.String r3 = "services"
            org.json.JSONArray r3 = r6.getJSONArray(r3)     // Catch: org.json.JSONException -> L43
            if (r3 == 0) goto L42
            int r3 = r3.length()     // Catch: org.json.JSONException -> L43
            if (r3 != 0) goto L34
            goto L42
        L34:
            boolean r3 = r6.has(r0)     // Catch: org.json.JSONException -> L43
            if (r3 == 0) goto L41
            org.json.JSONArray r6 = r6.getJSONArray(r0)     // Catch: org.json.JSONException -> L43
            r5.b(r6)     // Catch: org.json.JSONException -> L43
        L41:
            return r2
        L42:
            return r1
        L43:
            r6 = move-exception
            java.lang.String r0 = "LocalManagerV2"
            java.lang.String r2 = "parse appbean failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r0, r2, r6)
            return r1
    }

    @Override
    public int b(java.lang.String r13) {
            r12 = this;
            java.lang.String r0 = "countriesOrAreas"
            java.lang.String r1 = "countryOrAreaGroups"
            java.lang.String r2 = "LocalManagerV2"
            java.util.ArrayList r3 = new java.util.ArrayList
            r4 = 16
            r3.<init>(r4)
            r12.b = r3
            r3 = -1
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> Laf
            r5.<init>(r13)     // Catch: org.json.JSONException -> Laf
            boolean r13 = r5.has(r1)     // Catch: org.json.JSONException -> Laf
            java.lang.String r6 = "countryGroups"
            r7 = 0
            if (r13 == 0) goto L1f
            goto L26
        L1f:
            boolean r13 = r5.has(r6)     // Catch: org.json.JSONException -> Laf
            if (r13 == 0) goto L2b
            r1 = r6
        L26:
            org.json.JSONArray r13 = r5.getJSONArray(r1)     // Catch: org.json.JSONException -> Laf
            goto L31
        L2b:
            java.lang.String r13 = "maybe local config json is wrong because the default countryOrAreaGroups isn't config."
            com.huawei.hms.framework.common.Logger.e(r2, r13)     // Catch: org.json.JSONException -> Laf
            r13 = r7
        L31:
            if (r13 != 0) goto L34
            return r3
        L34:
            int r1 = r13.length()     // Catch: org.json.JSONException -> Laf
            r5 = 0
            if (r1 == 0) goto Lae
            r1 = r5
        L3c:
            int r6 = r13.length()     // Catch: org.json.JSONException -> Laf
            if (r1 >= r6) goto Lae
            org.json.JSONObject r6 = r13.getJSONObject(r1)     // Catch: org.json.JSONException -> Laf
            com.huawei.hms.framework.network.grs.local.model.b r8 = new com.huawei.hms.framework.network.grs.local.model.b     // Catch: org.json.JSONException -> Laf
            r8.<init>()     // Catch: org.json.JSONException -> Laf
            java.lang.String r9 = "id"
            java.lang.String r9 = r6.getString(r9)     // Catch: org.json.JSONException -> Laf
            r8.b(r9)     // Catch: org.json.JSONException -> Laf
            java.lang.String r9 = "name"
            java.lang.String r9 = r6.getString(r9)     // Catch: org.json.JSONException -> Laf
            r8.c(r9)     // Catch: org.json.JSONException -> Laf
            java.lang.String r9 = "description"
            java.lang.String r9 = r6.getString(r9)     // Catch: org.json.JSONException -> Laf
            r8.a(r9)     // Catch: org.json.JSONException -> Laf
            boolean r9 = r6.has(r0)     // Catch: org.json.JSONException -> Laf
            java.lang.String r10 = "countries"
            if (r9 == 0) goto L70
            r10 = r0
            goto L76
        L70:
            boolean r9 = r6.has(r10)     // Catch: org.json.JSONException -> Laf
            if (r9 == 0) goto L7b
        L76:
            org.json.JSONArray r6 = r6.getJSONArray(r10)     // Catch: org.json.JSONException -> Laf
            goto L81
        L7b:
            java.lang.String r6 = "current country or area group has not config countries or areas."
            com.huawei.hms.framework.common.Logger.w(r2, r6)     // Catch: org.json.JSONException -> Laf
            r6 = r7
        L81:
            java.util.HashSet r9 = new java.util.HashSet     // Catch: org.json.JSONException -> Laf
            r9.<init>(r4)     // Catch: org.json.JSONException -> Laf
            if (r6 == 0) goto Lad
            int r10 = r6.length()     // Catch: org.json.JSONException -> Laf
            if (r10 != 0) goto L8f
            goto Lad
        L8f:
            r10 = r5
        L90:
            int r11 = r6.length()     // Catch: org.json.JSONException -> Laf
            if (r10 >= r11) goto La2
            java.lang.Object r11 = r6.get(r10)     // Catch: org.json.JSONException -> Laf
            java.lang.String r11 = (java.lang.String) r11     // Catch: org.json.JSONException -> Laf
            r9.add(r11)     // Catch: org.json.JSONException -> Laf
            int r10 = r10 + 1
            goto L90
        La2:
            r8.a(r9)     // Catch: org.json.JSONException -> Laf
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r6 = r12.b     // Catch: org.json.JSONException -> Laf
            r6.add(r8)     // Catch: org.json.JSONException -> Laf
            int r1 = r1 + 1
            goto L3c
        Lad:
            return r3
        Lae:
            return r5
        Laf:
            r13 = move-exception
            java.lang.String r0 = "parse countrygroup failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r2, r0, r13)
            return r3
    }

    @Override
    public int e(java.lang.String r1) {
            r0 = this;
            int r1 = r0.d(r1)
            return r1
    }
}
