package org.json;

import java.util.Iterator;

public class CookieList {
    public static JSONObject toJSONObject(String str) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        JSONTokener jSONTokener = new JSONTokener(str);
        while (jSONTokener.more()) {
            String strUnescape = Cookie.unescape(jSONTokener.nextTo('='));
            jSONTokener.next('=');
            jSONObject.put(strUnescape, Cookie.unescape(jSONTokener.nextTo(';')));
            jSONTokener.next();
        }
        return jSONObject;
    }

    public static String toString(JSONObject jSONObject) throws JSONException {
        Iterator<String> itKeys = jSONObject.keys();
        StringBuilder sb = new StringBuilder();
        boolean z = false;
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            if (!jSONObject.isNull(next)) {
                if (z) {
                    sb.append(';');
                }
                sb.append(Cookie.escape(next));
                sb.append("=");
                sb.append(Cookie.escape(jSONObject.getString(next)));
                z = true;
            }
        }
        return sb.toString();
    }
}
