package org.json;

import java.util.Iterator;

public class JSONML {
    public JSONML() {
    }

    private static Object parse(XMLTokener r9, boolean r10, JSONArray r11) throws JSONException {
    L3:
        if (r9.more() == false) goto L131;
        Object r0 = r9.nextContent();
        if (r0 == XML.LT) goto L6;
        if (r11 == null) goto L3;
        if ((r0 instanceof String) == false) goto L129;
        r0 = XML.stringToValue((String) r0);
    L129:
        r11.put(r0);
        goto L3
    L6:
        Object r02 = r9.nextToken();
        if ((r02 instanceof Character) == true) goto L9;
        if ((r02 instanceof String) == false) goto L124;
        String r03 = (String) r02;
        JSONArray r1 = new JSONArray();
        JSONObject r2 = new JSONObject();
        if (r10 == false) goto L62;
        r1.put(r03);
        if (r11 == null) goto L66;
        r11.put(r1);
    L66:
        Object r6 = null;
    L67:
        if (r6 != null) goto L69;
        r6 = r9.nextToken();
    L69:
        if (r6 == null) goto L122;
        if ((r6 instanceof String) == false) goto L72;
        String r62 = (String) r6;
        if (r10 == false) goto L107;
    L113:
        Object r7 = r9.nextToken();
        if (r7 == XML.EQ) goto L115;
        r2.accumulate(r62, "");
        r6 = r7;
        goto L67
    L115:
        Object r72 = r9.nextToken();
        if ((r72 instanceof String) == false) goto L119;
        r2.accumulate(r62, XML.stringToValue((String) r72));
        goto L66
    L119:
        throw r9.syntaxError("Missing value");
    L107:
        if ("tagName".equals(r62) == true) goto L112;
        if ("childNode".equals(r62) == false) goto L113;
    L112:
        throw r9.syntaxError("Reserved attribute.");
    L72:
        if (r10 == false) goto L77;
        if (r2.length() <= 0) goto L77;
        r1.put(r2);
    L77:
        if (r6 == XML.SLASH) goto L79;
        if (r6 != XML.GT) goto L103;
        String r3 = (String) parse(r9, r10, r1);
        if (r3 == null) goto L3;
        if (r3.equals(r03) == false) goto L101;
        if (r10 == false) goto L94;
    L96:
        if (r11 != null) goto L3;
        if (r10 == false) goto L99;
        return r1;
    L99:
        return r2;
    L94:
        if (r1.length() <= 0) goto L96;
        r2.put("childNodes", r1);
        goto L96
    L101:
        throw r9.syntaxError("Mismatched '" + r03 + "' and '" + r3 + "'");
    L103:
        throw r9.syntaxError("Misshaped tag");
    L79:
        if (r9.nextToken() != XML.GT) goto L85;
        if (r11 != null) goto L3;
        if (r10 == false) goto L83;
        return r1;
    L83:
        return r2;
    L85:
        throw r9.syntaxError("Misshaped tag");
    L122:
        throw r9.syntaxError("Misshaped tag");
    L62:
        r2.put("tagName", r03);
        if (r11 == null) goto L66;
        r11.put(r2);
        goto L66
    L124:
        throw r9.syntaxError("Bad tagName '" + r02 + "'.");
    L9:
        if (r02 == XML.SLASH) goto L10;
        if (r02 == XML.BANG) goto L21;
        if (r02 != XML.QUEST) goto L54;
        r9.skipPast("?>");
        goto L3
    L54:
        throw r9.syntaxError("Misshaped tag");
    L21:
        char r04 = r9.next();
        if (r04 == '-') goto L24;
        if (r04 == '[') goto L30;
        int r05 = 1;
    L38:
        Object r12 = r9.nextMeta();
        if (r12 == null) goto L49;
        if (r12 != XML.LT) goto L44;
        r05 = r05 + 1;
    L46:
        if (r05 > 0) goto L38;
    L44:
        if (r12 != XML.GT) goto L46;
        r05 = r05 - 1;
        goto L46
    L49:
        throw r9.syntaxError("Missing '>' after '<!'.");
    L30:
        if (r9.nextToken().equals("CDATA") == false) goto L36;
        if (r9.next() != '[') goto L36;
        if (r11 == null) goto L3;
        r11.put(r9.nextCDATA());
    L36:
        throw r9.syntaxError("Expected 'CDATA['");
    L24:
        if (r9.next() == '-') goto L25;
        r9.back();
        goto L3
    L25:
        r9.skipPast("-->");
        goto L3
    L10:
        Object r102 = r9.nextToken();
        if ((r102 instanceof String) == false) goto L18;
        if (r9.nextToken() != XML.GT) goto L16;
        return r102;
    L16:
        throw r9.syntaxError("Misshaped close tag");
    L18:
        throw new JSONException("Expected a closing name instead of '" + r102 + "'.");
    L131:
        throw r9.syntaxError("Bad XML");
    }

    public static JSONArray toJSONArray(String r1) throws JSONException {
        return toJSONArray(new XMLTokener(r1));
    }

    public static JSONObject toJSONObject(XMLTokener r2) throws JSONException {
        return (JSONObject) parse(r2, false, null);
    }

    public static String toString(JSONArray r10) throws JSONException {
        StringBuilder r0 = new StringBuilder();
        String r1 = r10.getString(0);
        XML.noSpace(r1);
        String r12 = XML.escape(r1);
        r0.append('<');
        r0.append(r12);
        Object r4 = r10.opt(1);
        if ((r4 instanceof JSONObject) == false) goto L10;
        int r5 = 2;
        JSONObject r42 = (JSONObject) r4;
        Iterator<String> r6 = r42.keys();
    L6:
        if (r6.hasNext() == false) goto L11;
        String r7 = r6.next();
        XML.noSpace(r7);
        String r8 = r42.optString(r7);
        if (r8 == null) goto L6;
        r0.append(' ');
        r0.append(XML.escape(r7));
        r0.append('=');
        r0.append('\"');
        r0.append(XML.escape(r8));
        r0.append('\"');
    L11:
        int r43 = r10.length();
        if (r5 < r43) goto L14;
        r0.append('/');
        r0.append('>');
    L30:
        return r0.toString();
    L14:
        r0.append('>');
    L15:
        Object r82 = r10.get(r5);
        r5 = r5 + 1;
        if (r82 == null) goto L27;
        if ((r82 instanceof String) == false) goto L21;
        r0.append(XML.escape(r82.toString()));
        goto L27
    L21:
        if ((r82 instanceof JSONObject) == false) goto L24;
        r0.append(toString((JSONObject) r82));
        goto L27
    L24:
        if ((r82 instanceof JSONArray) == false) goto L26;
        r0.append(toString((JSONArray) r82));
        goto L27
    L26:
        r0.append(r82.toString());
    L27:
        if (r5 < r43) goto L15;
        r0.append('<');
        r0.append('/');
        r0.append(r12);
        r0.append('>');
        goto L30
    L10:
        r5 = 1;
        goto L11
    }

    public static JSONArray toJSONArray(XMLTokener r2) throws JSONException {
        return (JSONArray) parse(r2, true, null);
    }

    public static JSONObject toJSONObject(String r1) throws JSONException {
        return toJSONObject(new XMLTokener(r1));
    }

    public static String toString(JSONObject r9) throws JSONException {
        StringBuilder r0 = new StringBuilder();
        String r2 = r9.optString("tagName");
        if (r2 == null) goto L5;
        XML.noSpace(r2);
        String r22 = XML.escape(r2);
        r0.append('<');
        r0.append(r22);
        Iterator<String> r4 = r9.keys();
    L8:
        if (r4.hasNext() == false) goto L16;
        String r5 = r4.next();
        if ("tagName".equals(r5) == true) goto L8;
        if ("childNodes".equals(r5) == true) goto L8;
        XML.noSpace(r5);
        String r6 = r9.optString(r5);
        if (r6 == null) goto L8;
        r0.append(' ');
        r0.append(XML.escape(r5));
        r0.append('=');
        r0.append('\"');
        r0.append(XML.escape(r6));
        r0.append('\"');
        goto L8
    L16:
        JSONArray r92 = r9.optJSONArray("childNodes");
        if (r92 != null) goto L19;
        r0.append('/');
        r0.append('>');
    L36:
        return r0.toString();
    L19:
        r0.append('>');
        int r52 = r92.length();
        int r62 = 0;
    L20:
        if (r62 >= r52) goto L34;
        Object r7 = r92.get(r62);
        if (r7 == null) goto L33;
        if ((r7 instanceof String) == false) goto L27;
        r0.append(XML.escape(r7.toString()));
        goto L33
    L27:
        if ((r7 instanceof JSONObject) == false) goto L30;
        r0.append(toString((JSONObject) r7));
        goto L33
    L30:
        if ((r7 instanceof JSONArray) == false) goto L32;
        r0.append(toString((JSONArray) r7));
        goto L33
    L32:
        r0.append(r7.toString());
    L33:
        r62 = r62 + 1;
        goto L20
    L34:
        r0.append('<');
        r0.append('/');
        r0.append(r22);
        r0.append('>');
        goto L36
    L5:
        return XML.escape(r9.toString());
    }
}
