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
            r1 = 0
            int r2 = r5.length()
        Le:
            if (r1 >= r2) goto L4d
            char r3 = r5.charAt(r1)
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
            goto L4a
        L2c:
            java.lang.String r4 = "&apos;"
            r0.append(r4)
            goto L4a
        L32:
            java.lang.String r4 = "&amp;"
            r0.append(r4)
            goto L4a
        L38:
            java.lang.String r4 = "&gt;"
            r0.append(r4)
            goto L4a
        L3e:
            java.lang.String r4 = "&lt;"
            r0.append(r4)
            goto L4a
        L44:
            java.lang.String r4 = "&quot;"
            r0.append(r4)
        L4a:
            int r1 = r1 + 1
            goto Le
        L4d:
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void noSpace(java.lang.String r5) throws org.json.JSONException {
            int r0 = r5.length()
            if (r0 == 0) goto L33
            r1 = 0
        L7:
            if (r1 >= r0) goto L32
            char r2 = r5.charAt(r1)
            boolean r2 = java.lang.Character.isWhitespace(r2)
            if (r2 != 0) goto L16
            int r1 = r1 + 1
            goto L7
        L16:
            org.json.JSONException r2 = new org.json.JSONException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "'"
            r3.append(r4)
            r3.append(r5)
            java.lang.String r4 = "' contains a space character."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L32:
            return
        L33:
            org.json.JSONException r1 = new org.json.JSONException
            java.lang.String r2 = "Empty string."
            r1.<init>(r2)
            throw r1
    }

    private static boolean parse(org.json.XMLTokener r10, org.json.JSONObject r11, java.lang.String r12) throws org.json.JSONException {
            r0 = 0
            java.lang.Object r1 = r10.nextToken()
            java.lang.Character r2 = org.json.XML.BANG
            java.lang.String r3 = "content"
            r4 = 0
            if (r1 != r2) goto L6d
            char r2 = r10.next()
            r5 = 45
            if (r2 != r5) goto L24
            char r3 = r10.next()
            if (r3 != r5) goto L20
            java.lang.String r3 = "-->"
            r10.skipPast(r3)
            return r4
        L20:
            r10.back()
            goto L4f
        L24:
            r5 = 91
            if (r2 != r5) goto L4f
            java.lang.Object r1 = r10.nextToken()
            java.lang.String r6 = "CDATA"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L48
            char r6 = r10.next()
            if (r6 != r5) goto L48
            java.lang.String r5 = r10.nextCDATA()
            int r6 = r5.length()
            if (r6 <= 0) goto L47
            r11.accumulate(r3, r5)
        L47:
            return r4
        L48:
            java.lang.String r3 = "Expected 'CDATA['"
            org.json.JSONException r3 = r10.syntaxError(r3)
            throw r3
        L4f:
            r3 = 1
        L50:
            java.lang.Object r1 = r10.nextMeta()
            if (r1 == 0) goto L66
            java.lang.Character r5 = org.json.XML.LT
            if (r1 != r5) goto L5d
            int r3 = r3 + 1
            goto L63
        L5d:
            java.lang.Character r5 = org.json.XML.GT
            if (r1 != r5) goto L63
            int r3 = r3 + (-1)
        L63:
            if (r3 > 0) goto L50
            return r4
        L66:
            java.lang.String r4 = "Missing '>' after '<!'."
            org.json.JSONException r4 = r10.syntaxError(r4)
            throw r4
        L6d:
            java.lang.Character r2 = org.json.XML.QUEST
            if (r1 != r2) goto L77
            java.lang.String r2 = "?>"
            r10.skipPast(r2)
            return r4
        L77:
            java.lang.Character r2 = org.json.XML.SLASH
            r5 = 1
            if (r1 != r2) goto Lcc
            java.lang.Object r1 = r10.nextToken()
            if (r12 == 0) goto Lb6
            boolean r2 = r1.equals(r12)
            if (r2 == 0) goto L98
            java.lang.Object r2 = r10.nextToken()
            java.lang.Character r3 = org.json.XML.GT
            if (r2 != r3) goto L91
            return r5
        L91:
            java.lang.String r2 = "Misshaped close tag"
            org.json.JSONException r2 = r10.syntaxError(r2)
            throw r2
        L98:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Mismatched "
            r2.append(r3)
            r2.append(r12)
            java.lang.String r3 = " and "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            org.json.JSONException r2 = r10.syntaxError(r2)
            throw r2
        Lb6:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Mismatched close tag "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            org.json.JSONException r2 = r10.syntaxError(r2)
            throw r2
        Lcc:
            boolean r2 = r1 instanceof java.lang.Character
            java.lang.String r6 = "Misshaped tag"
            if (r2 != 0) goto L19c
            r2 = r1
            java.lang.String r2 = (java.lang.String) r2
            r1 = 0
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
            r0 = r7
        Ldc:
            if (r1 != 0) goto Le2
            java.lang.Object r1 = r10.nextToken()
        Le2:
            boolean r7 = r1 instanceof java.lang.String
            java.lang.String r8 = ""
            if (r7 == 0) goto L112
            r7 = r1
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r1 = r10.nextToken()
            java.lang.Character r9 = org.json.XML.EQ
            if (r1 != r9) goto L10e
            java.lang.Object r1 = r10.nextToken()
            boolean r8 = r1 instanceof java.lang.String
            if (r8 == 0) goto L107
            r8 = r1
            java.lang.String r8 = (java.lang.String) r8
            java.lang.Object r8 = stringToValue(r8)
            r0.accumulate(r7, r8)
            r1 = 0
            goto Ldc
        L107:
            java.lang.String r3 = "Missing value"
            org.json.JSONException r3 = r10.syntaxError(r3)
            throw r3
        L10e:
            r0.accumulate(r7, r8)
            goto Ldc
        L112:
            java.lang.Character r7 = org.json.XML.SLASH
            if (r1 != r7) goto L131
            java.lang.Object r3 = r10.nextToken()
            java.lang.Character r5 = org.json.XML.GT
            if (r3 != r5) goto L12c
            int r3 = r0.length()
            if (r3 <= 0) goto L128
            r11.accumulate(r2, r0)
            goto L12b
        L128:
            r11.accumulate(r2, r8)
        L12b:
            return r4
        L12c:
            org.json.JSONException r3 = r10.syntaxError(r6)
            throw r3
        L131:
            java.lang.Character r7 = org.json.XML.GT
            if (r1 != r7) goto L197
        L135:
            java.lang.Object r1 = r10.nextContent()
            if (r1 != 0) goto L154
            if (r2 != 0) goto L13e
            return r4
        L13e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unclosed tag "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            org.json.JSONException r3 = r10.syntaxError(r3)
            throw r3
        L154:
            boolean r6 = r1 instanceof java.lang.String
            if (r6 == 0) goto L16a
            r6 = r1
            java.lang.String r6 = (java.lang.String) r6
            int r7 = r6.length()
            if (r7 <= 0) goto L135
        L162:
            java.lang.Object r7 = stringToValue(r6)
            r0.accumulate(r3, r7)
            goto L135
        L16a:
            java.lang.Character r6 = org.json.XML.LT
            if (r1 != r6) goto L135
            boolean r6 = parse(r10, r0, r2)
            if (r6 == 0) goto L135
            int r6 = r0.length()
            if (r6 != 0) goto L17e
            r11.accumulate(r2, r8)
            goto L196
        L17e:
            int r6 = r0.length()
            if (r6 != r5) goto L193
            java.lang.Object r5 = r0.opt(r3)
            if (r5 == 0) goto L193
        L18b:
            java.lang.Object r3 = r0.opt(r3)
            r11.accumulate(r2, r3)
            goto L196
        L193:
            r11.accumulate(r2, r0)
        L196:
            return r4
        L197:
            org.json.JSONException r3 = r10.syntaxError(r6)
            throw r3
        L19c:
            org.json.JSONException r2 = r10.syntaxError(r6)
            throw r2
    }

    public static java.lang.Object stringToValue(java.lang.String r3) {
            java.lang.String r0 = "true"
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto Lb
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            return r0
        Lb:
            java.lang.String r0 = "false"
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto L16
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            return r0
        L16:
            java.lang.String r0 = "null"
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto L21
            java.lang.Object r0 = org.json.JSONObject.NULL
            return r0
        L21:
            r0 = 0
            char r0 = r3.charAt(r0)     // Catch: java.lang.Exception -> L43
            r1 = 45
            if (r0 == r1) goto L32
            r1 = 48
            if (r0 < r1) goto L42
            r1 = 57
            if (r0 > r1) goto L42
        L32:
            java.lang.Long r1 = new java.lang.Long     // Catch: java.lang.Exception -> L43
            r1.<init>(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L43
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L43
            if (r2 == 0) goto L42
            return r1
        L42:
            goto L56
        L43:
            r0 = move-exception
            java.lang.Double r1 = new java.lang.Double     // Catch: java.lang.Exception -> L55
            r1.<init>(r3)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L55
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> L55
            if (r2 == 0) goto L54
            return r1
        L54:
            goto L56
        L55:
            r1 = move-exception
        L56:
            return r3
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r3) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.XMLTokener r1 = new org.json.XMLTokener
            r1.<init>(r3)
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
            java.lang.String r0 = toString(r1, r0)
            return r0
    }

    public static java.lang.String toString(java.lang.Object r14, java.lang.String r15) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r14 instanceof org.json.JSONObject
            java.lang.String r2 = "/>"
            java.lang.String r3 = "</"
            if (r1 == 0) goto Le1
            r1 = 60
            r4 = 62
            if (r15 == 0) goto L1c
            r0.append(r1)
            r0.append(r15)
            r0.append(r4)
        L1c:
            r5 = r14
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            java.util.Iterator r6 = r5.keys()
        L23:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto Ld1
            java.lang.Object r7 = r6.next()
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r8 = r5.opt(r7)
            if (r8 != 0) goto L37
            java.lang.String r8 = ""
        L37:
            boolean r9 = r8 instanceof java.lang.String
            if (r9 == 0) goto L3f
            r9 = r8
            java.lang.String r9 = (java.lang.String) r9
            goto L40
        L3f:
            r9 = 0
        L40:
            java.lang.String r10 = "content"
            boolean r10 = r10.equals(r7)
            if (r10 == 0) goto L7b
            boolean r10 = r8 instanceof org.json.JSONArray
            if (r10 == 0) goto L6f
            r10 = r8
            org.json.JSONArray r10 = (org.json.JSONArray) r10
            int r11 = r10.length()
            r12 = 0
        L54:
            if (r12 >= r11) goto L23
            if (r12 <= 0) goto L5d
            r13 = 10
            r0.append(r13)
        L5d:
            java.lang.Object r13 = r10.get(r12)
            java.lang.String r13 = r13.toString()
            java.lang.String r13 = escape(r13)
            r0.append(r13)
            int r12 = r12 + 1
            goto L54
        L6f:
            java.lang.String r10 = r8.toString()
            java.lang.String r10 = escape(r10)
            r0.append(r10)
            goto L23
        L7b:
            boolean r10 = r8 instanceof org.json.JSONArray
            if (r10 == 0) goto Lb5
            r10 = r8
            org.json.JSONArray r10 = (org.json.JSONArray) r10
            int r11 = r10.length()
            r12 = 0
        L87:
            if (r12 >= r11) goto L23
            java.lang.Object r8 = r10.get(r12)
            boolean r13 = r8 instanceof org.json.JSONArray
            if (r13 == 0) goto Lab
            r0.append(r1)
            r0.append(r7)
            r0.append(r4)
            java.lang.String r13 = toString(r8)
            r0.append(r13)
            r0.append(r3)
            r0.append(r7)
            r0.append(r4)
            goto Lb2
        Lab:
            java.lang.String r13 = toString(r8, r7)
            r0.append(r13)
        Lb2:
            int r12 = r12 + 1
            goto L87
        Lb5:
            java.lang.String r10 = ""
            boolean r10 = r10.equals(r8)
            if (r10 == 0) goto Lc8
            r0.append(r1)
            r0.append(r7)
            r0.append(r2)
            goto L23
        Lc8:
            java.lang.String r10 = toString(r8, r7)
            r0.append(r10)
            goto L23
        Ld1:
            if (r15 == 0) goto Ldc
            r0.append(r3)
            r0.append(r15)
            r0.append(r4)
        Ldc:
            java.lang.String r1 = r0.toString()
            return r1
        Le1:
            java.lang.Class r1 = r14.getClass()
            boolean r1 = r1.isArray()
            if (r1 == 0) goto Lf1
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>(r14)
            r14 = r1
        Lf1:
            boolean r1 = r14 instanceof org.json.JSONArray
            if (r1 == 0) goto L119
            r1 = r14
            org.json.JSONArray r1 = (org.json.JSONArray) r1
            int r2 = r1.length()
            r3 = 0
        Lfe:
            if (r3 >= r2) goto L114
            java.lang.Object r4 = r1.opt(r3)
            if (r15 != 0) goto L109
            java.lang.String r5 = "array"
            goto L10a
        L109:
            r5 = r15
        L10a:
            java.lang.String r4 = toString(r4, r5)
            r0.append(r4)
            int r3 = r3 + 1
            goto Lfe
        L114:
            java.lang.String r4 = r0.toString()
            return r4
        L119:
            if (r14 != 0) goto L11e
            java.lang.String r1 = "null"
            goto L126
        L11e:
            java.lang.String r1 = r14.toString()
            java.lang.String r1 = escape(r1)
        L126:
            if (r15 != 0) goto L13d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "\""
            r2.append(r3)
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            goto L178
        L13d:
            int r4 = r1.length()
            java.lang.String r5 = "<"
            if (r4 != 0) goto L158
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            r3.append(r15)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            goto L178
        L158:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r15)
            java.lang.String r4 = ">"
            r2.append(r4)
            r2.append(r1)
            r2.append(r3)
            r2.append(r15)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
        L178:
            return r2
    }
}
