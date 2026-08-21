package com.tencent.bugly.proguard;

public final class af {
    static com.tencent.bugly.proguard.af a;
    protected android.content.Context b;
    public java.util.Map<java.lang.String, java.lang.String> c;

    af(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.b = r2
            return
    }

    private static java.net.HttpURLConnection a(java.lang.String r2, java.lang.String r3) {
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> L69
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L69
            java.net.Proxy r3 = com.tencent.bugly.proguard.an.a     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L12
            java.net.Proxy r2 = com.tencent.bugly.proguard.an.a     // Catch: java.lang.Throwable -> L69
            java.net.URLConnection r2 = r0.openConnection(r2)     // Catch: java.lang.Throwable -> L69
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Throwable -> L69
            goto L4b
        L12:
            if (r2 == 0) goto L45
            java.util.Locale r3 = java.util.Locale.US     // Catch: java.lang.Throwable -> L69
            java.lang.String r2 = r2.toLowerCase(r3)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = "wap"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> L69
            if (r2 == 0) goto L45
            java.lang.String r2 = "http.proxyHost"
            java.lang.String r2 = java.lang.System.getProperty(r2)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = "http.proxyPort"
            java.lang.String r3 = java.lang.System.getProperty(r3)     // Catch: java.lang.Throwable -> L69
            java.net.InetSocketAddress r1 = new java.net.InetSocketAddress     // Catch: java.lang.Throwable -> L69
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L69
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L69
            java.net.Proxy r2 = new java.net.Proxy     // Catch: java.lang.Throwable -> L69
            java.net.Proxy$Type r3 = java.net.Proxy.Type.HTTP     // Catch: java.lang.Throwable -> L69
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L69
            java.net.URLConnection r2 = r0.openConnection(r2)     // Catch: java.lang.Throwable -> L69
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Throwable -> L69
            goto L4b
        L45:
            java.net.URLConnection r2 = r0.openConnection()     // Catch: java.lang.Throwable -> L69
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Throwable -> L69
        L4b:
            r3 = 30000(0x7530, float:4.2039E-41)
            r2.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L69
            r3 = 10000(0x2710, float:1.4013E-41)
            r2.setReadTimeout(r3)     // Catch: java.lang.Throwable -> L69
            r3 = 1
            r2.setDoOutput(r3)     // Catch: java.lang.Throwable -> L69
            r2.setDoInput(r3)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = "POST"
            r2.setRequestMethod(r3)     // Catch: java.lang.Throwable -> L69
            r3 = 0
            r2.setUseCaches(r3)     // Catch: java.lang.Throwable -> L69
            r2.setInstanceFollowRedirects(r3)     // Catch: java.lang.Throwable -> L69
            return r2
        L69:
            r2 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r2)
            if (r3 != 0) goto L73
            r2.printStackTrace()
        L73:
            r2 = 0
            return r2
    }

    private static java.net.HttpURLConnection a(java.lang.String r5, byte[] r6, java.lang.String r7, java.util.Map<java.lang.String, java.lang.String> r8) {
            r0 = 0
            r1 = 0
            if (r5 != 0) goto Lc
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = "destUrl is null."
            com.tencent.bugly.proguard.al.e(r6, r5)
            return r0
        Lc:
            java.net.HttpURLConnection r5 = a(r7, r5)
            if (r5 != 0) goto L1a
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = "Failed to get HttpURLConnection object."
            com.tencent.bugly.proguard.al.e(r6, r5)
            return r0
        L1a:
            java.lang.String r2 = "wup_version"
            java.lang.String r3 = "3.0"
            r5.setRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> L73
            java.lang.String r2 = "utf-8"
            if (r8 == 0) goto L53
            int r3 = r8.size()     // Catch: java.lang.Throwable -> L73
            if (r3 <= 0) goto L53
            java.util.Set r8 = r8.entrySet()     // Catch: java.lang.Throwable -> L73
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Throwable -> L73
        L33:
            boolean r3 = r8.hasNext()     // Catch: java.lang.Throwable -> L73
            if (r3 == 0) goto L53
            java.lang.Object r3 = r8.next()     // Catch: java.lang.Throwable -> L73
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L73
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> L73
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L73
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r2)     // Catch: java.lang.Throwable -> L73
            r5.setRequestProperty(r4, r3)     // Catch: java.lang.Throwable -> L73
            goto L33
        L53:
            java.lang.String r8 = "A37"
            java.lang.String r3 = java.net.URLEncoder.encode(r7, r2)     // Catch: java.lang.Throwable -> L73
            r5.setRequestProperty(r8, r3)     // Catch: java.lang.Throwable -> L73
            java.lang.String r8 = "A38"
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r2)     // Catch: java.lang.Throwable -> L73
            r5.setRequestProperty(r8, r7)     // Catch: java.lang.Throwable -> L73
            java.io.OutputStream r7 = r5.getOutputStream()     // Catch: java.lang.Throwable -> L73
            if (r6 != 0) goto L6f
            r7.write(r1)     // Catch: java.lang.Throwable -> L73
            goto L72
        L6f:
            r7.write(r6)     // Catch: java.lang.Throwable -> L73
        L72:
            return r5
        L73:
            r5 = move-exception
            boolean r6 = com.tencent.bugly.proguard.al.a(r5)
            if (r6 != 0) goto L7d
            r5.printStackTrace()
        L7d:
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r6 = "Failed to upload, please check your network."
            com.tencent.bugly.proguard.al.e(r6, r5)
            return r0
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(java.net.HttpURLConnection r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r5 = r5.getHeaderFields()
            if (r5 == 0) goto L3c
            int r1 = r5.size()
            if (r1 != 0) goto L12
            goto L3c
        L12:
            java.util.Set r1 = r5.keySet()
            java.util.Iterator r1 = r1.iterator()
        L1a:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r5.get(r2)
            java.util.List r3 = (java.util.List) r3
            int r4 = r3.size()
            if (r4 <= 0) goto L1a
            r4 = 0
            java.lang.Object r3 = r3.get(r4)
            r0.put(r2, r3)
            goto L1a
        L3b:
            return r0
        L3c:
            r5 = 0
            return r5
    }

    private static byte[] b(java.net.HttpURLConnection r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L33 java.lang.Throwable -> L36
            java.io.InputStream r5 = r5.getInputStream()     // Catch: java.lang.Throwable -> L33 java.lang.Throwable -> L36
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L33 java.lang.Throwable -> L36
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            r5.<init>()     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
        L16:
            int r3 = r1.read(r2)     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            if (r3 <= 0) goto L21
            r4 = 0
            r5.write(r2, r4, r3)     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            goto L16
        L21:
            r5.flush()     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            byte[] r5 = r5.toByteArray()     // Catch: java.lang.Throwable -> L31 java.lang.Throwable -> L4c
            r1.close()     // Catch: java.lang.Throwable -> L2c
            goto L30
        L2c:
            r0 = move-exception
            r0.printStackTrace()
        L30:
            return r5
        L31:
            r5 = move-exception
            goto L38
        L33:
            r5 = move-exception
            r1 = r0
            goto L4d
        L36:
            r5 = move-exception
            r1 = r0
        L38:
            boolean r2 = com.tencent.bugly.proguard.al.a(r5)     // Catch: java.lang.Throwable -> L4c
            if (r2 != 0) goto L41
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L4c
        L41:
            if (r1 == 0) goto L4b
            r1.close()     // Catch: java.lang.Throwable -> L47
            goto L4b
        L47:
            r5 = move-exception
            r5.printStackTrace()
        L4b:
            return r0
        L4c:
            r5 = move-exception
        L4d:
            if (r1 == 0) goto L57
            r1.close()     // Catch: java.lang.Throwable -> L53
            goto L57
        L53:
            r0 = move-exception
            r0.printStackTrace()
        L57:
            throw r5
    }

    public final byte[] a(java.lang.String r21, byte[] r22, com.tencent.bugly.proguard.aj r23, java.util.Map<java.lang.String, java.lang.String> r24) {
            r20 = this;
            r1 = r20
            r2 = r22
            r3 = r23
            r4 = 0
            r5 = 0
            if (r21 != 0) goto L12
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r2 = "Failed for no URL."
            com.tencent.bugly.proguard.al.e(r2, r0)
            return r4
        L12:
            if (r2 != 0) goto L17
            r8 = 0
            goto L19
        L17:
            int r0 = r2.length
            long r8 = (long) r0
        L19:
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r5] = r21
            java.lang.Long r10 = java.lang.Long.valueOf(r8)
            r11 = 1
            r0[r11] = r10
            int r10 = android.os.Process.myPid()
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)
            r12 = 2
            r0[r12] = r10
            r10 = 3
            int r13 = android.os.Process.myTid()
            java.lang.Integer r13 = java.lang.Integer.valueOf(r13)
            r0[r10] = r13
            java.lang.String r10 = "request: %s, send: %d (pid=%d | tid=%d)"
            com.tencent.bugly.proguard.al.c(r10, r0)
            r14 = r21
            r0 = 0
            r10 = 0
            r13 = 0
        L45:
            if (r0 > 0) goto L1ae
            if (r10 > 0) goto L1ae
            if (r13 == 0) goto L4e
            r6 = r0
            r13 = 0
            goto L79
        L4e:
            int r0 = r0 + 1
            if (r0 <= r11) goto L78
            java.lang.String r15 = java.lang.String.valueOf(r0)
            java.lang.String r6 = "try time: "
            java.lang.String r6 = r6.concat(r15)
            java.lang.Object[] r7 = new java.lang.Object[r5]
            com.tencent.bugly.proguard.al.c(r6, r7)
            java.util.Random r6 = new java.util.Random
            long r11 = java.lang.System.currentTimeMillis()
            r6.<init>(r11)
            r11 = 10000(0x2710, float:1.4013E-41)
            int r6 = r6.nextInt(r11)
            long r11 = (long) r6
            r18 = 10000(0x2710, double:4.9407E-320)
            long r11 = r11 + r18
            android.os.SystemClock.sleep(r11)
        L78:
            r6 = r0
        L79:
            android.content.Context r0 = r1.b
            java.lang.String r0 = com.tencent.bugly.proguard.ab.c(r0)
            if (r0 != 0) goto L91
            java.lang.Object[] r0 = new java.lang.Object[r5]
            java.lang.String r11 = "Failed to request for network not avail"
            com.tencent.bugly.proguard.al.d(r11, r0)
            r11 = r24
            r4 = 0
            r7 = 2
            r18 = 1
            goto L1a7
        L91:
            r3.a(r8)
            r11 = r24
            java.net.HttpURLConnection r12 = a(r14, r2, r0, r11)
            if (r12 == 0) goto L197
            int r0 = r12.getResponseCode()     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            java.lang.String r7 = "response code "
            java.lang.String r15 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            java.lang.String r7 = r7.concat(r15)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            java.lang.Object[] r15 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            com.tencent.bugly.proguard.al.c(r7, r15)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            r7 = 200(0xc8, float:2.8E-43)
            if (r0 != r7) goto Ld7
            java.util.Map r0 = a(r12)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            r1.c = r0     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            byte[] r7 = b(r12)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            if (r7 != 0) goto Lc2
            r4 = 0
            goto Lc4
        Lc2:
            int r0 = r7.length     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
        Lc4:
            r3.b(r4)     // Catch: java.lang.Throwable -> L16a java.io.IOException -> L16d
            r12.disconnect()     // Catch: java.lang.Throwable -> Lcb
            goto Ld6
        Lcb:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto Ld6
            r2.printStackTrace()
        Ld6:
            return r7
        Ld7:
            r4 = 301(0x12d, float:4.22E-43)
            if (r0 == r4) goto Lea
            r4 = 302(0x12e, float:4.23E-43)
            if (r0 == r4) goto Lea
            r4 = 303(0x12f, float:4.25E-43)
            if (r0 == r4) goto Lea
            r4 = 307(0x133, float:4.3E-43)
            if (r0 != r4) goto Le8
            goto Lea
        Le8:
            r4 = 0
            goto Leb
        Lea:
            r4 = 1
        Leb:
            if (r4 == 0) goto L145
            java.lang.String r4 = "Location"
            java.lang.String r4 = r12.getHeaderField(r4)     // Catch: java.io.IOException -> L13f java.lang.Throwable -> L16a
            if (r4 != 0) goto L11b
            java.lang.String r4 = "Failed to redirect: %d"
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.io.IOException -> L117 java.lang.Throwable -> L16a
            java.lang.String r0 = r4.concat(r0)     // Catch: java.io.IOException -> L117 java.lang.Throwable -> L16a
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.io.IOException -> L117 java.lang.Throwable -> L16a
            com.tencent.bugly.proguard.al.e(r0, r5)     // Catch: java.io.IOException -> L117 java.lang.Throwable -> L16a
            r12.disconnect()     // Catch: java.lang.Throwable -> L10a
        L108:
            r2 = 0
            goto L116
        L10a:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto L108
            r2.printStackTrace()
            goto L108
        L116:
            return r2
        L117:
            r0 = move-exception
            r7 = 2
            r13 = 1
            goto L16f
        L11b:
            int r10 = r10 + 1
            java.lang.String r5 = "redirect code: %d ,to:%s"
            r7 = 2
            java.lang.Object[] r6 = new java.lang.Object[r7]     // Catch: java.io.IOException -> L136 java.lang.Throwable -> L16a
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.io.IOException -> L136 java.lang.Throwable -> L16a
            r13 = 0
            r6[r13] = r0     // Catch: java.io.IOException -> L136 java.lang.Throwable -> L16a
            r18 = 1
            r6[r18] = r4     // Catch: java.io.IOException -> L134 java.lang.Throwable -> L16a
            com.tencent.bugly.proguard.al.c(r5, r6)     // Catch: java.io.IOException -> L134 java.lang.Throwable -> L16a
            r14 = r4
            r6 = 0
            r13 = 1
            goto L148
        L134:
            r0 = move-exception
            goto L13c
        L136:
            r0 = move-exception
            goto L13a
        L138:
            r0 = move-exception
            r7 = 2
        L13a:
            r18 = 1
        L13c:
            r14 = r4
            r6 = 0
            goto L143
        L13f:
            r0 = move-exception
            r7 = 2
            r18 = 1
        L143:
            r13 = 1
            goto L171
        L145:
            r7 = 2
            r18 = 1
        L148:
            int r0 = r12.getContentLength()     // Catch: java.io.IOException -> L168 java.lang.Throwable -> L16a
            long r4 = (long) r0     // Catch: java.io.IOException -> L168 java.lang.Throwable -> L16a
            r16 = 0
            int r0 = (r4 > r16 ? 1 : (r4 == r16 ? 0 : -1))
            if (r0 >= 0) goto L155
            r4 = 0
        L155:
            r3.b(r4)     // Catch: java.io.IOException -> L168 java.lang.Throwable -> L16a
            r12.disconnect()     // Catch: java.lang.Throwable -> L15c
            goto L1a7
        L15c:
            r0 = move-exception
            r4 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r4)
            if (r0 != 0) goto L1a7
        L164:
            r4.printStackTrace()
            goto L1a7
        L168:
            r0 = move-exception
            goto L171
        L16a:
            r0 = move-exception
            r2 = r0
            goto L187
        L16d:
            r0 = move-exception
            r7 = 2
        L16f:
            r18 = 1
        L171:
            boolean r4 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> L16a
            if (r4 != 0) goto L17a
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L16a
        L17a:
            r12.disconnect()     // Catch: java.lang.Throwable -> L17e
            goto L1a7
        L17e:
            r0 = move-exception
            r4 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r4)
            if (r0 != 0) goto L1a7
            goto L164
        L187:
            r12.disconnect()     // Catch: java.lang.Throwable -> L18b
            goto L196
        L18b:
            r0 = move-exception
            r3 = r0
            boolean r0 = com.tencent.bugly.proguard.al.a(r3)
            if (r0 != 0) goto L196
            r3.printStackTrace()
        L196:
            throw r2
        L197:
            r4 = 0
            r7 = 2
            r18 = 1
            java.lang.Object[] r0 = new java.lang.Object[r4]
            java.lang.String r5 = "Failed to execute post."
            com.tencent.bugly.proguard.al.c(r5, r0)
            r4 = 0
            r3.b(r4)
        L1a7:
            r0 = r6
            r4 = 0
            r5 = 0
            r11 = 1
            r12 = 2
            goto L45
        L1ae:
            r2 = r4
            return r2
    }
}
