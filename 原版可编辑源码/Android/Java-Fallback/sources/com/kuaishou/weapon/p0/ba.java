package com.kuaishou.weapon.p0;

public class ba {
    private org.json.JSONObject a;
    private int b;

    public ba(android.content.Context r2, int r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L29
            if (r5 == 0) goto L29
            com.kuaishou.weapon.p0.jni.Engine r2 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r5 = com.kuaishou.weapon.p0.cj.f     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L29
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L29
            r0 = 0
            java.lang.String r2 = r2.pqr(r5, r0, r3, r4)     // Catch: java.lang.Throwable -> L29
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L29
            if (r3 != 0) goto L29
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L29
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L29
            r1.a = r3     // Catch: java.lang.Throwable -> L29
        L29:
            return
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L13
            r2 = 23
            if (r1 < r2) goto L11
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            int r3 = com.kuaishou.weapon.p0.g.a(r3, r1)     // Catch: java.lang.Exception -> L13
            r1 = -1
            if (r3 != r1) goto L11
            return r0
        L11:
            r3 = 1
            return r3
        L13:
            return r0
    }

    public int a() {
            r1 = this;
            int r0 = r1.b
            return r0
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

    public org.json.JSONObject b() {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            return r0
    }

    public org.json.JSONObject c() {
            r15 = this;
            java.lang.String r0 = "init.svc."
            java.lang.String r1 = "]:"
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = 0
            r15.b = r4
            r5 = 10
            r6 = 0
            java.lang.String r7 = "2afcabd3eda8ae"
            java.lang.String r8 = "077f"
            java.lang.String r7 = com.kuaishou.weapon.p0.i.a(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.Runtime r8 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> Lb5
            java.lang.Process r7 = r8.exec(r7)     // Catch: java.lang.Throwable -> Lb5
            java.io.InputStreamReader r8 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lb5
            java.io.InputStream r7 = r7.getInputStream()     // Catch: java.lang.Throwable -> Lb5
            r8.<init>(r7)     // Catch: java.lang.Throwable -> Lb5
            java.io.LineNumberReader r7 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> Lb3
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = r7.readLine()     // Catch: java.lang.Throwable -> Lb7
            r10 = r4
        L37:
            boolean r11 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lb7
            if (r11 != 0) goto L9d
            boolean r11 = r9.contains(r1)     // Catch: java.lang.Throwable -> Lb7
            r12 = 1
            if (r11 == 0) goto L93
            java.lang.String[] r9 = r9.split(r1)     // Catch: java.lang.Throwable -> Lb7
            int r11 = r9.length     // Catch: java.lang.Throwable -> Lb7
            r13 = 2
            if (r11 != r13) goto L93
            r11 = r9[r4]     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r11 = r11.trim()     // Catch: java.lang.Throwable -> Lb7
            r9 = r9[r12]     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r9 = r9.trim()     // Catch: java.lang.Throwable -> Lb7
            int r14 = r11.length()     // Catch: java.lang.Throwable -> Lb7
            if (r14 <= r13) goto L93
            int r14 = r9.length()     // Catch: java.lang.Throwable -> Lb7
            if (r14 <= r13) goto L93
            java.lang.String r11 = r11.substring(r12)     // Catch: java.lang.Throwable -> Lb7
            int r13 = r9.length()     // Catch: java.lang.Throwable -> Lb7
            int r13 = r13 - r12
            java.lang.String r9 = r9.substring(r12, r13)     // Catch: java.lang.Throwable -> Lb7
            boolean r13 = r11.startsWith(r0)     // Catch: java.lang.Throwable -> Lb7
            if (r13 == 0) goto L90
            java.lang.String r13 = "stopped"
            boolean r13 = r9.equals(r13)     // Catch: java.lang.Throwable -> Lb7
            if (r13 != 0) goto L87
            java.lang.String r13 = "running"
            boolean r13 = r9.equals(r13)     // Catch: java.lang.Throwable -> Lb7
            if (r13 == 0) goto L90
        L87:
            java.lang.String r13 = ""
            java.lang.String r13 = r11.replace(r0, r13)     // Catch: java.lang.Throwable -> Lb7
            r3.append(r13)     // Catch: java.lang.Throwable -> Lb7
        L90:
            r2.put(r11, r9)     // Catch: java.lang.Throwable -> Lb7
        L93:
            int r10 = r10 + r12
            r9 = 1300(0x514, float:1.822E-42)
            if (r10 > r9) goto L9d
            java.lang.String r9 = r7.readLine()     // Catch: java.lang.Throwable -> Lb7
            goto L37
        L9d:
            int r0 = r2.length()     // Catch: java.lang.Throwable -> Lb7
            if (r0 <= r5) goto Lac
            java.lang.String r0 = "n"
            int r1 = r2.length()     // Catch: java.lang.Throwable -> Lb7
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> Lb7
        Lac:
            r8.close()     // Catch: java.lang.Throwable -> Laf
        Laf:
            r7.close()     // Catch: java.io.IOException -> Lbf
            goto Lbf
        Lb3:
            r7 = r6
            goto Lb7
        Lb5:
            r7 = r6
            r8 = r7
        Lb7:
            if (r8 == 0) goto Lbc
            r8.close()     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            if (r7 == 0) goto Lbf
            goto Laf
        Lbf:
            int r0 = r2.length()
            if (r0 <= r5) goto Lc6
            return r2
        Lc6:
            return r6
    }
}
