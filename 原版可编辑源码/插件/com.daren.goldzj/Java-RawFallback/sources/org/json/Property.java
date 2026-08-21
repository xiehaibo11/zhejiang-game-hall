package org.json;

public class Property {
    public Property() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject toJSONObject(java.util.Properties r4) throws org.json.JSONException {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            if (r4 == 0) goto L25
            boolean r1 = r4.isEmpty()
            if (r1 != 0) goto L25
            java.util.Enumeration r1 = r4.propertyNames()
        L11:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r4.getProperty(r2)
            r0.put(r2, r3)
            goto L11
        L25:
            return r0
    }

    public static java.util.Properties toProperties(org.json.JSONObject r4) throws org.json.JSONException {
            java.util.Properties r0 = new java.util.Properties
            r0.<init>()
            if (r4 == 0) goto L1f
            java.util.Iterator r1 = r4.keys()
        Lb:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = r4.getString(r2)
            r0.put(r2, r3)
            goto Lb
        L1f:
            return r0
    }
}
