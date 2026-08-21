package com.kuaishou.weapon.p0;

public class ce {
    private org.json.JSONObject a;

    public ce(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L1c
            com.kuaishou.weapon.p0.jni.Engine r2 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r2)
            java.lang.String r2 = r2.nop()
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1c
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1c
            r1.a = r0     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }

    public java.lang.String a(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public org.json.JSONArray b(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = "2"
            java.lang.String r1 = "1"
            org.json.JSONObject r2 = r7.a
            if (r2 == 0) goto L4e
            java.lang.String r8 = r2.getString(r8)     // Catch: java.lang.Exception -> L4e
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L4e
            if (r2 != 0) goto L4e
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L4e
            r2.<init>(r8)     // Catch: java.lang.Exception -> L4e
            int r8 = r2.length()     // Catch: java.lang.Throwable -> L4d
            if (r8 <= 0) goto L4d
            r8 = 0
        L1e:
            int r3 = r2.length()     // Catch: java.lang.Throwable -> L4d
            if (r8 >= r3) goto L4d
            org.json.JSONObject r3 = r2.getJSONObject(r8)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = r3.optString(r1)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = com.kuaishou.weapon.p0.f.a(r4)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = r3.optString(r0)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = com.kuaishou.weapon.p0.f.a(r5)     // Catch: java.lang.Throwable -> L4d
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L4d
            if (r6 != 0) goto L41
            r3.put(r1, r4)     // Catch: java.lang.Throwable -> L4d
        L41:
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L4d
            if (r4 != 0) goto L4a
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> L4d
        L4a:
            int r8 = r8 + 1
            goto L1e
        L4d:
            return r2
        L4e:
            r8 = 0
            return r8
    }
}
