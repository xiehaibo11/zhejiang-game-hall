package org.json;

public class JSONML {
    public JSONML() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.Object parse(org.json.XMLTokener r9, boolean r10, org.json.JSONArray r11) throws org.json.JSONException {
        L0:
            boolean r0 = r9.more()
            if (r0 == 0) goto L1d8
            java.lang.Object r0 = r9.nextContent()
            java.lang.Character r1 = org.json.XML.LT
            if (r0 != r1) goto L1c7
            java.lang.Object r0 = r9.nextToken()
            boolean r1 = r0 instanceof java.lang.Character
            java.lang.String r2 = "'."
            java.lang.String r3 = "Misshaped tag"
            if (r1 == 0) goto Lc3
            java.lang.Character r1 = org.json.XML.SLASH
            if (r0 != r1) goto L50
            java.lang.Object r10 = r9.nextToken()
            boolean r11 = r10 instanceof java.lang.String
            if (r11 == 0) goto L36
            java.lang.Object r11 = r9.nextToken()
            java.lang.Character r0 = org.json.XML.GT
            if (r11 != r0) goto L2f
            return r10
        L2f:
            java.lang.String r10 = "Misshaped close tag"
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L36:
            org.json.JSONException r9 = new org.json.JSONException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "Expected a closing name instead of '"
            r11.append(r0)
            r11.append(r10)
            r11.append(r2)
            java.lang.String r10 = r11.toString()
            r9.<init>(r10)
            throw r9
        L50:
            java.lang.Character r1 = org.json.XML.BANG
            if (r0 != r1) goto Lb3
            char r0 = r9.next()
            r1 = 45
            if (r0 != r1) goto L6c
            char r0 = r9.next()
            if (r0 != r1) goto L68
            java.lang.String r0 = "-->"
            r9.skipPast(r0)
            goto L0
        L68:
            r9.back()
            goto L0
        L6c:
            r1 = 91
            if (r0 != r1) goto L94
            java.lang.Object r0 = r9.nextToken()
            java.lang.String r2 = "CDATA"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L8d
            char r0 = r9.next()
            if (r0 != r1) goto L8d
            if (r11 == 0) goto L0
            java.lang.String r0 = r9.nextCDATA()
            r11.put(r0)
            goto L0
        L8d:
            java.lang.String r10 = "Expected 'CDATA['"
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L94:
            r0 = 1
        L95:
            java.lang.Object r1 = r9.nextMeta()
            if (r1 == 0) goto Lac
            java.lang.Character r2 = org.json.XML.LT
            if (r1 != r2) goto La2
            int r0 = r0 + 1
            goto La8
        La2:
            java.lang.Character r2 = org.json.XML.GT
            if (r1 != r2) goto La8
            int r0 = r0 + (-1)
        La8:
            if (r0 > 0) goto L95
            goto L0
        Lac:
            java.lang.String r10 = "Missing '>' after '<!'."
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        Lb3:
            java.lang.Character r1 = org.json.XML.QUEST
            if (r0 != r1) goto Lbe
            java.lang.String r0 = "?>"
            r9.skipPast(r0)
            goto L0
        Lbe:
            org.json.JSONException r9 = r9.syntaxError(r3)
            throw r9
        Lc3:
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1ae
            java.lang.String r0 = (java.lang.String) r0
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r4 = "tagName"
            if (r10 == 0) goto Le0
            r1.put(r0)
            if (r11 == 0) goto Le8
            r11.put(r1)
            goto Le8
        Le0:
            r2.put(r4, r0)
            if (r11 == 0) goto Le8
            r11.put(r2)
        Le8:
            r5 = 0
        Le9:
            r6 = r5
        Lea:
            if (r6 != 0) goto Lf0
            java.lang.Object r6 = r9.nextToken()
        Lf0:
            if (r6 == 0) goto L1a9
            boolean r7 = r6 instanceof java.lang.String
            if (r7 != 0) goto L165
            if (r10 == 0) goto L101
            int r4 = r2.length()
            if (r4 <= 0) goto L101
            r1.put(r2)
        L101:
            java.lang.Character r4 = org.json.XML.SLASH
            if (r6 != r4) goto L118
            java.lang.Object r0 = r9.nextToken()
            java.lang.Character r4 = org.json.XML.GT
            if (r0 != r4) goto L113
            if (r11 != 0) goto L0
            if (r10 == 0) goto L112
            return r1
        L112:
            return r2
        L113:
            org.json.JSONException r9 = r9.syntaxError(r3)
            throw r9
        L118:
            java.lang.Character r4 = org.json.XML.GT
            if (r6 != r4) goto L160
            java.lang.Object r3 = parse(r9, r10, r1)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L0
            boolean r4 = r3.equals(r0)
            if (r4 == 0) goto L13d
            if (r10 != 0) goto L137
            int r0 = r1.length()
            if (r0 <= 0) goto L137
            java.lang.String r0 = "childNodes"
            r2.put(r0, r1)
        L137:
            if (r11 != 0) goto L0
            if (r10 == 0) goto L13c
            return r1
        L13c:
            return r2
        L13d:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Mismatched '"
            r10.append(r11)
            r10.append(r0)
            java.lang.String r11 = "' and '"
            r10.append(r11)
            r10.append(r3)
            java.lang.String r11 = "'"
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L160:
            org.json.JSONException r9 = r9.syntaxError(r3)
            throw r9
        L165:
            java.lang.String r6 = (java.lang.String) r6
            if (r10 != 0) goto L17f
            boolean r7 = r4.equals(r6)
            if (r7 != 0) goto L178
            java.lang.String r7 = "childNode"
            boolean r7 = r7.equals(r6)
            if (r7 != 0) goto L178
            goto L17f
        L178:
            java.lang.String r10 = "Reserved attribute."
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L17f:
            java.lang.Object r7 = r9.nextToken()
            java.lang.Character r8 = org.json.XML.EQ
            if (r7 != r8) goto L1a1
            java.lang.Object r7 = r9.nextToken()
            boolean r8 = r7 instanceof java.lang.String
            if (r8 == 0) goto L19a
            java.lang.String r7 = (java.lang.String) r7
            java.lang.Object r7 = org.json.XML.stringToValue(r7)
            r2.accumulate(r6, r7)
            goto Le9
        L19a:
            java.lang.String r10 = "Missing value"
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L1a1:
            java.lang.String r8 = ""
            r2.accumulate(r6, r8)
            r6 = r7
            goto Lea
        L1a9:
            org.json.JSONException r9 = r9.syntaxError(r3)
            throw r9
        L1ae:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "Bad tagName '"
            r10.append(r11)
            r10.append(r0)
            r10.append(r2)
            java.lang.String r10 = r10.toString()
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
        L1c7:
            if (r11 == 0) goto L0
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L1d3
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r0 = org.json.XML.stringToValue(r0)
        L1d3:
            r11.put(r0)
            goto L0
        L1d8:
            java.lang.String r10 = "Bad XML"
            org.json.JSONException r9 = r9.syntaxError(r10)
            throw r9
    }

    public static org.json.JSONArray toJSONArray(java.lang.String r1) throws org.json.JSONException {
            org.json.XMLTokener r0 = new org.json.XMLTokener
            r0.<init>(r1)
            org.json.JSONArray r1 = toJSONArray(r0)
            return r1
    }

    public static org.json.JSONArray toJSONArray(org.json.XMLTokener r2) throws org.json.JSONException {
            r0 = 1
            r1 = 0
            java.lang.Object r2 = parse(r2, r0, r1)
            org.json.JSONArray r2 = (org.json.JSONArray) r2
            return r2
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r1) throws org.json.JSONException {
            org.json.XMLTokener r0 = new org.json.XMLTokener
            r0.<init>(r1)
            org.json.JSONObject r1 = toJSONObject(r0)
            return r1
    }

    public static org.json.JSONObject toJSONObject(org.json.XMLTokener r2) throws org.json.JSONException {
            r0 = 0
            r1 = 0
            java.lang.Object r2 = parse(r2, r0, r1)
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            return r2
    }

    public static java.lang.String toString(org.json.JSONArray r10) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.lang.String r1 = r10.getString(r1)
            org.json.XML.noSpace(r1)
            java.lang.String r1 = org.json.XML.escape(r1)
            r2 = 60
            r0.append(r2)
            r0.append(r1)
            r3 = 1
            java.lang.Object r4 = r10.opt(r3)
            boolean r5 = r4 instanceof org.json.JSONObject
            if (r5 == 0) goto L5f
            r5 = 2
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            java.util.Iterator r6 = r4.keys()
        L29:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L60
            java.lang.Object r7 = r6.next()
            java.lang.String r7 = (java.lang.String) r7
            org.json.XML.noSpace(r7)
            java.lang.String r8 = r4.optString(r7)
            if (r8 == 0) goto L29
            r9 = 32
            r0.append(r9)
            java.lang.String r7 = org.json.XML.escape(r7)
            r0.append(r7)
            r7 = 61
            r0.append(r7)
            r7 = 34
            r0.append(r7)
            java.lang.String r8 = org.json.XML.escape(r8)
            r0.append(r8)
            r0.append(r7)
            goto L29
        L5f:
            r5 = 1
        L60:
            int r4 = r10.length()
            r6 = 47
            r7 = 62
            if (r5 < r4) goto L71
            r0.append(r6)
            r0.append(r7)
            goto Lbc
        L71:
            r0.append(r7)
        L74:
            java.lang.Object r8 = r10.get(r5)
            int r5 = r5 + r3
            if (r8 == 0) goto Lae
            boolean r9 = r8 instanceof java.lang.String
            if (r9 == 0) goto L8b
            java.lang.String r8 = r8.toString()
            java.lang.String r8 = org.json.XML.escape(r8)
            r0.append(r8)
            goto Lae
        L8b:
            boolean r9 = r8 instanceof org.json.JSONObject
            if (r9 == 0) goto L99
            org.json.JSONObject r8 = (org.json.JSONObject) r8
            java.lang.String r8 = toString(r8)
            r0.append(r8)
            goto Lae
        L99:
            boolean r9 = r8 instanceof org.json.JSONArray
            if (r9 == 0) goto La7
            org.json.JSONArray r8 = (org.json.JSONArray) r8
            java.lang.String r8 = toString(r8)
            r0.append(r8)
            goto Lae
        La7:
            java.lang.String r8 = r8.toString()
            r0.append(r8)
        Lae:
            if (r5 < r4) goto L74
            r0.append(r2)
            r0.append(r6)
            r0.append(r1)
            r0.append(r7)
        Lbc:
            java.lang.String r10 = r0.toString()
            return r10
    }

    public static java.lang.String toString(org.json.JSONObject r9) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "tagName"
            java.lang.String r2 = r9.optString(r1)
            if (r2 != 0) goto L16
            java.lang.String r9 = r9.toString()
            java.lang.String r9 = org.json.XML.escape(r9)
            return r9
        L16:
            org.json.XML.noSpace(r2)
            java.lang.String r2 = org.json.XML.escape(r2)
            r3 = 60
            r0.append(r3)
            r0.append(r2)
            java.util.Iterator r4 = r9.keys()
        L29:
            boolean r5 = r4.hasNext()
            java.lang.String r6 = "childNodes"
            if (r5 == 0) goto L6d
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            boolean r7 = r1.equals(r5)
            if (r7 != 0) goto L29
            boolean r6 = r6.equals(r5)
            if (r6 != 0) goto L29
            org.json.XML.noSpace(r5)
            java.lang.String r6 = r9.optString(r5)
            if (r6 == 0) goto L29
            r7 = 32
            r0.append(r7)
            java.lang.String r5 = org.json.XML.escape(r5)
            r0.append(r5)
            r5 = 61
            r0.append(r5)
            r5 = 34
            r0.append(r5)
            java.lang.String r6 = org.json.XML.escape(r6)
            r0.append(r6)
            r0.append(r5)
            goto L29
        L6d:
            org.json.JSONArray r9 = r9.optJSONArray(r6)
            r1 = 47
            r4 = 62
            if (r9 != 0) goto L7e
            r0.append(r1)
            r0.append(r4)
            goto Ld0
        L7e:
            r0.append(r4)
            int r5 = r9.length()
            r6 = 0
        L86:
            if (r6 >= r5) goto Lc4
            java.lang.Object r7 = r9.get(r6)
            if (r7 == 0) goto Lc1
            boolean r8 = r7 instanceof java.lang.String
            if (r8 == 0) goto L9e
            java.lang.String r7 = r7.toString()
            java.lang.String r7 = org.json.XML.escape(r7)
            r0.append(r7)
            goto Lc1
        L9e:
            boolean r8 = r7 instanceof org.json.JSONObject
            if (r8 == 0) goto Lac
            org.json.JSONObject r7 = (org.json.JSONObject) r7
            java.lang.String r7 = toString(r7)
            r0.append(r7)
            goto Lc1
        Lac:
            boolean r8 = r7 instanceof org.json.JSONArray
            if (r8 == 0) goto Lba
            org.json.JSONArray r7 = (org.json.JSONArray) r7
            java.lang.String r7 = toString(r7)
            r0.append(r7)
            goto Lc1
        Lba:
            java.lang.String r7 = r7.toString()
            r0.append(r7)
        Lc1:
            int r6 = r6 + 1
            goto L86
        Lc4:
            r0.append(r3)
            r0.append(r1)
            r0.append(r2)
            r0.append(r4)
        Ld0:
            java.lang.String r9 = r0.toString()
            return r9
    }
}
