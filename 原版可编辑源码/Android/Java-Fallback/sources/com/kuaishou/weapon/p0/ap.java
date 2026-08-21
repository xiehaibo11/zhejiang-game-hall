package com.kuaishou.weapon.p0;

public class ap {
    private org.json.JSONObject a;

    public ap(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L29
            com.kuaishou.weapon.p0.jni.Engine r4 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.g     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L29
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = ""
            r2 = 0
            java.lang.String r4 = r4.pqr(r0, r2, r2, r1)     // Catch: java.lang.Throwable -> L29
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L29
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L29
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L29
            r3.a = r0     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    public org.json.JSONObject a(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L1b
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L1b
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L1b
            if (r0 != 0) goto L1b
            int r0 = r3.length()     // Catch: java.lang.Exception -> L1b
            r1 = 3
            if (r0 <= r1) goto L1b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r0.<init>(r3)     // Catch: java.lang.Exception -> L1b
            return r0
        L1b:
            r3 = 0
            return r3
    }

    public java.lang.String b(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            r1 = 0
            if (r0 == 0) goto L19
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L19
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L19
            if (r0 != 0) goto L19
            java.lang.String r0 = "{}"
            boolean r0 = r3.contains(r0)     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L18
            return r1
        L18:
            return r3
        L19:
            return r1
    }
}
