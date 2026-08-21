package com.mbridge.msdk.foundation.db.a;

public final class a {
    private com.mbridge.msdk.foundation.db.n a;
    private com.mbridge.msdk.foundation.same.a.b b;


    private static class a {
        private static com.mbridge.msdk.foundation.db.a.a a;

        static {
                com.mbridge.msdk.foundation.db.a.a r0 = new com.mbridge.msdk.foundation.db.a.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.db.a.a.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.db.a.a a() {
                com.mbridge.msdk.foundation.db.a.a r0 = com.mbridge.msdk.foundation.db.a.a.a.a
                return r0
        }
    }

    private a() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.foundation.same.a.b r0 = new com.mbridge.msdk.foundation.same.a.b
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.<init>(r1)
            r2.b = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L27
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.foundation.db.n r0 = com.mbridge.msdk.foundation.db.n.a(r0)     // Catch: java.lang.Throwable -> L27
            r2.a = r0     // Catch: java.lang.Throwable -> L27
            org.json.JSONObject r0 = r0.a()     // Catch: java.lang.Throwable -> L27
            r1 = 0
            r2.a(r0, r1)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r0 = move-exception
            r0.printStackTrace()
        L2b:
            return
    }

    a(com.mbridge.msdk.foundation.db.a.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.db.a.a a() {
            com.mbridge.msdk.foundation.db.a.a r0 = com.mbridge.msdk.foundation.db.a.a.a.a()
            return r0
    }

    static com.mbridge.msdk.foundation.db.n a(com.mbridge.msdk.foundation.db.a.a r0) {
            com.mbridge.msdk.foundation.db.n r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.foundation.same.a.b b(com.mbridge.msdk.foundation.db.a.a r0) {
            com.mbridge.msdk.foundation.same.a.b r0 = r0.b
            return r0
    }

    public final org.json.JSONObject a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.foundation.same.a.b r0 = r2.b
            org.json.JSONObject r0 = r0.a(r3)
            if (r0 == 0) goto L9
            return r0
        L9:
            com.mbridge.msdk.foundation.db.n r1 = r2.a
            if (r1 != 0) goto Le
            return r0
        Le:
            org.json.JSONObject r0 = r1.a(r3)
            if (r0 == 0) goto L19
            com.mbridge.msdk.foundation.same.a.b r1 = r2.b
            r1.a(r3, r0)
        L19:
            return r0
    }

    public final void a(org.json.JSONObject r6, boolean r7) {
            r5 = this;
            if (r6 == 0) goto L32
            java.util.Iterator r0 = r6.keys()
            com.mbridge.msdk.foundation.same.a.b r1 = new com.mbridge.msdk.foundation.same.a.b
            r2 = 100
            r1.<init>(r2)
        Ld:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L26
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            org.json.JSONObject r3 = r6.optJSONObject(r2)
            com.mbridge.msdk.foundation.same.a.b r4 = r5.b
            r4.a(r2, r3)
            r1.a(r2, r3)
            goto Ld
        L26:
            java.util.concurrent.ThreadPoolExecutor r6 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.foundation.db.a.a$1 r0 = new com.mbridge.msdk.foundation.db.a.a$1
            r0.<init>(r5, r7, r1)
            r6.execute(r0)
        L32:
            return
    }

    public final org.json.JSONArray b() {
            r2 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            com.mbridge.msdk.foundation.same.a.b r1 = r2.b
            java.util.Collection r1 = r1.a()
            r0.<init>(r1)
            return r0
    }
}
