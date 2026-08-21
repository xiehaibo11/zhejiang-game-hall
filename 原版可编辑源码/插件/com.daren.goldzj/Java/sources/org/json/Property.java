package org.json;

import java.util.Enumeration;
import java.util.Iterator;
import java.util.Properties;

public class Property {
    public static JSONObject toJSONObject(Properties properties) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        if (properties != null && !properties.isEmpty()) {
            Enumeration<?> enumerationPropertyNames = properties.propertyNames();
            while (enumerationPropertyNames.hasMoreElements()) {
                String str = (String) enumerationPropertyNames.nextElement();
                jSONObject.put(str, properties.getProperty(str));
            }
        }
        return jSONObject;
    }

    public static Properties toProperties(JSONObject jSONObject) throws JSONException {
        Properties properties = new Properties();
        if (jSONObject != null) {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                properties.put(next, jSONObject.getString(next));
            }
        }
        return properties;
    }
}
