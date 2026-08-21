package com.huawei.hms.framework.network.grs.b;

public abstract class a {
    protected com.huawei.hms.framework.network.grs.local.model.a a;
    protected java.util.List<com.huawei.hms.framework.network.grs.local.model.b> b;
    protected java.util.Map<java.lang.String, java.lang.String> c;
    protected boolean d;
    protected boolean e;
    protected java.util.Set<java.lang.String> f;

    public a() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.c = r0
            r0 = 0
            r2.d = r0
            r2.e = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>(r1)
            r2.f = r0
            return
    }

    private int a(android.content.Context r9) {
            r8 = this;
            java.lang.String r0 = "AbstractLocalManager"
            android.content.res.AssetManager r1 = r9.getAssets()
            java.lang.String r2 = ""
            r3 = -1
            java.lang.String[] r1 = r1.list(r2)     // Catch: java.io.IOException -> L34
            if (r1 == 0) goto L39
            int r2 = r1.length     // Catch: java.io.IOException -> L34
            if (r2 <= 0) goto L39
            int r2 = r1.length     // Catch: java.io.IOException -> L34
            r4 = 0
            r5 = r4
        L15:
            if (r5 >= r2) goto L39
            r6 = r1[r5]     // Catch: java.io.IOException -> L34
            java.lang.String r7 = "^grs_sdk_global_route_config_[a-zA-Z]+\\.json$"
            boolean r7 = java.util.regex.Pattern.matches(r7, r6)     // Catch: java.io.IOException -> L34
            if (r7 == 0) goto L31
            java.lang.String r6 = com.huawei.hms.framework.network.grs.d.c.a(r6, r9)     // Catch: java.io.IOException -> L34
            int r6 = r8.g(r6)     // Catch: java.io.IOException -> L34
            if (r6 != 0) goto L31
            java.lang.String r6 = "load SDK_CONFIG_FILE sucess."
            com.huawei.hms.framework.common.Logger.i(r0, r6)     // Catch: java.io.IOException -> L34
            r3 = r4
        L31:
            int r5 = r5 + 1
            goto L15
        L34:
            java.lang.String r9 = "list assets files fail,please check if according to our standard config json files."
            com.huawei.hms.framework.common.Logger.w(r0, r9)
        L39:
            return r3
    }

    private int a(java.lang.String r1, android.content.Context r2) {
            r0 = this;
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.c.a(r1, r2)
            int r1 = r0.f(r1)
            if (r1 != 0) goto L13
            java.lang.String r1 = "AbstractLocalManager"
            java.lang.String r2 = "load APP_CONFIG_FILE success."
            com.huawei.hms.framework.common.Logger.i(r1, r2)
            r1 = 0
            goto L14
        L13:
            r1 = -1
        L14:
            return r1
    }

    private java.util.Map<java.lang.String, java.lang.String> a(java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r5, com.huawei.hms.framework.network.grs.GrsBaseInfo r6, java.lang.String r7) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            java.lang.String r1 = "no_route_country"
            java.lang.String r2 = "no-country"
            r0.put(r1, r2)
            java.util.Iterator r5 = r5.iterator()
        L12:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L82
            java.lang.Object r1 = r5.next()
            com.huawei.hms.framework.network.grs.local.model.b r1 = (com.huawei.hms.framework.network.grs.local.model.b) r1
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getIssueCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L37
            java.lang.String r2 = r6.getIssueCountry()
            java.lang.String r3 = r1.b()
            r0.put(r2, r3)
        L37:
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getRegCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L50
            java.lang.String r2 = r6.getRegCountry()
            java.lang.String r3 = r1.b()
            r0.put(r2, r3)
        L50:
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getSerCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L69
            java.lang.String r2 = r6.getSerCountry()
            java.lang.String r3 = r1.b()
            r0.put(r2, r3)
        L69:
            java.util.Set r2 = r1.a()
            boolean r2 = r2.contains(r7)
            if (r2 == 0) goto L12
            java.lang.String r2 = "AbstractLocalManager"
            java.lang.String r3 = "get countryGroupID from geoIp"
            com.huawei.hms.framework.common.Logger.v(r2, r3)
            java.lang.String r1 = r1.b()
            r0.put(r7, r1)
            goto L12
        L82:
            return r0
    }

    private int f(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = -1
            return r2
        L8:
            boolean r0 = r1.e
            if (r0 == 0) goto L13
            int r0 = r1.b(r2)
            if (r0 == 0) goto L13
            return r0
        L13:
            int r0 = r1.a(r2)
            if (r0 == 0) goto L1a
            return r0
        L1a:
            int r2 = r1.e(r2)
            return r2
    }

    private int g(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = -1
            return r2
        L8:
            boolean r0 = r1.e
            if (r0 == 0) goto L1d
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r0 = r1.b
            if (r0 == 0) goto L16
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1d
        L16:
            int r0 = r1.c(r2)
            if (r0 == 0) goto L1d
            return r0
        L1d:
            int r2 = r1.d(r2)
            return r2
    }

    public abstract int a(java.lang.String r1);

    int a(java.lang.String r1, android.content.Context r2, boolean r3) {
            r0 = this;
            int r1 = r0.a(r1, r2)
            if (r1 == 0) goto La
            if (r3 == 0) goto La
            r1 = -1
            return r1
        La:
            r0.a(r2)
            r1 = 0
            return r1
    }

    public com.huawei.hms.framework.network.grs.local.model.a a() {
            r1 = this;
            com.huawei.hms.framework.network.grs.local.model.a r0 = r1.a
            return r0
    }

    public java.lang.String a(android.content.Context r7, com.huawei.hms.framework.network.grs.a.a r8, com.huawei.hms.framework.network.grs.GrsBaseInfo r9, java.lang.String r10, java.lang.String r11, boolean r12) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            java.util.Map r7 = r0.a(r1, r2, r3, r4, r5)
            if (r7 != 0) goto L1b
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]
            r8 = 0
            r7[r8] = r10
            java.lang.String r8 = "AbstractLocalManager"
            java.lang.String r9 = "addresses not found by routeby in local config{%s}"
            com.huawei.hms.framework.common.Logger.w(r8, r9, r7)
            r7 = 0
            return r7
        L1b:
            java.lang.Object r7 = r7.get(r11)
            java.lang.String r7 = (java.lang.String) r7
            return r7
    }

    public java.util.List<com.huawei.hms.framework.network.grs.local.model.b> a(org.json.JSONArray r12) {
            r11 = this;
            java.lang.String r0 = "countriesOrAreas"
            java.lang.String r1 = "AbstractLocalManager"
            if (r12 == 0) goto L99
            int r2 = r12.length()
            if (r2 != 0) goto Le
            goto L99
        Le:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r3 = 16
            r2.<init>(r3)     // Catch: org.json.JSONException -> L8d
            r4 = 0
            r5 = r4
        L17:
            int r6 = r12.length()     // Catch: org.json.JSONException -> L8d
            if (r5 >= r6) goto L8c
            org.json.JSONObject r6 = r12.getJSONObject(r5)     // Catch: org.json.JSONException -> L8d
            com.huawei.hms.framework.network.grs.local.model.b r7 = new com.huawei.hms.framework.network.grs.local.model.b     // Catch: org.json.JSONException -> L8d
            r7.<init>()     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "id"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.b(r8)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "name"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.c(r8)     // Catch: org.json.JSONException -> L8d
            java.lang.String r8 = "description"
            java.lang.String r8 = r6.getString(r8)     // Catch: org.json.JSONException -> L8d
            r7.a(r8)     // Catch: org.json.JSONException -> L8d
            r8 = 0
            boolean r9 = r6.has(r0)     // Catch: org.json.JSONException -> L8d
            java.lang.String r10 = "countries"
            if (r9 == 0) goto L4c
            r10 = r0
            goto L52
        L4c:
            boolean r9 = r6.has(r10)     // Catch: org.json.JSONException -> L8d
            if (r9 == 0) goto L57
        L52:
            org.json.JSONArray r8 = r6.getJSONArray(r10)     // Catch: org.json.JSONException -> L8d
            goto L5c
        L57:
            java.lang.String r6 = "current country or area group has not config countries or areas."
            com.huawei.hms.framework.common.Logger.w(r1, r6)     // Catch: org.json.JSONException -> L8d
        L5c:
            java.util.HashSet r6 = new java.util.HashSet     // Catch: org.json.JSONException -> L8d
            r6.<init>(r3)     // Catch: org.json.JSONException -> L8d
            if (r8 == 0) goto L86
            int r9 = r8.length()     // Catch: org.json.JSONException -> L8d
            if (r9 != 0) goto L6a
            goto L86
        L6a:
            r9 = r4
        L6b:
            int r10 = r8.length()     // Catch: org.json.JSONException -> L8d
            if (r9 >= r10) goto L7d
            java.lang.Object r10 = r8.get(r9)     // Catch: org.json.JSONException -> L8d
            java.lang.String r10 = (java.lang.String) r10     // Catch: org.json.JSONException -> L8d
            r6.add(r10)     // Catch: org.json.JSONException -> L8d
            int r9 = r9 + 1
            goto L6b
        L7d:
            r7.a(r6)     // Catch: org.json.JSONException -> L8d
            r2.add(r7)     // Catch: org.json.JSONException -> L8d
            int r5 = r5 + 1
            goto L17
        L86:
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: org.json.JSONException -> L8d
            r12.<init>()     // Catch: org.json.JSONException -> L8d
            return r12
        L8c:
            return r2
        L8d:
            r12 = move-exception
            java.lang.String r0 = "parse countrygroup failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r1, r0, r12)
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            return r12
        L99:
            java.util.ArrayList r12 = new java.util.ArrayList
            r12.<init>()
            return r12
    }

    public java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r6, com.huawei.hms.framework.network.grs.a.a r7, com.huawei.hms.framework.network.grs.GrsBaseInfo r8, java.lang.String r9, boolean r10) {
            r5 = this;
            boolean r0 = r5.d
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.huawei.hms.framework.network.grs.local.model.a r0 = r5.a
            java.lang.String r2 = "AbstractLocalManager"
            if (r0 != 0) goto L12
            java.lang.String r6 = "application data is null."
            com.huawei.hms.framework.common.Logger.w(r2, r6)
            return r1
        L12:
            com.huawei.hms.framework.network.grs.local.model.c r0 = r0.a(r9)
            r3 = 0
            r4 = 1
            if (r0 != 0) goto L24
            java.lang.Object[] r6 = new java.lang.Object[r4]
            r6[r3] = r9
            java.lang.String r7 = "service not found in local config{%s}"
            com.huawei.hms.framework.common.Logger.w(r2, r7, r6)
            return r1
        L24:
            java.lang.String r9 = r0.b()
            java.lang.String r6 = com.huawei.hms.framework.network.grs.b.f.a(r6, r7, r9, r8, r10)
            if (r6 != 0) goto L3c
            java.lang.Object[] r6 = new java.lang.Object[r4]
            java.lang.String r7 = r0.b()
            r6[r3] = r7
            java.lang.String r7 = "country not found by routeby in local config{%s}"
            com.huawei.hms.framework.common.Logger.w(r2, r7, r6)
            return r1
        L3c:
            java.util.List r7 = r0.a()
            if (r7 == 0) goto L4d
            int r9 = r7.size()
            if (r9 == 0) goto L4d
            java.util.Map r7 = r5.a(r7, r8, r6)
            goto L4f
        L4d:
            java.util.Map<java.lang.String, java.lang.String> r7 = r5.c
        L4f:
            java.lang.Object r6 = r7.get(r6)
            java.lang.String r6 = (java.lang.String) r6
            com.huawei.hms.framework.network.grs.local.model.d r6 = r0.a(r6)
            if (r6 != 0) goto L5c
            return r1
        L5c:
            java.util.Map r6 = r6.a()
            return r6
    }

    public void a(com.huawei.hms.framework.network.grs.GrsBaseInfo r6) {
            r5 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.c
            java.lang.String r1 = "no_route_country"
            java.lang.String r2 = "no-country"
            r0.put(r1, r2)
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r0 = r5.b
            if (r0 == 0) goto L7b
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L14
            goto L7b
        L14:
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r0 = r5.b
            java.util.Iterator r0 = r0.iterator()
        L1a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L78
            java.lang.Object r1 = r0.next()
            com.huawei.hms.framework.network.grs.local.model.b r1 = (com.huawei.hms.framework.network.grs.local.model.b) r1
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getIssueCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L41
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.c
            java.lang.String r3 = r6.getIssueCountry()
            java.lang.String r4 = r1.b()
            r2.put(r3, r4)
        L41:
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getRegCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L5c
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.c
            java.lang.String r3 = r6.getRegCountry()
            java.lang.String r4 = r1.b()
            r2.put(r3, r4)
        L5c:
            java.util.Set r2 = r1.a()
            java.lang.String r3 = r6.getSerCountry()
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L1a
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.c
            java.lang.String r3 = r6.getSerCountry()
            java.lang.String r1 = r1.b()
            r2.put(r3, r1)
            goto L1a
        L78:
            r6 = 0
            r5.b = r6
        L7b:
            return
    }

    public abstract int b(java.lang.String r1);

    public java.util.Set<java.lang.String> b() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.f
            return r0
    }

    protected void b(org.json.JSONArray r14) {
            r13 = this;
            if (r14 == 0) goto Le1
            int r0 = r14.length()
            if (r0 != 0) goto La
            goto Le1
        La:
            r0 = 0
            r1 = r0
        Lc:
            int r2 = r14.length()
            if (r1 >= r2) goto Le1
            org.json.JSONObject r2 = r14.getJSONObject(r1)
            com.huawei.hms.framework.network.grs.local.model.c r3 = new com.huawei.hms.framework.network.grs.local.model.c
            r3.<init>()
            java.lang.String r4 = "name"
            java.lang.String r4 = r2.getString(r4)
            r3.b(r4)
            java.util.Set<java.lang.String> r5 = r13.f
            boolean r5 = r5.contains(r4)
            if (r5 != 0) goto Ldd
            java.util.Set<java.lang.String> r5 = r13.f
            r5.add(r4)
            boolean r5 = r13.e
            if (r5 == 0) goto Ldd
            java.lang.String r5 = "routeBy"
            java.lang.String r5 = r2.getString(r5)
            r3.c(r5)
            java.lang.String r5 = "servings"
            org.json.JSONArray r5 = r2.getJSONArray(r5)
            r6 = r0
        L45:
            int r7 = r5.length()
            java.lang.String r8 = "AbstractLocalManager"
            if (r6 >= r7) goto Laa
            java.lang.Object r7 = r5.get(r6)
            org.json.JSONObject r7 = (org.json.JSONObject) r7
            com.huawei.hms.framework.network.grs.local.model.d r9 = new com.huawei.hms.framework.network.grs.local.model.d
            r9.<init>()
            java.lang.String r10 = "countryOrAreaGroup"
            boolean r11 = r7.has(r10)
            if (r11 == 0) goto L65
        L60:
            java.lang.String r8 = r7.getString(r10)
            goto L75
        L65:
            java.lang.String r10 = "countryGroup"
            boolean r11 = r7.has(r10)
            if (r11 == 0) goto L6e
            goto L60
        L6e:
            java.lang.String r10 = "maybe this service routeBy is unconditional."
            com.huawei.hms.framework.common.Logger.v(r8, r10)
            java.lang.String r8 = "no-country"
        L75:
            r9.a(r8)
            java.lang.String r8 = "addresses"
            org.json.JSONObject r7 = r7.getJSONObject(r8)
            java.util.HashMap r8 = new java.util.HashMap
            r10 = 16
            r8.<init>(r10)
            java.util.Iterator r10 = r7.keys()
        L89:
            boolean r11 = r10.hasNext()
            if (r11 == 0) goto L9d
            java.lang.Object r11 = r10.next()
            java.lang.String r11 = (java.lang.String) r11
            java.lang.String r12 = r7.getString(r11)
            r8.put(r11, r12)
            goto L89
        L9d:
            r9.a(r8)
            java.lang.String r7 = r9.b()
            r3.a(r7, r9)
            int r6 = r6 + 1
            goto L45
        Laa:
            r5 = 0
            java.lang.String r6 = "countryOrAreaGroups"
            boolean r7 = r2.has(r6)
            if (r7 == 0) goto Lbc
        Lb3:
            org.json.JSONArray r2 = r2.getJSONArray(r6)
            java.util.List r5 = r13.a(r2)
            goto Lca
        Lbc:
            java.lang.String r6 = "countryGroups"
            boolean r7 = r2.has(r6)
            if (r7 == 0) goto Lc5
            goto Lb3
        Lc5:
            java.lang.String r2 = "service use default countryOrAreaGroup"
            com.huawei.hms.framework.common.Logger.i(r8, r2)
        Lca:
            r3.a(r5)
            com.huawei.hms.framework.network.grs.local.model.a r2 = r13.a
            if (r2 != 0) goto Ld8
            com.huawei.hms.framework.network.grs.local.model.a r2 = new com.huawei.hms.framework.network.grs.local.model.a
            r2.<init>()
            r13.a = r2
        Ld8:
            com.huawei.hms.framework.network.grs.local.model.a r2 = r13.a
            r2.a(r4, r3)
        Ldd:
            int r1 = r1 + 1
            goto Lc
        Le1:
            return
    }

    public int c(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "countryOrAreaGroups"
            java.lang.String r1 = "AbstractLocalManager"
            java.util.ArrayList r2 = new java.util.ArrayList
            r3 = 16
            r2.<init>(r3)
            r6.b = r2
            r2 = -1
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L3c
            r3.<init>(r7)     // Catch: org.json.JSONException -> L3c
            r7 = 0
            boolean r4 = r3.has(r0)     // Catch: org.json.JSONException -> L3c
            java.lang.String r5 = "countryGroups"
            if (r4 == 0) goto L1d
            goto L24
        L1d:
            boolean r0 = r3.has(r5)     // Catch: org.json.JSONException -> L3c
            if (r0 == 0) goto L29
            r0 = r5
        L24:
            org.json.JSONArray r7 = r3.getJSONArray(r0)     // Catch: org.json.JSONException -> L3c
            goto L2e
        L29:
            java.lang.String r0 = "maybe local config json is wrong because the default countryOrAreaGroups isn't config."
            com.huawei.hms.framework.common.Logger.e(r1, r0)     // Catch: org.json.JSONException -> L3c
        L2e:
            if (r7 != 0) goto L31
            return r2
        L31:
            java.util.List<com.huawei.hms.framework.network.grs.local.model.b> r0 = r6.b     // Catch: org.json.JSONException -> L3c
            java.util.List r7 = r6.a(r7)     // Catch: org.json.JSONException -> L3c
            r0.addAll(r7)     // Catch: org.json.JSONException -> L3c
            r7 = 0
            return r7
        L3c:
            r7 = move-exception
            java.lang.String r0 = "parse countrygroup failed maybe json style is wrong."
            com.huawei.hms.framework.common.Logger.w(r1, r0, r7)
            return r2
    }

    public boolean c() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public int d(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>(r3)     // Catch: org.json.JSONException -> L10
            java.lang.String r3 = "services"
            org.json.JSONArray r3 = r0.getJSONArray(r3)     // Catch: org.json.JSONException -> L10
            r2.b(r3)     // Catch: org.json.JSONException -> L10
            r3 = 0
            return r3
        L10:
            r3 = move-exception
            java.lang.String r0 = "AbstractLocalManager"
            java.lang.String r1 = "parse 2.0 services failed maybe because of json style.please check!"
            com.huawei.hms.framework.common.Logger.w(r0, r1, r3)
            r3 = -1
            return r3
    }

    public abstract int e(java.lang.String r1);
}
