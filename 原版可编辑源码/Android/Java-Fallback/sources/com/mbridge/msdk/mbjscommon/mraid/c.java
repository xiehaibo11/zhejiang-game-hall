package com.mbridge.msdk.mbjscommon.mraid;

public final class c {
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> a;
    private static java.util.ArrayList<java.lang.String> b;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.mbjscommon.mraid.c.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.mbjscommon.mraid.c.b = r0
            return
    }

    public static com.mbridge.msdk.mbjscommon.windvane.a a(com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8, java.lang.String r9) {
            android.net.Uri r9 = android.net.Uri.parse(r9)
            java.lang.String r0 = r9.getScheme()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L115
            java.lang.String r1 = "mraid"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L115
            com.mbridge.msdk.mbjscommon.windvane.a r0 = new com.mbridge.msdk.mbjscommon.windvane.a
            r0.<init>()
            java.lang.String r1 = "MraidJSBridge"
            r0.d = r1
            java.lang.String r1 = r9.getHost()
            r0.e = r1
            java.util.ArrayList<java.lang.String> r1 = com.mbridge.msdk.mbjscommon.mraid.c.b
            int r1 = r1.size()
            r3 = 0
            if (r1 != 0) goto L47
            java.lang.Class<com.mbridge.msdk.mbjscommon.mraid.b> r1 = com.mbridge.msdk.mbjscommon.mraid.b.class
            java.lang.reflect.Method[] r1 = r1.getDeclaredMethods()
            int r4 = r1.length
            r5 = r3
        L37:
            if (r5 >= r4) goto L47
            r6 = r1[r5]
            java.util.ArrayList<java.lang.String> r7 = com.mbridge.msdk.mbjscommon.mraid.c.b
            java.lang.String r6 = r6.getName()
            r7.add(r6)
            int r5 = r5 + 1
            goto L37
        L47:
            java.util.ArrayList<java.lang.String> r1 = com.mbridge.msdk.mbjscommon.mraid.c.b
            java.lang.String r4 = r0.e
            boolean r1 = r1.contains(r4)
            if (r1 != 0) goto Lad
            if (r8 == 0) goto Lad
            java.lang.String r9 = r8.getCampaignId()
            java.lang.String r1 = r0.e
            boolean r3 = android.text.TextUtils.isEmpty(r9)
            if (r3 == 0) goto L60
            goto L98
        L60:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.mbridge.msdk.mbjscommon.mraid.c.a
            boolean r3 = r3.containsKey(r9)
            if (r3 == 0) goto L93
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.mbridge.msdk.mbjscommon.mraid.c.a
            java.lang.Object r3 = r3.get(r9)
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 == 0) goto L77
            goto L98
        L77:
            boolean r4 = r3.contains(r1)
            if (r4 != 0) goto L98
            int r4 = r3.length()
            if (r4 <= 0) goto L89
            java.lang.String r4 = ","
            java.lang.String r3 = r3.concat(r4)
        L89:
            java.lang.String r1 = r3.concat(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.mbridge.msdk.mbjscommon.mraid.c.a
            r3.put(r9, r1)
            goto L98
        L93:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = com.mbridge.msdk.mbjscommon.mraid.c.a
            r3.put(r9, r1)
        L98:
            com.mbridge.msdk.mbjscommon.mraid.a r9 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            java.lang.String r1 = r0.e
            r9.a(r8, r1)
            com.mbridge.msdk.mbjscommon.mraid.a r9 = com.mbridge.msdk.mbjscommon.mraid.a.a.a()
            java.lang.String r0 = r0.e
            java.lang.String r1 = "Specified command is not implemented"
            r9.a(r8, r0, r1)
            return r2
        Lad:
            java.lang.String r8 = r9.getEncodedQuery()
            if (r8 != 0) goto Lb8
            java.util.Set r8 = java.util.Collections.emptySet()
            goto Lec
        Lb8:
            java.util.LinkedHashSet r1 = new java.util.LinkedHashSet
            r1.<init>()
        Lbd:
            r2 = 38
            int r2 = r8.indexOf(r2, r3)
            r4 = -1
            if (r2 != r4) goto Lca
            int r2 = r8.length()
        Lca:
            r5 = 61
            int r5 = r8.indexOf(r5, r3)
            if (r5 > r2) goto Ld4
            if (r5 != r4) goto Ld5
        Ld4:
            r5 = r2
        Ld5:
            java.lang.String r3 = r8.substring(r3, r5)
            java.lang.String r3 = android.net.Uri.decode(r3)
            r1.add(r3)
            int r3 = r2 + 1
            int r2 = r8.length()
            if (r3 < r2) goto Lbd
            java.util.Set r8 = java.util.Collections.unmodifiableSet(r1)
        Lec:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L110
            r1.<init>()     // Catch: java.lang.Exception -> L110
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Exception -> L110
        Lf5:
            boolean r2 = r8.hasNext()     // Catch: java.lang.Exception -> L110
            if (r2 == 0) goto L109
            java.lang.Object r2 = r8.next()     // Catch: java.lang.Exception -> L110
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L110
            java.lang.String r3 = r9.getQueryParameter(r2)     // Catch: java.lang.Exception -> L110
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L110
            goto Lf5
        L109:
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Exception -> L110
            r0.f = r8     // Catch: java.lang.Exception -> L110
            goto L114
        L110:
            r8 = move-exception
            r8.printStackTrace()
        L114:
            return r0
        L115:
            return r2
    }

    public static java.lang.String a(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.mbjscommon.mraid.c.a
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.mbjscommon.mraid.c.a
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static void b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.mbjscommon.mraid.c.a
            r0.remove(r1)
            return
    }
}
