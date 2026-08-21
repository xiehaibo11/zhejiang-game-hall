package com.kwad.sdk.crash.report.upload;

public final class b {
    private static java.util.Map<java.lang.String, java.lang.String> a(com.kwad.sdk.crash.report.upload.f r3) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = r3.aBP
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L17
            java.lang.String r1 = r3.aBP
            java.lang.String r2 = "uploadToken"
            r0.put(r2, r1)
        L17:
            java.lang.String r1 = r3.aBM
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L26
            java.lang.String r1 = r3.aBM
            java.lang.String r2 = "sys"
            r0.put(r2, r1)
        L26:
            java.lang.String r1 = r3.aBL
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L35
            java.lang.String r1 = r3.aBL
            java.lang.String r2 = "did"
            r0.put(r2, r1)
        L35:
            java.lang.String r1 = r3.aBJ
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L44
            java.lang.String r1 = r3.aBJ
            java.lang.String r2 = "sid"
            r0.put(r2, r1)
        L44:
            java.lang.String r1 = r3.aAo
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L53
            java.lang.String r1 = r3.aAo
            java.lang.String r2 = "appver"
            r0.put(r2, r1)
        L53:
            java.lang.String r1 = r3.mTaskId
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L62
            java.lang.String r1 = r3.mTaskId
            java.lang.String r2 = "taskId"
            r0.put(r2, r1)
        L62:
            java.lang.String r1 = r3.aBK
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L71
            java.lang.String r1 = r3.aBK
            java.lang.String r2 = "token"
            r0.put(r2, r1)
        L71:
            java.lang.String r1 = r3.aBI
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L80
            java.lang.String r1 = r3.aBI
            java.lang.String r2 = "uid"
            r0.put(r2, r1)
        L80:
            java.lang.String r1 = r3.aBN
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L8f
            java.lang.String r3 = r3.aBN
            java.lang.String r1 = "extraInfo"
            r0.put(r1, r3)
        L8f:
            return r0
    }

    public static void a(java.io.File r2, com.kwad.sdk.crash.report.upload.f r3, com.kwad.sdk.crash.report.upload.a r4) {
            java.lang.String r0 = r3.aBL
            java.lang.String r1 = r3.aBK
            java.util.Map r3 = a(r3)
            a(r2, r0, r1, r3, r4)
            return
    }

    private static void a(java.io.File r16, java.lang.String r17, java.lang.String r18, java.util.Map<java.lang.String, java.lang.String> r19, com.kwad.sdk.crash.report.upload.a r20) {
            java.lang.String r0 = "\r\n"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "uploadLogFile "
            r1.<init>(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r2, r1)
            com.kwad.sdk.core.network.c r1 = new com.kwad.sdk.core.network.c
            r1.<init>()
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = r16.getName()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "https://"
            r5.<init>(r6)
            com.kwad.sdk.core.network.idc.a r6 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r7 = "ulog"
            java.lang.String r8 = "ulog-sdk.gifshow.com"
            java.lang.String r6 = r6.P(r7, r8)
            r5.append(r6)
            java.lang.String r6 = "/rest/log/sdk/file/upload"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r6 = -1
            r7 = 0
            java.net.URL r8 = new java.net.URL     // Catch: java.lang.Throwable -> L218 java.lang.Exception -> L21c
            r8.<init>(r5)     // Catch: java.lang.Throwable -> L218 java.lang.Exception -> L21c
            java.net.URLConnection r8 = r8.openConnection()     // Catch: java.lang.Throwable -> L218 java.lang.Exception -> L21c
            java.net.HttpURLConnection r8 = (java.net.HttpURLConnection) r8     // Catch: java.lang.Throwable -> L218 java.lang.Exception -> L21c
            r9 = 1
            r8.setDoOutput(r9)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setDoInput(r9)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r10 = 0
            r8.setUseCaches(r10)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r11 = 5000(0x1388, float:7.006E-42)
            r8.setConnectTimeout(r11)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setReadTimeout(r11)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setUseCaches(r10)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "POST"
            r8.setRequestMethod(r11)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "connection"
            java.lang.String r12 = "Keep-Alive"
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "User-Agent"
            java.lang.String r12 = com.kwad.sdk.core.network.q.getUserAgent()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "Charset"
            java.lang.String r12 = "UTF-8"
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "Content-Type"
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r13 = "multipart/form-data; boundary="
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r12.append(r3)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "Content-MD5"
            java.lang.String r12 = r16.getPath()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            byte[] r12 = com.kwad.sdk.utils.a.fn(r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r13 = 2
            java.lang.String r12 = android.util.Base64.encodeToString(r12, r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "file-type"
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r13 = "."
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r13 = r16.getName()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r13 = com.kwad.sdk.utils.q.getExtension(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r12.append(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "origin-name"
            r8.setRequestProperty(r11, r4)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r11 = "Cookie"
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r13 = "did="
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r13 = r17
            r12.append(r13)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.setRequestProperty(r11, r12)     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            r8.connect()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.io.OutputStream r11 = r8.getOutputStream()     // Catch: java.lang.Throwable -> L20e java.lang.Exception -> L213
            java.util.Set r12 = r19.keySet()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.util.Iterator r12 = r12.iterator()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
        Lf1:
            boolean r13 = r12.hasNext()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            if (r13 == 0) goto L10d
            java.lang.Object r13 = r12.next()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r14 = r19
            java.lang.Object r15 = r14.get(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r15 = (java.lang.String) r15     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            byte[] r13 = d(r13, r15, r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r11.write(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            goto Lf1
        L10d:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r13 = "\r\n--"
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r12.append(r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r13 = "--\r\n"
            r12.append(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            byte[] r12 = r12.getBytes()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r13.<init>()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r14 = "--"
            r13.append(r14)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r13.append(r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r13.append(r0)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r14 = "Content-Disposition: form-data;name=\"file\";filename=\""
            r3.<init>(r14)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r3.append(r4)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r4 = "\"\r\n"
            r3.append(r4)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r13.append(r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r3 = "Content-Type: application/octet-stream\r\n\r\n"
            r13.append(r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.lang.String r3 = r13.toString()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r11.write(r3)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r13 = r16
            r4.<init>(r13)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L208 java.lang.Exception -> L20b
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
        L16a:
            int r13 = r3.read(r4)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            if (r13 == r6) goto L174
            r11.write(r4, r10, r13)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            goto L16a
        L174:
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r11.write(r0)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r11.write(r12)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r11.flush()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            int r0 = r8.getResponseCode()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r1.code = r0     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r1.aoK = r0     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r4 = 200(0xc8, float:2.8E-43)
            if (r0 != r4) goto L1d5
            java.io.InputStream r0 = r8.getInputStream()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r0 = com.kwad.sdk.crash.utils.h.a(r0)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r1.aoM = r0     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r4 = r1.aoM     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            r0.<init>(r4)     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r4 = "result"
            int r0 = r0.optInt(r4, r6)     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            if (r0 != r9) goto L1aa
            r20.Fk()     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            goto L1c1
        L1aa:
            com.kwad.sdk.crash.report.upload.e r4 = com.kwad.sdk.crash.report.upload.e.aBE     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r7 = "result is "
            r4.<init>(r7)     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            r4.append(r0)     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            r20.Fj()     // Catch: org.json.JSONException -> L1ba java.lang.Throwable -> L204 java.lang.Exception -> L206
            goto L1c1
        L1ba:
            com.kwad.sdk.crash.report.upload.e r0 = com.kwad.sdk.crash.report.upload.e.aBF     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            com.kwad.sdk.crash.report.upload.e r0 = com.kwad.sdk.crash.report.upload.e.aBF     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r20.Fj()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
        L1c1:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r4 = "response.body= "
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r4 = r1.aoM     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r0.append(r4)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            com.kwad.sdk.core.e.c.d(r2, r0)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            goto L1fa
        L1d5:
            com.kwad.sdk.crash.report.upload.e r2 = com.kwad.sdk.crash.report.upload.e.aBD     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r2.<init>()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            com.kwad.sdk.crash.report.upload.e r4 = com.kwad.sdk.crash.report.upload.e.aBD     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            java.lang.String r4 = r4.vo()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r2.append(r4)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r2.append(r0)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            r20.Fj()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            com.kwad.sdk.core.network.idc.a r0 = com.kwad.sdk.core.network.idc.a.Bo()     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            int r2 = r1.code     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
            if (r2 != 0) goto L1f5
            r2 = r6
            goto L1f7
        L1f5:
            int r2 = r1.code     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
        L1f7:
            r0.a(r5, r2, r7)     // Catch: java.lang.Throwable -> L204 java.lang.Exception -> L206
        L1fa:
            com.kwad.sdk.crash.utils.b.a(r8)
        L1fd:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            return
        L204:
            r0 = move-exception
            goto L211
        L206:
            r0 = move-exception
            goto L216
        L208:
            r0 = move-exception
            r3 = r7
            goto L211
        L20b:
            r0 = move-exception
            r3 = r7
            goto L216
        L20e:
            r0 = move-exception
            r3 = r7
            r11 = r3
        L211:
            r7 = r8
            goto L23d
        L213:
            r0 = move-exception
            r3 = r7
            r11 = r3
        L216:
            r7 = r8
            goto L21f
        L218:
            r0 = move-exception
            r3 = r7
            r11 = r3
            goto L23d
        L21c:
            r0 = move-exception
            r3 = r7
            r11 = r3
        L21f:
            com.kwad.sdk.crash.report.upload.e r2 = com.kwad.sdk.crash.report.upload.e.aBD     // Catch: java.lang.Throwable -> L23c
            r0.getCause()     // Catch: java.lang.Throwable -> L23c
            r20.Fj()     // Catch: java.lang.Throwable -> L23c
            com.kwad.sdk.core.network.idc.a r2 = com.kwad.sdk.core.network.idc.a.Bo()     // Catch: java.lang.Throwable -> L23c
            int r4 = r1.code     // Catch: java.lang.Throwable -> L23c
            if (r4 != 0) goto L230
            goto L232
        L230:
            int r6 = r1.code     // Catch: java.lang.Throwable -> L23c
        L232:
            r2.a(r5, r6, r0)     // Catch: java.lang.Throwable -> L23c
            com.kwad.sdk.core.e.c.printStackTrace(r0)     // Catch: java.lang.Throwable -> L23c
            com.kwad.sdk.crash.utils.b.a(r7)
            goto L1fd
        L23c:
            r0 = move-exception
        L23d:
            com.kwad.sdk.crash.utils.b.a(r7)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            throw r0
    }

    private static byte[] d(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "--"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = "\r\n"
            r0.append(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Content-Disposition: form-data; name=\""
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "\""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.append(r3)
            r0.append(r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r1 = "Content-Length: "
            r3.<init>(r1)
            int r1 = r4.length()
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            r0.append(r5)
            r0.append(r5)
            r0.append(r4)
            r0.append(r5)
            java.lang.String r3 = r0.toString()
            byte[] r3 = r3.getBytes()
            return r3
    }
}
