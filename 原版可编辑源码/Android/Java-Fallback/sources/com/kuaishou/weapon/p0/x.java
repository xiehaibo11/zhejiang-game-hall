package com.kuaishou.weapon.p0;

public class x {
    public x() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.json.JSONArray a(android.content.Context r8) {
            r7 = this;
            r8 = 0
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L8b
            r0.<init>()     // Catch: java.lang.Exception -> L8b
            java.lang.String r1 = com.kuaishou.weapon.p0.bg.d()     // Catch: java.lang.Exception -> L8b
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L8b
            if (r2 != 0) goto L8b
            java.lang.String r2 = "RISK"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L8b
            if (r2 == 0) goto L19
            goto L8b
        L19:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L8b
            r2.<init>(r1)     // Catch: java.lang.Exception -> L8b
            r1 = 0
        L1f:
            int r3 = r2.length()     // Catch: java.lang.Exception -> L8b
            if (r1 >= r3) goto L8a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L8b
            r3.<init>()     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "1"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "appName"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "2"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "pkgName"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "3"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "appVersion"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "5"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "system_app"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "6"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "firstInstallTime"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            java.lang.String r4 = "7"
            org.json.JSONObject r5 = r2.getJSONObject(r1)     // Catch: java.lang.Exception -> L8b
            java.lang.String r6 = "lastUpdateTime"
            java.lang.String r5 = r5.getString(r6)     // Catch: java.lang.Exception -> L8b
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L8b
            r0.put(r3)     // Catch: java.lang.Exception -> L8b
            int r1 = r1 + 1
            goto L1f
        L8a:
            return r0
        L8b:
            return r8
    }
}
