package com.kuaishou.weapon.p0;

public class dj {
    private static final java.lang.String a = "bGlidmErKw==";
    private static final java.lang.String b = "WnBvc2VkQnJpZGdlLmphcg==";
    private static final java.lang.String c = "bGlienBvc2VkX2FydC5zbw==";

    public dj() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Integer a(org.json.JSONArray r3) {
            if (r3 == 0) goto L35
            int r0 = r3.length()     // Catch: java.lang.Exception -> L35
            if (r0 <= 0) goto L35
            java.lang.String r0 = "WnBvc2VkQnJpZGdlLmphcg=="
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L35
            r1 = 2
            byte[] r0 = com.kuaishou.weapon.p0.c.a(r0, r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L35
            r2.<init>(r0)     // Catch: java.lang.Exception -> L35
            java.lang.String r0 = "bGlienBvc2VkX2FydC5zbw=="
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L35
            byte[] r0 = com.kuaishou.weapon.p0.c.a(r0, r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L35
            r1.<init>(r0)     // Catch: java.lang.Exception -> L35
            if (r0 == 0) goto L35
            boolean r3 = a(r3, r2, r1)     // Catch: java.lang.Exception -> L35
            if (r3 == 0) goto L35
            r3 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L35
            return r3
        L35:
            r3 = 0
            return r3
    }

    private static boolean a(org.json.JSONArray r3, java.lang.String r4) {
            r0 = 0
            int r1 = r3.length()     // Catch: java.lang.Exception -> L1f
            if (r1 <= 0) goto L1f
            r1 = r0
        L8:
            int r2 = r3.length()     // Catch: java.lang.Exception -> L1f
            if (r1 >= r2) goto L1f
            java.lang.Object r2 = r3.get(r1)     // Catch: java.lang.Exception -> L1f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L1f
            boolean r2 = r2.contains(r4)     // Catch: java.lang.Exception -> L1f
            if (r2 == 0) goto L1c
            r3 = 1
            return r3
        L1c:
            int r1 = r1 + 1
            goto L8
        L1f:
            return r0
    }

    private static boolean a(org.json.JSONArray r4, java.lang.String r5, java.lang.String r6) {
            r0 = 0
            int r1 = r4.length()     // Catch: java.lang.Exception -> L26
            if (r1 <= 0) goto L26
            r1 = r0
        L8:
            int r2 = r4.length()     // Catch: java.lang.Exception -> L26
            if (r1 >= r2) goto L26
            java.lang.Object r2 = r4.get(r1)     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L26
            boolean r3 = r2.contains(r5)     // Catch: java.lang.Exception -> L26
            if (r3 != 0) goto L24
            boolean r2 = r2.contains(r6)     // Catch: java.lang.Exception -> L26
            if (r2 == 0) goto L21
            goto L24
        L21:
            int r1 = r1 + 1
            goto L8
        L24:
            r4 = 1
            return r4
        L26:
            return r0
    }

    public static java.lang.Integer b(org.json.JSONArray r3) {
            if (r3 == 0) goto L2a
            int r0 = r3.length()     // Catch: java.lang.Exception -> L2a
            if (r0 <= 0) goto L2a
            java.lang.String r0 = "bGlidmErKw=="
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L2a
            r1 = 2
            byte[] r0 = com.kuaishou.weapon.p0.c.a(r0, r1)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L2a
            r1.<init>(r0)     // Catch: java.lang.Exception -> L2a
            int r0 = r1.length()     // Catch: java.lang.Exception -> L2a
            r2 = 1
            if (r0 <= r2) goto L2a
            boolean r3 = a(r3, r1)     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L2a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L2a
            return r3
        L2a:
            r3 = 0
            return r3
    }
}
