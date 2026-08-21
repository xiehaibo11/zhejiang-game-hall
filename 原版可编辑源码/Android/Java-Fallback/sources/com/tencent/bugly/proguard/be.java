package com.tencent.bugly.proguard;

public final class be {
    private static java.util.List<java.io.File> a;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tencent.bugly.proguard.be.a = r0
            return
    }

    public static com.tencent.bugly.crashreport.crash.CrashDetailBean a(android.content.Context r6, java.lang.String r7, com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler r8) {
            r0 = 0
            r1 = 0
            if (r6 == 0) goto La2
            if (r7 == 0) goto La2
            if (r8 != 0) goto La
            goto La2
        La:
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "rqd_record.eup"
            r2.<init>(r7, r3)
            boolean r7 = r2.exists()
            if (r7 == 0) goto La1
            boolean r7 = r2.canRead()
            if (r7 != 0) goto L1f
            goto La1
        L1f:
            java.io.BufferedInputStream r7 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L82 java.io.IOException -> L85
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L82 java.io.IOException -> L85
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L82 java.io.IOException -> L85
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L82 java.io.IOException -> L85
            java.lang.String r2 = a(r7)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r3 = 1
            if (r2 == 0) goto L6e
            java.lang.String r4 = "NATIVE_RQD_REPORT"
            boolean r4 = r2.equals(r4)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            if (r4 != 0) goto L39
            goto L6e
        L39:
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r2.<init>()     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
        L3e:
            r4 = r1
        L3f:
            java.lang.String r5 = a(r7)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            if (r5 == 0) goto L4d
            if (r4 != 0) goto L49
            r4 = r5
            goto L3f
        L49:
            r2.put(r4, r5)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            goto L3e
        L4d:
            if (r4 == 0) goto L61
            java.lang.String r6 = "record not pair! drop! %s"
            java.lang.Object[] r8 = new java.lang.Object[r3]     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r8[r0] = r4     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            com.tencent.bugly.proguard.al.e(r6, r8)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r7.close()     // Catch: java.io.IOException -> L5c
            goto L60
        L5c:
            r6 = move-exception
            r6.printStackTrace()
        L60:
            return r1
        L61:
            com.tencent.bugly.crashreport.crash.CrashDetailBean r6 = a(r6, r2, r8)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r7.close()     // Catch: java.io.IOException -> L69
            goto L6d
        L69:
            r7 = move-exception
            r7.printStackTrace()
        L6d:
            return r6
        L6e:
            java.lang.String r6 = "record read fail! %s"
            java.lang.Object[] r8 = new java.lang.Object[r3]     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r8[r0] = r2     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            com.tencent.bugly.proguard.al.e(r6, r8)     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L95
            r7.close()     // Catch: java.io.IOException -> L7b
            goto L7f
        L7b:
            r6 = move-exception
            r6.printStackTrace()
        L7f:
            return r1
        L80:
            r6 = move-exception
            goto L87
        L82:
            r6 = move-exception
            r7 = r1
            goto L96
        L85:
            r6 = move-exception
            r7 = r1
        L87:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L95
            if (r7 == 0) goto L94
            r7.close()     // Catch: java.io.IOException -> L90
            goto L94
        L90:
            r6 = move-exception
            r6.printStackTrace()
        L94:
            return r1
        L95:
            r6 = move-exception
        L96:
            if (r7 == 0) goto La0
            r7.close()     // Catch: java.io.IOException -> L9c
            goto La0
        L9c:
            r7 = move-exception
            r7.printStackTrace()
        La0:
            throw r6
        La1:
            return r1
        La2:
            java.lang.Object[] r6 = new java.lang.Object[r0]
            java.lang.String r7 = "get eup record file args error"
            com.tencent.bugly.proguard.al.e(r7, r6)
            return r1
    }

    private static com.tencent.bugly.crashreport.crash.CrashDetailBean a(android.content.Context r25, java.util.Map<java.lang.String, java.lang.String> r26, com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler r27) {
            r0 = r26
            java.lang.String r1 = "unknown"
            com.tencent.bugly.proguard.aa r2 = com.tencent.bugly.proguard.aa.a(r25)
            java.lang.String r3 = "intStateStr"
            r4 = 1
            r5 = 0
            if (r2 != 0) goto L17
            java.lang.Object[] r2 = new java.lang.Object[r5]
            java.lang.String r6 = "abnormal com info not created"
            com.tencent.bugly.proguard.al.e(r6, r2)
        L15:
            r2 = 0
            goto L34
        L17:
            java.lang.Object r2 = r0.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L2c
            java.lang.String r2 = r2.trim()
            int r2 = r2.length()
            if (r2 > 0) goto L2a
            goto L2c
        L2a:
            r2 = 1
            goto L34
        L2c:
            java.lang.Object[] r2 = new java.lang.Object[r5]
            java.lang.String r6 = "no intStateStr"
            com.tencent.bugly.proguard.al.e(r6, r2)
            goto L15
        L34:
            r6 = 0
            if (r2 != 0) goto L38
            return r6
        L38:
            java.lang.Object r2 = r0.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Map r2 = d(r2)
            if (r2 != 0) goto L56
            java.lang.Object[] r1 = new java.lang.Object[r4]
            int r0 = r26.size()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r1[r5] = r0
            java.lang.String r0 = "parse intSateMap fail"
            com.tencent.bugly.proguard.al.e(r0, r1)
            return r6
        L56:
            java.lang.String r3 = "sino"
            java.lang.Object r3 = r2.get(r3)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L241
            r3.intValue()     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = "sud"
            java.lang.Object r3 = r2.get(r3)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L241
            r3.intValue()     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = "soVersion"
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L241
            r20 = r3
            java.lang.String r20 = (java.lang.String) r20     // Catch: java.lang.Throwable -> L241
            boolean r3 = android.text.TextUtils.isEmpty(r20)     // Catch: java.lang.Throwable -> L241
            if (r3 == 0) goto L84
            java.lang.String r0 = "error format at version"
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L241
            com.tencent.bugly.proguard.al.e(r0, r1)     // Catch: java.lang.Throwable -> L241
            return r6
        L84:
            java.lang.String r3 = "codeMsg"
            java.lang.Object r3 = a(r0, r3, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "signalName"
            java.lang.Object r7 = a(r0, r7, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L241
            java.lang.String r8 = "errnoMsg"
            r0.get(r8)     // Catch: java.lang.Throwable -> L241
            java.lang.String r8 = "stack"
            java.lang.Object r8 = a(r0, r8, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L241
            java.lang.String r9 = "jstack"
            java.lang.Object r9 = r0.get(r9)     // Catch: java.lang.Throwable -> L241
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L241
            if (r9 == 0) goto Lbf
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L241
            r10.<init>()     // Catch: java.lang.Throwable -> L241
            r10.append(r8)     // Catch: java.lang.Throwable -> L241
            java.lang.String r8 = "java:\n"
            r10.append(r8)     // Catch: java.lang.Throwable -> L241
            r10.append(r9)     // Catch: java.lang.Throwable -> L241
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> L241
        Lbf:
            java.lang.String r9 = "sico"
            java.lang.Object r9 = r2.get(r9)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.Throwable -> L241
            java.lang.String r10 = ")"
            java.lang.String r11 = "("
            if (r9 == 0) goto Led
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> L241
            if (r9 <= 0) goto Led
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L241
            r9.<init>()     // Catch: java.lang.Throwable -> L241
            r9.append(r7)     // Catch: java.lang.Throwable -> L241
            r9.append(r11)     // Catch: java.lang.Throwable -> L241
            r9.append(r3)     // Catch: java.lang.Throwable -> L241
            r9.append(r10)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = r9.toString()     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "KERNEL"
            r12 = r3
            r15 = r7
            goto Lef
        Led:
            r15 = r3
            r12 = r7
        Lef:
            java.lang.String r3 = "nativeLog"
            java.lang.Object r3 = r0.get(r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L241
            if (r3 == 0) goto L108
            boolean r7 = r3.isEmpty()     // Catch: java.lang.Throwable -> L241
            if (r7 != 0) goto L108
            java.lang.String r7 = "BuglyNativeLog.txt"
            byte[] r3 = com.tencent.bugly.proguard.ap.a(r3, r7)     // Catch: java.lang.Throwable -> L241
            r21 = r3
            goto L10a
        L108:
            r21 = r6
        L10a:
            java.lang.String r3 = "sendingProcess"
            java.lang.Object r3 = a(r0, r3, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "spd"
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L241
            if (r7 == 0) goto L131
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L241
            r9.<init>()     // Catch: java.lang.Throwable -> L241
            r9.append(r3)     // Catch: java.lang.Throwable -> L241
            r9.append(r11)     // Catch: java.lang.Throwable -> L241
            r9.append(r7)     // Catch: java.lang.Throwable -> L241
            r9.append(r10)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = r9.toString()     // Catch: java.lang.Throwable -> L241
        L131:
            r16 = r3
            java.lang.String r3 = "threadName"
            java.lang.Object r3 = a(r0, r3, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "et"
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L241
            if (r7 == 0) goto L15a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L241
            r9.<init>()     // Catch: java.lang.Throwable -> L241
            r9.append(r3)     // Catch: java.lang.Throwable -> L241
            r9.append(r11)     // Catch: java.lang.Throwable -> L241
            r9.append(r7)     // Catch: java.lang.Throwable -> L241
            r9.append(r10)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = r9.toString()     // Catch: java.lang.Throwable -> L241
        L15a:
            r9 = r3
            java.lang.String r3 = "processName"
            java.lang.Object r3 = a(r0, r3, r1)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "ep"
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L241
            if (r7 == 0) goto L182
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L241
            r13.<init>()     // Catch: java.lang.Throwable -> L241
            r13.append(r3)     // Catch: java.lang.Throwable -> L241
            r13.append(r11)     // Catch: java.lang.Throwable -> L241
            r13.append(r7)     // Catch: java.lang.Throwable -> L241
            r13.append(r10)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = r13.toString()     // Catch: java.lang.Throwable -> L241
        L182:
            java.util.Map r22 = a(r26)     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "ets"
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L241
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L241
            long r10 = (long) r7     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = "etms"
            java.lang.Object r2 = r2.get(r7)     // Catch: java.lang.Throwable -> L241
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L241
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L241
            long r13 = (long) r2     // Catch: java.lang.Throwable -> L241
            r17 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r17
            long r13 = r13 / r17
            long r10 = r10 + r13
            java.lang.String r2 = "errorAddr"
            java.lang.Object r2 = a(r0, r2, r1)     // Catch: java.lang.Throwable -> L241
            r13 = r2
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L241
            java.lang.String r14 = a(r8)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "sysLogPath"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L241
            r18 = r2
            java.lang.String r18 = (java.lang.String) r18     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "jniLogPath"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L241
            r19 = r2
            java.lang.String r19 = (java.lang.String) r19     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "tombPath"
            java.lang.Object r1 = a(r0, r2, r1)     // Catch: java.lang.Throwable -> L241
            r17 = r1
            java.lang.String r17 = (java.lang.String) r17     // Catch: java.lang.Throwable -> L241
            r23 = 0
            r24 = 0
            r7 = r27
            r8 = r3
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = r7.packageCrashDatas(r8, r9, r10, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24)     // Catch: java.lang.Throwable -> L241
            if (r1 == 0) goto L240
            java.lang.String r2 = "userId"
            java.lang.String r3 = r1.m     // Catch: java.lang.Throwable -> L241
            java.lang.Object r2 = a(r0, r2, r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L241
            r1.m = r2     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "[Native record info] userId: %s"
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = r1.m     // Catch: java.lang.Throwable -> L241
            r3[r5] = r7     // Catch: java.lang.Throwable -> L241
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "sysLog"
            java.lang.String r3 = r1.w     // Catch: java.lang.Throwable -> L241
            java.lang.Object r2 = a(r0, r2, r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L241
            r1.w = r2     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "appVersion"
            java.lang.String r3 = r1.w     // Catch: java.lang.Throwable -> L241
            java.lang.Object r2 = a(r0, r2, r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L241
            r1.f = r2     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "[Native record info] appVersion: %s"
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L241
            java.lang.String r7 = r1.f     // Catch: java.lang.Throwable -> L241
            r3[r5] = r7     // Catch: java.lang.Throwable -> L241
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = "isAppForeground"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L241
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L241
            if (r2 == 0) goto L233
            java.lang.String r3 = "[Native record info] isAppForeground: %s"
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L241
            r7[r5] = r2     // Catch: java.lang.Throwable -> L241
            com.tencent.bugly.proguard.al.c(r3, r7)     // Catch: java.lang.Throwable -> L241
            java.lang.String r3 = "true"
            boolean r2 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L241
            goto L234
        L233:
            r2 = 0
        L234:
            r1.R = r2     // Catch: java.lang.Throwable -> L241
            long r2 = b(r26)     // Catch: java.lang.Throwable -> L241
            r1.Q = r2     // Catch: java.lang.Throwable -> L241
            r1.z = r6     // Catch: java.lang.Throwable -> L241
            r1.k = r4     // Catch: java.lang.Throwable -> L241
        L240:
            return r1
        L241:
            r0 = move-exception
            java.lang.Object[] r1 = new java.lang.Object[r5]
            java.lang.String r2 = "error format"
            com.tencent.bugly.proguard.al.e(r2, r1)
            r0.printStackTrace()
            return r6
    }

    private static <KeyT, ValueT> ValueT a(java.util.Map<KeyT, ValueT> r0, KeyT r1, ValueT r2) {
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L7
            if (r0 == 0) goto Lb
            return r0
        L7:
            r0 = move-exception
            com.tencent.bugly.proguard.al.a(r0)
        Lb:
            return r2
    }

    private static java.lang.String a(java.io.BufferedInputStream r4) throws java.io.IOException {
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L29
            r2 = 1024(0x400, float:1.435E-42)
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L26 java.lang.Throwable -> L29
        L8:
            int r2 = r4.read()     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            r3 = -1
            if (r2 == r3) goto L30
            if (r2 != 0) goto L20
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            byte[] r2 = r1.toByteArray()     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            java.lang.String r3 = "UTf-8"
            r4.<init>(r2, r3)     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            r1.close()
            return r4
        L20:
            r1.write(r2)     // Catch: java.lang.Throwable -> L24 java.lang.Throwable -> L34
            goto L8
        L24:
            r4 = move-exception
            goto L2b
        L26:
            r4 = move-exception
            r1 = r0
            goto L35
        L29:
            r4 = move-exception
            r1 = r0
        L2b:
            com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L33
        L30:
            r1.close()
        L33:
            return r0
        L34:
            r4 = move-exception
        L35:
            if (r1 == 0) goto L3a
            r1.close()
        L3a:
            throw r4
    }

    protected static java.lang.String a(java.lang.String r6) {
            if (r6 != 0) goto L5
            java.lang.String r6 = ""
            return r6
        L5:
            java.lang.String r0 = "\n"
            java.lang.String[] r1 = r6.split(r0)
            if (r1 == 0) goto L31
            int r2 = r1.length
            if (r2 != 0) goto L11
            goto L31
        L11:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            int r2 = r1.length
            r3 = 0
        L18:
            if (r3 >= r2) goto L2d
            r4 = r1[r3]
            java.lang.String r5 = "java.lang.Thread.getStackTrace("
            boolean r5 = r4.contains(r5)
            if (r5 != 0) goto L2a
            r6.append(r4)
            r6.append(r0)
        L2a:
            int r3 = r3 + 1
            goto L18
        L2d:
            java.lang.String r6 = r6.toString()
        L31:
            return r6
    }

    public static java.lang.String a(java.lang.String r6, int r7, java.lang.String r8, boolean r9) {
            r0 = 0
            if (r6 == 0) goto Lf3
            if (r7 > 0) goto L7
            goto Lf3
        L7:
            java.io.File r1 = new java.io.File
            r1.<init>(r6)
            boolean r2 = r1.exists()
            if (r2 == 0) goto Lf3
            boolean r2 = r1.canRead()
            if (r2 != 0) goto L1a
            goto Lf3
        L1a:
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            long r3 = r1.length()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r4 = 0
            r2[r4] = r3
            r3 = 1
            java.lang.String r5 = r1.getAbsolutePath()
            r2[r3] = r5
            java.lang.String r3 = "Read system log from native record file(length: %s bytes): %s"
            com.tencent.bugly.proguard.al.a(r3, r2)
            java.util.List<java.io.File> r2 = com.tencent.bugly.proguard.be.a
            r2.add(r1)
            java.lang.Object[] r2 = new java.lang.Object[r4]
            java.lang.String r3 = "Add this record file to list for cleaning lastly."
            com.tencent.bugly.proguard.al.c(r3, r2)
            if (r8 != 0) goto L4d
            java.io.File r8 = new java.io.File
            r8.<init>(r6)
            java.lang.String r6 = com.tencent.bugly.proguard.ap.a(r8, r7, r9)
            goto Le7
        L4d:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
            r5.<init>(r1)     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
            java.lang.String r1 = "utf-8"
            r3.<init>(r5, r1)     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lbd java.lang.Throwable -> Lc0
        L63:
            java.lang.String r0 = r2.readLine()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            if (r0 == 0) goto Lab
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            r1.<init>()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            r1.append(r8)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            java.lang.String r3 = "[ ]*:"
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            java.util.regex.Matcher r1 = r1.matcher(r0)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            boolean r1 = r1.find()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            if (r1 == 0) goto L90
            r6.append(r0)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            java.lang.String r0 = "\n"
            r6.append(r0)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
        L90:
            if (r7 <= 0) goto L63
            int r0 = r6.length()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            if (r0 <= r7) goto L63
            if (r9 == 0) goto La2
            int r8 = r6.length()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            r6.delete(r7, r8)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            goto Lab
        La2:
            int r0 = r6.length()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            int r0 = r0 - r7
            r6.delete(r4, r0)     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            goto L63
        Lab:
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lb8 java.lang.Throwable -> Lba
            r2.close()     // Catch: java.lang.Exception -> Lb3
            goto Le7
        Lb3:
            r7 = move-exception
            com.tencent.bugly.proguard.al.a(r7)
            goto Le7
        Lb8:
            r6 = move-exception
            goto Le8
        Lba:
            r7 = move-exception
            r0 = r2
            goto Lc1
        Lbd:
            r6 = move-exception
            r2 = r0
            goto Le8
        Lc0:
            r7 = move-exception
        Lc1:
            com.tencent.bugly.proguard.al.a(r7)     // Catch: java.lang.Throwable -> Lbd
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r9 = "\n[error:"
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> Lbd
            r8.append(r7)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r7 = "]"
            r8.append(r7)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> Lbd
            r6.append(r7)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lbd
            if (r0 == 0) goto Le7
            r0.close()     // Catch: java.lang.Exception -> Lb3
        Le7:
            return r6
        Le8:
            if (r2 == 0) goto Lf2
            r2.close()     // Catch: java.lang.Exception -> Lee
            goto Lf2
        Lee:
            r7 = move-exception
            com.tencent.bugly.proguard.al.a(r7)
        Lf2:
            throw r6
        Lf3:
            return r0
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4) {
            if (r3 == 0) goto L42
            if (r4 != 0) goto L5
            goto L42
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = b(r3, r4)
            if (r1 == 0) goto L1e
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto L1e
            java.lang.String r2 = "Register infos:\n"
            r0.append(r2)
            r0.append(r1)
        L1e:
            java.lang.String r3 = c(r3, r4)
            if (r3 == 0) goto L3d
            boolean r4 = r3.isEmpty()
            if (r4 != 0) goto L3d
            int r4 = r0.length()
            if (r4 <= 0) goto L35
            java.lang.String r4 = "\n"
            r0.append(r4)
        L35:
            java.lang.String r4 = "System SO infos:\n"
            r0.append(r4)
            r0.append(r3)
        L3d:
            java.lang.String r3 = r0.toString()
            return r3
        L42:
            r3 = 0
            return r3
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(java.util.Map<java.lang.String, java.lang.String> r7) {
            java.lang.String r0 = "key-value"
            java.lang.Object r7 = r7.get(r0)
            java.lang.String r7 = (java.lang.String) r7
            if (r7 == 0) goto L32
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "\n"
            java.lang.String[] r7 = r7.split(r1)
            int r1 = r7.length
            r2 = 0
            r3 = 0
        L18:
            if (r3 >= r1) goto L31
            r4 = r7[r3]
            java.lang.String r5 = "="
            java.lang.String[] r4 = r4.split(r5)
            int r5 = r4.length
            r6 = 2
            if (r5 != r6) goto L2e
            r5 = r4[r2]
            r6 = 1
            r4 = r4[r6]
            r0.put(r5, r4)
        L2e:
            int r3 = r3 + 1
            goto L18
        L31:
            return r0
        L32:
            r7 = 0
            return r7
    }

    public static void a(boolean r3, java.lang.String r4) {
            if (r4 == 0) goto L37
            java.util.List<java.io.File> r0 = com.tencent.bugly.proguard.be.a
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "rqd_record.eup"
            r1.<init>(r4, r2)
            r0.add(r1)
            java.util.List<java.io.File> r0 = com.tencent.bugly.proguard.be.a
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "reg_record.txt"
            r1.<init>(r4, r2)
            r0.add(r1)
            java.util.List<java.io.File> r0 = com.tencent.bugly.proguard.be.a
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "map_record.txt"
            r1.<init>(r4, r2)
            r0.add(r1)
            java.util.List<java.io.File> r0 = com.tencent.bugly.proguard.be.a
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "backup_record.txt"
            r1.<init>(r4, r2)
            r0.add(r1)
            if (r3 == 0) goto L37
            c(r4)
        L37:
            java.util.List<java.io.File> r3 = com.tencent.bugly.proguard.be.a
            if (r3 == 0) goto L72
            int r3 = r3.size()
            if (r3 <= 0) goto L72
            java.util.List<java.io.File> r3 = com.tencent.bugly.proguard.be.a
            java.util.Iterator r3 = r3.iterator()
        L47:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L72
            java.lang.Object r4 = r3.next()
            java.io.File r4 = (java.io.File) r4
            boolean r0 = r4.exists()
            if (r0 == 0) goto L47
            boolean r0 = r4.canWrite()
            if (r0 == 0) goto L47
            r4.delete()
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.io.File r4 = r4.getAbsoluteFile()
            r0[r1] = r4
            java.lang.String r4 = "Delete record file %s"
            com.tencent.bugly.proguard.al.c(r4, r0)
            goto L47
        L72:
            return
    }

    private static long b(java.util.Map<java.lang.String, java.lang.String> r2) {
            java.lang.String r0 = "launchTime"
            java.lang.Object r2 = r2.get(r0)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L24
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            java.lang.String r1 = "[Native record info] launchTime: %s"
            com.tencent.bugly.proguard.al.c(r1, r0)
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L1a
            return r0
        L1a:
            r2 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r2)
            if (r0 != 0) goto L24
            r2.printStackTrace()
        L24:
            r0 = -1
            return r0
    }

    public static java.lang.String b(java.lang.String r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "backup_record.txt"
            r1.<init>(r3, r2)
            boolean r3 = r1.exists()
            if (r3 == 0) goto L16
            java.lang.String r3 = r1.getAbsolutePath()
            return r3
        L16:
            return r0
    }

    private static java.lang.String b(java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "reg_record.txt"
            java.io.BufferedReader r9 = com.tencent.bugly.proguard.ap.b(r9, r0)
            r0 = 0
            if (r9 != 0) goto La
            return r0
        La:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            r1.<init>()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            java.lang.String r2 = r9.readLine()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            if (r2 == 0) goto L6b
            boolean r10 = r2.startsWith(r10)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            if (r10 != 0) goto L1c
            goto L6b
        L1c:
            java.lang.String r10 = "                "
            r2 = 18
            r3 = 0
            r2 = 0
            r4 = 18
            r5 = 0
        L25:
            java.lang.String r6 = r9.readLine()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            java.lang.String r7 = "\n"
            if (r6 == 0) goto L59
            int r8 = r2 % 4
            if (r8 != 0) goto L3c
            if (r2 <= 0) goto L36
            r1.append(r7)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
        L36:
            java.lang.String r5 = "  "
            r1.append(r5)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            goto L4f
        L3c:
            int r7 = r6.length()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            r8 = 16
            if (r7 <= r8) goto L46
            r4 = 28
        L46:
            int r5 = r4 - r5
            java.lang.String r5 = r10.substring(r3, r5)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            r1.append(r5)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
        L4f:
            int r5 = r6.length()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            r1.append(r6)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            int r2 = r2 + 1
            goto L25
        L59:
            r1.append(r7)     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L76 java.lang.Throwable -> L78
            if (r9 == 0) goto L6a
            r9.close()     // Catch: java.lang.Exception -> L66
            goto L6a
        L66:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
        L6a:
            return r10
        L6b:
            if (r9 == 0) goto L75
            r9.close()     // Catch: java.lang.Exception -> L71
            goto L75
        L71:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
        L75:
            return r0
        L76:
            r10 = move-exception
            goto L87
        L78:
            r10 = move-exception
            com.tencent.bugly.proguard.al.a(r10)     // Catch: java.lang.Throwable -> L76
            if (r9 == 0) goto L86
            r9.close()     // Catch: java.lang.Exception -> L82
            goto L86
        L82:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
        L86:
            return r0
        L87:
            if (r9 == 0) goto L91
            r9.close()     // Catch: java.lang.Exception -> L8d
            goto L91
        L8d:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
        L91:
            throw r10
    }

    private static java.lang.String c(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "map_record.txt"
            java.io.BufferedReader r3 = com.tencent.bugly.proguard.ap.b(r3, r0)
            r0 = 0
            if (r3 != 0) goto La
            return r0
        La:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r2 == 0) goto L3f
            boolean r4 = r2.startsWith(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r4 != 0) goto L1c
            goto L3f
        L1c:
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r4 == 0) goto L30
            java.lang.String r2 = "  "
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            java.lang.String r4 = "\n"
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            goto L1c
        L30:
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L4a java.lang.Throwable -> L4c
            if (r3 == 0) goto L3e
            r3.close()     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L3e:
            return r4
        L3f:
            if (r3 == 0) goto L49
            r3.close()     // Catch: java.lang.Exception -> L45
            goto L49
        L45:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L49:
            return r0
        L4a:
            r4 = move-exception
            goto L5b
        L4c:
            r4 = move-exception
            com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L4a
            if (r3 == 0) goto L5a
            r3.close()     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L5a:
            return r0
        L5b:
            if (r3 == 0) goto L65
            r3.close()     // Catch: java.lang.Exception -> L61
            goto L65
        L61:
            r3 = move-exception
            com.tencent.bugly.proguard.al.a(r3)
        L65:
            throw r4
    }

    public static void c(java.lang.String r9) {
            if (r9 != 0) goto L3
            return
        L3:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L4c
            r0.<init>(r9)     // Catch: java.lang.Throwable -> L4c
            boolean r9 = r0.canRead()     // Catch: java.lang.Throwable -> L4c
            if (r9 == 0) goto L4b
            boolean r9 = r0.isDirectory()     // Catch: java.lang.Throwable -> L4c
            if (r9 == 0) goto L4b
            java.io.File[] r9 = r0.listFiles()     // Catch: java.lang.Throwable -> L4c
            if (r9 == 0) goto L4b
            int r0 = r9.length     // Catch: java.lang.Throwable -> L4c
            r1 = 0
            r2 = 0
        L1d:
            if (r2 >= r0) goto L4b
            r3 = r9[r2]     // Catch: java.lang.Throwable -> L4c
            boolean r4 = r3.canRead()     // Catch: java.lang.Throwable -> L4c
            if (r4 == 0) goto L48
            boolean r4 = r3.canWrite()     // Catch: java.lang.Throwable -> L4c
            if (r4 == 0) goto L48
            long r4 = r3.length()     // Catch: java.lang.Throwable -> L4c
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 != 0) goto L48
            r3.delete()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = "Delete empty record file %s"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4c
            java.io.File r3 = r3.getAbsoluteFile()     // Catch: java.lang.Throwable -> L4c
            r5[r1] = r3     // Catch: java.lang.Throwable -> L4c
            com.tencent.bugly.proguard.al.c(r4, r5)     // Catch: java.lang.Throwable -> L4c
        L48:
            int r2 = r2 + 1
            goto L1d
        L4b:
            return
        L4c:
            r9 = move-exception
            com.tencent.bugly.proguard.al.a(r9)
            return
    }

    private static java.util.Map<java.lang.String, java.lang.Integer> d(java.lang.String r11) {
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            r1 = 0
            r2 = 1
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Exception -> L3e
            r3.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = ","
            java.lang.String[] r4 = r11.split(r4)     // Catch: java.lang.Exception -> L3e
            int r5 = r4.length     // Catch: java.lang.Exception -> L3e
            r6 = 0
        L13:
            if (r6 >= r5) goto L3d
            r7 = r4[r6]     // Catch: java.lang.Exception -> L3e
            java.lang.String r8 = ":"
            java.lang.String[] r8 = r7.split(r8)     // Catch: java.lang.Exception -> L3e
            int r9 = r8.length     // Catch: java.lang.Exception -> L3e
            r10 = 2
            if (r9 == r10) goto L2b
            java.lang.String r3 = "error format at %s"
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L3e
            r4[r1] = r7     // Catch: java.lang.Exception -> L3e
            com.tencent.bugly.proguard.al.e(r3, r4)     // Catch: java.lang.Exception -> L3e
            return r0
        L2b:
            r7 = r8[r2]     // Catch: java.lang.Exception -> L3e
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L3e
            r8 = r8[r1]     // Catch: java.lang.Exception -> L3e
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Exception -> L3e
            r3.put(r8, r7)     // Catch: java.lang.Exception -> L3e
            int r6 = r6 + 1
            goto L13
        L3d:
            return r3
        L3e:
            r3 = move-exception
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r1] = r11
            java.lang.String r11 = "error format intStateStr %s"
            com.tencent.bugly.proguard.al.e(r11, r2)
            r3.printStackTrace()
            return r0
    }
}
