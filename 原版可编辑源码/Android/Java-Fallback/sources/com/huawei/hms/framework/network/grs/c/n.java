package com.huawei.hms.framework.network.grs.c;

public class n {
    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = r1.equals(r2)
            if (r0 != 0) goto La
            java.lang.String r1 = b(r1, r2)
        La:
            return r1
    }

    private static java.lang.String b(java.lang.String r5, java.lang.String r6) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            java.lang.String r3 = "services"
            if (r1 != 0) goto L28
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r5)
            org.json.JSONArray r5 = r1.getJSONArray(r3)
            r1 = r2
        L18:
            int r4 = r5.length()
            if (r1 >= r4) goto L28
            java.lang.String r4 = r5.getString(r1)
            r0.add(r4)
            int r1 = r1 + 1
            goto L18
        L28:
            boolean r5 = android.text.TextUtils.isEmpty(r6)
            if (r5 != 0) goto L47
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>(r6)
            org.json.JSONArray r5 = r5.getJSONArray(r3)
        L37:
            int r6 = r5.length()
            if (r2 >= r6) goto L47
            java.lang.String r6 = r5.getString(r2)
            r0.add(r6)
            int r2 = r2 + 1
            goto L37
        L47:
            boolean r5 = r0.isEmpty()
            if (r5 == 0) goto L50
            java.lang.String r5 = ""
            return r5
        L50:
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            org.json.JSONArray r6 = new org.json.JSONArray
            r6.<init>()
            java.util.Iterator r0 = r0.iterator()
        L5e:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r6.put(r1)
            goto L5e
        L6e:
            r5.put(r3, r6)
            java.lang.String r5 = r5.toString()
            return r5
    }
}
