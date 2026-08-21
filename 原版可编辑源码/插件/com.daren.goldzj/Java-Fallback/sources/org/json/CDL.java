package org.json;

public class CDL {
    public CDL() {
    }

    private static String getValue(JSONTokener r4) throws JSONException {
    L2:
        char r0 = r4.next();
        if (r0 == ' ') goto L2;
        if (r0 == '\t') goto L2;
        if (r0 != 0) goto L8;
        return null;
    L8:
        if (r0 != '\"') goto L10;
    L17:
        StringBuffer r1 = new StringBuffer();
    L18:
        char r2 = r4.next();
        if (r2 == r0) goto L21;
        if (r2 == 0) goto L29;
        if (r2 == '\n') goto L29;
        if (r2 == '\r') goto L29;
        r1.append(r2);
    L29:
        throw r4.syntaxError("Missing close quote '" + r0 + "'.");
    L21:
        return r1.toString();
    L10:
        if (r0 == '\'') goto L17;
        if (r0 == ',') goto L15;
        r4.back();
        return r4.nextTo(',');
    L15:
        r4.back();
        return "";
    }

    public static JSONArray rowToJSONArray(JSONTokener r5) throws JSONException {
        JSONArray r0 = new JSONArray();
    L3:
        String r1 = getValue(r5);
        char r2 = r5.next();
        if (r1 == null) goto L26;
        if (r0.length() == 0) goto L8;
    L11:
        r0.put(r1);
    L12:
        if (r2 == ',') goto L3;
        if (r2 != ' ') goto L17;
        r2 = r5.next();
        goto L12
    L17:
        if (r2 != '\n') goto L19;
    L24:
        return r0;
    L19:
        if (r2 == '\r') goto L24;
        if (r2 == 0) goto L24;
        throw r5.syntaxError("Bad character '" + r2 + "' (" + r2 + ").");
    L8:
        if (r1.length() != 0) goto L11;
        if (r2 == ',') goto L11;
        return null;
    L26:
        return null;
    }

    public static JSONObject rowToJSONObject(JSONArray r0, JSONTokener r1) throws JSONException {
        JSONArray r12 = rowToJSONArray(r1);
        if (r12 != null) goto L7;
        return null;
    L7:
        return r12.toJSONObject(r0);
    }

    public static String rowToString(JSONArray r9) {
        StringBuilder r0 = new StringBuilder();
        int r2 = 0;
    L4:
        if (r2 >= r9.length()) goto L32;
        if (r2 <= 0) goto L8;
        r0.append(',');
    L8:
        Object r5 = r9.opt(r2);
        if (r5 == null) goto L31;
        String r52 = r5.toString();
        if (r52.length() > 0) goto L13;
    L30:
        r0.append(r52);
        goto L31
    L13:
        if (r52.indexOf(44) < 0) goto L15;
    L22:
        r0.append('\"');
        int r3 = r52.length();
        int r4 = 0;
    L23:
        if (r4 >= r3) goto L29;
        char r7 = r52.charAt(r4);
        if (r7 < ' ') goto L28;
        if (r7 == '\"') goto L28;
        r0.append(r7);
    L28:
        r4 = r4 + 1;
        goto L23
    L29:
        r0.append('\"');
        goto L31
    L15:
        if (r52.indexOf(10) >= 0) goto L22;
        if (r52.indexOf(13) >= 0) goto L22;
        if (r52.indexOf(0) >= 0) goto L22;
        if (r52.charAt(0) != '\"') goto L30;
    L31:
        r2 = r2 + 1;
        goto L4
    L32:
        r0.append('\n');
        return r0.toString();
    }

    public static JSONArray toJSONArray(String r1) throws JSONException {
        return toJSONArray(new JSONTokener(r1));
    }

    public static String toString(JSONArray r3) throws JSONException {
        JSONObject r0 = r3.optJSONObject(0);
        if (r0 == null) goto L8;
        JSONArray r02 = r0.names();
        if (r02 != null) goto L7;
        return null;
    L7:
        return rowToString(r02) + toString(r02, r3);
    L8:
        return null;
    }

    public static JSONArray toJSONArray(JSONTokener r1) throws JSONException {
        return toJSONArray(rowToJSONArray(r1), r1);
    }

    public static JSONArray toJSONArray(JSONArray r1, String r2) throws JSONException {
        return toJSONArray(r1, new JSONTokener(r2));
    }

    public static JSONArray toJSONArray(JSONArray r3, JSONTokener r4) throws JSONException {
        if (r3 != null) goto L5;
    L15:
        return null;
    L5:
        if (r3.length() == 0) goto L15;
        JSONArray r1 = new JSONArray();
    L8:
        JSONObject r2 = rowToJSONObject(r3, r4);
        if (r2 == null) goto L11;
        r1.put(r2);
        goto L8
    L11:
        if (r1.length() != 0) goto L13;
        return null;
    L13:
        return r1;
    }

    public static String toString(JSONArray r3, JSONArray r4) throws JSONException {
        if (r3 != null) goto L4;
        return null;
    L4:
        if (r3.length() == 0) goto L20;
        StringBuffer r0 = new StringBuffer();
        int r1 = 0;
    L8:
        if (r1 >= r4.length()) goto L14;
        JSONObject r2 = r4.optJSONObject(r1);
        if (r2 == null) goto L12;
        r0.append(rowToString(r2.toJSONArray(r3)));
    L12:
        r1 = r1 + 1;
        goto L8
    L14:
        return r0.toString();
    L20:
        return null;
    }
}
