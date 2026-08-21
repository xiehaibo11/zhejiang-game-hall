package com.kuaishou.weapon.p0;

public class bc extends com.kuaishou.weapon.p0.dg {
    private org.json.JSONObject a;

    public bc(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L29
            com.kuaishou.weapon.p0.jni.Engine r4 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.c     // Catch: java.lang.Throwable -> L29
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L29
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = ""
            r2 = 5
            java.lang.String r4 = r4.pqr(r0, r2, r2, r1)     // Catch: java.lang.Throwable -> L29
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L29
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L29
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L29
            r3.a = r0     // Catch: java.lang.Throwable -> L29
        L29:
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

    public org.json.JSONObject a() {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            return r0
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
}
