package com.sigmob.sdk.mraid2;

public class j {
    private static java.util.Map<java.lang.String, java.lang.String> a;
    private java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j.a> b;
    private java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j.a> c;
    private android.content.Context d;

    public interface a {
        void a(org.json.JSONObject r1);
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.sigmob.sdk.mraid2.j.a = r0
            return
    }

    j(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            r1.d = r2
            return
    }

    public java.lang.String a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = ""
            r1 = 1
            if (r3 != r1) goto Le
            android.content.Context r3 = r2.d
            java.lang.Object r3 = com.sigmob.sdk.mraid2.h.b(r3, r4, r0)
            java.lang.String r3 = (java.lang.String) r3
            return r3
        Le:
            java.util.Map<java.lang.String, java.lang.String> r3 = com.sigmob.sdk.mraid2.j.a
            java.lang.Object r3 = r3.get(r4)
            if (r3 != 0) goto L17
            goto L20
        L17:
            java.util.Map<java.lang.String, java.lang.String> r3 = com.sigmob.sdk.mraid2.j.a
            java.lang.Object r3 = r3.get(r4)
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
        L20:
            return r0
    }

    public void a(int r9) {
            r8 = this;
            java.lang.String r0 = "oldValue"
            java.lang.String r1 = ""
            java.lang.String r2 = "newValue"
            java.lang.String r3 = "key"
            r4 = 1
            if (r9 != r4) goto L60
            android.content.Context r9 = r8.d
            java.util.Map r9 = com.sigmob.sdk.mraid2.h.a(r9)
            if (r9 == 0) goto L5a
            int r4 = r9.size()
            if (r4 <= 0) goto L5a
            java.util.Set r9 = r9.entrySet()
            java.util.Iterator r9 = r9.iterator()
        L21:
            boolean r4 = r9.hasNext()
            if (r4 == 0) goto L5a
            java.lang.Object r4 = r9.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r5 = r8.b
            java.lang.Object r6 = r4.getKey()
            java.lang.Object r5 = r5.get(r6)
            com.sigmob.sdk.mraid2.j$a r5 = (com.sigmob.sdk.mraid2.j.a) r5
            if (r5 == 0) goto L21
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.Object r7 = r4.getKey()     // Catch: org.json.JSONException -> L52
            r6.put(r3, r7)     // Catch: org.json.JSONException -> L52
            r6.put(r2, r1)     // Catch: org.json.JSONException -> L52
            java.lang.Object r4 = r4.getValue()     // Catch: org.json.JSONException -> L52
            r6.put(r0, r4)     // Catch: org.json.JSONException -> L52
            goto L56
        L52:
            r4 = move-exception
            r4.printStackTrace()
        L56:
            r5.a(r6)
            goto L21
        L5a:
            android.content.Context r9 = r8.d
            com.sigmob.sdk.mraid2.h.b(r9)
            goto Lb2
        L60:
            java.util.Map<java.lang.String, java.lang.String> r9 = com.sigmob.sdk.mraid2.j.a
            if (r9 == 0) goto Lb2
            int r9 = r9.size()
            if (r9 <= 0) goto Lb2
            java.util.Map<java.lang.String, java.lang.String> r9 = com.sigmob.sdk.mraid2.j.a
            java.util.Set r9 = r9.entrySet()
            java.util.Iterator r9 = r9.iterator()
        L74:
            boolean r4 = r9.hasNext()
            if (r4 == 0) goto Lad
            java.lang.Object r4 = r9.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r5 = r8.c
            java.lang.Object r6 = r4.getKey()
            java.lang.Object r5 = r5.get(r6)
            com.sigmob.sdk.mraid2.j$a r5 = (com.sigmob.sdk.mraid2.j.a) r5
            if (r5 == 0) goto L74
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.Object r7 = r4.getKey()     // Catch: org.json.JSONException -> La5
            r6.put(r3, r7)     // Catch: org.json.JSONException -> La5
            r6.put(r2, r1)     // Catch: org.json.JSONException -> La5
            java.lang.Object r4 = r4.getValue()     // Catch: org.json.JSONException -> La5
            r6.put(r0, r4)     // Catch: org.json.JSONException -> La5
            goto La9
        La5:
            r4 = move-exception
            r4.printStackTrace()
        La9:
            r5.a(r6)
            goto L74
        Lad:
            java.util.Map<java.lang.String, java.lang.String> r9 = com.sigmob.sdk.mraid2.j.a
            r9.clear()
        Lb2:
            return
    }

    public void a(int r2, java.lang.String r3, com.sigmob.sdk.mraid2.j.a r4) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L6
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r2 = r1.b
            goto L8
        L6:
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r2 = r1.c
        L8:
            r2.put(r3, r4)
            return
    }

    public void a(int r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            java.lang.String r0 = "oldValue"
            java.lang.String r1 = "newValue"
            java.lang.String r2 = "key"
            java.lang.String r3 = ""
            r4 = 1
            if (r6 != r4) goto L3f
            android.content.Context r6 = r5.d
            java.lang.Object r6 = com.sigmob.sdk.mraid2.h.b(r6, r7, r3)
            java.lang.String r6 = (java.lang.String) r6
            boolean r3 = r6.equals(r8)
            if (r3 != 0) goto L39
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r3 = r5.b
            java.lang.Object r3 = r3.get(r7)
            com.sigmob.sdk.mraid2.j$a r3 = (com.sigmob.sdk.mraid2.j.a) r3
            if (r3 == 0) goto L39
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            r4.put(r2, r7)     // Catch: org.json.JSONException -> L32
            r4.put(r1, r8)     // Catch: org.json.JSONException -> L32
            r4.put(r0, r6)     // Catch: org.json.JSONException -> L32
            goto L36
        L32:
            r6 = move-exception
            r6.printStackTrace()
        L36:
            r3.a(r4)
        L39:
            android.content.Context r6 = r5.d
            com.sigmob.sdk.mraid2.h.a(r6, r7, r8)
            goto L7c
        L3f:
            java.util.Map<java.lang.String, java.lang.String> r6 = com.sigmob.sdk.mraid2.j.a
            java.lang.Object r6 = r6.get(r7)
            if (r6 != 0) goto L48
            goto L51
        L48:
            java.util.Map<java.lang.String, java.lang.String> r6 = com.sigmob.sdk.mraid2.j.a
            java.lang.Object r6 = r6.get(r7)
            r3 = r6
            java.lang.String r3 = (java.lang.String) r3
        L51:
            boolean r6 = r3.equals(r8)
            if (r6 != 0) goto L77
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r6 = r5.c
            java.lang.Object r6 = r6.get(r7)
            com.sigmob.sdk.mraid2.j$a r6 = (com.sigmob.sdk.mraid2.j.a) r6
            if (r6 == 0) goto L77
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            r4.put(r2, r7)     // Catch: org.json.JSONException -> L70
            r4.put(r1, r8)     // Catch: org.json.JSONException -> L70
            r4.put(r0, r3)     // Catch: org.json.JSONException -> L70
            goto L74
        L70:
            r0 = move-exception
            r0.printStackTrace()
        L74:
            r6.a(r4)
        L77:
            java.util.Map<java.lang.String, java.lang.String> r6 = com.sigmob.sdk.mraid2.j.a
            r6.put(r7, r8)
        L7c:
            return
    }

    public int b(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto Le
            android.content.Context r2 = r1.d
            java.util.Map r2 = com.sigmob.sdk.mraid2.h.a(r2)
        L9:
            int r2 = r2.size()
            return r2
        Le:
            java.util.Map<java.lang.String, java.lang.String> r2 = com.sigmob.sdk.mraid2.j.a
            goto L9
    }

    public void b(int r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = "oldValue"
            java.lang.String r1 = "newValue"
            java.lang.String r2 = "key"
            java.lang.String r3 = ""
            r4 = 1
            if (r7 != r4) goto L3f
            android.content.Context r7 = r6.d
            java.lang.Object r7 = com.sigmob.sdk.mraid2.h.b(r7, r8, r3)
            java.lang.String r7 = (java.lang.String) r7
            boolean r4 = android.text.TextUtils.isEmpty(r7)
            if (r4 != 0) goto L39
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r4 = r6.b
            java.lang.Object r4 = r4.get(r8)
            com.sigmob.sdk.mraid2.j$a r4 = (com.sigmob.sdk.mraid2.j.a) r4
            if (r4 == 0) goto L39
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            r5.put(r2, r8)     // Catch: org.json.JSONException -> L32
            r5.put(r1, r3)     // Catch: org.json.JSONException -> L32
            r5.put(r0, r7)     // Catch: org.json.JSONException -> L32
            goto L36
        L32:
            r7 = move-exception
            r7.printStackTrace()
        L36:
            r4.a(r5)
        L39:
            android.content.Context r7 = r6.d
            com.sigmob.sdk.mraid2.h.b(r7, r8)
            goto L72
        L3f:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.sigmob.sdk.mraid2.j.a
            java.lang.Object r7 = r7.get(r8)
            java.lang.String r7 = (java.lang.String) r7
            boolean r4 = android.text.TextUtils.isEmpty(r7)
            if (r4 != 0) goto L6d
            java.util.Map<java.lang.String, com.sigmob.sdk.mraid2.j$a> r4 = r6.c
            java.lang.Object r4 = r4.get(r8)
            com.sigmob.sdk.mraid2.j$a r4 = (com.sigmob.sdk.mraid2.j.a) r4
            if (r4 == 0) goto L6d
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            r5.put(r2, r8)     // Catch: org.json.JSONException -> L66
            r5.put(r1, r3)     // Catch: org.json.JSONException -> L66
            r5.put(r0, r7)     // Catch: org.json.JSONException -> L66
            goto L6a
        L66:
            r7 = move-exception
            r7.printStackTrace()
        L6a:
            r4.a(r5)
        L6d:
            java.util.Map<java.lang.String, java.lang.String> r7 = com.sigmob.sdk.mraid2.j.a
            r7.remove(r8)
        L72:
            return
    }
}
