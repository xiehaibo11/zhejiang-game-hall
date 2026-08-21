package com.kuaishou.weapon.p0;

public class az {
    private org.json.JSONObject a;

    public az(android.content.Context r4, int r5) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L2e
            com.kuaishou.weapon.p0.jni.Engine r4 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L2e
            r0 = 10
            if (r5 >= r0) goto L10
            r5 = r0
        L10:
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.c     // Catch: java.lang.Throwable -> L2e
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L2e
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L2e
            r1 = 2
            java.lang.String r2 = ""
            java.lang.String r4 = r4.pqr(r0, r1, r5, r2)     // Catch: java.lang.Throwable -> L2e
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2e
            if (r5 != 0) goto L2e
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2e
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L2e
            r3.a = r5     // Catch: java.lang.Throwable -> L2e
        L2e:
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

    public java.util.Set a(java.util.Set r6) {
            r5 = this;
            r0 = 0
            if (r6 == 0) goto L2a
            int r1 = r6.size()     // Catch: java.lang.Exception -> L2a
            if (r1 > 0) goto La
            goto L2a
        La:
            java.util.HashSet r1 = new java.util.HashSet     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            java.util.Iterator r2 = r6.iterator()     // Catch: java.lang.Exception -> L2a
        L13:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L29
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L2a
            boolean r4 = r5.a(r6, r3)     // Catch: java.lang.Exception -> L2a
            if (r4 != 0) goto L13
            r1.add(r3)     // Catch: java.lang.Exception -> L2a
            goto L13
        L29:
            return r1
        L2a:
            return r0
    }

    public org.json.JSONObject a(java.lang.String r5, boolean r6) {
            r4 = this;
            org.json.JSONObject r0 = r4.a
            r1 = 0
            if (r0 == 0) goto L3c
            java.lang.String r5 = r4.a(r5)     // Catch: java.lang.Exception -> L3c
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L3c
            int r0 = r5.length()     // Catch: java.lang.Exception -> L3c
            r2 = 3
            if (r0 <= r2) goto L3c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3c
            r0.<init>(r5)     // Catch: java.lang.Exception -> L3c
            if (r6 == 0) goto L3b
            java.util.Iterator r5 = r0.keys()     // Catch: java.lang.Exception -> L3c
            r6 = 0
        L22:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Exception -> L3c
            if (r2 == 0) goto L37
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Exception -> L3c
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L3c
            int r2 = r0.getInt(r2)     // Catch: java.lang.Exception -> L3c
            r3 = 1
            if (r2 != r3) goto L22
            r6 = r3
            goto L22
        L37:
            if (r6 == 0) goto L3a
            return r0
        L3a:
            return r1
        L3b:
            return r0
        L3c:
            return r1
    }

    public org.json.JSONObject a(org.json.JSONObject r6) {
            r5 = this;
            java.lang.String r0 = "0702"
            java.lang.String r1 = "da4c6c97b9"
            java.lang.String r1 = com.kuaishou.weapon.p0.i.a(r1, r0)     // Catch: java.lang.Exception -> L46
            java.lang.String r2 = "da4c709eb15f"
            java.lang.String r0 = com.kuaishou.weapon.p0.i.a(r2, r0)     // Catch: java.lang.Exception -> L46
            org.json.JSONArray r1 = r6.optJSONArray(r1)     // Catch: java.lang.Exception -> L46
            org.json.JSONArray r6 = r6.optJSONArray(r0)     // Catch: java.lang.Exception -> L46
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r0.<init>()     // Catch: java.lang.Exception -> L46
            r2 = 2
            r3 = 3
            if (r1 == 0) goto L2e
            int r4 = r1.length()     // Catch: java.lang.Exception -> L46
            if (r4 != r3) goto L2e
            java.lang.String r4 = "0"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L46
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L46
        L2e:
            if (r6 == 0) goto L3f
            int r1 = r6.length()     // Catch: java.lang.Exception -> L46
            if (r1 != r3) goto L3f
            java.lang.String r1 = "1"
            java.lang.Object r6 = r6.get(r2)     // Catch: java.lang.Exception -> L46
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L46
        L3f:
            int r6 = r0.length()     // Catch: java.lang.Exception -> L46
            if (r6 <= 0) goto L46
            return r0
        L46:
            r6 = 0
            return r6
    }

    public boolean a(java.util.Set r3, java.lang.String r4) {
            r2 = this;
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L1e
        L4:
            boolean r0 = r3.hasNext()     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r3.next()     // Catch: java.lang.Exception -> L1e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L1e
            boolean r1 = r0.equals(r4)     // Catch: java.lang.Exception -> L1e
            if (r1 != 0) goto L4
            boolean r0 = r0.contains(r4)     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L4
            r3 = 1
            return r3
        L1e:
            r3 = 0
            return r3
    }

    public org.json.JSONObject b(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L1b
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Exception -> L1b
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

    public org.json.JSONArray c(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = r3.a
            if (r0 == 0) goto L44
            java.lang.String r4 = r0.getString(r4)     // Catch: java.lang.Exception -> L44
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L44
            if (r0 != 0) goto L44
            int r0 = r4.length()     // Catch: java.lang.Exception -> L44
            r1 = 2
            if (r0 <= r1) goto L44
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L44
            r0.<init>(r4)     // Catch: java.lang.Exception -> L44
            java.util.HashSet r4 = new java.util.HashSet     // Catch: java.lang.Exception -> L44
            r4.<init>()     // Catch: java.lang.Exception -> L44
            r1 = 0
        L20:
            int r2 = r0.length()     // Catch: java.lang.Exception -> L44
            if (r1 >= r2) goto L32
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Exception -> L44
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L44
            r4.add(r2)     // Catch: java.lang.Exception -> L44
            int r1 = r1 + 1
            goto L20
        L32:
            java.util.Set r4 = r3.a(r4)     // Catch: java.lang.Exception -> L44
            if (r4 == 0) goto L44
            int r0 = r4.size()     // Catch: java.lang.Exception -> L44
            if (r0 <= 0) goto L44
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L44
            r0.<init>(r4)     // Catch: java.lang.Exception -> L44
            return r0
        L44:
            r4 = 0
            return r4
    }

    public org.json.JSONObject d(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            if (r0 == 0) goto L1f
            java.lang.String r3 = r2.a(r3)     // Catch: java.lang.Exception -> L1f
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L1f
            if (r0 != 0) goto L1f
            int r0 = r3.length()     // Catch: java.lang.Exception -> L1f
            r1 = 3
            if (r0 <= r1) goto L1f
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1f
            r0.<init>(r3)     // Catch: java.lang.Exception -> L1f
            org.json.JSONObject r3 = r2.a(r0)     // Catch: java.lang.Exception -> L1f
            return r3
        L1f:
            r3 = 0
            return r3
    }
}
