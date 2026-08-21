package org.json;

import java.util.Iterator;

public class XML {
    public static final Character AMP = null;
    public static final Character APOS = null;
    public static final Character BANG = null;
    public static final Character EQ = null;
    public static final Character GT = null;
    public static final Character LT = null;
    public static final Character QUEST = null;
    public static final Character QUOT = null;
    public static final Character SLASH = null;

    static {
        AMP = '&';
        APOS = '\'';
        BANG = '!';
        EQ = '=';
        GT = '>';
        LT = '<';
        QUEST = '?';
        QUOT = '\"';
        SLASH = '/';
    }

    public XML() {
    }

    public static String escape(String r5) {
        StringBuilder r0 = new StringBuilder(r5.length());
        int r1 = r5.length();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L22;
        char r3 = r5.charAt(r2);
        if (r3 != '\"') goto L7;
        r0.append("&quot;");
    L20:
        r2 = r2 + 1;
        goto L3
    L7:
        if (r3 != '<') goto L9;
        r0.append("&lt;");
        goto L20
    L9:
        if (r3 != '>') goto L11;
        r0.append("&gt;");
        goto L20
    L11:
        if (r3 != '&') goto L13;
        r0.append("&amp;");
        goto L20
    L13:
        if (r3 == '\'') goto L15;
        r0.append(r3);
        goto L20
    L15:
        r0.append("&apos;");
        goto L20
    L22:
        return r0.toString();
    }

    public static void noSpace(String r3) throws JSONException {
        int r0 = r3.length();
        if (r0 == 0) goto L13;
        int r1 = 0;
    L5:
        if (r1 >= r0) goto L11;
        if (Character.isWhitespace(r3.charAt(r1)) == true) goto L10;
        r1 = r1 + 1;
        goto L5
    L10:
        throw new JSONException("'" + r3 + "' contains a space character.");
    L11:
        return;
    L13:
        throw new JSONException("Empty string.");
    }

    private static boolean parse(XMLTokener r10, JSONObject r11, String r12) throws JSONException {
        Object r0 = r10.nextToken();
        int r3 = 1;
        if (r0 != BANG) goto L36;
        char r122 = r10.next();
        if (r122 != '-') goto L12;
        if (r10.next() != '-') goto L10;
        r10.skipPast("-->");
        return false;
    L10:
        r10.back();
    L23:
        Object r112 = r10.nextMeta();
        if (r112 == null) goto L34;
        if (r112 != LT) goto L29;
        r3 = r3 + 1;
    L31:
        if (r3 > 0) goto L23;
        return false;
    L29:
        if (r112 != GT) goto L31;
        r3 = r3 - 1;
        goto L31
    L34:
        throw r10.syntaxError("Missing '>' after '<!'.");
    L12:
        if (r122 != '[') goto L23;
        if ("CDATA".equals(r10.nextToken()) == false) goto L22;
        if (r10.next() != '[') goto L22;
        String r102 = r10.nextCDATA();
        if (r102.length() <= 0) goto L20;
        r11.accumulate("content", r102);
    L20:
        return false;
    L22:
        throw r10.syntaxError("Expected 'CDATA['");
    L36:
        if (r0 != QUEST) goto L40;
        r10.skipPast("?>");
        return false;
    L40:
        if (r0 != SLASH) goto L55;
        Object r113 = r10.nextToken();
        if (r12 == null) goto L53;
        if (r113.equals(r12) == false) goto L51;
        if (r10.nextToken() != GT) goto L49;
        return true;
    L49:
        throw r10.syntaxError("Misshaped close tag");
    L51:
        throw r10.syntaxError("Mismatched " + r12 + " and " + r113);
    L53:
        throw r10.syntaxError("Mismatched close tag " + r113);
    L55:
        if ((r0 instanceof Character) == true) goto L111;
        String r02 = (String) r0;
        JSONObject r123 = new JSONObject();
    L57:
        Object r6 = null;
    L58:
        if (r6 != null) goto L61;
        r6 = r10.nextToken();
    L61:
        if ((r6 instanceof String) == false) goto L71;
        String r62 = (String) r6;
        Object r7 = r10.nextToken();
        if (r7 == EQ) goto L64;
        r123.accumulate(r62, "");
        r6 = r7;
        goto L58
    L64:
        Object r72 = r10.nextToken();
        if ((r72 instanceof String) == false) goto L68;
        r123.accumulate(r62, stringToValue((String) r72));
        goto L57
    L68:
        throw r10.syntaxError("Missing value");
    L71:
        if (r6 != SLASH) goto L82;
        if (r10.nextToken() != GT) goto L80;
        if (r123.length() <= 0) goto L77;
        r11.accumulate(r02, r123);
    L78:
        return false;
    L77:
        r11.accumulate(r02, "");
        goto L78
    L80:
        throw r10.syntaxError("Misshaped tag");
    L82:
        if (r6 != GT) goto L109;
    L83:
        Object r1 = r10.nextContent();
        if (r1 == null) goto L85;
        if ((r1 instanceof String) == true) goto L91;
        if (r1 != LT) goto L83;
        if (parse(r10, r123, r02) == false) goto L83;
        if (r123.length() != 0) goto L102;
        r11.accumulate(r02, "");
    L107:
        return false;
    L102:
        if (r123.length() == 1) goto L104;
    L106:
        r11.accumulate(r02, r123);
        goto L107
    L104:
        if (r123.opt("content") == null) goto L106;
        r11.accumulate(r02, r123.opt("content"));
        goto L107
    L91:
        String r13 = (String) r1;
        if (r13.length() <= 0) goto L83;
        r123.accumulate("content", stringToValue(r13));
        goto L83
    L85:
        if (r02 != null) goto L88;
        return false;
    L88:
        throw r10.syntaxError("Unclosed tag " + r02);
    L109:
        throw r10.syntaxError("Misshaped tag");
    L111:
        throw r10.syntaxError("Misshaped tag");
    }

    public static Object stringToValue(String r2) {
        if ("true".equalsIgnoreCase(r2) == false) goto L7;
        return Boolean.TRUE;
    L7:
        if ("false".equalsIgnoreCase(r2) == false) goto L11;
        return Boolean.FALSE;
    L11:
        if ("null".equalsIgnoreCase(r2) == false) goto L29;
        return JSONObject.NULL;
    L29:
        char r0 = r2.charAt(0);     // Catch: Exception -> L24
        if (r0 != '-') goto L18;
    L21:
        Long r02 = new Long(r2);     // Catch: Exception -> L24
        if (r02.toString().equals(r2) == false) goto L27;
        return r02;
    L18:
        if (r0 < '0') goto L27;
        if (r0 > '9') goto L27;
    L24:
        Double r03 = new Double(r2);     // Catch: Exception -> L28
        if (r03.toString().equals(r2) == false) goto L27;
        return r03;
    L27:
        return r2;
    }

    public static JSONObject toJSONObject(String r2) throws JSONException {
        JSONObject r0 = new JSONObject();
        XMLTokener r1 = new XMLTokener(r2);
    L4:
        if (r1.more() == false) goto L8;
        if (r1.skipPast("<") == false) goto L8;
        parse(r1, r0, null);
    L8:
        return r0;
    }

    public static String toString(Object r1) throws JSONException {
        return toString(r1, null);
    }

    public static String toString(Object r13, String r14) throws JSONException {
        StringBuilder r0 = new StringBuilder();
        int r4 = 0;
        if ((r13 instanceof JSONObject) == false) goto L44;
        if (r14 == null) goto L7;
        r0.append('<');
        r0.append(r14);
        r0.append('>');
    L7:
        JSONObject r132 = (JSONObject) r13;
        Iterator<String> r6 = r132.keys();
    L9:
        if (r6.hasNext() == false) goto L39;
        String r7 = r6.next();
        Object r8 = r132.opt(r7);
        if (r8 != null) goto L14;
        r8 = "";
    L14:
        if ((r8 instanceof String) == false) goto L17;
        String r10 = (String) r8;
    L17:
        if ("content".equals(r7) == true) goto L19;
        if ((r8 instanceof JSONArray) == true) goto L28;
        if ("".equals(r8) == true) goto L37;
        r0.append(toString(r8, r7));
        goto L9
    L37:
        r0.append('<');
        r0.append(r7);
        r0.append("/>");
        goto L9
    L28:
        JSONArray r82 = (JSONArray) r8;
        int r9 = r82.length();
        int r102 = 0;
    L29:
        if (r102 >= r9) goto L9;
        Object r11 = r82.get(r102);
        if ((r11 instanceof JSONArray) == false) goto L33;
        r0.append('<');
        r0.append(r7);
        r0.append('>');
        r0.append(toString(r11));
        r0.append("</");
        r0.append(r7);
        r0.append('>');
    L34:
        r102 = r102 + 1;
        goto L29
    L33:
        r0.append(toString(r11, r7));
        goto L34
    L19:
        if ((r8 instanceof JSONArray) == true) goto L20;
        r0.append(escape(r8.toString()));
        goto L9
    L20:
        JSONArray r83 = (JSONArray) r8;
        int r72 = r83.length();
        int r92 = 0;
    L21:
        if (r92 >= r72) goto L9;
        if (r92 <= 0) goto L24;
        r0.append('\n');
    L24:
        r0.append(escape(r83.get(r92).toString()));
        r92 = r92 + 1;
        goto L21
    L39:
        if (r14 == null) goto L42;
        r0.append("</");
        r0.append(r14);
        r0.append('>');
    L42:
        return r0.toString();
    L44:
        if (r13.getClass().isArray() == false) goto L47;
        r13 = new JSONArray(r13);
    L47:
        if ((r13 instanceof JSONArray) == false) goto L57;
        JSONArray r133 = (JSONArray) r13;
        int r1 = r133.length();
    L49:
        if (r4 >= r1) goto L56;
        Object r2 = r133.opt(r4);
        if (r14 != null) goto L53;
        String r3 = "array";
    L54:
        r0.append(toString(r2, r3));
        r4 = r4 + 1;
        goto L49
    L53:
        r3 = r14;
        goto L54
    L56:
        return r0.toString();
    L57:
        if (r13 != null) goto L59;
        String r134 = "null";
    L60:
        if (r14 != null) goto L63;
        return "\"" + r134 + "\"";
    L63:
        if (r134.length() != 0) goto L66;
        return "<" + r14 + "/>";
    L66:
        return "<" + r14 + ">" + r134 + "</" + r14 + ">";
    L59:
        r134 = escape(r13.toString());
        goto L60
    }
}
