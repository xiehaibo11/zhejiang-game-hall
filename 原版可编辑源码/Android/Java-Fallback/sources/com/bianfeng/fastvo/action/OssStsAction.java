package com.bianfeng.fastvo.action;

public class OssStsAction {
    public OssStsAction(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String getUrl() {
            r3 = this;
            java.lang.String r0 = com.bianfeng.fastvo.util.FastovAppConextUtils.getSignUrl()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "FAST_SIGN_URL---->"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            java.lang.String r2 = "storage/oss/sts"
            r1[r0] = r2
            java.lang.String r0 = "%s/%s"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            return r0
    }

    private java.lang.String request(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
            java.net.URLConnection r8 = r1.openConnection()     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
            java.net.HttpURLConnection r8 = (java.net.HttpURLConnection) r8     // Catch: java.lang.Throwable -> L93 java.lang.Exception -> L98
            java.lang.String r1 = "GET"
            r8.setRequestMethod(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r1 = 10000(0x2710, float:1.4013E-41)
            r8.setConnectTimeout(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            java.lang.String r1 = "Authorization"
            r8.addRequestProperty(r1, r9)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            int r9 = r8.getResponseCode()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r1 = 200(0xc8, float:2.8E-43)
            if (r9 != r1) goto L5c
            java.io.InputStream r9 = r8.getInputStream()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r1 = 1048576(0x100000, float:1.469368E-39)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            r2.<init>()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
        L30:
            int r3 = r9.read(r1)     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            r4 = -1
            if (r3 == r4) goto L41
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            r5 = 0
            r4.<init>(r1, r5, r3)     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            r2.append(r4)     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            goto L30
        L41:
            r9.close()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L5a java.lang.Throwable -> Lb0
            if (r8 == 0) goto L50
            r8.disconnect()     // Catch: java.lang.Exception -> L4e
            goto L50
        L4e:
            r8 = move-exception
            goto L56
        L50:
            if (r9 == 0) goto L59
            r9.close()     // Catch: java.lang.Exception -> L4e
            goto L59
        L56:
            r8.printStackTrace()
        L59:
            return r0
        L5a:
            r1 = move-exception
            goto L9b
        L5c:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r9.<init>()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            java.lang.String r1 = "请求结果--->"
            r9.append(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            int r1 = r8.getResponseCode()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r9.append(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            java.lang.String r1 = "---"
            r9.append(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            java.lang.String r1 = r8.getResponseMessage()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            r9.append(r1)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            com.bianfeng.ymnsdk.util.Logger.i(r9)     // Catch: java.lang.Throwable -> L8b java.lang.Exception -> L90
            if (r8 == 0) goto L8a
            r8.disconnect()     // Catch: java.lang.Exception -> L86
            goto L8a
        L86:
            r8 = move-exception
            r8.printStackTrace()
        L8a:
            return r0
        L8b:
            r9 = move-exception
            r6 = r0
            r0 = r9
            r9 = r6
            goto Lb1
        L90:
            r1 = move-exception
            r9 = r0
            goto L9b
        L93:
            r8 = move-exception
            r9 = r0
            r0 = r8
            r8 = r9
            goto Lb1
        L98:
            r1 = move-exception
            r8 = r0
            r9 = r8
        L9b:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lb0
            if (r8 == 0) goto La6
            r8.disconnect()     // Catch: java.lang.Exception -> La4
            goto La6
        La4:
            r8 = move-exception
            goto Lac
        La6:
            if (r9 == 0) goto Laf
            r9.close()     // Catch: java.lang.Exception -> La4
            goto Laf
        Lac:
            r8.printStackTrace()
        Laf:
            return r0
        Lb0:
            r0 = move-exception
        Lb1:
            if (r8 == 0) goto Lb9
            r8.disconnect()     // Catch: java.lang.Exception -> Lb7
            goto Lb9
        Lb7:
            r8 = move-exception
            goto Lbf
        Lb9:
            if (r9 == 0) goto Lc2
            r9.close()     // Catch: java.lang.Exception -> Lb7
            goto Lc2
        Lbf:
            r8.printStackTrace()
        Lc2:
            goto Lc4
        Lc3:
            throw r0
        Lc4:
            goto Lc3
    }

    public com.bianfeng.fastvo.action.SecurityToken start() {
            r5 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.lang.String r1 = "device_code"
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L19
            java.lang.String r2 = r2.getDeviceId()     // Catch: java.lang.Exception -> L19
            java.lang.String r3 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r3)     // Catch: java.lang.Exception -> L19
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            r1 = move-exception
            r1.printStackTrace()
        L1d:
            r1 = 3600(0xe10, float:5.045E-42)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "expire"
            r0.put(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L35:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L6a
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "&"
            r3.append(r4)
            java.lang.Object r4 = r2.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r4 = "="
            r3.append(r4)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            goto L35
        L6a:
            r0 = 1
            java.lang.String r0 = r1.substring(r0)
            java.lang.String r2 = r5.getUrl()
            java.lang.String r3 = com.bianfeng.fastvo.util.SecurityUtil.getSign(r0)
            int r1 = r1.length()
            if (r1 <= 0) goto L91
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "?"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = r1.toString()
        L91:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OssStsAction action request url is "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.fastvo.util.LogUtil.d(r0)
            java.lang.String r0 = r5.request(r2, r3)
            r1 = 0
            if (r0 == 0) goto Lc6
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lc2
            r2.<init>(r0)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r0 = "status"
            int r0 = r2.optInt(r0)     // Catch: java.lang.Exception -> Lc2
            r3 = 200(0xc8, float:2.8E-43)
            if (r0 != r3) goto Lc1
            com.bianfeng.fastvo.action.SecurityToken r0 = new com.bianfeng.fastvo.action.SecurityToken     // Catch: java.lang.Exception -> Lc2
            r0.<init>(r2)     // Catch: java.lang.Exception -> Lc2
            return r0
        Lc1:
            return r1
        Lc2:
            r0 = move-exception
            r0.printStackTrace()
        Lc6:
            return r1
    }
}
