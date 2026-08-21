package com.tkay.expressad.foundation.c.a;

public final class a {
    private com.tkay.expressad.foundation.g.a.d a;

    static class 1 {
    }

    private static class a {
        private static com.tkay.expressad.foundation.c.a.a a;

        static {
                com.tkay.expressad.foundation.c.a.a r0 = new com.tkay.expressad.foundation.c.a.a
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.foundation.c.a.a.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.tkay.expressad.foundation.c.a.a a() {
                com.tkay.expressad.foundation.c.a.a r0 = com.tkay.expressad.foundation.c.a.a.a.a
                return r0
        }
    }

    private a() {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.foundation.g.a.d r0 = new com.tkay.expressad.foundation.g.a.d
            r0.<init>()
            r1.a = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.foundation.c.a.a a() {
            com.tkay.expressad.foundation.c.a.a r0 = com.tkay.expressad.foundation.c.a.a.a.a()
            return r0
    }

    private org.json.JSONArray b() {
            r2 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            com.tkay.expressad.foundation.g.a.d r1 = r2.a
            java.util.Collection r1 = r1.a()
            r0.<init>(r1)
            return r0
    }

    public final org.json.JSONObject a(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.a.d r0 = r1.a
            org.json.JSONObject r2 = r0.a(r2)
            if (r2 == 0) goto L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public final void a(org.json.JSONObject r5) {
            r4 = this;
            if (r5 == 0) goto L1c
            java.util.Iterator r0 = r5.keys()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            org.json.JSONObject r2 = r5.optJSONObject(r1)
            com.tkay.expressad.foundation.g.a.d r3 = r4.a
            r3.a(r1, r2)
            goto L6
        L1c:
            return
    }
}
