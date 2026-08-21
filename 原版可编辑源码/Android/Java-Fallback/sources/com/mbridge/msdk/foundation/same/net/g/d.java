package com.mbridge.msdk.foundation.same.net.g;

public final class d {
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    private static final java.lang.String i = null;
    private java.util.Map<java.lang.String, java.lang.String> j;
    private java.util.Map<java.lang.String, com.mbridge.msdk.foundation.same.net.c.a> k;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.g.d> r0 = com.mbridge.msdk.foundation.same.net.g.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.g.d.i = r0
            java.lang.String r0 = "a"
            com.mbridge.msdk.foundation.same.net.g.d.a = r0
            java.lang.String r0 = "d"
            com.mbridge.msdk.foundation.same.net.g.d.b = r0
            java.lang.String r0 = "e"
            com.mbridge.msdk.foundation.same.net.g.d.c = r0
            java.lang.String r0 = "f"
            com.mbridge.msdk.foundation.same.net.g.d.d = r0
            java.lang.String r0 = "g"
            com.mbridge.msdk.foundation.same.net.g.d.e = r0
            java.lang.String r0 = "h"
            com.mbridge.msdk.foundation.same.net.g.d.f = r0
            java.lang.String r0 = "i"
            com.mbridge.msdk.foundation.same.net.g.d.g = r0
            java.lang.String r0 = "coppa"
            com.mbridge.msdk.foundation.same.net.g.d.h = r0
            return
    }

    public d() {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.j = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.k = r0
            return
    }

    public final java.lang.String a() {
            r5 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.j     // Catch: java.lang.Exception -> L48
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Exception -> L48
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L48
        L11:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L48
            if (r3 == 0) goto L4c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L48
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Exception -> L48
            int r4 = r1.length()     // Catch: java.lang.Exception -> L48
            if (r4 <= 0) goto L28
            r4 = 38
            r1.append(r4)     // Catch: java.lang.Exception -> L48
        L28:
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.lang.Exception -> L48
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = "="
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r0)     // Catch: java.lang.Exception -> L48
            r1.append(r3)     // Catch: java.lang.Exception -> L48
            goto L11
        L48:
            r0 = move-exception
            r0.printStackTrace()
        L4c:
            java.lang.String r0 = r1.toString()
            return r0
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.j
            r0.remove(r2)
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.same.net.c.a> r0 = r1.k
            r0.remove(r2)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            if (r4 != 0) goto L9
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.i
            java.lang.String r1 = "add() value is null!"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L16
            if (r4 == 0) goto L16
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.j
            r0.put(r3, r4)
        L16:
            return
    }

    public final java.util.Map<java.lang.String, java.lang.String> b() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.j
            return r0
    }

    public final java.lang.String toString() {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 28
            r0.<init>(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r8.j     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Set r1 = r1.entrySet()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Iterator r1 = r1.iterator()     // Catch: java.io.UnsupportedEncodingException -> La0
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.io.UnsupportedEncodingException -> La0
            r3 = 61
            r4 = 38
            java.lang.String r5 = "UTF-8"
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r1.next()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.io.UnsupportedEncodingException -> La0
            int r6 = r0.length()     // Catch: java.io.UnsupportedEncodingException -> La0
            if (r6 <= 0) goto L2c
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> La0
        L2c:
            java.lang.Object r4 = r2.getKey()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.Object r2 = r2.getValue()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r5)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> La0
            goto L11
        L4a:
            java.util.Map<java.lang.String, com.mbridge.msdk.foundation.same.net.c.a> r1 = r8.k     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Set r1 = r1.entrySet()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Iterator r1 = r1.iterator()     // Catch: java.io.UnsupportedEncodingException -> La0
        L54:
            boolean r2 = r1.hasNext()     // Catch: java.io.UnsupportedEncodingException -> La0
            if (r2 == 0) goto Laa
            java.lang.Object r2 = r1.next()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.io.UnsupportedEncodingException -> La0
            int r6 = r0.length()     // Catch: java.io.UnsupportedEncodingException -> La0
            if (r6 <= 0) goto L69
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> La0
        L69:
            java.lang.Object r6 = r2.getKey()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r5)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r6)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> La0
            r6.<init>()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r7 = "FILE_NAME_"
            r6.append(r7)     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.Object r2 = r2.getValue()     // Catch: java.io.UnsupportedEncodingException -> La0
            com.mbridge.msdk.foundation.same.net.c.a r2 = (com.mbridge.msdk.foundation.same.net.c.a) r2     // Catch: java.io.UnsupportedEncodingException -> La0
            java.io.File r2 = r2.a()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r2 = r2.getName()     // Catch: java.io.UnsupportedEncodingException -> La0
            r6.append(r2)     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r2 = r6.toString()     // Catch: java.io.UnsupportedEncodingException -> La0
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r5)     // Catch: java.io.UnsupportedEncodingException -> La0
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> La0
            goto L54
        La0:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.foundation.same.net.g.d.i
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        Laa:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
