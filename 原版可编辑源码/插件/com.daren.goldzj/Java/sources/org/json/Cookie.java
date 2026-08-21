package org.json;

public class Cookie {
    public static String escape(String str) {
        String strTrim = str.trim();
        int length = strTrim.length();
        StringBuilder sb = new StringBuilder(length);
        for (int i = 0; i < length; i++) {
            char cCharAt = strTrim.charAt(i);
            if (cCharAt < ' ' || cCharAt == '+' || cCharAt == '%' || cCharAt == '=' || cCharAt == ';') {
                sb.append('%');
                sb.append(Character.forDigit((char) ((cCharAt >>> 4) & 15), 16));
                sb.append(Character.forDigit((char) (cCharAt & 15), 16));
            } else {
                sb.append(cCharAt);
            }
        }
        return sb.toString();
    }

    public static JSONObject toJSONObject(String str) throws JSONException {
        Object objUnescape;
        JSONObject jSONObject = new JSONObject();
        JSONTokener jSONTokener = new JSONTokener(str);
        jSONObject.put("name", jSONTokener.nextTo('='));
        jSONTokener.next('=');
        jSONObject.put("value", jSONTokener.nextTo(';'));
        jSONTokener.next();
        while (jSONTokener.more()) {
            String strUnescape = unescape(jSONTokener.nextTo("=;"));
            if (jSONTokener.next() == '=') {
                objUnescape = unescape(jSONTokener.nextTo(';'));
                jSONTokener.next();
            } else {
                if (!strUnescape.equals("secure")) {
                    throw jSONTokener.syntaxError("Missing '=' in cookie parameter.");
                }
                objUnescape = Boolean.TRUE;
            }
            jSONObject.put(strUnescape, objUnescape);
        }
        return jSONObject;
    }

    public static String toString(JSONObject jSONObject) throws JSONException {
        StringBuilder sb = new StringBuilder();
        sb.append(escape(jSONObject.getString("name")));
        sb.append("=");
        sb.append(escape(jSONObject.getString("value")));
        if (jSONObject.has("expires")) {
            sb.append(";expires=");
            sb.append(jSONObject.getString("expires"));
        }
        if (jSONObject.has("domain")) {
            sb.append(";domain=");
            sb.append(escape(jSONObject.getString("domain")));
        }
        if (jSONObject.has("path")) {
            sb.append(";path=");
            sb.append(escape(jSONObject.getString("path")));
        }
        if (jSONObject.optBoolean("secure")) {
            sb.append(";secure");
        }
        return sb.toString();
    }

    public static String unescape(String str) {
        int i;
        int length = str.length();
        StringBuilder sb = new StringBuilder(length);
        int i2 = 0;
        while (i2 < length) {
            char cCharAt = str.charAt(i2);
            if (cCharAt == '+') {
                cCharAt = ' ';
            } else if (cCharAt == '%' && (i = i2 + 2) < length) {
                int iDehexchar = JSONTokener.dehexchar(str.charAt(i2 + 1));
                int iDehexchar2 = JSONTokener.dehexchar(str.charAt(i));
                if (iDehexchar >= 0 && iDehexchar2 >= 0) {
                    cCharAt = (char) ((iDehexchar * 16) + iDehexchar2);
                    i2 = i;
                }
            }
            sb.append(cCharAt);
            i2++;
        }
        return sb.toString();
    }
}
