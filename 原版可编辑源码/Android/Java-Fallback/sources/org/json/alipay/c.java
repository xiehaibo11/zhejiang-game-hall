package org.json.alipay;

public final class c {
    public int a;
    public java.io.Reader b;
    public char c;
    public boolean d;

    public c(java.io.Reader r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2.markSupported()
            if (r0 == 0) goto La
            goto L10
        La:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r0.<init>(r2)
            r2 = r0
        L10:
            r1.b = r2
            r2 = 0
            r1.d = r2
            r1.a = r2
            return
    }

    public c(java.lang.String r2) {
            r1 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private java.lang.String a(int r6) {
            r5 = this;
            if (r6 != 0) goto L5
            java.lang.String r6 = ""
            return r6
        L5:
            char[] r0 = new char[r6]
            boolean r1 = r5.d
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L14
            r5.d = r3
            char r1 = r5.c
            r0[r3] = r1
            r3 = 1
        L14:
            if (r3 >= r6) goto L2a
            java.io.Reader r1 = r5.b     // Catch: java.io.IOException -> L23
            int r4 = r6 - r3
            int r1 = r1.read(r0, r3, r4)     // Catch: java.io.IOException -> L23
            r4 = -1
            if (r1 == r4) goto L2a
            int r3 = r3 + r1
            goto L14
        L23:
            r6 = move-exception
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            r0.<init>(r6)
            throw r0
        L2a:
            int r1 = r5.a
            int r1 = r1 + r3
            r5.a = r1
            if (r3 < r6) goto L3c
            int r6 = r6 - r2
            char r6 = r0[r6]
            r5.c = r6
            java.lang.String r6 = new java.lang.String
            r6.<init>(r0)
            return r6
        L3c:
            java.lang.String r6 = "Substring bounds error"
            org.json.alipay.JSONException r6 = r5.a(r6)
            goto L44
        L43:
            throw r6
        L44:
            goto L43
    }

    public final org.json.alipay.JSONException a(java.lang.String r3) {
            r2 = this;
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = r2.toString()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            return r0
    }

    public final void a() {
            r2 = this;
            boolean r0 = r2.d
            if (r0 != 0) goto Lf
            int r0 = r2.a
            if (r0 <= 0) goto Lf
            r1 = 1
            int r0 = r0 - r1
            r2.a = r0
            r2.d = r1
            return
        Lf:
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            java.lang.String r1 = "Stepping back two steps is not supported"
            r0.<init>(r1)
            throw r0
    }

    public final char b() {
            r2 = this;
            boolean r0 = r2.d
            r1 = 0
            if (r0 == 0) goto L14
            r2.d = r1
            char r0 = r2.c
            if (r0 == 0) goto L11
            int r0 = r2.a
            int r0 = r0 + 1
            r2.a = r0
        L11:
            char r0 = r2.c
            return r0
        L14:
            java.io.Reader r0 = r2.b     // Catch: java.io.IOException -> L29
            int r0 = r0.read()     // Catch: java.io.IOException -> L29
            if (r0 > 0) goto L1f
            r2.c = r1
            return r1
        L1f:
            int r1 = r2.a
            int r1 = r1 + 1
            r2.a = r1
            char r0 = (char) r0
            r2.c = r0
            return r0
        L29:
            r0 = move-exception
            org.json.alipay.JSONException r1 = new org.json.alipay.JSONException
            r1.<init>(r0)
            throw r1
    }

    public final char c() {
            r5 = this;
        L0:
            char r0 = r5.b()
            r1 = 13
            r2 = 10
            r3 = 47
            if (r0 != r3) goto L3e
            char r0 = r5.b()
            r4 = 42
            if (r0 == r4) goto L25
            if (r0 == r3) goto L1a
            r5.a()
            return r3
        L1a:
            char r0 = r5.b()
            if (r0 == r2) goto L0
            if (r0 == r1) goto L0
            if (r0 != 0) goto L1a
            goto L0
        L25:
            char r0 = r5.b()
            if (r0 == 0) goto L37
            if (r0 != r4) goto L25
            char r0 = r5.b()
            if (r0 == r3) goto L0
            r5.a()
            goto L25
        L37:
            java.lang.String r0 = "Unclosed comment"
            org.json.alipay.JSONException r0 = r5.a(r0)
            throw r0
        L3e:
            r3 = 35
            if (r0 != r3) goto L4d
        L42:
            char r0 = r5.b()
            if (r0 == r2) goto L0
            if (r0 == r1) goto L0
            if (r0 != 0) goto L42
            goto L0
        L4d:
            if (r0 == 0) goto L53
            r1 = 32
            if (r0 <= r1) goto L0
        L53:
            return r0
    }

    public final java.lang.Object d() {
            r10 = this;
            char r0 = r10.c()
            r1 = 120(0x78, float:1.68E-43)
            r2 = 8
            r3 = 16
            r4 = 2
            r5 = 34
            if (r0 == r5) goto Lde
            r5 = 91
            if (r0 == r5) goto Ld5
            r5 = 123(0x7b, float:1.72E-43)
            if (r0 == r5) goto Lcc
            r5 = 39
            if (r0 == r5) goto Lde
            r5 = 40
            if (r0 == r5) goto Ld5
            java.lang.StringBuffer r5 = new java.lang.StringBuffer
            r5.<init>()
            r6 = r0
        L25:
            r7 = 32
            if (r6 < r7) goto L39
            java.lang.String r7 = ",:]}/\\\"[{;=#"
            int r7 = r7.indexOf(r6)
            if (r7 >= 0) goto L39
            r5.append(r6)
            char r6 = r10.b()
            goto L25
        L39:
            r10.a()
            java.lang.String r5 = r5.toString()
            java.lang.String r5 = r5.trim()
            java.lang.String r6 = ""
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto Lc5
            java.lang.String r6 = "true"
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto L57
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        L57:
            java.lang.String r6 = "false"
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto L62
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            return r0
        L62:
            java.lang.String r6 = "null"
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto L6d
            java.lang.Object r0 = org.json.alipay.b.a
            return r0
        L6d:
            r6 = 48
            if (r0 < r6) goto L75
            r7 = 57
            if (r0 <= r7) goto L83
        L75:
            r7 = 46
            if (r0 == r7) goto L83
            r7 = 45
            if (r0 == r7) goto L83
            r7 = 43
            if (r0 != r7) goto L82
            goto L83
        L82:
            return r5
        L83:
            if (r0 != r6) goto Lb2
            int r0 = r5.length()
            if (r0 <= r4) goto La8
            r0 = 1
            char r6 = r5.charAt(r0)
            if (r6 == r1) goto L9a
            char r0 = r5.charAt(r0)
            r1 = 88
            if (r0 != r1) goto La8
        L9a:
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Exception -> Lb2
            java.lang.String r1 = r5.substring(r4)     // Catch: java.lang.Exception -> Lb2
            int r1 = java.lang.Integer.parseInt(r1, r3)     // Catch: java.lang.Exception -> Lb2
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb2
            return r0
        La8:
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Exception -> Lb2
            int r1 = java.lang.Integer.parseInt(r5, r2)     // Catch: java.lang.Exception -> Lb2
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb2
            return r0
        Lb2:
            java.lang.Integer r0 = new java.lang.Integer     // Catch: java.lang.Exception -> Lb8
            r0.<init>(r5)     // Catch: java.lang.Exception -> Lb8
            return r0
        Lb8:
            java.lang.Long r0 = new java.lang.Long     // Catch: java.lang.Exception -> Lbe
            r0.<init>(r5)     // Catch: java.lang.Exception -> Lbe
            return r0
        Lbe:
            java.lang.Double r0 = new java.lang.Double     // Catch: java.lang.Exception -> Lc4
            r0.<init>(r5)     // Catch: java.lang.Exception -> Lc4
            return r0
        Lc4:
            return r5
        Lc5:
            java.lang.String r0 = "Missing value"
            org.json.alipay.JSONException r0 = r10.a(r0)
            throw r0
        Lcc:
            r10.a()
            org.json.alipay.b r0 = new org.json.alipay.b
            r0.<init>(r10)
            return r0
        Ld5:
            r10.a()
            org.json.alipay.a r0 = new org.json.alipay.a
            r0.<init>(r10)
            return r0
        Lde:
            java.lang.StringBuffer r5 = new java.lang.StringBuffer
            r5.<init>()
        Le3:
            char r6 = r10.b()
            if (r6 == 0) goto L140
            r7 = 10
            if (r6 == r7) goto L140
            r8 = 13
            if (r6 == r8) goto L140
            r9 = 92
            if (r6 == r9) goto Lfc
            if (r6 != r0) goto L11a
            java.lang.String r0 = r5.toString()
            return r0
        Lfc:
            char r6 = r10.b()
            r9 = 98
            if (r6 == r9) goto L13c
            r9 = 102(0x66, float:1.43E-43)
            if (r6 == r9) goto L139
            r9 = 110(0x6e, float:1.54E-43)
            if (r6 == r9) goto L135
            r7 = 114(0x72, float:1.6E-43)
            if (r6 == r7) goto L131
            if (r6 == r1) goto L127
            r7 = 116(0x74, float:1.63E-43)
            if (r6 == r7) goto L124
            r7 = 117(0x75, float:1.64E-43)
            if (r6 == r7) goto L11e
        L11a:
            r5.append(r6)
            goto Le3
        L11e:
            r6 = 4
            java.lang.String r6 = r10.a(r6)
            goto L12b
        L124:
            r6 = 9
            goto L11a
        L127:
            java.lang.String r6 = r10.a(r4)
        L12b:
            int r6 = java.lang.Integer.parseInt(r6, r3)
            char r6 = (char) r6
            goto L11a
        L131:
            r5.append(r8)
            goto Le3
        L135:
            r5.append(r7)
            goto Le3
        L139:
            r6 = 12
            goto L11a
        L13c:
            r5.append(r2)
            goto Le3
        L140:
            java.lang.String r0 = "Unterminated string"
            org.json.alipay.JSONException r0 = r10.a(r0)
            goto L148
        L147:
            throw r0
        L148:
            goto L147
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = " at character "
            r0.<init>(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
