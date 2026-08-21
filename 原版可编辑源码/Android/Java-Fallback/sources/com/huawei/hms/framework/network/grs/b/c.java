package com.huawei.hms.framework.network.grs.b;

public class c extends com.huawei.hms.framework.network.grs.b.a {
    public c(android.content.Context r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r1.e = r3
            java.lang.String r3 = "grs_sdk_global_route_config.json"
            r0 = 0
            int r2 = r1.a(r3, r2, r0)
            if (r2 != 0) goto L11
            r2 = 1
            r1.d = r2
        L11:
            return
    }

    @Override
    public int a(java.lang.String r6) {
            r5 = this;
            com.huawei.hms.framework.network.grs.local.model.a r0 = new com.huawei.hms.framework.network.grs.local.model.a
            r0.<init>()
            r5.a = r0
            r0 = -1
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3b
            r1.<init>(r6)     // Catch: org.json.JSONException -> L3b
            java.lang.String r6 = "application"
            org.json.JSONObject r6 = r1.getJSONObject(r6)     // Catch: org.json.JSONException -> L3b
            java.lang.String r1 = "name"
            java.lang.String r1 = r6.getString(r1)     // Catch: org.json.JSONException -> L3b
            java.lang.String r2 = "cacheControl"
            long r2 = r6.getLong(r2)     // Catch: org.json.JSONException -> L3b
            java.lang.String r4 = "services"
            org.json.JSONArray r6 = r6.getJSONArray(r4)     // Catch: org.json.JSONException -> L3b
            com.huawei.hms.framework.network.grs.local.model.a r4 = r5.a     // Catch: org.json.JSONException -> L3b
            r4.b(r1)     // Catch: org.json.JSONException -> L3b
            com.huawei.hms.framework.network.grs.local.model.a r1 = r5.a     // Catch: org.json.JSONException -> L3b
            r1.a(r2)     // Catch: org.json.JSONException -> L3b
            if (r6 == 0) goto L3a
            int r6 = r6.length()     // Catch: org.json.JSONException -> L3b
            if (r6 != 0) goto L38
            goto L3a
        L38:
            r6 = 0
            return r6
        L3a:
            return r0
        L3b:
            r6 = move-exception
            java.lang.String r1 = "LocalManagerV1"
            java.lang.String r2 = "parse appbean failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r1, r2, r6)
            return r0
    }

    public java.util.List<com.huawei.hms.framework.network.grs.local.model.b> a(org.json.JSONArray r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r10 = "countriesOrAreas"
            java.lang.String r0 = "LocalManagerV1"
            if (r11 == 0) goto L99
            int r1 = r11.length()
            if (r1 != 0) goto Le
            goto L99
        Le:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r2 = 16
            r1.<init>(r2)     // Catch: org.json.JSONException -> L8d
            java.util.Iterator r3 = r11.keys()     // Catch: org.json.JSONException -> L8d
        L19:
            boolean r4 = r3.hasNext()     // Catch: org.json.JSONException -> L8d
            if (r4 == 0) goto L8c
            java.lang.Object r4 = r3.next()     // Catch: org.json.JSONException -> L8d
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L8d
            com.huawei.hms.framework.network.grs.local.model.b r5 = new com.huawei.hms.framework.network.grs.local.model.b     // Catch: org.json.JSONException -> L8d
            r5.<init>()     // Catch: org.json.JSONException -> L8d
            r5.b(r4)     // Catch: org.json.JSONException -> L8d
            org.json.JSONObject r4 = r11.getJSONObject(r4)     // Catch: org.json.JSONException -> L8d
            java.lang.String r6 = "name"
            java.lang.String r6 = r4.getString(r6)     // Catch: org.json.JSONException -> L8d
            r5.c(r6)     // Catch: org.json.JSONException -> L8d
            java.lang.String r6 = "description"
            java.lang.String r6 = r4.getString(r6)     // Catch: org.json.JSONException -> L8d
            r5.a(r6)     // Catch: org.json.JSONException -> L8d
            r6 = 0
            boolean r7 = r4.has(r10)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "countries"
            if (r7 == 0) goto L4e
            r8 = r10
            goto L54
        L4e:
            boolean r7 = r4.has(r8)     // Catch: org.json.JSONException -> L8d
            if (r7 == 0) goto L59
        L54:
            org.json.JSONArray r6 = r4.getJSONArray(r8)     // Catch: org.json.JSONException -> L8d
            goto L5e
        L59:
            java.lang.String r4 = "current country or area group has not config countries or areas."
            com.huawei.hms.framework.common.Logger.w(r0, r4)     // Catch: org.json.JSONException -> L8d
        L5e:
            java.util.HashSet r4 = new java.util.HashSet     // Catch: org.json.JSONException -> L8d
            r4.<init>(r2)     // Catch: org.json.JSONException -> L8d
            if (r6 == 0) goto L86
            int r7 = r6.length()     // Catch: org.json.JSONException -> L8d
            if (r7 != 0) goto L6c
            goto L86
        L6c:
            r7 = 0
        L6d:
            int r8 = r6.length()     // Catch: org.json.JSONException -> L8d
            if (r7 >= r8) goto L7f
            java.lang.Object r8 = r6.get(r7)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = (java.lang.String) r8     // Catch: org.json.JSONException -> L8d
            r4.add(r8)     // Catch: org.json.JSONException -> L8d
            int r7 = r7 + 1
            goto L6d
        L7f:
            r5.a(r4)     // Catch: org.json.JSONException -> L8d
            r1.add(r5)     // Catch: org.json.JSONException -> L8d
            goto L19
        L86:
            java.util.ArrayList r10 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r10.<init>()     // Catch: org.json.JSONException -> L8d
            return r10
        L8c:
            return r1
        L8d:
            r10 = move-exception
            java.lang.String r11 = "parse countryGroups failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r0, r11, r10)
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            return r10
        L99:
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            return r10
    }

    @Override
    public int b(java.lang.String r13) {
            r12 = this;
            java.lang.String r0 = "countriesOrAreas"
            java.lang.String r1 = "countryOrAreaGroups"
            java.lang.String r2 = "LocalManagerV1"
            java.util.ArrayList r3 = new java.util.ArrayList
            r4 = 16
            r3.<init>(r4)
            r12.b = r3
            r3 = -1
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> Lb0
            r5.<init>(r13)     // Catch: org.json.JSONException -> Lb0
            boolean r13 = r5.has(r1)     // Catch: org.json.JSONException -> Lb0
            java.lang.String r6 = "countryGroups"
            r7 = 0
            if (r13 == 0) goto L1f
            goto L26
        L1f:
            boolean r13 = r5.has(r6)     // Catch: org.json.JSONException -> Lb0
            if (r13 == 0) goto L2b
            r1 = r6
        L26:
            org.json.JSONObject r13 = r5.getJSONObject(r1)     // Catch: org.json.JSONException -> Lb0
            goto L31
        L2b:
            java.lang.String r13 = "maybe local config json is wrong because the default countryOrAreaGroups isn't config."
            com.huawei.hms.framework.common.Logger.e(r2, r13)     // Catch: org.json.JSONException -> Lb0
            r13 = r7
        L31:
            if (r13 != 0) goto L34
            return r3
        L34:
            int r1 = r13.length()     // Catch: org.json.JSONException -> Lb0
            r5 = 0
            if (r1 == 0) goto Laf
            java.util.Iterator r1 = r13.keys()     // Catch: org.json.JSONException -> Lb0
        L3f:
            boolean r6 = r1.hasNext()     // Catch: org.json.JSONException -> Lb0
            if (r6 == 0) goto Laf
            java.lang.Object r6 = r1.next()     // Catch: org.json.JSONException -> Lb0
            java.lang.String r6 = (java.lang.String) r6     // Catch: org.json.JSONException -> Lb0
            com.huawei.hms.framework.network.grs.local.model.b r8 = new com.huawei.hms.framework.network.grs.local.model.b     // Catch: org.json.JSONException -> Lb0
            r8.<init>()     // Catch: org.json.JSONException -> Lb0
            r8.b(r6)     // Catch: org.json.JSONException -> Lb0
            org.json.JSONObject r6 = r13.getJSONObject(r6)     // Catch: org.json.JSONException -> Lb0
            java.lang.String r9 = "name"
            java.lang.String r9 = r6.getString(r9)     // Catch: org.json.JSONException -> Lb0
            r8.c(r9)     // Catch: org.json.JSONException -> Lb0
            java.lang.String r9 = "description"
            java.lang.String r9 = r6.getString(r9)     // Catch: org.json.JSONException -> Lb0
            r8.a(r9)     // Catch: org.json.JSONException -> Lb0
            boolean r9 = r6.has(r0)     // Catch: org.json.JSONException -> Lb0
            java.lang.String r10 = "countries"
            if (r9 == 0) goto L73
            r10 = r0
            goto L79
        L73:
            boolean r9 = r6.has(r10)     // Catch: org.json.JSONException -> Lb0
            if (r9 == 0) goto L7e
        L79:
            org.json.JSONArray r6 = r6.getJSONArray(r10)     // Catch: org.json.JSONException -> Lb0
            goto L84
        L7e:
            java.lang.String r6 = "current country or area group has not config countries or areas."
            com.huawei.hms.framework.common.Logger.w(r2, r6)     // Catch: org.json.JSONException -> Lb0
            r6 = r7
        L84:
            java.util.HashSet r9 = new java.util.HashSet     // Catch: org.json.JSONException -> Lb0
            r9.<init>(r4)     // Catch: org.json.JSONException -> Lb0
            if (r6 == 0) goto Lae
            int r10 = r6.length()     // Catch: org.json.JSONException -> Lb0
            if (r10 != 0) goto L92
            goto Lae
        L92:
            r10 = r5
        L93:
            int r11 = r6.length()     // Catch: org.json.JSONException -> Lb0
            if (r10 >= r11) goto La5
            java.lang.Object r11 = r6.get(r10)     // Catch: org.json.JSONException -> Lb0
            java.lang.String r11 = (java.lang.String) r11     // Catch: org.json.JSONException -> Lb0
            r9.add(r11)     // Catch: org.json.JSONException -> Lb0
            int r10 = r10 + 1
            goto L93
        La5:
            r8.a(r9)     // Catch: org.json.JSONException -> Lb0
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r6 = r12.b     // Catch: org.json.JSONException -> Lb0
            r6.add(r8)     // Catch: org.json.JSONException -> Lb0
            goto L3f
        Lae:
            return r3
        Laf:
            return r5
        Lb0:
            r13 = move-exception
            java.lang.String r0 = "parse countrygroup failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r2, r0, r13)
            return r3
    }

    @Override
    public int e(java.lang.String r19) {
            r18 = this;
            r1 = r18
            java.lang.String r0 = "countryOrAreaGroup"
            java.lang.String r2 = "countryGroups"
            java.lang.String r3 = "countryOrAreaGroups"
            java.lang.String r4 = "LocalManagerV1"
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L106
            r6 = r19
            r5.<init>(r6)     // Catch: org.json.JSONException -> L106
            java.lang.String r6 = "services"
            org.json.JSONObject r5 = r5.getJSONObject(r6)     // Catch: org.json.JSONException -> L106
            java.util.Iterator r6 = r5.keys()     // Catch: org.json.JSONException -> L106
        L1b:
            boolean r7 = r6.hasNext()     // Catch: org.json.JSONException -> L106
            r8 = 0
            if (r7 == 0) goto L105
            java.lang.Object r7 = r6.next()     // Catch: org.json.JSONException -> L106
            java.lang.String r7 = (java.lang.String) r7     // Catch: org.json.JSONException -> L106
            com.huawei.hms.framework.network.grs.local.model.c r9 = new com.huawei.hms.framework.network.grs.local.model.c     // Catch: org.json.JSONException -> L106
            r9.<init>()     // Catch: org.json.JSONException -> L106
            r9.b(r7)     // Catch: org.json.JSONException -> L106
            java.util.Set<java.lang.String> r10 = r1.f     // Catch: org.json.JSONException -> L106
            boolean r10 = r10.contains(r7)     // Catch: org.json.JSONException -> L106
            if (r10 != 0) goto L1b
            java.util.Set<java.lang.String> r10 = r1.f     // Catch: org.json.JSONException -> L106
            r10.add(r7)     // Catch: org.json.JSONException -> L106
            boolean r10 = r1.e     // Catch: org.json.JSONException -> L106
            if (r10 == 0) goto L1b
            org.json.JSONObject r10 = r5.getJSONObject(r7)     // Catch: org.json.JSONException -> L106
            java.lang.String r11 = "routeBy"
            java.lang.String r11 = r10.getString(r11)     // Catch: org.json.JSONException -> L106
            r9.c(r11)     // Catch: org.json.JSONException -> L106
            java.lang.String r11 = "servings"
            org.json.JSONArray r11 = r10.getJSONArray(r11)     // Catch: org.json.JSONException -> L106
        L54:
            int r12 = r11.length()     // Catch: org.json.JSONException -> L106
            if (r8 >= r12) goto Lc8
            java.lang.Object r12 = r11.get(r8)     // Catch: org.json.JSONException -> L106
            org.json.JSONObject r12 = (org.json.JSONObject) r12     // Catch: org.json.JSONException -> L106
            com.huawei.hms.framework.network.grs.local.model.d r13 = new com.huawei.hms.framework.network.grs.local.model.d     // Catch: org.json.JSONException -> L106
            r13.<init>()     // Catch: org.json.JSONException -> L106
            boolean r14 = r12.has(r0)     // Catch: org.json.JSONException -> L106
            java.lang.String r15 = "countryGroup"
            if (r14 == 0) goto L6f
            r15 = r0
            goto L75
        L6f:
            boolean r14 = r12.has(r15)     // Catch: org.json.JSONException -> L106
            if (r14 == 0) goto L7a
        L75:
            java.lang.String r14 = r12.getString(r15)     // Catch: org.json.JSONException -> L106
            goto L81
        L7a:
            java.lang.String r14 = "maybe this service routeBy is unconditional."
            com.huawei.hms.framework.common.Logger.v(r4, r14)     // Catch: org.json.JSONException -> L106
            java.lang.String r14 = "no-country"
        L81:
            r13.a(r14)     // Catch: org.json.JSONException -> L106
            java.lang.String r14 = "addresses"
            org.json.JSONObject r12 = r12.getJSONObject(r14)     // Catch: org.json.JSONException -> L106
            java.util.HashMap r14 = new java.util.HashMap     // Catch: org.json.JSONException -> L106
            r15 = 16
            r14.<init>(r15)     // Catch: org.json.JSONException -> L106
            java.util.Iterator r15 = r12.keys()     // Catch: org.json.JSONException -> L106
        L95:
            boolean r16 = r15.hasNext()     // Catch: org.json.JSONException -> L106
            if (r16 == 0) goto Lb3
            java.lang.Object r16 = r15.next()     // Catch: org.json.JSONException -> L106
            r17 = r0
            r0 = r16
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L106
            r19 = r5
            java.lang.String r5 = r12.getString(r0)     // Catch: org.json.JSONException -> L106
            r14.put(r0, r5)     // Catch: org.json.JSONException -> L106
            r5 = r19
            r0 = r17
            goto L95
        Lb3:
            r17 = r0
            r19 = r5
            r13.a(r14)     // Catch: org.json.JSONException -> L106
            java.lang.String r0 = r13.b()     // Catch: org.json.JSONException -> L106
            r9.a(r0, r13)     // Catch: org.json.JSONException -> L106
            int r8 = r8 + 1
            r5 = r19
            r0 = r17
            goto L54
        Lc8:
            r17 = r0
            r19 = r5
            boolean r0 = r10.has(r3)     // Catch: org.json.JSONException -> L106
            r5 = 0
            if (r0 == 0) goto Ld8
            org.json.JSONObject r0 = r10.getJSONObject(r3)     // Catch: org.json.JSONException -> L106
            goto Le2
        Ld8:
            boolean r0 = r10.has(r2)     // Catch: org.json.JSONException -> L106
            if (r0 == 0) goto Le7
            org.json.JSONObject r0 = r10.getJSONObject(r2)     // Catch: org.json.JSONException -> L106
        Le2:
            java.util.List r5 = r1.a(r5, r0)     // Catch: org.json.JSONException -> L106
            goto Lec
        Le7:
            java.lang.String r0 = "service use default countryOrAreaGroup"
            com.huawei.hms.framework.common.Logger.v(r4, r0)     // Catch: org.json.JSONException -> L106
        Lec:
            r9.a(r5)     // Catch: org.json.JSONException -> L106
            com.huawei.hms.framework.network.grs.local.model.a r0 = r1.a     // Catch: org.json.JSONException -> L106
            if (r0 != 0) goto Lfa
            com.huawei.hms.framework.network.grs.local.model.a r0 = new com.huawei.hms.framework.network.grs.local.model.a     // Catch: org.json.JSONException -> L106
            r0.<init>()     // Catch: org.json.JSONException -> L106
            r1.a = r0     // Catch: org.json.JSONException -> L106
        Lfa:
            com.huawei.hms.framework.network.grs.local.model.a r0 = r1.a     // Catch: org.json.JSONException -> L106
            r0.a(r7, r9)     // Catch: org.json.JSONException -> L106
            r5 = r19
            r0 = r17
            goto L1b
        L105:
            return r8
        L106:
            r0 = move-exception
            java.lang.String r2 = "parse 1.0 services failed maybe because of json style.please check!"
            com.huawei.hms.framework.common.Logger.w(r4, r2, r0)
            r0 = -1
            return r0
    }
}
