package com.kuaishou.weapon.p0;

public class bx {
    private org.json.JSONObject a;

    public bx(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L1c
            com.kuaishou.weapon.p0.jni.Engine r2 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r2)
            java.lang.String r2 = r2.cde()
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

    public org.json.JSONArray b(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            if (r0 == 0) goto L14
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L14
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L14
            if (r0 != 0) goto L14
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L14
            r0.<init>(r2)     // Catch: java.lang.Exception -> L14
            return r0
        L14:
            r2 = 0
            return r2
    }
}
