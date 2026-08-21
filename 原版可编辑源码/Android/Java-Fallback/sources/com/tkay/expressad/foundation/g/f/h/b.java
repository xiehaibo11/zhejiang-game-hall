package com.tkay.expressad.foundation.g.f.h;

public final class b {
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    private static final java.lang.String d = null;
    private java.util.Map<java.lang.String, java.lang.String> e;
    private java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> f;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.h.b> r0 = com.tkay.expressad.foundation.g.f.h.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.h.b.d = r0
            java.lang.String r0 = "a"
            com.tkay.expressad.foundation.g.f.h.b.a = r0
            java.lang.String r0 = "d"
            com.tkay.expressad.foundation.g.f.h.b.b = r0
            java.lang.String r0 = "e"
            com.tkay.expressad.foundation.g.f.h.b.c = r0
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.f = r0
            return
    }

    private b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r1.f = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.e
            r0.put(r2, r3)
            return
    }

    private b(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.f = r0
            if (r3 == 0) goto L37
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L1b:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L37
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.a(r1, r0)
            goto L1b
        L37:
            return
    }

    private b(java.lang.String... r5) {
            r4 = this;
            r4.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r4.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r4.f = r0
            int r0 = r5.length
            int r1 = r0 % 2
            if (r1 != 0) goto L26
            r1 = 0
        L17:
            if (r1 >= r0) goto L25
            r2 = r5[r1]
            int r3 = r1 + 1
            r3 = r5[r3]
            r4.a(r2, r3)
            int r1 = r1 + 2
            goto L17
        L25:
            return
        L26:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Supplied arguments must be even"
            r5.<init>(r0)
            throw r5
    }

    private void a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.e
            r0.remove(r2)
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r0 = r1.f
            r0.remove(r2)
            return
    }

    private void a(java.lang.String r5, java.io.File r6) {
            r4 = this;
            if (r6 == 0) goto L26
            boolean r0 = r6.exists()
            if (r0 == 0) goto L26
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L14
            java.lang.String r1 = r6.getName()
            goto L15
        L14:
            r1 = r0
        L15:
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L25
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r2 = r4.f
            com.tkay.expressad.foundation.g.f.c.b r3 = new com.tkay.expressad.foundation.g.f.c.b
            r3.<init>(r1, r6, r1, r0)
            r2.put(r5, r3)
        L25:
            return
        L26:
            java.io.FileNotFoundException r5 = new java.io.FileNotFoundException
            r5.<init>()
            throw r5
    }

    private void a(java.lang.String r4, java.io.File r5, java.lang.String r6) {
            r3 = this;
            if (r5 == 0) goto L24
            boolean r0 = r5.exists()
            if (r0 == 0) goto L24
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L12
            java.lang.String r6 = r5.getName()
        L12:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L23
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r0 = r3.f
            com.tkay.expressad.foundation.g.f.c.b r1 = new com.tkay.expressad.foundation.g.f.c.b
            r2 = 0
            r1.<init>(r6, r5, r6, r2)
            r0.put(r4, r1)
        L23:
            return
        L24:
            java.io.FileNotFoundException r4 = new java.io.FileNotFoundException
            r4.<init>()
            throw r4
    }

    private void a(java.lang.String r3, java.io.File r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            if (r4 == 0) goto L23
            boolean r0 = r4.exists()
            if (r0 == 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L12
            java.lang.String r5 = r4.getName()
        L12:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L22
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r0 = r2.f
            com.tkay.expressad.foundation.g.f.c.b r1 = new com.tkay.expressad.foundation.g.f.c.b
            r1.<init>(r5, r4, r5, r6)
            r0.put(r3, r1)
        L22:
            return
        L23:
            java.io.FileNotFoundException r3 = new java.io.FileNotFoundException
            r3.<init>()
            throw r3
    }

    private void a(java.util.Map<java.lang.String, ?> r7) {
            r6 = this;
            if (r7 == 0) goto L6a
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        La:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto L6a
            java.lang.Object r0 = r7.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getValue()
            boolean r2 = r1 instanceof java.lang.String
            if (r2 == 0) goto L2e
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r6.a(r1, r0)
            goto La
        L2e:
            boolean r1 = r1 instanceof java.io.File
            if (r1 == 0) goto La
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.io.File r0 = (java.io.File) r0
            if (r0 == 0) goto L64
            boolean r2 = r0.exists()
            if (r2 == 0) goto L64
            r2 = 0
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L52
            java.lang.String r3 = r0.getName()
            goto L53
        L52:
            r3 = r2
        L53:
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto La
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r4 = r6.f
            com.tkay.expressad.foundation.g.f.c.b r5 = new com.tkay.expressad.foundation.g.f.c.b
            r5.<init>(r3, r0, r3, r2)
            r4.put(r1, r5)
            goto La
        L64:
            java.io.FileNotFoundException r7 = new java.io.FileNotFoundException
            r7.<init>()
            throw r7
        L6a:
            return
    }

    private org.json.JSONObject c() {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r6.e     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Set r1 = r1.entrySet()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
        Lf:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = "UTF-8"
            if (r2 == 0) goto L35
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.Object r4 = r2.getKey()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r3)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.Object r2 = r2.getValue()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r3)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            r0.put(r4, r2)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            goto Lf
        L35:
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r1 = r6.f     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Set r1 = r1.entrySet()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
        L3f:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            if (r2 == 0) goto L7d
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r5 = "FILE_NAME_"
            r4.<init>(r5)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.Object r5 = r2.getValue()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            com.tkay.expressad.foundation.g.f.c.b r5 = (com.tkay.expressad.foundation.g.f.c.b) r5     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.io.File r5 = r5.b()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r5 = r5.getName()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            r4.append(r5)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r4 = r4.toString()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.Object r2 = r2.getKey()     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r3)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r3)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            r0.put(r2, r4)     // Catch: org.json.JSONException -> L79 java.io.UnsupportedEncodingException -> L7d
            goto L3f
        L79:
            r1 = move-exception
            r1.getMessage()
        L7d:
            return r0
    }

    public final java.lang.String a() {
            r5 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.e     // Catch: java.lang.Exception -> L48
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

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Ld
            if (r3 == 0) goto Ld
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.e
            r0.put(r2, r3)
        Ld:
            return
    }

    public final java.util.Map<java.lang.String, java.lang.String> b() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.e
            return r0
    }

    public final java.lang.String toString() {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 28
            r0.<init>(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r8.e     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Set r1 = r1.entrySet()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.io.UnsupportedEncodingException -> L9d
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.io.UnsupportedEncodingException -> L9d
            r3 = 61
            r4 = 38
            java.lang.String r5 = "UTF-8"
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r1.next()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.io.UnsupportedEncodingException -> L9d
            int r6 = r0.length()     // Catch: java.io.UnsupportedEncodingException -> L9d
            if (r6 <= 0) goto L2c
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L9d
        L2c:
            java.lang.Object r4 = r2.getKey()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.Object r2 = r2.getValue()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r5)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L9d
            goto L11
        L4a:
            java.util.Map<java.lang.String, com.tkay.expressad.foundation.g.f.c.b> r1 = r8.f     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Set r1 = r1.entrySet()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.io.UnsupportedEncodingException -> L9d
        L54:
            boolean r2 = r1.hasNext()     // Catch: java.io.UnsupportedEncodingException -> L9d
            if (r2 == 0) goto La1
            java.lang.Object r2 = r1.next()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.io.UnsupportedEncodingException -> L9d
            int r6 = r0.length()     // Catch: java.io.UnsupportedEncodingException -> L9d
            if (r6 <= 0) goto L69
            r0.append(r4)     // Catch: java.io.UnsupportedEncodingException -> L9d
        L69:
            java.lang.Object r6 = r2.getKey()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r5)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r6)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r7 = "FILE_NAME_"
            r6.<init>(r7)     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.Object r2 = r2.getValue()     // Catch: java.io.UnsupportedEncodingException -> L9d
            com.tkay.expressad.foundation.g.f.c.b r2 = (com.tkay.expressad.foundation.g.f.c.b) r2     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.io.File r2 = r2.b()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r2 = r2.getName()     // Catch: java.io.UnsupportedEncodingException -> L9d
            r6.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r2 = r6.toString()     // Catch: java.io.UnsupportedEncodingException -> L9d
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r5)     // Catch: java.io.UnsupportedEncodingException -> L9d
            r0.append(r2)     // Catch: java.io.UnsupportedEncodingException -> L9d
            goto L54
        L9d:
            r1 = move-exception
            r1.getMessage()
        La1:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
