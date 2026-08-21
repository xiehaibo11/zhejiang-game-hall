package org.json.simple;

public class JSONValue {
    public JSONValue() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escape(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            escape(r1, r0)
            java.lang.String r1 = r0.toString()
            return r1
    }

    static void escape(java.lang.String r5, java.lang.StringBuffer r6) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r5.length()
            if (r1 >= r2) goto L7a
            char r2 = r5.charAt(r1)
            r3 = 12
            if (r2 == r3) goto L74
            r3 = 13
            if (r2 == r3) goto L71
            r3 = 34
            if (r2 == r3) goto L6e
            r3 = 47
            if (r2 == r3) goto L6b
            r3 = 92
            if (r2 == r3) goto L68
            switch(r2) {
                case 8: goto L62;
                case 9: goto L5f;
                case 10: goto L5c;
                default: goto L23;
            }
        L23:
            if (r2 < 0) goto L29
            r3 = 31
            if (r2 <= r3) goto L39
        L29:
            r3 = 127(0x7f, float:1.78E-43)
            if (r2 < r3) goto L31
            r3 = 159(0x9f, float:2.23E-43)
            if (r2 <= r3) goto L39
        L31:
            r3 = 8192(0x2000, float:1.148E-41)
            if (r2 < r3) goto L58
            r3 = 8447(0x20ff, float:1.1837E-41)
            if (r2 > r3) goto L58
        L39:
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            java.lang.String r3 = "\\u"
            r6.append(r3)
            r3 = r0
        L43:
            int r4 = r2.length()
            int r4 = 4 - r4
            if (r3 >= r4) goto L53
            r4 = 48
            r6.append(r4)
            int r3 = r3 + 1
            goto L43
        L53:
            java.lang.String r2 = r2.toUpperCase()
            goto L64
        L58:
            r6.append(r2)
            goto L77
        L5c:
            java.lang.String r2 = "\\n"
            goto L64
        L5f:
            java.lang.String r2 = "\\t"
            goto L64
        L62:
            java.lang.String r2 = "\\b"
        L64:
            r6.append(r2)
            goto L77
        L68:
            java.lang.String r2 = "\\\\"
            goto L64
        L6b:
            java.lang.String r2 = "\\/"
            goto L64
        L6e:
            java.lang.String r2 = "\\\""
            goto L64
        L71:
            java.lang.String r2 = "\\r"
            goto L64
        L74:
            java.lang.String r2 = "\\f"
            goto L64
        L77:
            int r1 = r1 + 1
            goto L2
        L7a:
            return
    }

    public static java.lang.Object parse(java.io.Reader r1) {
            org.json.simple.parser.JSONParser r0 = new org.json.simple.parser.JSONParser     // Catch: java.lang.Exception -> La
            r0.<init>()     // Catch: java.lang.Exception -> La
            java.lang.Object r1 = r0.parse(r1)     // Catch: java.lang.Exception -> La
            return r1
        La:
            r1 = 0
            return r1
    }

    public static java.lang.Object parse(java.lang.String r1) {
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r1)
            java.lang.Object r1 = parse(r0)
            return r1
    }

    public static java.lang.Object parseWithException(java.io.Reader r1) throws java.io.IOException, org.json.simple.parser.ParseException {
            org.json.simple.parser.JSONParser r0 = new org.json.simple.parser.JSONParser
            r0.<init>()
            java.lang.Object r1 = r0.parse(r1)
            return r1
    }

    public static java.lang.Object parseWithException(java.lang.String r1) throws org.json.simple.parser.ParseException {
            org.json.simple.parser.JSONParser r0 = new org.json.simple.parser.JSONParser
            r0.<init>()
            java.lang.Object r1 = r0.parse(r1)
            return r1
    }

    public static java.lang.String toJSONString(java.lang.Object r3) {
            java.lang.String r0 = "null"
            if (r3 != 0) goto L5
            return r0
        L5:
            boolean r1 = r3 instanceof java.lang.String
            if (r1 == 0) goto L24
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "\""
            r0.append(r1)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = escape(r3)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            return r3
        L24:
            boolean r1 = r3 instanceof java.lang.Double
            if (r1 == 0) goto L3e
            r1 = r3
            java.lang.Double r1 = (java.lang.Double) r1
            boolean r2 = r1.isInfinite()
            if (r2 != 0) goto L3d
            boolean r1 = r1.isNaN()
            if (r1 == 0) goto L38
            goto L3d
        L38:
            java.lang.String r3 = r3.toString()
            return r3
        L3d:
            return r0
        L3e:
            boolean r1 = r3 instanceof java.lang.Float
            if (r1 == 0) goto L58
            r1 = r3
            java.lang.Float r1 = (java.lang.Float) r1
            boolean r2 = r1.isInfinite()
            if (r2 != 0) goto L57
            boolean r1 = r1.isNaN()
            if (r1 == 0) goto L52
            goto L57
        L52:
            java.lang.String r3 = r3.toString()
            return r3
        L57:
            return r0
        L58:
            boolean r0 = r3 instanceof java.lang.Number
            if (r0 == 0) goto L61
            java.lang.String r3 = r3.toString()
            return r3
        L61:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L6a
            java.lang.String r3 = r3.toString()
            return r3
        L6a:
            boolean r0 = r3 instanceof org.json.simple.JSONAware
            if (r0 == 0) goto L75
            org.json.simple.JSONAware r3 = (org.json.simple.JSONAware) r3
            java.lang.String r3 = r3.toJSONString()
            return r3
        L75:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L80
            java.util.Map r3 = (java.util.Map) r3
            java.lang.String r3 = org.json.simple.JSONObject.toJSONString(r3)
            return r3
        L80:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto L8b
            java.util.List r3 = (java.util.List) r3
            java.lang.String r3 = org.json.simple.JSONArray.toJSONString(r3)
            return r3
        L8b:
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static void writeJSONString(java.lang.Object r3, java.io.Writer r4) throws java.io.IOException {
            java.lang.String r0 = "null"
            if (r3 != 0) goto L8
            r4.write(r0)
            return
        L8:
            boolean r1 = r3 instanceof java.lang.String
            if (r1 == 0) goto L1e
            r0 = 34
            r4.write(r0)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = escape(r3)
            r4.write(r3)
            r4.write(r0)
            return
        L1e:
            boolean r1 = r3 instanceof java.lang.Double
            if (r1 == 0) goto L3e
            r1 = r3
            java.lang.Double r1 = (java.lang.Double) r1
            boolean r2 = r1.isInfinite()
            if (r2 != 0) goto L3a
            boolean r1 = r1.isNaN()
            if (r1 == 0) goto L32
            goto L3a
        L32:
            java.lang.String r3 = r3.toString()
            r4.write(r3)
            goto L3d
        L3a:
            r4.write(r0)
        L3d:
            return
        L3e:
            boolean r1 = r3 instanceof java.lang.Float
            if (r1 == 0) goto L5e
            r1 = r3
            java.lang.Float r1 = (java.lang.Float) r1
            boolean r2 = r1.isInfinite()
            if (r2 != 0) goto L5a
            boolean r1 = r1.isNaN()
            if (r1 == 0) goto L52
            goto L5a
        L52:
            java.lang.String r3 = r3.toString()
            r4.write(r3)
            goto L5d
        L5a:
            r4.write(r0)
        L5d:
            return
        L5e:
            boolean r0 = r3 instanceof java.lang.Number
            if (r0 == 0) goto L6a
            java.lang.String r3 = r3.toString()
            r4.write(r3)
            return
        L6a:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L76
            java.lang.String r3 = r3.toString()
            r4.write(r3)
            return
        L76:
            boolean r0 = r3 instanceof org.json.simple.JSONStreamAware
            if (r0 == 0) goto L80
            org.json.simple.JSONStreamAware r3 = (org.json.simple.JSONStreamAware) r3
            r3.writeJSONString(r4)
            return
        L80:
            boolean r0 = r3 instanceof org.json.simple.JSONAware
            if (r0 == 0) goto L8e
            org.json.simple.JSONAware r3 = (org.json.simple.JSONAware) r3
            java.lang.String r3 = r3.toJSONString()
            r4.write(r3)
            return
        L8e:
            boolean r0 = r3 instanceof java.util.Map
            if (r0 == 0) goto L98
            java.util.Map r3 = (java.util.Map) r3
            org.json.simple.JSONObject.writeJSONString(r3, r4)
            return
        L98:
            boolean r0 = r3 instanceof java.util.List
            if (r0 == 0) goto La2
            java.util.List r3 = (java.util.List) r3
            org.json.simple.JSONArray.writeJSONString(r3, r4)
            return
        La2:
            java.lang.String r3 = r3.toString()
            r4.write(r3)
            return
    }
}
