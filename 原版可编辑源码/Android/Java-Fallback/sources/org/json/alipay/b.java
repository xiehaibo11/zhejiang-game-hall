package org.json.alipay;

public class b {
    public static final java.lang.Object a = null;
    public java.util.Map b;

    public static final class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.Object clone() {
                r0 = this;
                return r0
        }

        public final boolean equals(java.lang.Object r1) {
                r0 = this;
                if (r1 == 0) goto L7
                if (r1 != r0) goto L5
                goto L7
            L5:
                r1 = 0
                return r1
            L7:
                r1 = 1
                return r1
        }

        public final java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = "null"
                return r0
        }
    }

    static {
            org.json.alipay.b$a r0 = new org.json.alipay.b$a
            r1 = 0
            r0.<init>(r1)
            org.json.alipay.b.a = r0
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    public b(java.lang.String r2) {
            r1 = this;
            org.json.alipay.c r0 = new org.json.alipay.c
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public b(java.util.Map r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto La
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
        La:
            r0.b = r1
            return
    }

    public b(org.json.alipay.c r5) {
            r4 = this;
            r4.<init>()
            char r0 = r5.c()
            r1 = 123(0x7b, float:1.72E-43)
            if (r0 != r1) goto L86
        Lb:
            char r0 = r5.c()
            if (r0 == 0) goto L7f
            r1 = 125(0x7d, float:1.75E-43)
            if (r0 == r1) goto L7e
            r5.a()
            java.lang.Object r0 = r5.d()
            java.lang.String r0 = r0.toString()
            char r2 = r5.c()
            r3 = 61
            if (r2 != r3) goto L34
            char r2 = r5.b()
            r3 = 62
            if (r2 == r3) goto L38
            r5.a()
            goto L38
        L34:
            r3 = 58
            if (r2 != r3) goto L77
        L38:
            java.lang.Object r2 = r5.d()
            if (r0 == 0) goto L6f
            if (r2 == 0) goto L49
            b(r2)
            java.util.Map r3 = r4.b
            r3.put(r0, r2)
            goto L4e
        L49:
            java.util.Map r2 = r4.b
            r2.remove(r0)
        L4e:
            char r0 = r5.c()
            r2 = 44
            if (r0 == r2) goto L64
            r2 = 59
            if (r0 == r2) goto L64
            if (r0 != r1) goto L5d
            return
        L5d:
            java.lang.String r0 = "Expected a ',' or '}'"
            org.json.alipay.JSONException r5 = r5.a(r0)
            throw r5
        L64:
            char r0 = r5.c()
            if (r0 != r1) goto L6b
            return
        L6b:
            r5.a()
            goto Lb
        L6f:
            org.json.alipay.JSONException r5 = new org.json.alipay.JSONException
            java.lang.String r0 = "Null key."
            r5.<init>(r0)
            throw r5
        L77:
            java.lang.String r0 = "Expected a ':' after a key"
            org.json.alipay.JSONException r5 = r5.a(r0)
            throw r5
        L7e:
            return
        L7f:
            java.lang.String r0 = "A JSONObject text must end with '}'"
            org.json.alipay.JSONException r5 = r5.a(r0)
            throw r5
        L86:
            java.lang.String r0 = "A JSONObject text must begin with '{'"
            org.json.alipay.JSONException r5 = r5.a(r0)
            goto L8e
        L8d:
            throw r5
        L8e:
            goto L8d
    }

    public static java.lang.String a(java.lang.Object r2) {
            if (r2 == 0) goto Lb0
            r0 = 0
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto Lb
            goto Lb0
        Lb:
            boolean r0 = r2 instanceof java.lang.Number
            if (r0 == 0) goto L61
            java.lang.Number r2 = (java.lang.Number) r2
            if (r2 == 0) goto L59
            b(r2)
            java.lang.String r2 = r2.toString()
            r0 = 46
            int r0 = r2.indexOf(r0)
            if (r0 <= 0) goto L58
            r0 = 101(0x65, float:1.42E-43)
            int r0 = r2.indexOf(r0)
            if (r0 >= 0) goto L58
            r0 = 69
            int r0 = r2.indexOf(r0)
            if (r0 >= 0) goto L58
        L32:
            java.lang.String r0 = "0"
            boolean r0 = r2.endsWith(r0)
            r1 = 0
            if (r0 == 0) goto L46
            int r0 = r2.length()
            int r0 = r0 + (-1)
            java.lang.String r2 = r2.substring(r1, r0)
            goto L32
        L46:
            java.lang.String r0 = "."
            boolean r0 = r2.endsWith(r0)
            if (r0 == 0) goto L58
            int r0 = r2.length()
            int r0 = r0 + (-1)
            java.lang.String r2 = r2.substring(r1, r0)
        L58:
            return r2
        L59:
            org.json.alipay.JSONException r2 = new org.json.alipay.JSONException
            java.lang.String r0 = "Null pointer"
            r2.<init>(r0)
            throw r2
        L61:
            boolean r0 = r2 instanceof java.lang.Boolean
            if (r0 != 0) goto Lab
            boolean r0 = r2 instanceof org.json.alipay.b
            if (r0 != 0) goto Lab
            boolean r0 = r2 instanceof org.json.alipay.a
            if (r0 == 0) goto L6e
            goto Lab
        L6e:
            boolean r0 = r2 instanceof java.util.Map
            if (r0 == 0) goto L7e
            org.json.alipay.b r0 = new org.json.alipay.b
            java.util.Map r2 = (java.util.Map) r2
            r0.<init>(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L7e:
            boolean r0 = r2 instanceof java.util.Collection
            if (r0 == 0) goto L8e
            org.json.alipay.a r0 = new org.json.alipay.a
            java.util.Collection r2 = (java.util.Collection) r2
            r0.<init>(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L8e:
            java.lang.Class r0 = r2.getClass()
            boolean r0 = r0.isArray()
            if (r0 == 0) goto La2
            org.json.alipay.a r0 = new org.json.alipay.a
            r0.<init>(r2)
            java.lang.String r2 = r0.toString()
            return r2
        La2:
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = c(r2)
            return r2
        Lab:
            java.lang.String r2 = r2.toString()
            return r2
        Lb0:
            java.lang.String r2 = "null"
            return r2
    }

    public static void b(java.lang.Object r2) {
            if (r2 == 0) goto L36
            boolean r0 = r2 instanceof java.lang.Double
            java.lang.String r1 = "JSON does not allow non-finite numbers."
            if (r0 == 0) goto L1d
            java.lang.Double r2 = (java.lang.Double) r2
            boolean r0 = r2.isInfinite()
            if (r0 != 0) goto L17
            boolean r2 = r2.isNaN()
            if (r2 != 0) goto L17
            goto L36
        L17:
            org.json.alipay.JSONException r2 = new org.json.alipay.JSONException
            r2.<init>(r1)
            throw r2
        L1d:
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 == 0) goto L36
            java.lang.Float r2 = (java.lang.Float) r2
            boolean r0 = r2.isInfinite()
            if (r0 != 0) goto L30
            boolean r2 = r2.isNaN()
            if (r2 != 0) goto L30
            goto L36
        L30:
            org.json.alipay.JSONException r2 = new org.json.alipay.JSONException
            r2.<init>(r1)
            throw r2
        L36:
            return
    }

    public static java.lang.String c(java.lang.String r8) {
            if (r8 == 0) goto L9f
            int r0 = r8.length()
            if (r0 != 0) goto La
            goto L9f
        La:
            int r0 = r8.length()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            int r2 = r0 + 4
            r1.<init>(r2)
            r2 = 34
            r1.append(r2)
            r3 = 0
            r4 = 0
        L1c:
            if (r3 >= r0) goto L97
            char r5 = r8.charAt(r3)
            r6 = 12
            if (r5 == r6) goto L90
            r6 = 13
            if (r5 == r6) goto L8d
            r6 = 92
            if (r5 == r2) goto L86
            r7 = 47
            if (r5 == r7) goto L82
            if (r5 == r6) goto L86
            switch(r5) {
                case 8: goto L7c;
                case 9: goto L79;
                case 10: goto L76;
                default: goto L37;
            }
        L37:
            r4 = 32
            if (r5 < r4) goto L4b
            r4 = 128(0x80, float:1.8E-43)
            if (r5 < r4) goto L43
            r4 = 160(0xa0, float:2.24E-43)
            if (r5 < r4) goto L4b
        L43:
            r4 = 8192(0x2000, float:1.148E-41)
            if (r5 < r4) goto L89
            r4 = 8448(0x2100, float:1.1838E-41)
            if (r5 >= r4) goto L89
        L4b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r6 = "000"
            r4.<init>(r6)
            java.lang.String r6 = java.lang.Integer.toHexString(r5)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "\\u"
            r6.<init>(r7)
            int r7 = r4.length()
            int r7 = r7 + (-4)
            java.lang.String r4 = r4.substring(r7)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            goto L7e
        L76:
            java.lang.String r4 = "\\n"
            goto L7e
        L79:
            java.lang.String r4 = "\\t"
            goto L7e
        L7c:
            java.lang.String r4 = "\\b"
        L7e:
            r1.append(r4)
            goto L93
        L82:
            r7 = 60
            if (r4 != r7) goto L89
        L86:
            r1.append(r6)
        L89:
            r1.append(r5)
            goto L93
        L8d:
            java.lang.String r4 = "\\r"
            goto L7e
        L90:
            java.lang.String r4 = "\\f"
            goto L7e
        L93:
            int r3 = r3 + 1
            r4 = r5
            goto L1c
        L97:
            r1.append(r2)
            java.lang.String r8 = r1.toString()
            return r8
        L9f:
            java.lang.String r8 = "\"\""
            return r8
    }

    public final java.lang.Object a(java.lang.String r4) {
            r3 = this;
            if (r4 != 0) goto L4
            r0 = 0
            goto La
        L4:
            java.util.Map r0 = r3.b
            java.lang.Object r0 = r0.get(r4)
        La:
            if (r0 == 0) goto Ld
            return r0
        Ld:
            org.json.alipay.JSONException r0 = new org.json.alipay.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "JSONObject["
            r1.<init>(r2)
            java.lang.String r4 = c(r4)
            r1.append(r4)
            java.lang.String r4 = "] not found."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public final java.util.Iterator a() {
            r1 = this;
            java.util.Map r0 = r1.b
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    public final boolean b(java.lang.String r2) {
            r1 = this;
            java.util.Map r0 = r1.b
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public java.lang.String toString() {
            r4 = this;
            java.util.Iterator r0 = r4.a()     // Catch: java.lang.Exception -> L49
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Exception -> L49
            java.lang.String r2 = "{"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L49
        Lb:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Exception -> L49
            if (r2 == 0) goto L3f
            int r2 = r1.length()     // Catch: java.lang.Exception -> L49
            r3 = 1
            if (r2 <= r3) goto L1d
            r2 = 44
            r1.append(r2)     // Catch: java.lang.Exception -> L49
        L1d:
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Exception -> L49
            java.lang.String r3 = r2.toString()     // Catch: java.lang.Exception -> L49
            java.lang.String r3 = c(r3)     // Catch: java.lang.Exception -> L49
            r1.append(r3)     // Catch: java.lang.Exception -> L49
            r3 = 58
            r1.append(r3)     // Catch: java.lang.Exception -> L49
            java.util.Map r3 = r4.b     // Catch: java.lang.Exception -> L49
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Exception -> L49
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L49
            r1.append(r2)     // Catch: java.lang.Exception -> L49
            goto Lb
        L3f:
            r0 = 125(0x7d, float:1.75E-43)
            r1.append(r0)     // Catch: java.lang.Exception -> L49
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L49
            return r0
        L49:
            r0 = 0
            return r0
    }
}
