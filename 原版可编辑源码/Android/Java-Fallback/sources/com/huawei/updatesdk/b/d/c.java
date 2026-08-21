package com.huawei.updatesdk.b.d;

public class c extends android.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Void> {
    private java.lang.String a;
    private javax.net.ssl.HttpsURLConnection b;
    private boolean c;
    private com.huawei.updatesdk.b.d.b d;
    private android.os.Handler e;

    class a implements java.lang.Runnable {
        final com.huawei.updatesdk.b.d.c a;

        a(com.huawei.updatesdk.b.d.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.huawei.updatesdk.b.d.c r0 = r2.a
                javax.net.ssl.HttpsURLConnection r0 = com.huawei.updatesdk.b.d.c.a(r0)
                if (r0 == 0) goto L17
                com.huawei.updatesdk.b.d.c r0 = r2.a
                r1 = 1
                com.huawei.updatesdk.b.d.c.a(r0, r1)
                com.huawei.updatesdk.b.d.c r0 = r2.a
                javax.net.ssl.HttpsURLConnection r0 = com.huawei.updatesdk.b.d.c.a(r0)
                r0.disconnect()
            L17:
                java.io.File r0 = new java.io.File
                java.lang.String r1 = com.huawei.updatesdk.b.d.c.c()
                r0.<init>(r1)
                com.huawei.updatesdk.a.a.d.d.a(r0)
                return
        }
    }

    private static class b extends android.os.Handler {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(com.huawei.updatesdk.b.d.c.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void handleMessage(android.os.Message r7) {
                r6 = this;
                super.handleMessage(r7)
                java.lang.Object r0 = r7.obj
                boolean r1 = r0 instanceof com.huawei.updatesdk.b.d.b
                if (r1 != 0) goto La
                return
            La:
                com.huawei.updatesdk.b.d.b r0 = (com.huawei.updatesdk.b.d.b) r0
                android.content.Intent r1 = new android.content.Intent
                r1.<init>()
                com.huawei.updatesdk.a.b.b.b r2 = com.huawei.updatesdk.a.b.b.b.a(r1)
                int r3 = r7.what
                r4 = 2
                if (r3 == r4) goto L5f
                r4 = 3
                if (r3 == r4) goto L48
                r4 = 4
                if (r3 == r4) goto L24
                r0 = 5
                if (r3 == r0) goto L48
                goto L78
            L24:
                com.huawei.updatesdk.a.b.a.a r3 = com.huawei.updatesdk.a.b.a.a.c()
                android.content.Context r3 = r3.a()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = com.huawei.updatesdk.b.d.c.c()
                r4.append(r5)
                java.lang.String r5 = "/appmarket.apk"
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                java.lang.String r0 = r0.c()
                com.huawei.updatesdk.b.d.e.a(r3, r4, r0)
            L48:
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                int r7 = r7.what
                java.lang.String r3 = "download_status_param"
                r0.putInt(r3, r7)
                r1.putExtras(r0)
                com.huawei.updatesdk.b.f.c r7 = com.huawei.updatesdk.b.f.c.b()
                r7.b(r2)
                goto L78
            L5f:
                long r3 = r0.e()
                java.lang.String r7 = "download_apk_size"
                r1.putExtra(r7, r3)
                long r3 = r0.a()
                java.lang.String r7 = "download_apk_already"
                r1.putExtra(r7, r3)
                com.huawei.updatesdk.b.f.c r7 = com.huawei.updatesdk.b.f.c.b()
                r7.a(r2)
            L78:
                return
        }
    }

    public c(com.huawei.updatesdk.b.d.b r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.c = r0
            com.huawei.updatesdk.b.d.c$b r0 = new com.huawei.updatesdk.b.d.c$b
            r1 = 0
            r0.<init>(r1)
            r2.e = r0
            r2.d = r3
            java.lang.String r0 = r3.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            java.lang.String r3 = r3.c()
            r2.a = r3
        L20:
            return
    }

    static javax.net.ssl.HttpsURLConnection a(com.huawei.updatesdk.b.d.c r0) {
            javax.net.ssl.HttpsURLConnection r0 = r0.b
            return r0
    }

    private void a(int r2, long r3, java.lang.String r5, int r6) {
            r1 = this;
            com.huawei.updatesdk.b.d.b r0 = new com.huawei.updatesdk.b.d.b
            r0.<init>()
            r0.a(r2)
            r0.a(r3)
            r0.a(r5)
            android.os.Handler r2 = r1.e
            if (r2 != 0) goto L13
            return
        L13:
            android.os.Message r3 = r2.obtainMessage(r6, r0)
            r2.sendMessage(r3)
            return
    }

    private void a(com.huawei.updatesdk.b.d.b r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "Close FileOutputStream failed!"
            java.lang.String r1 = "DownloadMarketTask"
            if (r6 == 0) goto L98
            java.lang.String r2 = r6.b()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L12
            goto L98
        L12:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            java.lang.String r7 = "/appmarket.apk"
            r2.append(r7)
            java.lang.String r7 = r2.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r7)
            r3 = 0
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f java.io.FileNotFoundException -> L6e
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L4d java.lang.Exception -> L4f java.io.FileNotFoundException -> L6e
            boolean r6 = r5.a(r6, r4, r7)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47 java.io.FileNotFoundException -> L4a
            if (r6 != 0) goto L40
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47 java.io.FileNotFoundException -> L4a
            java.lang.String r7 = e()     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47 java.io.FileNotFoundException -> L4a
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47 java.io.FileNotFoundException -> L4a
            com.huawei.updatesdk.a.a.d.d.a(r6)     // Catch: java.lang.Throwable -> L44 java.lang.Exception -> L47 java.io.FileNotFoundException -> L4a
        L40:
            r4.close()     // Catch: java.io.IOException -> L8a
            goto L8d
        L44:
            r6 = move-exception
            r3 = r4
            goto L8e
        L47:
            r6 = move-exception
            r3 = r4
            goto L50
        L4a:
            r6 = move-exception
            r3 = r4
            goto L6f
        L4d:
            r6 = move-exception
            goto L8e
        L4f:
            r6 = move-exception
        L50:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r7.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "DOWNLOAD market package Exception error:"
            r7.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L4d
            r7.append(r6)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L4d
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r6)     // Catch: java.lang.Throwable -> L4d
            if (r3 == 0) goto L8d
        L6a:
            r3.close()     // Catch: java.io.IOException -> L8a
            goto L8d
        L6e:
            r6 = move-exception
        L6f:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r7.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "DOWNLOAD market package FileNotFoundException error:"
            r7.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L4d
            r7.append(r6)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L4d
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r6)     // Catch: java.lang.Throwable -> L4d
            if (r3 == 0) goto L8d
            goto L6a
        L8a:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r0)
        L8d:
            return
        L8e:
            if (r3 == 0) goto L97
            r3.close()     // Catch: java.io.IOException -> L94
            goto L97
        L94:
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r0)
        L97:
            throw r6
        L98:
            return
    }

    private void a(java.io.InputStream r4, java.io.OutputStream r5) {
            r3 = this;
            java.lang.String r0 = "DownloadMarketTask"
            java.lang.String r1 = "downloadUrlToStream(String urlString,OutputStream outputStream) "
            if (r4 == 0) goto L21
            r4.close()     // Catch: java.io.IOException -> La
            goto L21
        La:
            r4 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r4 = r4.toString()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r4)
        L21:
            if (r5 == 0) goto L3e
            r5.close()     // Catch: java.io.IOException -> L27
            goto L3e
        L27:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r4)
        L3e:
            return
    }

    private boolean a(com.huawei.updatesdk.b.d.b r21, java.io.OutputStream r22, java.lang.String r23) {
            r20 = this;
            r7 = r20
            r8 = 0
            r9 = 0
            r3 = -1
            r2 = 0
            com.huawei.updatesdk.b.d.d r0 = com.huawei.updatesdk.b.d.d.a()     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            java.lang.String r1 = r21.b()     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            javax.net.ssl.HttpsURLConnection r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            r7.b = r0     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            if (r0 != 0) goto L36
            boolean r0 = r7.c
            java.lang.String r5 = r7.a
            r2 = 0
            r3 = -1
            if (r0 == 0) goto L22
            r6 = 3
            goto L23
        L22:
            r6 = 5
        L23:
            r1 = r20
            r1.a(r2, r3, r5, r6)
            r7.a(r9, r9)
        L2b:
            java.util.List r0 = com.huawei.updatesdk.b.g.b.a()
            r0.remove(r7)
            r20.d()
            return r8
        L36:
            r0.connect()     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            javax.net.ssl.HttpsURLConnection r0 = r7.b     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            r1 = 200(0xc8, float:2.8E-43)
            if (r1 == r0) goto L54
            r1 = 206(0xce, float:2.89E-43)
            if (r1 == r0) goto L54
            boolean r0 = r7.c
            java.lang.String r5 = r7.a
            if (r0 == 0) goto L4f
            r6 = 3
            goto L23
        L4f:
            r2 = 0
            r3 = -1
            r6 = 5
            goto L23
        L54:
            long r10 = r21.e()     // Catch: java.lang.Throwable -> L163 java.lang.Exception -> L166
            java.io.BufferedInputStream r12 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L14a
            javax.net.ssl.HttpsURLConnection r0 = r7.b     // Catch: java.lang.Throwable -> L14a
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Throwable -> L14a
            r1 = 8192(0x2000, float:1.148E-41)
            r12.<init>(r0, r1)     // Catch: java.lang.Throwable -> L14a
            java.io.BufferedOutputStream r13 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L147
            r0 = r22
            r13.<init>(r0, r1)     // Catch: java.lang.Throwable -> L147
            byte[] r0 = new byte[r1]     // Catch: java.lang.Throwable -> L145
            r14 = 0
            r6 = r2
            r1 = r14
        L72:
            int r3 = r12.read(r0)     // Catch: java.lang.Throwable -> L13f
            r4 = -1
            if (r3 == r4) goto Lb6
            r13.write(r0, r8, r3)     // Catch: java.lang.Throwable -> Lb2
            int r6 = r6 + r3
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L13f
            long r3 = r3 - r1
            long r3 = java.lang.Math.abs(r3)     // Catch: java.lang.Throwable -> L13f
            r16 = 1000(0x3e8, double:4.94E-321)
            int r3 = (r3 > r16 ? 1 : (r3 == r16 ? 0 : -1))
            if (r3 <= 0) goto Laf
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L13f
            long r1 = (long) r6     // Catch: java.lang.Throwable -> L13f
            int r1 = (r1 > r10 ? 1 : (r1 == r10 ? 0 : -1))
            if (r1 == 0) goto La8
            java.lang.String r5 = r7.a     // Catch: java.lang.Throwable -> L13f
            r18 = 2
            r1 = r20
            r2 = r6
            r3 = r10
            r19 = r6
            r6 = r18
            r1.a(r2, r3, r5, r6)     // Catch: java.lang.Throwable -> La5
            goto Laa
        La5:
            r0 = move-exception
            goto L142
        La8:
            r19 = r6
        Laa:
            r1 = r16
            r6 = r19
            goto L72
        Laf:
            r19 = r6
            goto L72
        Lb2:
            r0 = move-exception
            r2 = r6
            goto L14d
        Lb6:
            r7.a(r12, r13)     // Catch: java.lang.Throwable -> L137 java.lang.Exception -> L13b
            long r0 = (long) r6
            int r0 = (r0 > r10 ? 1 : (r0 == r10 ? 0 : -1))
            if (r0 != 0) goto Lec
            int r0 = (r10 > r14 ? 1 : (r10 == r14 ? 0 : -1))
            if (r0 <= 0) goto Lec
            java.lang.String r0 = r21.d()     // Catch: java.lang.Throwable -> Le1 java.lang.Exception -> Le6
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le1 java.lang.Exception -> Le6
            if (r0 != 0) goto Lec
            java.lang.String r0 = r21.d()     // Catch: java.lang.Throwable -> Le1 java.lang.Exception -> Le6
            java.lang.String r1 = "SHA-256"
            r2 = r23
            java.lang.String r1 = com.huawei.updatesdk.a.a.d.d.a(r2, r1)     // Catch: java.lang.Throwable -> Le1 java.lang.Exception -> Le6
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> Le1 java.lang.Exception -> Le6
            if (r0 == 0) goto Lec
            r0 = 1
            r12 = r0
            goto Led
        Le1:
            r0 = move-exception
            r2 = r6
            r12 = r9
            goto L19d
        Le6:
            r0 = move-exception
            r2 = r6
            r1 = r8
            r12 = r9
            goto L161
        Lec:
            r12 = r8
        Led:
            if (r12 == 0) goto L114
            java.lang.String r5 = r7.a     // Catch: java.lang.Throwable -> L104 java.lang.Exception -> L10b
            r0 = 4
            r1 = r20
            r2 = r6
            r3 = r10
            r19 = r6
            r6 = r0
            r1.a(r2, r3, r5, r6)     // Catch: java.lang.Throwable -> Lfd java.lang.Exception -> L102
            goto L116
        Lfd:
            r0 = move-exception
            r8 = r12
            r6 = r19
            goto L108
        L102:
            r0 = move-exception
            goto L10e
        L104:
            r0 = move-exception
            r19 = r6
            r8 = r12
        L108:
            r12 = r9
            goto L19c
        L10b:
            r0 = move-exception
            r19 = r6
        L10e:
            r3 = r10
            r1 = r12
            r2 = r19
            goto L168
        L114:
            r19 = r6
        L116:
            if (r12 != 0) goto L129
            boolean r0 = r7.c
            java.lang.String r5 = r7.a
            if (r0 == 0) goto L120
            r6 = 3
            goto L121
        L120:
            r6 = 5
        L121:
            r1 = r20
            r2 = r19
            r3 = r10
            r1.a(r2, r3, r5, r6)
        L129:
            r7.a(r9, r9)
            java.util.List r0 = com.huawei.updatesdk.b.g.b.a()
            r0.remove(r7)
            r20.d()
            return r12
        L137:
            r0 = move-exception
            r19 = r6
            goto L15a
        L13b:
            r0 = move-exception
            r19 = r6
            goto L15e
        L13f:
            r0 = move-exception
            r19 = r6
        L142:
            r2 = r19
            goto L14d
        L145:
            r0 = move-exception
            goto L14d
        L147:
            r0 = move-exception
            r13 = r9
            goto L14d
        L14a:
            r0 = move-exception
            r12 = r9
            r13 = r12
        L14d:
            r7.a(r12, r13)     // Catch: java.lang.Throwable -> L158 java.lang.Exception -> L15c
            throw r0     // Catch: java.lang.Throwable -> L151 java.lang.Exception -> L154
        L151:
            r0 = move-exception
            r6 = r2
            goto L108
        L154:
            r0 = move-exception
            r6 = r2
            r12 = r9
            goto L15f
        L158:
            r0 = move-exception
            r6 = r2
        L15a:
            r9 = r13
            goto L19c
        L15c:
            r0 = move-exception
            r6 = r2
        L15e:
            r9 = r13
        L15f:
            r2 = r6
            r1 = r8
        L161:
            r3 = r10
            goto L169
        L163:
            r0 = move-exception
            r12 = r9
            goto L19e
        L166:
            r0 = move-exception
            r1 = r8
        L168:
            r12 = r9
        L169:
            java.lang.String r5 = "DownloadMarketTask"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r6.<init>()     // Catch: java.lang.Throwable -> L198
            java.lang.String r10 = "downloadUrlToStream(String urlString,OutputStream outputStream) "
            r6.append(r10)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L198
            r6.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> L198
            com.huawei.updatesdk.a.a.c.a.a.a.b(r5, r0)     // Catch: java.lang.Throwable -> L198
            if (r1 != 0) goto L193
            boolean r0 = r7.c
            java.lang.String r5 = r7.a
            if (r0 == 0) goto L18d
            r6 = 3
            goto L18e
        L18d:
            r6 = 5
        L18e:
            r1 = r20
            r1.a(r2, r3, r5, r6)
        L193:
            r7.a(r12, r9)
            goto L2b
        L198:
            r0 = move-exception
            r8 = r1
            r6 = r2
            r10 = r3
        L19c:
            r2 = r6
        L19d:
            r3 = r10
        L19e:
            if (r8 != 0) goto L1ae
            boolean r1 = r7.c
            java.lang.String r5 = r7.a
            if (r1 == 0) goto L1a8
            r6 = 3
            goto L1a9
        L1a8:
            r6 = 5
        L1a9:
            r1 = r20
            r1.a(r2, r3, r5, r6)
        L1ae:
            r7.a(r12, r9)
            java.util.List r1 = com.huawei.updatesdk.b.g.b.a()
            r1.remove(r7)
            r20.d()
            throw r0
    }

    static boolean a(com.huawei.updatesdk.b.d.c r0, boolean r1) {
            r0.c = r1
            return r1
    }

    static java.lang.String c() {
            java.lang.String r0 = e()
            return r0
    }

    private void d() {
            r1 = this;
            javax.net.ssl.HttpsURLConnection r0 = r1.b
            if (r0 == 0) goto L7
            r0.disconnect()
        L7:
            return
    }

    private static java.lang.String e() {
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            java.lang.String r0 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = ""
            if (r1 == 0) goto L11
            return r2
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "/updatesdk"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r3 = r1.exists()
            if (r3 != 0) goto L34
            boolean r1 = r1.mkdirs()
            if (r1 != 0) goto L34
            return r2
        L34:
            return r0
    }

    protected java.lang.Void a(java.lang.Void... r2) {
            r1 = this;
            com.huawei.updatesdk.b.g.b.a(r1)
            com.huawei.updatesdk.b.d.b r2 = r1.d
            java.lang.String r0 = e()
            r1.a(r2, r0)
            r2 = 0
            return r2
    }

    public void a() {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.huawei.updatesdk.b.d.c$a r1 = new com.huawei.updatesdk.b.d.c$a
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }

    public void b() {
            r1 = this;
            r0 = 0
            r1.e = r0
            return
    }

    @Override
    protected java.lang.Void doInBackground(java.lang.Void[] r1) {
            r0 = this;
            java.lang.Void[] r1 = (java.lang.Void[]) r1
            java.lang.Void r1 = r0.a(r1)
            return r1
    }

    @Override
    protected void onCancelled() {
            r0 = this;
            super.onCancelled()
            r0.a()
            return
    }
}
