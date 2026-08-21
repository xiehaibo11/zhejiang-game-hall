package org.json;

public class XML {
    public static final java.lang.Character AMP = null;
    public static final java.lang.Character APOS = null;
    public static final java.lang.Character BANG = null;
    public static final java.lang.Character EQ = null;
    public static final java.lang.Character GT = null;
    public static final java.lang.Character LT = null;
    public static final java.lang.Character QUEST = null;
    public static final java.lang.Character QUOT = null;
    public static final java.lang.Character SLASH = null;

    static {
            r0 = 38
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.AMP = r0
            r0 = 39
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.APOS = r0
            r0 = 33
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.BANG = r0
            r0 = 61
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.EQ = r0
            r0 = 62
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.GT = r0
            r0 = 60
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.LT = r0
            r0 = 63
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.QUEST = r0
            r0 = 34
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.QUOT = r0
            r0 = 47
            java.lang.Character r0 = java.lang.Character.valueOf(r0)
            org.json.XML.SLASH = r0
            return
    }

    public XML() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String escape(java.lang.String r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r5.length()
            r0.<init>(r1)
            int r1 = r5.length()
            r2 = 0
        Le:
            if (r2 >= r1) goto L4c
            char r3 = r5.charAt(r2)
            r4 = 34
            if (r3 == r4) goto L44
            r4 = 60
            if (r3 == r4) goto L3e
            r4 = 62
            if (r3 == r4) goto L38
            r4 = 38
            if (r3 == r4) goto L32
            r4 = 39
            if (r3 == r4) goto L2c
            r0.append(r3)
            goto L49
        L2c:
            java.lang.String r3 = "&apos;"
            r0.append(r3)
            goto L49
        L32:
            java.lang.String r3 = "&amp;"
            r0.append(r3)
            goto L49
        L38:
            java.lang.String r3 = "&gt;"
            r0.append(r3)
            goto L49
        L3e:
            java.lang.String r3 = "&lt;"
            r0.append(r3)
            goto L49
        L44:
            java.lang.String r3 = "&quot;"
            r0.append(r3)
        L49:
            int r2 = r2 + 1
            goto Le
        L4c:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static void noSpace(java.lang.String r3) throws org.json.JSONException {
            int r0 = r3.length()
            if (r0 == 0) goto L33
            r1 = 0
        L7:
            if (r1 >= r0) goto L32
            char r2 = r3.charAt(r1)
            boolean r2 = java.lang.Character.isWhitespace(r2)
            if (r2 != 0) goto L16
            int r1 = r1 + 1
            goto L7
        L16:
            org.json.JSONException r0 = new org.json.JSONException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "'"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = "' contains a space character."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            return
        L33:
            org.json.JSONException r3 = new org.json.JSONException
            java.lang.String r0 = "Empty string."
            r3.<init>(r0)
            throw r3
    }

    private static boolean parse(org.json.XMLTokener r10, org.json.JSONObject r11, java.lang.String r12) throws org.json.JSONException {
            java.lang.Object r0 = r10.nextToken()
            java.lang.Character r1 = org.json.XML.BANG
            java.lang.String r2 = "content"
            r3 = 1
            r4 = 0
            if (r0 != r1) goto L6c
            char r12 = r10.next()
            r0 = 45
            if (r12 != r0) goto L24
            char r11 = r10.next()
            if (r11 != r0) goto L20
            java.lang.String r11 = "-->"
            r10.skipPast(r11)
            return r4
        L20:
            r10.back()
            goto L4f
        L24:
            r0 = 91
            if (r12 != r0) goto L4f
            java.lang.Object r12 = r10.nextToken()
            java.lang.String r1 = "CDATA"
            boolean r12 = r1.equals(r12)
            if (r12 == 0) goto L48
            char r12 = r10.next()
            if (r12 != r0) goto L48
            java.lang.String r10 = r10.nextCDATA()
            int r12 = r10.length()
            if (r12 <= 0) goto L47
            r11.accumulate(r2, r10)
        L47:
            return r4
        L48:
            java.lang.String r11 = "Expected 'CDATA['"
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        L4f:
            java.lang.Object r11 = r10.nextMeta()
            if (r11 == 0) goto L65
            java.lang.Character r12 = org.json.XML.LT
            if (r11 != r12) goto L5c
            int r3 = r3 + 1
            goto L62
        L5c:
            java.lang.Character r12 = org.json.XML.GT
            if (r11 != r12) goto L62
            int r3 = r3 + (-1)
        L62:
            if (r3 > 0) goto L4f
            return r4
        L65:
            java.lang.String r11 = "Missing '>' after '<!'."
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        L6c:
            java.lang.Character r1 = org.json.XML.QUEST
            if (r0 != r1) goto L76
            java.lang.String r11 = "?>"
            r10.skipPast(r11)
            return r4
        L76:
            java.lang.Character r1 = org.json.XML.SLASH
            if (r0 != r1) goto Lca
            java.lang.Object r11 = r10.nextToken()
            if (r12 == 0) goto Lb4
            boolean r0 = r11.equals(r12)
            if (r0 == 0) goto L96
            java.lang.Object r11 = r10.nextToken()
            java.lang.Character r12 = org.json.XML.GT
            if (r11 != r12) goto L8f
            return r3
        L8f:
            java.lang.String r11 = "Misshaped close tag"
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        L96:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Mismatched "
            r0.append(r1)
            r0.append(r12)
            java.lang.String r12 = " and "
            r0.append(r12)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        Lb4:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "Mismatched close tag "
            r12.append(r0)
            r12.append(r11)
            java.lang.String r11 = r12.toString()
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        Lca:
            boolean r12 = r0 instanceof java.lang.Character
            java.lang.String r1 = "Misshaped tag"
            if (r12 != 0) goto L194
            java.lang.String r0 = (java.lang.String) r0
            org.json.JSONObject r12 = new org.json.JSONObject
            r12.<init>()
            r5 = 0
        Ld8:
            r6 = r5
        Ld9:
            if (r6 != 0) goto Ldf
            java.lang.Object r6 = r10.nextToken()
        Ldf:
            boolean r7 = r6 instanceof java.lang.String
            java.lang.String r8 = ""
            if (r7 == 0) goto L10d
            java.lang.String r6 = (java.lang.String) r6
            java.lang.Object r7 = r10.nextToken()
            java.lang.Character r9 = org.json.XML.EQ
            if (r7 != r9) goto L108
            java.lang.Object r7 = r10.nextToken()
            boolean r8 = r7 instanceof java.lang.String
            if (r8 == 0) goto L101
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r7 = stringToValue(r7)
            r12.accumulate(r6, r7)
            goto Ld8
        L101:
            java.lang.String r11 = "Missing value"
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        L108:
            r12.accumulate(r6, r8)
            r6 = r7
            goto Ld9
        L10d:
            java.lang.Character r5 = org.json.XML.SLASH
            if (r6 != r5) goto L12c
            java.lang.Object r2 = r10.nextToken()
            java.lang.Character r3 = org.json.XML.GT
            if (r2 != r3) goto L127
            int r10 = r12.length()
            if (r10 <= 0) goto L123
            r11.accumulate(r0, r12)
            goto L126
        L123:
            r11.accumulate(r0, r8)
        L126:
            return r4
        L127:
            org.json.JSONException r10 = r10.syntaxError(r1)
            throw r10
        L12c:
            java.lang.Character r5 = org.json.XML.GT
            if (r6 != r5) goto L18f
        L130:
            java.lang.Object r1 = r10.nextContent()
            if (r1 != 0) goto L14f
            if (r0 != 0) goto L139
            return r4
        L139:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Unclosed tag "
            r11.append(r12)
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            org.json.JSONException r10 = r10.syntaxError(r11)
            throw r10
        L14f:
            boolean r5 = r1 instanceof java.lang.String
            if (r5 == 0) goto L163
            java.lang.String r1 = (java.lang.String) r1
            int r5 = r1.length()
            if (r5 <= 0) goto L130
            java.lang.Object r1 = stringToValue(r1)
            r12.accumulate(r2, r1)
            goto L130
        L163:
            java.lang.Character r5 = org.json.XML.LT
            if (r1 != r5) goto L130
            boolean r1 = parse(r10, r12, r0)
            if (r1 == 0) goto L130
            int r10 = r12.length()
            if (r10 != 0) goto L177
            r11.accumulate(r0, r8)
            goto L18e
        L177:
            int r10 = r12.length()
            if (r10 != r3) goto L18b
            java.lang.Object r10 = r12.opt(r2)
            if (r10 == 0) goto L18b
            java.lang.Object r10 = r12.opt(r2)
            r11.accumulate(r0, r10)
            goto L18e
        L18b:
            r11.accumulate(r0, r12)
        L18e:
            return r4
        L18f:
            org.json.JSONException r10 = r10.syntaxError(r1)
            throw r10
        L194:
            org.json.JSONException r10 = r10.syntaxError(r1)
            throw r10
    }

    public static java.lang.Object stringToValue(java.lang.String r2) {
            java.lang.String r0 = "true"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto Lb
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            return r2
        Lb:
            java.lang.String r0 = "false"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L16
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
            return r2
        L16:
            java.lang.String r0 = "null"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L21
            java.lang.Object r2 = org.json.JSONObject.NULL
            return r2
        L21:
            r0 = 0
            char r0 = r2.charAt(r0)     // Catch: java.lang.Exception -> L42
            r1 = 45
            if (r0 == r1) goto L32
            r1 = 48
            if (r0 < r1) goto L52
            r1 = 57
            if (r0 > r1) goto L52
        L32:
            java.lang.Long r0 = new java.lang.Long     // Catch: java.lang.Exception -> L42
            r0.<init>(r2)     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Exception -> L42
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L52
            return r0
        L42:
            java.lang.Double r0 = new java.lang.Double     // Catch: java.lang.Exception -> L52
            r0.<init>(r2)     // Catch: java.lang.Exception -> L52
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Exception -> L52
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L52
            if (r1 == 0) goto L52
            return r0
        L52:
            return r2
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r2) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.XMLTokener r1 = new org.json.XMLTokener
            r1.<init>(r2)
        La:
            boolean r2 = r1.more()
            if (r2 == 0) goto L1d
            java.lang.String r2 = "<"
            boolean r2 = r1.skipPast(r2)
            if (r2 == 0) goto L1d
            r2 = 0
            parse(r1, r0, r2)
            goto La
        L1d:
            return r0
    }

    public static java.lang.String toString(java.lang.Object r1) throws org.json.JSONException {
            r0 = 0
            java.lang.String r1 = toString(r1, r0)
            return r1
    }

    public static java.lang.String toString(java.lang.Object r13, java.lang.String r14) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r13 instanceof org.json.JSONObject
            java.lang.String r2 = "/>"
            java.lang.String r3 = "</"
            r4 = 0
            if (r1 == 0) goto Ldc
            r1 = 60
            r5 = 62
            if (r14 == 0) goto L1d
            r0.append(r1)
            r0.append(r14)
            r0.append(r5)
        L1d:
            org.json.JSONObject r13 = (org.json.JSONObject) r13
            java.util.Iterator r6 = r13.keys()
        L23:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto Lcc
            java.lang.Object r7 = r6.next()
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r8 = r13.opt(r7)
            java.lang.String r9 = ""
            if (r8 != 0) goto L38
            r8 = r9
        L38:
            boolean r10 = r8 instanceof java.lang.String
            if (r10 == 0) goto L3f
            r10 = r8
            java.lang.String r10 = (java.lang.String) r10
        L3f:
            java.lang.String r10 = "content"
            boolean r10 = r10.equals(r7)
            if (r10 == 0) goto L79
            boolean r7 = r8 instanceof org.json.JSONArray
            if (r7 == 0) goto L6d
            org.json.JSONArray r8 = (org.json.JSONArray) r8
            int r7 = r8.length()
            r9 = 0
        L52:
            if (r9 >= r7) goto L23
            if (r9 <= 0) goto L5b
            r10 = 10
            r0.append(r10)
        L5b:
            java.lang.Object r10 = r8.get(r9)
            java.lang.String r10 = r10.toString()
            java.lang.String r10 = escape(r10)
            r0.append(r10)
            int r9 = r9 + 1
            goto L52
        L6d:
            java.lang.String r7 = r8.toString()
            java.lang.String r7 = escape(r7)
            r0.append(r7)
            goto L23
        L79:
            boolean r10 = r8 instanceof org.json.JSONArray
            if (r10 == 0) goto Lb2
            org.json.JSONArray r8 = (org.json.JSONArray) r8
            int r9 = r8.length()
            r10 = 0
        L84:
            if (r10 >= r9) goto L23
            java.lang.Object r11 = r8.get(r10)
            boolean r12 = r11 instanceof org.json.JSONArray
            if (r12 == 0) goto La8
            r0.append(r1)
            r0.append(r7)
            r0.append(r5)
            java.lang.String r11 = toString(r11)
            r0.append(r11)
            r0.append(r3)
            r0.append(r7)
            r0.append(r5)
            goto Laf
        La8:
            java.lang.String r11 = toString(r11, r7)
            r0.append(r11)
        Laf:
            int r10 = r10 + 1
            goto L84
        Lb2:
            boolean r9 = r9.equals(r8)
            if (r9 == 0) goto Lc3
            r0.append(r1)
            r0.append(r7)
            r0.append(r2)
            goto L23
        Lc3:
            java.lang.String r7 = toString(r8, r7)
            r0.append(r7)
            goto L23
        Lcc:
            if (r14 == 0) goto Ld7
            r0.append(r3)
            r0.append(r14)
            r0.append(r5)
        Ld7:
            java.lang.String r13 = r0.toString()
            return r13
        Ldc:
            java.lang.Class r1 = r13.getClass()
            boolean r1 = r1.isArray()
            if (r1 == 0) goto Lec
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>(r13)
            r13 = r1
        Lec:
            boolean r1 = r13 instanceof org.json.JSONArray
            if (r1 == 0) goto L112
            org.json.JSONArray r13 = (org.json.JSONArray) r13
            int r1 = r13.length()
        Lf7:
            if (r4 >= r1) goto L10d
            java.lang.Object r2 = r13.opt(r4)
            if (r14 != 0) goto L102
            java.lang.String r3 = "array"
            goto L103
        L102:
            r3 = r14
        L103:
            java.lang.String r2 = toString(r2, r3)
            r0.append(r2)
            int r4 = r4 + 1
            goto Lf7
        L10d:
            java.lang.String r13 = r0.toString()
            return r13
        L112:
            if (r13 != 0) goto L117
            java.lang.String r13 = "null"
            goto L11f
        L117:
            java.lang.String r13 = r13.toString()
            java.lang.String r13 = escape(r13)
        L11f:
            if (r14 != 0) goto L136
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = "\""
            r14.append(r0)
            r14.append(r13)
            r14.append(r0)
            java.lang.String r13 = r14.toString()
            goto L171
        L136:
            int r0 = r13.length()
            java.lang.String r1 = "<"
            if (r0 != 0) goto L151
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r1)
            r13.append(r14)
            r13.append(r2)
            java.lang.String r13 = r13.toString()
            goto L171
        L151:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r14)
            java.lang.String r1 = ">"
            r0.append(r1)
            r0.append(r13)
            r0.append(r3)
            r0.append(r14)
            r0.append(r1)
            java.lang.String r13 = r0.toString()
        L171:
            return r13
    }
}
