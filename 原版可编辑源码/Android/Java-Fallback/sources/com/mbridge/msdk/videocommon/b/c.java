package com.mbridge.msdk.videocommon.b;

public final class c {
    private int a;
    private java.util.List<java.lang.Integer> b;

    private c(int r1, java.util.List<java.lang.Integer> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static com.mbridge.msdk.videocommon.b.c a(org.json.JSONObject r8) {
            com.mbridge.msdk.videocommon.b.c r0 = new com.mbridge.msdk.videocommon.b.c
            r1 = 4
            java.lang.Integer[] r2 = new java.lang.Integer[r1]
            r3 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)
            r5 = 0
            r2[r5] = r4
            r4 = 2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r4)
            r2[r3] = r6
            r6 = 3
            java.lang.Integer r7 = java.lang.Integer.valueOf(r6)
            r2[r4] = r7
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2[r6] = r1
            java.util.List r1 = java.util.Arrays.asList(r2)
            r0.<init>(r3, r1)
            if (r8 != 0) goto L2b
            return r0
        L2b:
            java.lang.String r1 = "type"
            int r1 = r8.optInt(r1)     // Catch: java.lang.Exception -> L5f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L5f
            r2.<init>()     // Catch: java.lang.Exception -> L5f
            java.lang.String r3 = "value"
            org.json.JSONArray r8 = r8.optJSONArray(r3)     // Catch: java.lang.Exception -> L5f
            if (r8 == 0) goto L58
            int r3 = r8.length()     // Catch: java.lang.Exception -> L5f
            if (r3 <= 0) goto L58
        L44:
            int r3 = r8.length()     // Catch: java.lang.Exception -> L5f
            if (r5 >= r3) goto L58
            int r3 = r8.optInt(r5)     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L5f
            r2.add(r3)     // Catch: java.lang.Exception -> L5f
            int r5 = r5 + 1
            goto L44
        L58:
            com.mbridge.msdk.videocommon.b.c r8 = new com.mbridge.msdk.videocommon.b.c     // Catch: java.lang.Exception -> L5f
            r8.<init>(r1, r2)     // Catch: java.lang.Exception -> L5f
            r0 = r8
            goto L63
        L5f:
            r8 = move-exception
            r8.printStackTrace()
        L63:
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public final java.util.List<java.lang.Integer> b() {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.b
            return r0
    }
}
