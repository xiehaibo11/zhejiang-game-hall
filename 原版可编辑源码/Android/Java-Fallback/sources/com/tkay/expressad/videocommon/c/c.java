package com.tkay.expressad.videocommon.c;

public class c {
    private java.lang.String a;
    private int b;

    public c(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.tkay.expressad.videocommon.c.c a(org.json.JSONObject r3) {
            if (r3 == 0) goto L1d
            java.lang.String r0 = "name"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L19
            java.lang.String r1 = "amount"
            int r1 = r3.optInt(r1)     // Catch: java.lang.Exception -> L19
            java.lang.String r2 = "id"
            r3.optString(r2)     // Catch: java.lang.Exception -> L19
            com.tkay.expressad.videocommon.c.c r3 = new com.tkay.expressad.videocommon.c.c     // Catch: java.lang.Exception -> L19
            r3.<init>(r0, r1)     // Catch: java.lang.Exception -> L19
            return r3
        L19:
            r3 = move-exception
            r3.printStackTrace()
        L1d:
            r3 = 0
            return r3
    }

    public static java.util.Map<java.lang.String, com.tkay.expressad.videocommon.c.c> a(org.json.JSONArray r6) {
            if (r6 == 0) goto L3a
            int r0 = r6.length()
            if (r0 <= 0) goto L3a
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L36
            r0.<init>()     // Catch: java.lang.Exception -> L36
            r1 = 0
        Le:
            int r2 = r6.length()     // Catch: java.lang.Exception -> L36
            if (r1 >= r2) goto L35
            org.json.JSONObject r2 = r6.optJSONObject(r1)     // Catch: java.lang.Exception -> L36
            java.lang.String r3 = "name"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Exception -> L36
            java.lang.String r4 = "amount"
            int r4 = r2.optInt(r4)     // Catch: java.lang.Exception -> L36
            java.lang.String r5 = "id"
            java.lang.String r2 = r2.optString(r5)     // Catch: java.lang.Exception -> L36
            com.tkay.expressad.videocommon.c.c r5 = new com.tkay.expressad.videocommon.c.c     // Catch: java.lang.Exception -> L36
            r5.<init>(r3, r4)     // Catch: java.lang.Exception -> L36
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L36
            int r1 = r1 + 1
            goto Le
        L35:
            return r0
        L36:
            r6 = move-exception
            r6.printStackTrace()
        L3a:
            r6 = 0
            return r6
    }

    public static com.tkay.expressad.videocommon.c.c b(java.lang.String r3) {
            r0 = 0
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Exception -> L2f
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2f
            if (r2 == 0) goto L15
            com.tkay.expressad.videocommon.c.c r3 = c()     // Catch: java.lang.Exception -> L2f
        L13:
            r0 = r3
            goto L28
        L15:
            if (r1 == 0) goto L28
            java.util.Map r2 = r1.j()     // Catch: java.lang.Exception -> L2f
            if (r2 == 0) goto L28
            java.util.Map r1 = r1.j()     // Catch: java.lang.Exception -> L2f
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.videocommon.c.c r3 = (com.tkay.expressad.videocommon.c.c) r3     // Catch: java.lang.Exception -> L2f
            goto L13
        L28:
            if (r0 != 0) goto L33
            com.tkay.expressad.videocommon.c.c r0 = c()     // Catch: java.lang.Exception -> L2f
            goto L33
        L2f:
            r3 = move-exception
            r3.printStackTrace()
        L33:
            return r0
    }

    private static com.tkay.expressad.videocommon.c.c c() {
            com.tkay.expressad.videocommon.c.c r0 = new com.tkay.expressad.videocommon.c.c
            java.lang.String r1 = "Virtual Item"
            r2 = 1
            r0.<init>(r1, r2)
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Reward{name='"
            r0.<init>(r1)
            java.lang.String r1 = r2.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", amount="
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
