package com.cmic.gen.sdk.auth;

public class d {
    static org.json.JSONObject a(java.lang.String r2) {
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r0 = "resultCode"
            java.lang.String r1 = "103000"
            r2.put(r0, r1)     // Catch: org.json.JSONException -> L14
            java.lang.String r0 = "desc"
            java.lang.String r1 = "true"
            r2.put(r0, r1)     // Catch: org.json.JSONException -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return r2
    }

    static org.json.JSONObject a(java.lang.String r6, com.cmic.gen.sdk.a r7, org.json.JSONObject r8) {
            java.lang.String r0 = "0"
            r1 = 4
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "未知"
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "移动"
            r4 = 1
            r1[r4] = r2
            r2 = 2
            java.lang.String r5 = "联通"
            r1[r2] = r5
            r2 = 3
            java.lang.String r5 = "电信"
            r1[r2] = r5
            java.lang.String r2 = "operatortype"
            java.lang.String r7 = r7.b(r2, r0)     // Catch: java.lang.Exception -> L4c
            boolean r0 = r0.equals(r7)     // Catch: java.lang.Exception -> L4c
            java.lang.String r2 = "operatorType"
            if (r0 != 0) goto L38
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L4c
            if (r0 == 0) goto L2e
            goto L38
        L2e:
            int r6 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L4c
            r6 = r1[r6]     // Catch: java.lang.Exception -> L4c
            r8.put(r2, r6)     // Catch: java.lang.Exception -> L4c
            goto L50
        L38:
            java.lang.String r7 = "103000"
            boolean r6 = r7.equals(r6)     // Catch: java.lang.Exception -> L4c
            if (r6 == 0) goto L46
            r6 = r1[r4]     // Catch: java.lang.Exception -> L4c
            r8.put(r2, r6)     // Catch: java.lang.Exception -> L4c
            goto L50
        L46:
            r6 = r1[r3]     // Catch: java.lang.Exception -> L4c
            r8.put(r2, r6)     // Catch: java.lang.Exception -> L4c
            goto L50
        L4c:
            r6 = move-exception
            r6.printStackTrace()
        L50:
            return r8
    }

    public static org.json.JSONObject a(java.lang.String r2, java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "resultCode"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L10
            java.lang.String r2 = "desc"
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return r0
    }

    static org.json.JSONObject a(java.lang.String r10, java.lang.String r11, com.cmic.gen.sdk.a r12, org.json.JSONObject r13) {
            java.lang.String r0 = "tokenExpiresIn"
            java.lang.String r1 = "openId"
            java.lang.String r2 = "token"
            java.lang.String r3 = "0"
            java.lang.String r4 = "authType"
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = r12.b(r4, r3)     // Catch: java.lang.Exception -> L6b
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L6b
            java.lang.String r7 = "networktype"
            int r7 = r12.c(r7)     // Catch: java.lang.Exception -> L6b
            r8 = 3
            if (r6 != r8) goto L2f
            if (r7 != r8) goto L27
            java.lang.String r3 = "WIFI下网关鉴权"
            java.lang.String r6 = "1"
            goto L2b
        L27:
            java.lang.String r3 = "网关鉴权"
            java.lang.String r6 = "2"
        L2b:
            r9 = r6
            r6 = r3
            r3 = r9
            goto L31
        L2f:
            java.lang.String r6 = "其他"
        L31:
            java.lang.String r7 = "resultCode"
            r5.put(r7, r10)     // Catch: java.lang.Exception -> L6b
            r5.put(r4, r3)     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = "authTypeDes"
            r5.put(r3, r6)     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = "103000"
            boolean r10 = r3.equals(r10)     // Catch: java.lang.Exception -> L6b
            if (r10 == 0) goto L65
            r10 = 1
            java.lang.String r11 = "logintype"
            int r11 = r12.c(r11)     // Catch: java.lang.Exception -> L6b
            if (r10 != r11) goto L56
            java.lang.String r10 = r12.b(r1)     // Catch: java.lang.Exception -> L6b
            r5.put(r1, r10)     // Catch: java.lang.Exception -> L6b
        L56:
            java.lang.String r10 = r13.optString(r2)     // Catch: java.lang.Exception -> L6b
            r5.put(r2, r10)     // Catch: java.lang.Exception -> L6b
            java.lang.String r10 = r13.optString(r0)     // Catch: java.lang.Exception -> L6b
            r5.put(r0, r10)     // Catch: java.lang.Exception -> L6b
            goto L6f
        L65:
            java.lang.String r10 = "desc"
            r5.put(r10, r11)     // Catch: java.lang.Exception -> L6b
            goto L6f
        L6b:
            r10 = move-exception
            r10.printStackTrace()
        L6f:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "返回参数:"
            r10.append(r11)
            java.lang.String r11 = r5.toString()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.String r11 = "AuthnResult"
            com.cmic.gen.sdk.e.c.b(r11, r10)
            return r5
    }

    static org.json.JSONObject b(java.lang.String r2, java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "resultCode"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L10
            java.lang.String r2 = "desc"
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L10
            goto L14
        L10:
            r2 = move-exception
            r2.printStackTrace()
        L14:
            return r0
    }
}
