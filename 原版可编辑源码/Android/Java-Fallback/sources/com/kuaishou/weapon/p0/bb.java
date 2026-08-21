package com.kuaishou.weapon.p0;

public class bb {
    private org.json.JSONObject a;

    public bb(android.content.Context r3, java.lang.String r4, int r5) {
            r2 = this;
            r2.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L26
            com.kuaishou.weapon.p0.jni.Engine r3 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r3)     // Catch: java.lang.Throwable -> L26
            boolean r0 = com.kuaishou.weapon.p0.ct.a()     // Catch: java.lang.Throwable -> L26
            r1 = 0
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = r1
        L15:
            java.lang.String r3 = r3.pqr(r5, r1, r0, r4)     // Catch: java.lang.Throwable -> L26
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L26
            if (r4 != 0) goto L26
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L26
            r2.a = r4     // Catch: java.lang.Throwable -> L26
        L26:
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
}
