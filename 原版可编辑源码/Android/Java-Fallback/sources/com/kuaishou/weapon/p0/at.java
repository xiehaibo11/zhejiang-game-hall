package com.kuaishou.weapon.p0;

public class at {
    private org.json.JSONObject a;
    private boolean b;
    private boolean c;

    public at(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L2b
            com.kuaishou.weapon.p0.jni.Engine r5 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r5)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.g     // Catch: java.lang.Throwable -> L2b
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L2b
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L2b
            r1 = 0
            r2 = 100
            java.lang.String r3 = ""
            java.lang.String r5 = r5.pqr(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L2b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2b
            if (r0 != 0) goto L2b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2b
            r4.a = r0     // Catch: java.lang.Throwable -> L2b
        L2b:
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

    public java.util.Set a(int r2) {
            r1 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            if (r2 != 0) goto Lc
            java.lang.String r2 = "/preas/chi"
            r0.add(r2)
        Lc:
            return r0
    }

    public java.util.Set a(android.content.Context r9, java.lang.String r10, int r11) {
            r8 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = r8.a
            if (r1 == 0) goto L87
            java.lang.String r10 = r1.getString(r10)     // Catch: java.lang.Exception -> L87
            java.util.Set r11 = r8.a(r11)     // Catch: java.lang.Exception -> L87
            boolean r1 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L87
            if (r1 != 0) goto L87
            int r1 = r10.length()     // Catch: java.lang.Exception -> L87
            r2 = 3
            if (r1 <= r2) goto L87
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L87
            r1.<init>(r10)     // Catch: java.lang.Exception -> L87
            java.util.HashSet r10 = new java.util.HashSet     // Catch: java.lang.Exception -> L87
            r10.<init>()     // Catch: java.lang.Exception -> L87
            r2 = 0
            r3 = r2
        L27:
            int r4 = r1.length()     // Catch: java.lang.Exception -> L87
            if (r3 >= r4) goto L80
            java.lang.String r4 = r1.getString(r3)     // Catch: java.lang.Exception -> L87
            java.lang.String r5 = " "
            java.lang.String r4 = r4.replaceAll(r5, r0)     // Catch: java.lang.Exception -> L87
            java.lang.String r5 = "\n"
            java.lang.String r4 = r4.replace(r5, r0)     // Catch: java.lang.Exception -> L87
            java.lang.String r5 = "\t"
            java.lang.String r4 = r4.replace(r5, r0)     // Catch: java.lang.Exception -> L87
            java.lang.String r5 = "\u200b"
            java.lang.String r4 = r4.replace(r5, r0)     // Catch: java.lang.Exception -> L87
            java.lang.String r5 = ":"
            boolean r5 = r4.startsWith(r5)     // Catch: java.lang.Exception -> L87
            if (r5 == 0) goto L56
            r5 = 1
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Exception -> L87
        L56:
            int r5 = r4.length()     // Catch: java.lang.Exception -> L87
            r6 = 10
            if (r5 <= r6) goto L63
            java.lang.String r5 = r4.substring(r2, r6)     // Catch: java.lang.Exception -> L87
            goto L64
        L63:
            r5 = r4
        L64:
            java.lang.String r6 = r9.getPackageName()     // Catch: java.lang.Exception -> L87
            boolean r7 = r4.contains(r6)     // Catch: java.lang.Exception -> L87
            if (r7 != 0) goto L7d
            boolean r6 = r6.contains(r4)     // Catch: java.lang.Exception -> L87
            if (r6 != 0) goto L7d
            boolean r5 = r11.contains(r5)     // Catch: java.lang.Exception -> L87
            if (r5 != 0) goto L7d
            r10.add(r4)     // Catch: java.lang.Exception -> L87
        L7d:
            int r3 = r3 + 1
            goto L27
        L80:
            int r9 = r10.size()     // Catch: java.lang.Exception -> L87
            if (r9 <= 0) goto L87
            return r10
        L87:
            r9 = 0
            return r9
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public org.json.JSONArray b(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = r3.a
            if (r0 == 0) goto L48
            java.lang.String r4 = r0.getString(r4)     // Catch: java.lang.Exception -> L48
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L48
            if (r0 != 0) goto L48
            int r0 = r4.length()     // Catch: java.lang.Exception -> L48
            r1 = 3
            if (r0 <= r1) goto L48
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L48
            r0.<init>(r4)     // Catch: java.lang.Exception -> L48
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Exception -> L48
            r4.<init>()     // Catch: java.lang.Exception -> L48
            r1 = 0
        L20:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L48
            if (r1 >= r2) goto L30
            java.lang.String r2 = r0.getString(r1)     // Catch: java.lang.Exception -> L48
            r4.add(r2)     // Catch: java.lang.Exception -> L48
            int r1 = r1 + 1
            goto L20
        L30:
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L48
            r0.<init>()     // Catch: java.lang.Exception -> L48
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L48
        L39:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L47
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Exception -> L48
            r0.put(r1)     // Catch: java.lang.Exception -> L48
            goto L39
        L47:
            return r0
        L48:
            r4 = 0
            return r4
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public java.util.Set c(java.lang.String r6) {
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

    public org.json.JSONArray d(java.lang.String r9) {
            r8 = this;
            org.json.JSONObject r0 = r8.a
            if (r0 == 0) goto Lbc
            java.lang.String r0 = r0.getString(r9)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r1 = "46"
            boolean r1 = android.text.TextUtils.equals(r9, r1)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r2 = "\n"
            java.lang.String r3 = " "
            r4 = 0
            r5 = 3
            java.lang.String r6 = ""
            if (r1 == 0) goto L4d
            boolean r9 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lbc
            if (r9 != 0) goto Lbc
            int r9 = r0.length()     // Catch: java.lang.Exception -> Lbc
            if (r9 <= r5) goto Lbc
            org.json.JSONArray r9 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lbc
            r9.<init>(r0)     // Catch: java.lang.Exception -> Lbc
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lbc
            r0.<init>()     // Catch: java.lang.Exception -> Lbc
        L2e:
            int r1 = r9.length()     // Catch: java.lang.Exception -> Lbc
            if (r4 >= r1) goto L4c
            java.lang.String r1 = r9.getString(r4)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r1 = r1.replaceAll(r3, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r1 = r1.replace(r2, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r5 = ">"
            java.lang.String r1 = r1.replace(r5, r6)     // Catch: java.lang.Exception -> Lbc
            r0.put(r1)     // Catch: java.lang.Exception -> Lbc
            int r4 = r4 + 1
            goto L2e
        L4c:
            return r0
        L4d:
            java.lang.String r1 = "45"
            boolean r9 = android.text.TextUtils.equals(r9, r1)     // Catch: java.lang.Exception -> Lbc
            if (r9 == 0) goto Lbc
            java.lang.String r9 = "0701"
            java.lang.String r1 = "aae31bed33c490b6613a"
            java.lang.String r1 = com.kuaishou.weapon.p0.i.a(r1, r9)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r7 = "99e111e83fc4d0a7662b"
            java.lang.String r9 = com.kuaishou.weapon.p0.i.a(r7, r9)     // Catch: java.lang.Exception -> Lbc
            boolean r7 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Lbc
            if (r7 != 0) goto Lbc
            int r7 = r0.length()     // Catch: java.lang.Exception -> Lbc
            if (r7 <= r5) goto Lbc
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lbc
            r5.<init>(r0)     // Catch: java.lang.Exception -> Lbc
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> Lbc
            r0.<init>()     // Catch: java.lang.Exception -> Lbc
        L79:
            int r7 = r5.length()     // Catch: java.lang.Exception -> Lbc
            if (r4 >= r7) goto L91
            java.lang.String r7 = r5.getString(r4)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r7 = r7.replaceAll(r3, r6)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r7 = r7.replace(r2, r6)     // Catch: java.lang.Exception -> Lbc
            r0.add(r7)     // Catch: java.lang.Exception -> Lbc
            int r4 = r4 + 1
            goto L79
        L91:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> Lbc
            r2.<init>()     // Catch: java.lang.Exception -> Lbc
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> Lbc
        L9a:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Exception -> Lbc
            if (r3 == 0) goto Lbb
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Exception -> Lbc
            r2.put(r3)     // Catch: java.lang.Exception -> Lbc
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lbc
            boolean r4 = r3.contains(r1)     // Catch: java.lang.Exception -> Lbc
            r5 = 1
            if (r4 == 0) goto Lb2
            r8.b = r5     // Catch: java.lang.Exception -> Lbc
        Lb2:
            boolean r3 = r3.contains(r9)     // Catch: java.lang.Exception -> Lbc
            if (r3 == 0) goto L9a
            r8.c = r5     // Catch: java.lang.Exception -> Lbc
            goto L9a
        Lbb:
            return r2
        Lbc:
            r9 = 0
            return r9
    }
}
