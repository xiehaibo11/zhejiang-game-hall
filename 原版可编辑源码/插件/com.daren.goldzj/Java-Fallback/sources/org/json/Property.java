package org.json;

import java.util.Enumeration;
import java.util.Iterator;
import java.util.Properties;

public class Property {
    public Property() {
    }

    public static JSONObject toJSONObject(Properties r4) throws JSONException {
        JSONObject r0 = new JSONObject();
        if (r4 != null) goto L5;
    L10:
        return r0;
    L5:
        if (r4.isEmpty() == true) goto L10;
        Enumeration<?> r1 = r4.propertyNames();
    L8:
        if (r1.hasMoreElements() == false) goto L10;
        String r2 = (String) r1.nextElement();
        r0.put(r2, r4.getProperty(r2));
        goto L8
    }

    public static Properties toProperties(JSONObject r4) throws JSONException {
        Properties r0 = new Properties();
        if (r4 == null) goto L8;
        Iterator<String> r1 = r4.keys();
    L6:
        if (r1.hasNext() == false) goto L8;
        String r2 = r1.next();
        r0.put(r2, r4.getString(r2));
    L8:
        return r0;
    }
}
