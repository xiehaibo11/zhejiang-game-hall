package com.kuaishou.weapon.p0;

public class av {
    private org.json.JSONObject a;

    public av(android.content.Context r4, int r5) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L29
            com.kuaishou.weapon.p0.jni.Engine r4 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.c     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L29
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L29
            r1 = 4
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
            if (r0 == 0) goto L16
            java.lang.String r3 = r0.getString(r3)     // Catch: java.lang.Exception -> L16
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L16
            int r0 = r3.length()     // Catch: java.lang.Exception -> L16
            r1 = 2
            if (r0 <= r1) goto L16
            return r3
        L16:
            r3 = 0
            return r3
    }
}
