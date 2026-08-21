package org.json.alipay;

public class a {
    public java.util.ArrayList a;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public a(java.lang.Object r5) {
            r4 = this;
            r4.<init>()
            java.lang.Class r0 = r5.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto L21
            int r0 = java.lang.reflect.Array.getLength(r5)
            r1 = 0
        L12:
            if (r1 >= r0) goto L20
            java.lang.Object r2 = java.lang.reflect.Array.get(r5, r1)
            java.util.ArrayList r3 = r4.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L12
        L20:
            return
        L21:
            org.json.alipay.JSONException r5 = new org.json.alipay.JSONException
            java.lang.String r0 = "JSONArray initial value should be a string or collection or array."
            r5.<init>(r0)
            goto L2a
        L29:
            throw r5
        L2a:
            goto L29
    }

    public a(java.lang.String r2) {
            r1 = this;
            org.json.alipay.c r0 = new org.json.alipay.c
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public a(java.util.Collection r2) {
            r1 = this;
            r1.<init>()
            if (r2 != 0) goto Lb
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            goto L11
        Lb:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r2)
            r2 = r0
        L11:
            r1.a = r2
            return
    }

    public a(org.json.alipay.c r7) {
            r6 = this;
            r6.<init>()
            char r0 = r7.c()
            r1 = 41
            r2 = 93
            r3 = 91
            if (r0 != r3) goto L12
            r0 = 93
            goto L18
        L12:
            r3 = 40
            if (r0 != r3) goto L77
            r0 = 41
        L18:
            char r3 = r7.c()
            if (r3 != r2) goto L1f
            return
        L1f:
            r7.a()
            char r3 = r7.c()
            r4 = 44
            r7.a()
            if (r3 != r4) goto L31
            java.util.ArrayList r3 = r6.a
            r5 = 0
            goto L37
        L31:
            java.util.ArrayList r3 = r6.a
            java.lang.Object r5 = r7.d()
        L37:
            r3.add(r5)
            char r3 = r7.c()
            if (r3 == r1) goto L57
            if (r3 == r4) goto L50
            r4 = 59
            if (r3 == r4) goto L50
            if (r3 != r2) goto L49
            goto L57
        L49:
            java.lang.String r0 = "Expected a ',' or ']'"
            org.json.alipay.JSONException r7 = r7.a(r0)
            throw r7
        L50:
            char r3 = r7.c()
            if (r3 != r2) goto L1f
            return
        L57:
            if (r0 != r3) goto L5a
            return
        L5a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Expected a '"
            r1.<init>(r2)
            java.lang.Character r2 = new java.lang.Character
            r2.<init>(r0)
            r1.append(r2)
            java.lang.String r0 = "'"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            org.json.alipay.JSONException r7 = r7.a(r0)
            throw r7
        L77:
            java.lang.String r0 = "A JSONArray text must start with '['"
            org.json.alipay.JSONException r7 = r7.a(r0)
            goto L7f
        L7e:
            throw r7
        L7f:
            goto L7e
    }

    private java.lang.String a(java.lang.String r5) {
            r4 = this;
            java.util.ArrayList r0 = r4.a
            int r0 = r0.size()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r2 = 0
        Lc:
            if (r2 >= r0) goto L23
            if (r2 <= 0) goto L13
            r1.append(r5)
        L13:
            java.util.ArrayList r3 = r4.a
            java.lang.Object r3 = r3.get(r2)
            java.lang.String r3 = org.json.alipay.b.a(r3)
            r1.append(r3)
            int r2 = r2 + 1
            goto Lc
        L23:
            java.lang.String r5 = r1.toString()
            return r5
    }

    public final int a() {
            r1 = this;
            java.util.ArrayList r0 = r1.a
            int r0 = r0.size()
            return r0
    }

    public final java.lang.Object a(int r4) {
            r3 = this;
            if (r4 < 0) goto L12
            java.util.ArrayList r0 = r3.a
            int r0 = r0.size()
            if (r4 < r0) goto Lb
            goto L12
        Lb:
            java.util.ArrayList r0 = r3.a
            java.lang.Object r0 = r0.get(r4)
            goto L13
        L12:
            r0 = 0
        L13:
            if (r0 == 0) goto L16
            return r0
        L16:
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "JSONArray["
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = "] not found."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = "["
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = ","
            java.lang.String r1 = r2.a(r1)     // Catch: java.lang.Exception -> L1a
            r0.append(r1)     // Catch: java.lang.Exception -> L1a
            r1 = 93
            r0.append(r1)     // Catch: java.lang.Exception -> L1a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1a
            return r0
        L1a:
            r0 = 0
            return r0
    }
}
