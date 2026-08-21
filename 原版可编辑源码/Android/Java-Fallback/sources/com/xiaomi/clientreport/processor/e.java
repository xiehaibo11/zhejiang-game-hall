package com.xiaomi.clientreport.processor;

public class e {
    private static com.xiaomi.clientreport.data.PerfClientReport a(com.xiaomi.clientreport.data.PerfClientReport r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            long[] r3 = a(r3)
            if (r3 != 0) goto Lb
            return r0
        Lb:
            r0 = 0
            r0 = r3[r0]
            r2.perfCounts = r0
            r0 = 1
            r0 = r3[r0]
            r2.perfLatencies = r0
            return r2
    }

    private static com.xiaomi.clientreport.data.PerfClientReport a(java.lang.String r6) {
            r0 = 0
            java.lang.String[] r6 = a(r6)     // Catch: java.lang.Exception -> L50
            if (r6 == 0) goto L55
            int r1 = r6.length     // Catch: java.lang.Exception -> L50
            r2 = 4
            if (r1 < r2) goto L55
            r1 = 0
            r2 = r6[r1]     // Catch: java.lang.Exception -> L50
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L50
            if (r2 != 0) goto L55
            r2 = 1
            r3 = r6[r2]     // Catch: java.lang.Exception -> L50
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L50
            if (r3 != 0) goto L55
            r3 = 2
            r4 = r6[r3]     // Catch: java.lang.Exception -> L50
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L50
            if (r4 != 0) goto L55
            r4 = 3
            r5 = r6[r4]     // Catch: java.lang.Exception -> L50
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L50
            if (r5 != 0) goto L55
            com.xiaomi.clientreport.data.PerfClientReport r0 = com.xiaomi.clientreport.data.PerfClientReport.getBlankInstance()     // Catch: java.lang.Exception -> L50
            r1 = r6[r1]     // Catch: java.lang.Exception -> L50
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L50
            r0.production = r1     // Catch: java.lang.Exception -> L50
            r1 = r6[r2]     // Catch: java.lang.Exception -> L50
            r0.clientInterfaceId = r1     // Catch: java.lang.Exception -> L50
            r1 = r6[r3]     // Catch: java.lang.Exception -> L50
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L50
            r0.reportType = r1     // Catch: java.lang.Exception -> L50
            r6 = r6[r4]     // Catch: java.lang.Exception -> L50
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L50
            r0.code = r6     // Catch: java.lang.Exception -> L50
            goto L55
        L50:
            java.lang.String r6 = "parse per key error"
            com.xiaomi.channel.commonutils.logger.b.c(r6)
        L55:
            return r0
    }

    public static java.lang.String a(com.xiaomi.clientreport.data.PerfClientReport r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.production
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = r3.clientInterfaceId
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.reportType
            r0.append(r2)
            r0.append(r1)
            int r3 = r3.code
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    private static java.util.HashMap<java.lang.String, java.lang.String> a(java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L64
            java.io.File r1 = new java.io.File
            r1.<init>(r5)
            boolean r1 = r1.exists()
            if (r1 != 0) goto L17
            goto L64
        L17:
            r1 = 0
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L58
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L58
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L58
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L56 java.lang.Exception -> L58
        L22:
            java.lang.String r5 = r2.readLine()     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            if (r5 == 0) goto L4c
            java.lang.String r1 = "%%%"
            java.lang.String[] r5 = r5.split(r1)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            int r1 = r5.length     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            r3 = 2
            if (r1 < r3) goto L22
            r1 = 0
            r3 = r5[r1]     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            if (r3 != 0) goto L22
            r3 = 1
            r4 = r5[r3]     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            if (r4 != 0) goto L22
            r1 = r5[r1]     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            r5 = r5[r3]     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            goto L22
        L4c:
            com.xiaomi.push.ab.a(r2)
            goto L5f
        L50:
            r5 = move-exception
            r1 = r2
            goto L60
        L53:
            r5 = move-exception
            r1 = r2
            goto L59
        L56:
            r5 = move-exception
            goto L60
        L58:
            r5 = move-exception
        L59:
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L56
            com.xiaomi.push.ab.a(r1)
        L5f:
            return r0
        L60:
            com.xiaomi.push.ab.a(r1)
            throw r5
        L64:
            return r0
    }

    public static java.util.List<java.lang.String> a(android.content.Context r7, java.lang.String r8) {
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto Lf8
            java.io.File r0 = new java.io.File
            r0.<init>(r8)
            boolean r0 = r0.exists()
            if (r0 != 0) goto L18
            goto Lf8
        L18:
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            r2.<init>()     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            r2.append(r8)     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            java.lang.String r3 = ".lock"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lb3 java.lang.Exception -> Lb8
            com.xiaomi.push.ab.a(r1)     // Catch: java.lang.Throwable -> Lad java.lang.Exception -> Lb0
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lad java.lang.Exception -> Lb0
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> Lad java.lang.Exception -> Lb0
            java.nio.channels.FileChannel r3 = r2.getChannel()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> Laa
            java.nio.channels.FileLock r3 = r3.lock()     // Catch: java.lang.Throwable -> La7 java.lang.Exception -> Laa
            java.io.BufferedReader r4 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La3
            java.io.FileReader r5 = new java.io.FileReader     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La3
            r5.<init>(r8)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La3
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La3
        L4b:
            java.lang.String r8 = r4.readLine()     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            if (r8 == 0) goto L84
            java.lang.String r0 = "%%%"
            java.lang.String[] r8 = r8.split(r0)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            int r0 = r8.length     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            r5 = 2
            if (r0 < r5) goto L4b
            r0 = 0
            r5 = r8[r0]     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            if (r5 != 0) goto L4b
            r5 = 1
            r6 = r8[r5]     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            if (r6 != 0) goto L4b
            r0 = r8[r0]     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            com.xiaomi.clientreport.data.PerfClientReport r0 = a(r0)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            r8 = r8[r5]     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            com.xiaomi.clientreport.data.PerfClientReport r8 = a(r0, r8)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            if (r8 != 0) goto L7c
            goto L4b
        L7c:
            java.lang.String r8 = r8.toJsonString()     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            r7.add(r8)     // Catch: java.lang.Throwable -> L9b java.lang.Exception -> L9d
            goto L4b
        L84:
            if (r3 == 0) goto L94
            boolean r8 = r3.isValid()
            if (r8 == 0) goto L94
            r3.release()     // Catch: java.io.IOException -> L90
            goto L94
        L90:
            r8 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r8)
        L94:
            com.xiaomi.push.ab.a(r2)
            com.xiaomi.push.ab.a(r4)
            goto Ld7
        L9b:
            r7 = move-exception
            goto La1
        L9d:
            r8 = move-exception
            goto La5
        L9f:
            r7 = move-exception
            r4 = r0
        La1:
            r0 = r3
            goto Ldc
        La3:
            r8 = move-exception
            r4 = r0
        La5:
            r0 = r3
            goto Lbc
        La7:
            r7 = move-exception
            r4 = r0
            goto Ldc
        Laa:
            r8 = move-exception
            r4 = r0
            goto Lbc
        Lad:
            r7 = move-exception
            r2 = r0
            goto Lb6
        Lb0:
            r8 = move-exception
            r2 = r0
            goto Lbb
        Lb3:
            r7 = move-exception
            r1 = r0
            r2 = r1
        Lb6:
            r4 = r2
            goto Ldc
        Lb8:
            r8 = move-exception
            r1 = r0
            r2 = r1
        Lbb:
            r4 = r2
        Lbc:
            com.xiaomi.channel.commonutils.logger.b.a(r8)     // Catch: java.lang.Throwable -> Ldb
            if (r0 == 0) goto Lcf
            boolean r8 = r0.isValid()
            if (r8 == 0) goto Lcf
            r0.release()     // Catch: java.io.IOException -> Lcb
            goto Lcf
        Lcb:
            r8 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r8)
        Lcf:
            com.xiaomi.push.ab.a(r2)
            com.xiaomi.push.ab.a(r4)
            if (r1 == 0) goto Lda
        Ld7:
            r1.delete()
        Lda:
            return r7
        Ldb:
            r7 = move-exception
        Ldc:
            if (r0 == 0) goto Lec
            boolean r8 = r0.isValid()
            if (r8 == 0) goto Lec
            r0.release()     // Catch: java.io.IOException -> Le8
            goto Lec
        Le8:
            r8 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r8)
        Lec:
            com.xiaomi.push.ab.a(r2)
            com.xiaomi.push.ab.a(r4)
            if (r1 == 0) goto Lf7
            r1.delete()
        Lf7:
            throw r7
        Lf8:
            return r7
    }

    private static void a(java.lang.String r4, java.util.HashMap<java.lang.String, java.lang.String> r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L72
            if (r5 == 0) goto L72
            int r0 = r5.size()
            if (r0 != 0) goto Lf
            goto L72
        Lf:
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r4 = r0.exists()
            if (r4 == 0) goto L1d
            r0.delete()
        L1d:
            r4 = 0
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L63
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L63
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L63
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L63
            java.util.Set r4 = r5.keySet()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
        L30:
            boolean r0 = r4.hasNext()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            if (r0 == 0) goto L69
            java.lang.Object r0 = r4.next()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.Object r2 = r5.get(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            r3.<init>()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            r3.append(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.String r0 = "%%%"
            r3.append(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            r3.append(r2)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            r1.write(r0)     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            r1.newLine()     // Catch: java.lang.Exception -> L5d java.lang.Throwable -> L6d
            goto L30
        L5d:
            r4 = move-exception
            goto L66
        L5f:
            r5 = move-exception
            r1 = r4
            r4 = r5
            goto L6e
        L63:
            r5 = move-exception
            r1 = r4
            r4 = r5
        L66:
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L6d
        L69:
            com.xiaomi.push.ab.a(r1)
            return
        L6d:
            r4 = move-exception
        L6e:
            com.xiaomi.push.ab.a(r1)
            throw r4
        L72:
            return
    }

    public static void a(java.lang.String r13, com.xiaomi.clientreport.data.a[] r14) {
            if (r14 == 0) goto Lab
            int r0 = r14.length
            if (r0 <= 0) goto Lab
            boolean r0 = android.text.TextUtils.isEmpty(r13)
            if (r0 == 0) goto Ld
            goto Lab
        Ld:
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L7c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7c
            r2.<init>()     // Catch: java.lang.Throwable -> L7c
            r2.append(r13)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = ".lock"
            r2.append(r3)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L7c
            com.xiaomi.push.ab.a(r1)     // Catch: java.lang.Throwable -> L7c
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L7c
            java.nio.channels.FileChannel r1 = r2.getChannel()     // Catch: java.lang.Throwable -> L7d
            java.nio.channels.FileLock r0 = r1.lock()     // Catch: java.lang.Throwable -> L7d
            java.util.HashMap r1 = a(r13)     // Catch: java.lang.Throwable -> L7d
            int r9 = r14.length     // Catch: java.lang.Throwable -> L7d
            r3 = 0
            r10 = r3
        L3d:
            if (r10 >= r9) goto L6b
            r3 = r14[r10]     // Catch: java.lang.Throwable -> L7d
            if (r3 == 0) goto L68
            r4 = r3
            com.xiaomi.clientreport.data.PerfClientReport r4 = (com.xiaomi.clientreport.data.PerfClientReport) r4     // Catch: java.lang.Throwable -> L7d
            java.lang.String r4 = a(r4)     // Catch: java.lang.Throwable -> L7d
            r5 = r3
            com.xiaomi.clientreport.data.PerfClientReport r5 = (com.xiaomi.clientreport.data.PerfClientReport) r5     // Catch: java.lang.Throwable -> L7d
            long r5 = r5.perfCounts     // Catch: java.lang.Throwable -> L7d
            com.xiaomi.clientreport.data.PerfClientReport r3 = (com.xiaomi.clientreport.data.PerfClientReport) r3     // Catch: java.lang.Throwable -> L7d
            long r7 = r3.perfLatencies     // Catch: java.lang.Throwable -> L7d
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L7d
            if (r3 != 0) goto L68
            r11 = 0
            int r3 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r3 <= 0) goto L68
            int r3 = (r7 > r11 ? 1 : (r7 == r11 ? 0 : -1))
            if (r3 >= 0) goto L64
            goto L68
        L64:
            r3 = r1
            a(r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L7d
        L68:
            int r10 = r10 + 1
            goto L3d
        L6b:
            a(r13, r1)     // Catch: java.lang.Throwable -> L7d
            if (r0 == 0) goto L92
            boolean r13 = r0.isValid()
            if (r13 == 0) goto L92
            r0.release()     // Catch: java.io.IOException -> L7a
            goto L92
        L7a:
            r13 = move-exception
            goto L8f
        L7c:
            r2 = r0
        L7d:
            java.lang.String r13 = "failed to write perf to file "
            com.xiaomi.channel.commonutils.logger.b.c(r13)     // Catch: java.lang.Throwable -> L96
            if (r0 == 0) goto L92
            boolean r13 = r0.isValid()
            if (r13 == 0) goto L92
            r0.release()     // Catch: java.io.IOException -> L8e
            goto L92
        L8e:
            r13 = move-exception
        L8f:
            com.xiaomi.channel.commonutils.logger.b.a(r13)
        L92:
            com.xiaomi.push.ab.a(r2)
            return
        L96:
            r13 = move-exception
            if (r0 == 0) goto La7
            boolean r14 = r0.isValid()
            if (r14 == 0) goto La7
            r0.release()     // Catch: java.io.IOException -> La3
            goto La7
        La3:
            r14 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r14)
        La7:
            com.xiaomi.push.ab.a(r2)
            throw r13
        Lab:
            return
    }

    private static void a(java.util.HashMap<java.lang.String, java.lang.String> r9, java.lang.String r10, long r11, long r13) {
            java.lang.Object r0 = r9.get(r10)
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "#"
            if (r1 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L13:
            r0.append(r11)
            r0.append(r2)
            r0.append(r13)
            java.lang.String r11 = r0.toString()
            r9.put(r10, r11)
            goto L4d
        L24:
            long[] r0 = a(r0)
            if (r0 == 0) goto L47
            r1 = 0
            r3 = r0[r1]
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 <= 0) goto L47
            r3 = 1
            r7 = r0[r3]
            int r4 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r4 >= 0) goto L3b
            goto L47
        L3b:
            r4 = r0[r1]
            long r11 = r11 + r4
            r3 = r0[r3]
            long r13 = r13 + r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L13
        L47:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L13
        L4d:
            return
    }

    protected static long[] a(java.lang.String r4) {
            r0 = 2
            long[] r1 = new long[r0]
            java.lang.String r2 = "#"
            java.lang.String[] r4 = r4.split(r2)     // Catch: java.lang.Exception -> L27
            int r2 = r4.length     // Catch: java.lang.Exception -> L27
            if (r2 < r0) goto L26
            r0 = 0
            r2 = r4[r0]     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Exception -> L27
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L27
            r1[r0] = r2     // Catch: java.lang.Exception -> L27
            r0 = 1
            r4 = r4[r0]     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Exception -> L27
            long r2 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Exception -> L27
            r1[r0] = r2     // Catch: java.lang.Exception -> L27
        L26:
            return r1
        L27:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            r4 = 0
            return r4
    }

    private static java.lang.String[] a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r0 = "#"
            java.lang.String[] r1 = r1.split(r0)
            return r1
    }
}
