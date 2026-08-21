package com.tencent.bugly.proguard;

public final class ad {
    public ad() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.util.Pair<java.lang.Integer, java.lang.String> a(java.lang.String r6, java.lang.String r7, java.util.Map<java.lang.String, java.lang.String> r8) {
            java.lang.String r0 = "UTF-8"
            r1 = 0
            r2 = -1
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> Lad java.lang.Throwable -> Lb1
            r3.<init>(r6)     // Catch: java.lang.Throwable -> Lad java.lang.Throwable -> Lb1
            java.net.URLConnection r6 = r3.openConnection()     // Catch: java.lang.Throwable -> Lad java.lang.Throwable -> Lb1
            java.net.HttpURLConnection r6 = (java.net.HttpURLConnection) r6     // Catch: java.lang.Throwable -> Lad java.lang.Throwable -> Lb1
            java.lang.String r3 = "POST"
            r6.setRequestMethod(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r3 = 1
            r6.setDoOutput(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r6.setDoInput(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r3 = 0
            r6.setUseCaches(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            java.lang.String r3 = "Content-Type"
            java.lang.String r4 = "application/x-www-form-urlencoded"
            r6.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            a(r6, r8)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r8 = 5000(0x1388, float:7.006E-42)
            r6.setConnectTimeout(r8)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r6.setReadTimeout(r8)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r6.connect()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            byte[] r7 = r7.getBytes(r0)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            java.io.DataOutputStream r8 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            java.io.OutputStream r3 = r6.getOutputStream()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r8.<init>(r3)     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r8.write(r7)     // Catch: java.lang.Throwable -> L99 java.lang.Throwable -> L9f
            r8.flush()     // Catch: java.lang.Throwable -> L99 java.lang.Throwable -> L9f
            r8.close()     // Catch: java.lang.Throwable -> L99 java.lang.Throwable -> L9f
            int r2 = r6.getResponseCode()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            r7 = 400(0x190, float:5.6E-43)
            if (r2 < r7) goto L57
            java.io.InputStream r7 = r6.getErrorStream()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
            goto L5b
        L57:
            java.io.InputStream r7 = r6.getInputStream()     // Catch: java.lang.Throwable -> La5 java.lang.Throwable -> La9
        L5b:
            java.io.BufferedReader r8 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            r3.<init>(r7, r0)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            r8.<init>(r3)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            r0.<init>()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
        L6a:
            java.lang.String r3 = r8.readLine()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            if (r3 == 0) goto L79
            r0.append(r3)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            java.lang.String r3 = "\r\n"
            r0.append(r3)     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            goto L6a
        L79:
            r8.close()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> L8d java.lang.Throwable -> L93
            a(r1)
            a(r7)
            if (r6 == 0) goto L8b
            r6.disconnect()
        L8b:
            r7 = r8
            goto Lc6
        L8d:
            r8 = move-exception
            r5 = r8
            r8 = r6
            r6 = r7
            r7 = r5
            goto Ld1
        L93:
            r8 = move-exception
            r5 = r8
            r8 = r6
            r6 = r7
            r7 = r5
            goto Lb4
        L99:
            r7 = move-exception
            r5 = r8
            r8 = r6
            r6 = r1
            r1 = r5
            goto Ld1
        L9f:
            r7 = move-exception
            r5 = r8
            r8 = r6
            r6 = r1
            r1 = r5
            goto Lb4
        La5:
            r7 = move-exception
            r8 = r6
            r6 = r1
            goto Ld1
        La9:
            r7 = move-exception
            r8 = r6
            r6 = r1
            goto Lb4
        Lad:
            r7 = move-exception
            r6 = r1
            r8 = r6
            goto Ld1
        Lb1:
            r7 = move-exception
            r6 = r1
            r8 = r6
        Lb4:
            com.tencent.bugly.proguard.al.b(r7)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> Ld0
            a(r1)
            a(r6)
            if (r8 == 0) goto Lc6
            r8.disconnect()
        Lc6:
            android.util.Pair r6 = new android.util.Pair
            java.lang.Integer r8 = java.lang.Integer.valueOf(r2)
            r6.<init>(r8, r7)
            return r6
        Ld0:
            r7 = move-exception
        Ld1:
            a(r1)
            a(r6)
            if (r8 == 0) goto Ldc
            r8.disconnect()
        Ldc:
            throw r7
    }

    public static android.util.Pair<java.lang.Integer, java.lang.String> a(java.util.List<java.lang.String> r5) {
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L59
            r0.<init>()     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = "Atta-Type"
            java.lang.String r2 = "batch-report"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L59
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L59
            r1.<init>()     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = "attaid"
            java.lang.String r3 = "0d000062340"
            org.json.JSONObject r2 = r1.put(r2, r3)     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "token"
            java.lang.String r4 = "2273782735"
            org.json.JSONObject r2 = r2.put(r3, r4)     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "type"
            java.lang.String r4 = "batch"
            org.json.JSONObject r2 = r2.put(r3, r4)     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = "version"
            java.lang.String r4 = "v1.0.0"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L59
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L59
            r2.<init>()     // Catch: java.lang.Throwable -> L59
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L59
        L39:
            boolean r3 = r5.hasNext()     // Catch: java.lang.Throwable -> L59
            if (r3 == 0) goto L49
            java.lang.Object r3 = r5.next()     // Catch: java.lang.Throwable -> L59
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L59
            r2.put(r3)     // Catch: java.lang.Throwable -> L59
            goto L39
        L49:
            java.lang.String r5 = "datas"
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L59
            java.lang.String r5 = "https://h.trace.qq.com/kv"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L59
            android.util.Pair r5 = a(r5, r1, r0)     // Catch: java.lang.Throwable -> L59
            return r5
        L59:
            r5 = move-exception
            com.tencent.bugly.proguard.al.b(r5)
            android.util.Pair r0 = new android.util.Pair
            r1 = -1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r5 = r5.getMessage()
            r0.<init>(r1, r5)
            return r0
    }

    private static void a(java.io.Closeable r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.close()     // Catch: java.lang.Exception -> L7
            return
        L7:
            r0 = move-exception
            com.tencent.bugly.proguard.al.b(r0)
            return
    }

    private static void a(java.net.HttpURLConnection r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r2 == 0) goto L2f
            if (r3 == 0) goto L2f
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Lb
            goto L2f
        Lb:
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L2f
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.setRequestProperty(r1, r0)
            goto L13
        L2f:
            return
    }
}
