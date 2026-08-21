package org.json;

public class JSONML {
    public JSONML() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.Object parse(org.json.XMLTokener r9, boolean r10, org.json.JSONArray r11) throws org.json.JSONException {
            r0 = 0
            r1 = 0
            r2 = 0
            r3 = 0
        L4:
            boolean r4 = r9.more()
            if (r4 == 0) goto L1e6
            java.lang.Object r4 = r9.nextContent()
            java.lang.Character r5 = org.json.XML.LT
            if (r4 != r5) goto L1d2
            java.lang.Object r4 = r9.nextToken()
            boolean r5 = r4 instanceof java.lang.Character
            java.lang.String r6 = "'."
            java.lang.String r7 = "Misshaped tag"
            if (r5 == 0) goto Lc7
            java.lang.Character r5 = org.json.XML.SLASH
            if (r4 != r5) goto L54
            java.lang.Object r4 = r9.nextToken()
            boolean r5 = r4 instanceof java.lang.String
            if (r5 == 0) goto L3a
            java.lang.Object r5 = r9.nextToken()
            java.lang.Character r6 = org.json.XML.GT
            if (r5 != r6) goto L33
            return r4
        L33:
            java.lang.String r5 = "Misshaped close tag"
            org.json.JSONException r5 = r9.syntaxError(r5)
            throw r5
        L3a:
            org.json.JSONException r5 = new org.json.JSONException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Expected a closing name instead of '"
            r7.append(r8)
            r7.append(r4)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
        L54:
            java.lang.Character r5 = org.json.XML.BANG
            if (r4 != r5) goto Lb7
            char r5 = r9.next()
            r6 = 45
            if (r5 != r6) goto L70
            char r7 = r9.next()
            if (r7 != r6) goto L6c
            java.lang.String r6 = "-->"
            r9.skipPast(r6)
            goto L4
        L6c:
            r9.back()
            goto L4
        L70:
            r6 = 91
            if (r5 != r6) goto L98
            java.lang.Object r4 = r9.nextToken()
            java.lang.String r7 = "CDATA"
            boolean r7 = r4.equals(r7)
            if (r7 == 0) goto L91
            char r7 = r9.next()
            if (r7 != r6) goto L91
            if (r11 == 0) goto L4
            java.lang.String r6 = r9.nextCDATA()
            r11.put(r6)
            goto L4
        L91:
            java.lang.String r6 = "Expected 'CDATA['"
            org.json.JSONException r6 = r9.syntaxError(r6)
            throw r6
        L98:
            r6 = 1
        L99:
            java.lang.Object r4 = r9.nextMeta()
            if (r4 == 0) goto Lb0
            java.lang.Character r7 = org.json.XML.LT
            if (r4 != r7) goto La6
            int r6 = r6 + 1
            goto Lac
        La6:
            java.lang.Character r7 = org.json.XML.GT
            if (r4 != r7) goto Lac
            int r6 = r6 + (-1)
        Lac:
            if (r6 > 0) goto L99
            goto L4
        Lb0:
            java.lang.String r7 = "Missing '>' after '<!'."
            org.json.JSONException r7 = r9.syntaxError(r7)
            throw r7
        Lb7:
            java.lang.Character r5 = org.json.XML.QUEST
            if (r4 != r5) goto Lc2
            java.lang.String r5 = "?>"
            r9.skipPast(r5)
            goto L4
        Lc2:
            org.json.JSONException r5 = r9.syntaxError(r7)
            throw r5
        Lc7:
            boolean r5 = r4 instanceof java.lang.String
            if (r5 == 0) goto L1b9
            r3 = r4
            java.lang.String r3 = (java.lang.String) r3
            org.json.JSONArray r5 = new org.json.JSONArray
            r5.<init>()
            r1 = r5
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            r2 = r5
            java.lang.String r5 = "tagName"
            if (r10 == 0) goto Le7
            r1.put(r3)
            if (r11 == 0) goto Lef
            r11.put(r1)
            goto Lef
        Le7:
            r2.put(r5, r3)
            if (r11 == 0) goto Lef
            r11.put(r2)
        Lef:
            r4 = 0
        Lf0:
            if (r4 != 0) goto Lf6
            java.lang.Object r4 = r9.nextToken()
        Lf6:
            if (r4 == 0) goto L1b4
            boolean r6 = r4 instanceof java.lang.String
            if (r6 != 0) goto L16e
        Lfd:
            if (r10 == 0) goto L108
            int r5 = r2.length()
            if (r5 <= 0) goto L108
            r1.put(r2)
        L108:
            java.lang.Character r5 = org.json.XML.SLASH
            if (r4 != r5) goto L11f
            java.lang.Object r5 = r9.nextToken()
            java.lang.Character r6 = org.json.XML.GT
            if (r5 != r6) goto L11a
            if (r11 != 0) goto L4
            if (r10 == 0) goto L119
            return r1
        L119:
            return r2
        L11a:
            org.json.JSONException r5 = r9.syntaxError(r7)
            throw r5
        L11f:
            java.lang.Character r5 = org.json.XML.GT
            if (r4 != r5) goto L169
            java.lang.Object r5 = parse(r9, r10, r1)
            r0 = r5
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L4
            boolean r5 = r0.equals(r3)
            if (r5 == 0) goto L146
            r3 = 0
            if (r10 != 0) goto L140
            int r5 = r1.length()
            if (r5 <= 0) goto L140
            java.lang.String r5 = "childNodes"
            r2.put(r5, r1)
        L140:
            if (r11 != 0) goto L4
            if (r10 == 0) goto L145
            return r1
        L145:
            return r2
        L146:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Mismatched '"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r6 = "' and '"
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = "'"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            org.json.JSONException r5 = r9.syntaxError(r5)
            throw r5
        L169:
            org.json.JSONException r5 = r9.syntaxError(r7)
            throw r5
        L16e:
            r6 = r4
            java.lang.String r6 = (java.lang.String) r6
            if (r10 != 0) goto L189
            boolean r8 = r5.equals(r6)
            if (r8 != 0) goto L182
            java.lang.String r8 = "childNode"
            boolean r8 = r8.equals(r6)
            if (r8 != 0) goto L182
            goto L189
        L182:
            java.lang.String r5 = "Reserved attribute."
            org.json.JSONException r5 = r9.syntaxError(r5)
            throw r5
        L189:
            java.lang.Object r4 = r9.nextToken()
            java.lang.Character r8 = org.json.XML.EQ
            if (r4 != r8) goto L1ad
            java.lang.Object r4 = r9.nextToken()
            boolean r8 = r4 instanceof java.lang.String
            if (r8 == 0) goto L1a6
            r8 = r4
            java.lang.String r8 = (java.lang.String) r8
            java.lang.Object r8 = org.json.XML.stringToValue(r8)
            r2.accumulate(r6, r8)
            r4 = 0
            goto Lf0
        L1a6:
            java.lang.String r5 = "Missing value"
            org.json.JSONException r5 = r9.syntaxError(r5)
            throw r5
        L1ad:
            java.lang.String r8 = ""
            r2.accumulate(r6, r8)
            goto Lf0
        L1b4:
            org.json.JSONException r5 = r9.syntaxError(r7)
            throw r5
        L1b9:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "Bad tagName '"
            r5.append(r7)
            r5.append(r4)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            org.json.JSONException r5 = r9.syntaxError(r5)
            throw r5
        L1d2:
            if (r11 == 0) goto L4
            boolean r5 = r4 instanceof java.lang.String
            if (r5 == 0) goto L1e0
            r5 = r4
            java.lang.String r5 = (java.lang.String) r5
            java.lang.Object r5 = org.json.XML.stringToValue(r5)
            goto L1e1
        L1e0:
            r5 = r4
        L1e1:
            r11.put(r5)
            goto L4
        L1e6:
            java.lang.String r4 = "Bad XML"
            org.json.JSONException r4 = r9.syntaxError(r4)
            throw r4
    }

    public static org.json.JSONArray toJSONArray(java.lang.String r1) throws org.json.JSONException {
            org.json.XMLTokener r0 = new org.json.XMLTokener
            r0.<init>(r1)
            org.json.JSONArray r0 = toJSONArray(r0)
            return r0
    }

    public static org.json.JSONArray toJSONArray(org.json.XMLTokener r2) throws org.json.JSONException {
            r0 = 1
            r1 = 0
            java.lang.Object r0 = parse(r2, r0, r1)
            org.json.JSONArray r0 = (org.json.JSONArray) r0
            return r0
    }

    public static org.json.JSONObject toJSONObject(java.lang.String r1) throws org.json.JSONException {
            org.json.XMLTokener r0 = new org.json.XMLTokener
            r0.<init>(r1)
            org.json.JSONObject r0 = toJSONObject(r0)
            return r0
    }

    public static org.json.JSONObject toJSONObject(org.json.XMLTokener r2) throws org.json.JSONException {
            r0 = 0
            r1 = 0
            java.lang.Object r0 = parse(r2, r0, r1)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            return r0
    }

    public static java.lang.String toString(org.json.JSONArray r12) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.lang.String r1 = r12.getString(r1)
            org.json.XML.noSpace(r1)
            java.lang.String r1 = org.json.XML.escape(r1)
            r2 = 60
            r0.append(r2)
            r0.append(r1)
            r3 = 1
            java.lang.Object r4 = r12.opt(r3)
            boolean r5 = r4 instanceof org.json.JSONObject
            if (r5 == 0) goto L60
            r5 = 2
            r6 = r4
            org.json.JSONObject r6 = (org.json.JSONObject) r6
            java.util.Iterator r7 = r6.keys()
        L2a:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L61
            java.lang.Object r8 = r7.next()
            java.lang.String r8 = (java.lang.String) r8
            org.json.XML.noSpace(r8)
            java.lang.String r9 = r6.optString(r8)
            if (r9 == 0) goto L2a
            r10 = 32
            r0.append(r10)
            java.lang.String r10 = org.json.XML.escape(r8)
            r0.append(r10)
            r10 = 61
            r0.append(r10)
            r10 = 34
            r0.append(r10)
            java.lang.String r11 = org.json.XML.escape(r9)
            r0.append(r11)
            r0.append(r10)
            goto L2a
        L60:
            r5 = 1
        L61:
            int r6 = r12.length()
            r7 = 47
            r8 = 62
            if (r5 < r6) goto L72
            r0.append(r7)
            r0.append(r8)
            goto Lbf
        L72:
            r0.append(r8)
        L75:
            java.lang.Object r4 = r12.get(r5)
            int r5 = r5 + r3
            if (r4 == 0) goto Lb1
            boolean r9 = r4 instanceof java.lang.String
            if (r9 == 0) goto L8c
            java.lang.String r9 = r4.toString()
            java.lang.String r9 = org.json.XML.escape(r9)
            r0.append(r9)
            goto Lb1
        L8c:
            boolean r9 = r4 instanceof org.json.JSONObject
            if (r9 == 0) goto L9b
            r9 = r4
            org.json.JSONObject r9 = (org.json.JSONObject) r9
            java.lang.String r9 = toString(r9)
            r0.append(r9)
            goto Lb1
        L9b:
            boolean r9 = r4 instanceof org.json.JSONArray
            if (r9 == 0) goto Laa
            r9 = r4
            org.json.JSONArray r9 = (org.json.JSONArray) r9
            java.lang.String r9 = toString(r9)
            r0.append(r9)
            goto Lb1
        Laa:
            java.lang.String r9 = r4.toString()
            r0.append(r9)
        Lb1:
            if (r5 < r6) goto Lc4
            r0.append(r2)
            r0.append(r7)
            r0.append(r1)
            r0.append(r8)
        Lbf:
            java.lang.String r2 = r0.toString()
            return r2
        Lc4:
            goto L75
    }

    public static java.lang.String toString(org.json.JSONObject r11) throws org.json.JSONException {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "tagName"
            java.lang.String r2 = r11.optString(r1)
            if (r2 != 0) goto L16
            java.lang.String r1 = r11.toString()
            java.lang.String r1 = org.json.XML.escape(r1)
            return r1
        L16:
            org.json.XML.noSpace(r2)
            java.lang.String r2 = org.json.XML.escape(r2)
            r3 = 60
            r0.append(r3)
            r0.append(r2)
            java.util.Iterator r4 = r11.keys()
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
            java.lang.String r6 = r11.optString(r5)
            if (r6 == 0) goto L29
            r7 = 32
            r0.append(r7)
            java.lang.String r7 = org.json.XML.escape(r5)
            r0.append(r7)
            r7 = 61
            r0.append(r7)
            r7 = 34
            r0.append(r7)
            java.lang.String r8 = org.json.XML.escape(r6)
            r0.append(r8)
            r0.append(r7)
            goto L29
        L6d:
            org.json.JSONArray r1 = r11.optJSONArray(r6)
            r5 = 47
            r6 = 62
            if (r1 != 0) goto L7e
            r0.append(r5)
            r0.append(r6)
            goto Ld2
        L7e:
            r0.append(r6)
            int r7 = r1.length()
            r8 = 0
        L86:
            if (r8 >= r7) goto Lc6
            java.lang.Object r9 = r1.get(r8)
            if (r9 == 0) goto Lc3
            boolean r10 = r9 instanceof java.lang.String
            if (r10 == 0) goto L9e
            java.lang.String r10 = r9.toString()
            java.lang.String r10 = org.json.XML.escape(r10)
            r0.append(r10)
            goto Lc3
        L9e:
            boolean r10 = r9 instanceof org.json.JSONObject
            if (r10 == 0) goto Lad
            r10 = r9
            org.json.JSONObject r10 = (org.json.JSONObject) r10
            java.lang.String r10 = toString(r10)
            r0.append(r10)
            goto Lc3
        Lad:
            boolean r10 = r9 instanceof org.json.JSONArray
            if (r10 == 0) goto Lbc
            r10 = r9
            org.json.JSONArray r10 = (org.json.JSONArray) r10
            java.lang.String r10 = toString(r10)
            r0.append(r10)
            goto Lc3
        Lbc:
            java.lang.String r10 = r9.toString()
            r0.append(r10)
        Lc3:
            int r8 = r8 + 1
            goto L86
        Lc6:
            r0.append(r3)
            r0.append(r5)
            r0.append(r2)
            r0.append(r6)
        Ld2:
            java.lang.String r3 = r0.toString()
            return r3
    }
}
