package com.huawei.updatesdk.b.e;

public class b extends com.huawei.updatesdk.b.e.a {
    private java.lang.String a;

    public b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            return
    }

    private java.lang.String a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            android.content.res.AssetManager r4 = r4.getAssets()
            java.io.InputStream r4 = r4.open(r5)
            int r5 = r4.available()
            byte[] r5 = new byte[r5]
            int r0 = r4.read(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "loadJSONFromAsset code: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AppTouchTaskInit"
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            r4.close()
            java.lang.String r4 = new java.lang.String
            java.lang.String r0 = "UTF-8"
            r4.<init>(r5, r0)
            return r4
    }

    @Override
    java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "com.huawei.apptouch.updatesdk"
            return r0
    }

    @Override
    java.lang.String a(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = r4.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r5 = r4.a
            return r5
        Lb:
            java.lang.String r0 = "grs_sdk_global_route_config_apptouchupdatesdk.json"
            java.lang.String r5 = r4.a(r5, r0)     // Catch: java.lang.Exception -> L50
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L50
            r0.<init>(r5)     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = "services"
            org.json.JSONArray r5 = r0.getJSONArray(r5)     // Catch: java.lang.Exception -> L50
            r0 = 0
            org.json.JSONObject r5 = r5.getJSONObject(r0)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "servings"
            org.json.JSONArray r5 = r5.getJSONArray(r1)     // Catch: java.lang.Exception -> L50
        L27:
            int r1 = r5.length()     // Catch: java.lang.Exception -> L50
            if (r0 >= r1) goto L57
            org.json.JSONObject r1 = r5.getJSONObject(r0)     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = "countryOrAreaGroup"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r3 = "DR3"
            boolean r2 = android.text.TextUtils.equals(r3, r2)     // Catch: java.lang.Exception -> L50
            if (r2 == 0) goto L4d
            java.lang.String r2 = "addresses"
            org.json.JSONObject r1 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = "ROOT"
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L50
            r4.a = r1     // Catch: java.lang.Exception -> L50
        L4d:
            int r0 = r0 + 1
            goto L27
        L50:
            java.lang.String r5 = "AppTouchTaskInit"
            java.lang.String r0 = "Failed to obtain the default url."
            com.huawei.updatesdk.a.a.a.a(r5, r0)
        L57:
            java.lang.String r5 = r4.a
            return r5
    }

    @Override
    public void a(java.util.List<java.lang.String> r1) {
            r0 = this;
            return
    }

    @Override
    public java.lang.String b() {
            r1 = this;
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r0 = r0.c()
            return r0
    }

    @Override
    public boolean d() {
            r1 = this;
            r0 = 1
            return r0
    }
}
