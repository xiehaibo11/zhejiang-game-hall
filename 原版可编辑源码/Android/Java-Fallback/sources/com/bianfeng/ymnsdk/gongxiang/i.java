package com.bianfeng.ymnsdk.gongxiang;

public final class i {
    public static void a(java.io.File r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }

    public static void a(java.io.File r7, java.lang.String r8, java.util.Map<java.lang.String, java.lang.String> r9, boolean r10) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r1 = com.bianfeng.ymnsdk.gongxiang.c.b(r7)
            if (r1 == 0) goto Le
            r0.putAll(r1)
        Le:
            java.lang.String r2 = "ymn_channel"
            if (r9 == 0) goto L18
            r9.remove(r2)
            r0.putAll(r9)
        L18:
            if (r8 == 0) goto L23
            int r3 = r8.length()
            if (r3 <= 0) goto L23
            r0.put(r2, r8)
        L23:
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Set r3 = r0.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L30:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L4a
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getKey()
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r6 = r4.getValue()
            r2.put(r5, r6)
            goto L30
        L4a:
            java.lang.String r3 = r2.toString()
            a(r7, r3, r10)
            return
    }

    public static void a(java.io.File r1, java.lang.String r2, boolean r3) throws java.io.IOException, com.bianfeng.ymnsdk.gongxiang.f {
            r0 = 1903654775(0x71777777, float:1.22539554E30)
            com.bianfeng.ymnsdk.gongxiang.j.a(r1, r0, r2, r3)
            return
    }
}
