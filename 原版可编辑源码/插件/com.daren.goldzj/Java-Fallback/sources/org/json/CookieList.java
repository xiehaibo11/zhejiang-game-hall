package org.json;

import java.util.Iterator;

public class CookieList {
    public CookieList() {
    }

    public static JSONObject toJSONObject(String r3) throws JSONException {
        JSONObject r0 = new JSONObject();
        JSONTokener r1 = new JSONTokener(r3);
    L4:
        if (r1.more() == false) goto L6;
        String r2 = Cookie.unescape(r1.nextTo('='));
        r1.next('=');
        r0.put(r2, Cookie.unescape(r1.nextTo(';')));
        r1.next();
        goto L4
    L6:
        return r0;
    }

    public static String toString(JSONObject r5) throws JSONException {
        Iterator<String> r0 = r5.keys();
        StringBuilder r1 = new StringBuilder();
        boolean r2 = false;
    L4:
        if (r0.hasNext() == false) goto L11;
        String r3 = r0.next();
        if (r5.isNull(r3) == true) goto L4;
        if (r2 == false) goto L9;
        r1.append(';');
    L9:
        r1.append(Cookie.escape(r3));
        r1.append("=");
        r1.append(Cookie.escape(r5.getString(r3)));
        r2 = true;
        goto L4
    L11:
        return r1.toString();
    }
}
