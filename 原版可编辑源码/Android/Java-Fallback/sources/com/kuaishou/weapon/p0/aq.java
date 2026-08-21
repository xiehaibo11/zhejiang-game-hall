package com.kuaishou.weapon.p0;

public class aq {
    private org.json.JSONObject a;

    public aq(android.content.Context r4, int r5) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L29
            com.kuaishou.weapon.p0.jni.Engine r4 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.c     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L29
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L29
            r1 = 3
            java.lang.String r2 = ""
            java.lang.String r4 = r4.pqr(r0, r1, r5, r2)     // Catch: java.lang.Throwable -> L29
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L29
            if (r5 != 0) goto L29
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L29
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L29
            r3.a = r5     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            r1 = 0
            if (r0 == 0) goto La
            java.lang.String r3 = r0.optString(r3, r1)     // Catch: java.lang.Exception -> La
            return r3
        La:
            return r1
    }

    public java.util.Set b(java.lang.String r6) {
            r5 = this;
            org.json.JSONObject r0 = r5.a
            r1 = 0
            if (r0 == 0) goto L42
            java.lang.String r6 = r0.optString(r6, r1)     // Catch: java.lang.Exception -> L42
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L42
            if (r0 != 0) goto L42
            int r0 = r6.length()     // Catch: java.lang.Exception -> L42
            r2 = 3
            if (r0 <= r2) goto L42
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L42
            r0.<init>()     // Catch: java.lang.Exception -> L42
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L42
            r2.<init>(r6)     // Catch: java.lang.Exception -> L42
            r6 = 0
        L21:
            int r3 = r2.length()     // Catch: java.lang.Exception -> L42
            if (r6 >= r3) goto L41
            java.lang.Object r3 = r2.get(r6)     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L42
            r4 = 16
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3, r4)     // Catch: java.lang.Exception -> L42
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L42
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L42
            r0.add(r3)     // Catch: java.lang.Exception -> L42
            int r6 = r6 + 1
            goto L21
        L41:
            return r0
        L42:
            return r1
    }
}
