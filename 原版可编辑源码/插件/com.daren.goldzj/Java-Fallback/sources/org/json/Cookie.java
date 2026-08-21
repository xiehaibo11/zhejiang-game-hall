package org.json;

public class Cookie {
    public Cookie() {
    }

    public static String escape(String r6) {
        String r62 = r6.trim();
        int r0 = r62.length();
        StringBuilder r1 = new StringBuilder(r0);
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L18;
        char r3 = r62.charAt(r2);
        if (r3 >= ' ') goto L7;
    L15:
        r1.append('%');
        r1.append(Character.forDigit((char) ((r3 >>> 4) & 15), 16));
        r1.append(Character.forDigit((char) (r3 & 15), 16));
    L16:
        r2 = r2 + 1;
        goto L3
    L7:
        if (r3 == '+') goto L15;
        if (r3 == '%') goto L15;
        if (r3 == '=') goto L15;
        if (r3 == ';') goto L15;
        r1.append(r3);
        goto L16
    L18:
        return r1.toString();
    }

    public static JSONObject toJSONObject(String r5) throws JSONException {
        JSONObject r0 = new JSONObject();
        JSONTokener r1 = new JSONTokener(r5);
        r0.put("name", r1.nextTo('='));
        r1.next('=');
        r0.put("value", r1.nextTo(';'));
        r1.next();
    L4:
        if (r1.more() == false) goto L14;
        String r3 = unescape(r1.nextTo("=;"));
        if (r1.next() != '=') goto L8;
        Object r4 = unescape(r1.nextTo(';'));
        r1.next();
    L13:
        r0.put(r3, r4);
        goto L4
    L8:
        if (r3.equals("secure") == false) goto L11;
        r4 = Boolean.TRUE;
        goto L13
    L11:
        throw r1.syntaxError("Missing '=' in cookie parameter.");
    L14:
        return r0;
    }

    public static String toString(JSONObject r3) throws JSONException {
        StringBuilder r0 = new StringBuilder();
        r0.append(escape(r3.getString("name")));
        r0.append("=");
        r0.append(escape(r3.getString("value")));
        if (r3.has("expires") == false) goto L6;
        r0.append(";expires=");
        r0.append(r3.getString("expires"));
    L6:
        if (r3.has("domain") == false) goto L9;
        r0.append(";domain=");
        r0.append(escape(r3.getString("domain")));
    L9:
        if (r3.has("path") == false) goto L12;
        r0.append(";path=");
        r0.append(escape(r3.getString("path")));
    L12:
        if (r3.optBoolean("secure") == false) goto L15;
        r0.append(";secure");
    L15:
        return r0.toString();
    }

    public static String unescape(String r7) {
        int r0 = r7.length();
        StringBuilder r1 = new StringBuilder(r0);
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L17;
        char r3 = r7.charAt(r2);
        if (r3 != '+') goto L8;
        r3 = ' ';
    L15:
        r1.append(r3);
        r2 = r2 + 1;
        goto L3
    L8:
        if (r3 != '%') goto L15;
        int r4 = r2 + 2;
        if (r4 >= r0) goto L15;
        int r5 = JSONTokener.dehexchar(r7.charAt(r2 + 1));
        int r6 = JSONTokener.dehexchar(r7.charAt(r4));
        if (r5 < 0) goto L15;
        if (r6 < 0) goto L15;
        r3 = (char) ((r5 * 16) + r6);
        r2 = r4;
        goto L15
    L17:
        return r1.toString();
    }
}
