package com.igexin.push.config;

public class l {
    public static void a(java.lang.String r2, boolean r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "IDCConfigParse parse idc config data : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1d
            goto L1e
        L1d:
            r0 = 0
        L1e:
            if (r0 != 0) goto L21
            return
        L21:
            java.lang.String r2 = "N"
            boolean r1 = r0.has(r2)
            if (r1 == 0) goto L30
            java.lang.String r2 = r0.getString(r2)     // Catch: org.json.JSONException -> L30
            com.igexin.push.config.SDKUrlConfig.setLocation(r2)     // Catch: org.json.JSONException -> L30
        L30:
            java.lang.String r2 = "X1"
            boolean r1 = r0.has(r2)
            if (r1 == 0) goto L57
            java.lang.String[] r2 = a(r0, r2)
            if (r2 == 0) goto L57
            int r1 = r2.length
            if (r1 <= 0) goto L57
            java.lang.String[] r1 = com.igexin.push.config.SDKUrlConfig.getXfrAddress()
            boolean r1 = java.util.Arrays.equals(r2, r1)
            if (r1 != 0) goto L57
            com.igexin.push.config.SDKUrlConfig.setXfrAddressIps(r2)
            if (r3 == 0) goto L57
            com.igexin.push.c.i r2 = com.igexin.push.c.i.a()
            r2.e()
        L57:
            java.lang.String r2 = "X2"
            boolean r3 = r0.has(r2)
            if (r3 == 0) goto L6a
            java.lang.String[] r2 = a(r0, r2)
            if (r2 == 0) goto L6a
            int r3 = r2.length
            if (r3 <= 0) goto L6a
            com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK = r2
        L6a:
            return
    }

    private static java.lang.String[] a(org.json.JSONObject r5, java.lang.String r6) {
            org.json.JSONArray r5 = r5.getJSONArray(r6)     // Catch: java.lang.Exception -> L51
            int r0 = r5.length()     // Catch: java.lang.Exception -> L51
            java.lang.String[] r1 = new java.lang.String[r0]     // Catch: java.lang.Exception -> L51
            r2 = 0
        Lb:
            if (r2 >= r0) goto L50
            java.lang.String r3 = "X1"
            boolean r3 = r6.equals(r3)     // Catch: java.lang.Exception -> L51
            if (r3 != 0) goto L36
            java.lang.String r3 = "X2"
            boolean r3 = r6.equals(r3)     // Catch: java.lang.Exception -> L51
            if (r3 == 0) goto L1e
            goto L36
        L1e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L51
            r3.<init>()     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = "http://"
            r3.append(r4)     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = r5.getString(r2)     // Catch: java.lang.Exception -> L51
            r3.append(r4)     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L51
            r1[r2] = r3     // Catch: java.lang.Exception -> L51
            goto L4d
        L36:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L51
            r3.<init>()     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = "socket://"
            r3.append(r4)     // Catch: java.lang.Exception -> L51
            java.lang.String r4 = r5.getString(r2)     // Catch: java.lang.Exception -> L51
            r3.append(r4)     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L51
            r1[r2] = r3     // Catch: java.lang.Exception -> L51
        L4d:
            int r2 = r2 + 1
            goto Lb
        L50:
            return r1
        L51:
            r5 = 0
            return r5
    }
}
