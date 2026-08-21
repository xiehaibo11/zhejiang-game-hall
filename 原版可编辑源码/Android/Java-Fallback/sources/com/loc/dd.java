package com.loc;

public final class dd {
    public static boolean a(byte[] r7) {
            r0 = 0
            if (r7 == 0) goto L89
            r1 = 0
            com.loc.ek r2 = new com.loc.ek     // Catch: java.lang.Exception -> L85
            r2.<init>()     // Catch: java.lang.Exception -> L85
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.b     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "Content-Type"
            java.lang.String r5 = "application/octet-stream"
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.b     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "aps_c_src"
            java.lang.String r5 = com.loc.ek.a()     // Catch: java.lang.Exception -> L85
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L85
            r6 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)     // Catch: java.lang.Exception -> L85
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.b     // Catch: java.lang.Exception -> L85
            java.lang.String r4 = "aps_c_key"
            java.lang.String r5 = com.loc.ek.b()     // Catch: java.lang.Exception -> L85
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L85
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r6)     // Catch: java.lang.Exception -> L85
            r3.put(r4, r5)     // Catch: java.lang.Exception -> L85
            r2.d = r7     // Catch: java.lang.Exception -> L85
            boolean r7 = com.loc.cu.a     // Catch: java.lang.Exception -> L85
            if (r7 == 0) goto L44
            java.lang.String r7 = "http://cgicol.amap.com/collection/collectData?src=baseCol&ver=v74&"
        L41:
            r2.a = r7     // Catch: java.lang.Exception -> L85
            goto L5f
        L44:
            boolean r7 = com.loc.cu.b     // Catch: java.lang.Exception -> L85
            if (r7 == 0) goto L4b
            java.lang.String r7 = "https://"
            goto L4d
        L4b:
            java.lang.String r7 = "http://"
        L4d:
            java.lang.String r3 = "cgicol.amap.com/collection/collectData?src=baseCol&ver=v74&"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L85
            r4.<init>()     // Catch: java.lang.Exception -> L85
            r4.append(r7)     // Catch: java.lang.Exception -> L85
            r4.append(r3)     // Catch: java.lang.Exception -> L85
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> L85
            goto L41
        L5f:
            com.loc.em r7 = com.loc.dy.b()     // Catch: java.lang.Exception -> L85
            com.loc.el r7 = r7.a(r2)     // Catch: java.lang.Exception -> L85
            if (r7 == 0) goto L71
            int r2 = r7.a     // Catch: java.lang.Exception -> L85
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L71
            byte[] r1 = r7.c     // Catch: java.lang.Exception -> L85
        L71:
            if (r1 == 0) goto L89
            java.lang.String r7 = "true"
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L85
            java.nio.charset.Charset r3 = java.nio.charset.StandardCharsets.UTF_8     // Catch: java.lang.Exception -> L85
            r2.<init>(r1, r3)     // Catch: java.lang.Exception -> L85
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Exception -> L85
            if (r7 == 0) goto L89
            r7 = 1
            r0 = 1
            goto L89
        L85:
            r7 = move-exception
            com.loc.ej.a(r7)
        L89:
            return r0
    }
}
