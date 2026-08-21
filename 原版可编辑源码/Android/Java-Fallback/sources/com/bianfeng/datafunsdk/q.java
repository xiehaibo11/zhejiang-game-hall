package com.bianfeng.datafunsdk;

public final class q {
    public java.lang.String a;
    public byte[] b;
    public com.bianfeng.datafunsdk.net.RequestHeaders c;
    public com.bianfeng.datafunsdk.p d;
    public com.bianfeng.datafunsdk.net.ResponseHeaders e;
    public com.bianfeng.datafunsdk.net.ResponseData f;

    public q(java.lang.String r1, byte[] r2, com.bianfeng.datafunsdk.p r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.d = r3
            return
    }

    public int a() {
            r14 = this;
            java.lang.String r0 = "post中的异常数据：这里都不做处理"
            java.lang.String r1 = "上抛路径："
            r2 = 4
            r3 = 0
            java.net.URL r4 = new java.net.URL     // Catch: java.lang.Throwable -> L2f9 java.lang.Exception -> L2fd
            java.lang.String r5 = r14.a     // Catch: java.lang.Throwable -> L2f9 java.lang.Exception -> L2fd
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L2f9 java.lang.Exception -> L2fd
            java.net.URLConnection r4 = r4.openConnection()     // Catch: java.lang.Throwable -> L2f9 java.lang.Exception -> L2fd
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.lang.Throwable -> L2f9 java.lang.Exception -> L2fd
            r5 = 15000(0x3a98, float:2.102E-41)
            r4.setConnectTimeout(r5)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r4.setReadTimeout(r5)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r5 = "POST"
            r4.setRequestMethod(r5)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r5 = 0
            r4.setUseCaches(r5)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r6 = "Content-Type"
            java.lang.String r7 = "application/json"
            r4.setRequestProperty(r6, r7)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            com.bianfeng.datafunsdk.net.RequestHeaders r6 = r14.c     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            if (r6 == 0) goto L81
            com.bianfeng.datafunsdk.net.RequestHeaders r6 = r14.c     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.util.Map r6 = r6.getHeaderMap()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.util.Set r6 = r6.entrySet()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
        L3d:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            if (r7 == 0) goto L81
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r8.<init>()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r9 = "请求头中的数据："
            r8.append(r9)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.Object r9 = r7.getKey()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r8.append(r9)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r9 = "--->"
            r8.append(r9)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.Object r9 = r7.getValue()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r8.append(r9)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            com.bianfeng.datafunsdk.x.a(r8)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.Object r8 = r7.getKey()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.Object r7 = r7.getValue()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r4.addRequestProperty(r8, r7)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            goto L3d
        L81:
            com.bianfeng.datafunsdk.p r6 = r14.d     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            boolean r6 = r6.a()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r7 = 1
            if (r6 == 0) goto La9
            byte[] r6 = r14.b     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            if (r6 == 0) goto La9
            r4.setDoInput(r7)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r4.setDoOutput(r7)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.io.DataOutputStream r6 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            java.io.OutputStream r8 = r4.getOutputStream()     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            r6.<init>(r8)     // Catch: java.lang.Throwable -> L2f4 java.lang.Exception -> L2f7
            byte[] r8 = r14.b     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r6.write(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r6.flush()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r6.close()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            goto Laa
        La9:
            r6 = r3
        Laa:
            int r8 = r4.getResponseCode()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9 = 200(0xc8, float:2.8E-43)
            if (r8 != r9) goto L271
            java.io.InputStream r3 = r4.getInputStream()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r8 = 1024(0x400, float:1.435E-42)
            byte[] r8 = new byte[r8]     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
        Lbf:
            int r10 = r3.read(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11 = -1
            if (r10 == r11) goto Lcf
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.<init>(r8, r5, r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.append(r11)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            goto Lbf
        Lcf:
            r3.close()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r10 = "测试响应的数据："
            r9.append(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.append(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.net.ResponseHeaders r9 = r14.e     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r9 == 0) goto L161
            com.bianfeng.datafunsdk.net.ResponseHeaders r9 = r14.e     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r9 = r9.getCodekey()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r10 != 0) goto L161
            java.lang.String r8 = r4.getHeaderField(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.net.ResponseHeaders r9 = r14.e     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            int r0 = r9.getSuccessCode()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r0 != r8) goto L135
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L126
            r6.close()     // Catch: java.lang.Exception -> L124
            goto L126
        L124:
            r0 = move-exception
            goto L131
        L126:
            if (r3 == 0) goto L12b
            r3.close()     // Catch: java.lang.Exception -> L124
        L12b:
            if (r4 == 0) goto L134
            r4.disconnect()     // Catch: java.lang.Exception -> L124
            goto L134
        L131:
            r0.printStackTrace()
        L134:
            return r5
        L135:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L152
            r6.close()     // Catch: java.lang.Exception -> L150
            goto L152
        L150:
            r0 = move-exception
            goto L15d
        L152:
            if (r3 == 0) goto L157
            r3.close()     // Catch: java.lang.Exception -> L150
        L157:
            if (r4 == 0) goto L160
            r4.disconnect()     // Catch: java.lang.Exception -> L150
            goto L160
        L15d:
            r0.printStackTrace()
        L160:
            return r7
        L161:
            com.bianfeng.datafunsdk.net.ResponseData r9 = r14.f     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r9 == 0) goto L241
            com.bianfeng.datafunsdk.net.ResponseData r9 = r14.f     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r9 = r9.getCodeKey()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.net.ResponseData r10 = r14.f     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r10 = r10.getMessagekey()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r12 = "responseData codekey="
            r11.append(r12)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.append(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r12 = " == megKey == "
            r11.append(r12)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.append(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r11)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.util.Map r8 = com.bianfeng.datafunsdk.w.a(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r11 != 0) goto L1b3
            java.lang.Object r10 = r8.get(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r12 = "responseData megKey="
            r11.append(r12)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r11.append(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r10 = r11.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
        L1b3:
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r10 != 0) goto L241
            com.bianfeng.datafunsdk.net.ResponseData r10 = r14.f     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            int r10 = r10.getSuccessCode()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.Object r8 = r8.get(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            double r8 = java.lang.Double.parseDouble(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            int r8 = (int) r8     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r11 = "successCode="
            r9.append(r11)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.append(r10)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r11 = ",result="
            r9.append(r11)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r9.append(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            if (r8 != r10) goto L215
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L206
            r6.close()     // Catch: java.lang.Exception -> L204
            goto L206
        L204:
            r0 = move-exception
            goto L211
        L206:
            if (r3 == 0) goto L20b
            r3.close()     // Catch: java.lang.Exception -> L204
        L20b:
            if (r4 == 0) goto L214
            r4.disconnect()     // Catch: java.lang.Exception -> L204
            goto L214
        L211:
            r0.printStackTrace()
        L214:
            return r5
        L215:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L232
            r6.close()     // Catch: java.lang.Exception -> L230
            goto L232
        L230:
            r0 = move-exception
            goto L23d
        L232:
            if (r3 == 0) goto L237
            r3.close()     // Catch: java.lang.Exception -> L230
        L237:
            if (r4 == 0) goto L240
            r4.disconnect()     // Catch: java.lang.Exception -> L230
            goto L240
        L23d:
            r0.printStackTrace()
        L240:
            return r7
        L241:
            java.lang.String r5 = "在传递参数的时候没有传递怎么判断是否上抛数据成功与否的标识"
            com.bianfeng.datafunsdk.x.a(r5)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L262
            r6.close()     // Catch: java.lang.Exception -> L260
            goto L262
        L260:
            r0 = move-exception
            goto L26d
        L262:
            if (r3 == 0) goto L267
            r3.close()     // Catch: java.lang.Exception -> L260
        L267:
            if (r4 == 0) goto L270
            r4.disconnect()     // Catch: java.lang.Exception -> L260
            goto L270
        L26d:
            r0.printStackTrace()
        L270:
            return r7
        L271:
            r5 = 500(0x1f4, float:7.0E-43)
            if (r8 < r5) goto L2b1
            r5 = 600(0x258, float:8.41E-43)
            if (r8 >= r5) goto L2b1
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r5.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r5.append(r0)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r5.append(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r5)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L2a7
            r6.close()     // Catch: java.lang.Exception -> L2a5
            goto L2a7
        L2a5:
            r0 = move-exception
            goto L2ad
        L2a7:
            if (r4 == 0) goto L2b0
            r4.disconnect()     // Catch: java.lang.Exception -> L2a5
            goto L2b0
        L2ad:
            r0.printStackTrace()
        L2b0:
            return r2
        L2b1:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r5.<init>()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r9 = "响应码："
            r5.append(r9)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            r5.append(r8)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            com.bianfeng.datafunsdk.x.a(r5)     // Catch: java.lang.Throwable -> L2eb java.lang.Exception -> L2ee
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r6 == 0) goto L2e1
            r6.close()     // Catch: java.lang.Exception -> L2df
            goto L2e1
        L2df:
            r0 = move-exception
            goto L2e7
        L2e1:
            if (r4 == 0) goto L2ea
            r4.disconnect()     // Catch: java.lang.Exception -> L2df
            goto L2ea
        L2e7:
            r0.printStackTrace()
        L2ea:
            return r7
        L2eb:
            r0 = move-exception
            goto L34a
        L2ee:
            r5 = move-exception
            r13 = r4
            r4 = r3
            r3 = r6
            r6 = r13
            goto L301
        L2f4:
            r0 = move-exception
            r6 = r3
            goto L34a
        L2f7:
            r5 = move-exception
            goto L2ff
        L2f9:
            r0 = move-exception
            r4 = r3
            r6 = r4
            goto L34a
        L2fd:
            r5 = move-exception
            r4 = r3
        L2ff:
            r6 = r4
            r4 = r3
        L301:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L345
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L345
            r7.<init>()     // Catch: java.lang.Throwable -> L345
            r7.append(r0)     // Catch: java.lang.Throwable -> L345
            java.lang.String r0 = r5.getMessage()     // Catch: java.lang.Throwable -> L345
            r7.append(r0)     // Catch: java.lang.Throwable -> L345
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L345
            com.bianfeng.datafunsdk.x.a(r0)     // Catch: java.lang.Throwable -> L345
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = r14.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r0)
            if (r3 == 0) goto L336
            r3.close()     // Catch: java.lang.Exception -> L334
            goto L336
        L334:
            r0 = move-exception
            goto L341
        L336:
            if (r4 == 0) goto L33b
            r4.close()     // Catch: java.lang.Exception -> L334
        L33b:
            if (r6 == 0) goto L344
            r6.disconnect()     // Catch: java.lang.Exception -> L334
            goto L344
        L341:
            r0.printStackTrace()
        L344:
            return r2
        L345:
            r0 = move-exception
            r13 = r6
            r6 = r3
            r3 = r4
            r4 = r13
        L34a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r14.a
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.bianfeng.datafunsdk.x.a(r1)
            if (r6 == 0) goto L366
            r6.close()     // Catch: java.lang.Exception -> L364
            goto L366
        L364:
            r1 = move-exception
            goto L371
        L366:
            if (r3 == 0) goto L36b
            r3.close()     // Catch: java.lang.Exception -> L364
        L36b:
            if (r4 == 0) goto L374
            r4.disconnect()     // Catch: java.lang.Exception -> L364
            goto L374
        L371:
            r1.printStackTrace()
        L374:
            throw r0
    }

    public void a(com.bianfeng.datafunsdk.net.RequestHeaders r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void a(com.bianfeng.datafunsdk.net.ResponseData r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void a(com.bianfeng.datafunsdk.net.ResponseHeaders r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
