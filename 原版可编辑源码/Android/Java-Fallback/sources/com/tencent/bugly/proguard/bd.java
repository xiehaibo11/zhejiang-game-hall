package com.tencent.bugly.proguard;

public final class bd implements com.tencent.bugly.crashreport.crash.jni.NativeExceptionHandler {
    private final android.content.Context a;
    private final com.tencent.bugly.proguard.as b;
    private final com.tencent.bugly.proguard.aa c;
    private final com.tencent.bugly.proguard.ac d;

    public bd(android.content.Context r1, com.tencent.bugly.proguard.aa r2, com.tencent.bugly.proguard.as r3, com.tencent.bugly.proguard.ac r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r3
            r0.c = r2
            r0.d = r4
            return
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(java.lang.String[] r8) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            if (r8 != 0) goto L7
            r2 = 1
            goto L8
        L7:
            int r2 = r8.length
        L8:
            r0.<init>(r2)
            r2 = 0
            if (r8 == 0) goto L43
            r3 = 0
        Lf:
            int r4 = r8.length
            if (r3 >= r4) goto L4a
            r4 = r8[r3]
            if (r4 == 0) goto L40
            r5 = 2
            java.lang.Object[] r6 = new java.lang.Object[r5]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r3)
            r6[r2] = r7
            r6[r1] = r4
            java.lang.String r7 = "Extra message[%d]: %s"
            com.tencent.bugly.proguard.al.a(r7, r6)
            java.lang.String r6 = "="
            java.lang.String[] r6 = r4.split(r6)
            int r7 = r6.length
            if (r7 != r5) goto L37
            r4 = r6[r2]
            r5 = r6[r1]
            r0.put(r4, r5)
            goto L40
        L37:
            java.lang.Object[] r5 = new java.lang.Object[r1]
            r5[r2] = r4
            java.lang.String r4 = "bad extraMsg %s"
            com.tencent.bugly.proguard.al.d(r4, r5)
        L40:
            int r3 = r3 + 1
            goto Lf
        L43:
            java.lang.Object[] r8 = new java.lang.Object[r2]
            java.lang.String r1 = "not found extraMsg"
            com.tencent.bugly.proguard.al.c(r1, r8)
        L4a:
            return r0
    }

    @Override
    public final boolean getAndUpdateAnrState() {
            r7 = this;
            com.tencent.bugly.proguard.ay r0 = com.tencent.bugly.proguard.ay.a()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.tencent.bugly.proguard.ay r0 = com.tencent.bugly.proguard.ay.a()
            java.util.concurrent.atomic.AtomicBoolean r2 = r0.a
            boolean r2 = r2.get()
            if (r2 == 0) goto L1c
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "anr is processing, return"
            com.tencent.bugly.proguard.al.c(r2, r0)
            return r1
        L1c:
            android.app.ActivityManager r2 = r0.b
            boolean r3 = com.tencent.bugly.proguard.z.a(r2)
            r4 = 1
            if (r3 != 0) goto L2f
            r5 = 0
            android.app.ActivityManager$ProcessErrorStateInfo r2 = com.tencent.bugly.proguard.az.a(r2, r5)
            if (r2 == 0) goto L2f
            r2 = 1
            goto L30
        L2f:
            r2 = 0
        L30:
            if (r2 != 0) goto L3a
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r2 = "proc is not in anr, wait next check"
            com.tencent.bugly.proguard.al.c(r2, r0)
            return r1
        L3a:
            long r2 = java.lang.System.currentTimeMillis()
            boolean r2 = r0.a(r2)
            if (r2 == 0) goto L45
            return r1
        L45:
            boolean r0 = r0.a(r4)
            return r0
    }

    @Override
    public final void handleNativeException(int r21, int r22, long r23, long r25, java.lang.String r27, java.lang.String r28, java.lang.String r29, java.lang.String r30, int r31, java.lang.String r32, int r33, int r34, int r35, java.lang.String r36, java.lang.String r37) {
            r20 = this;
            r0 = r20
            r1 = r21
            r2 = r22
            r3 = r23
            r5 = r25
            r7 = r27
            r8 = r28
            r9 = r29
            r10 = r30
            r11 = r31
            r12 = r32
            r13 = r33
            r14 = r34
            r15 = r35
            r16 = r36
            r17 = r37
            r19 = r0
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Native Crash Happen v1"
            com.tencent.bugly.proguard.al.a(r1, r0)
            r18 = 0
            r1 = r21
            r0 = r19
            r0.handleNativeException2(r1, r2, r3, r5, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            return
    }

    @Override
    public final void handleNativeException2(int r28, int r29, long r30, long r32, java.lang.String r34, java.lang.String r35, java.lang.String r36, java.lang.String r37, int r38, java.lang.String r39, int r40, int r41, int r42, java.lang.String r43, java.lang.String r44, java.lang.String[] r45) {
            r27 = this;
            r14 = r27
            r0 = r29
            r13 = r35
            r1 = r40
            r12 = 0
            java.lang.Object[] r2 = new java.lang.Object[r12]
            java.lang.String r3 = "Native Crash Happen v2"
            com.tencent.bugly.proguard.al.a(r3, r2)
            java.lang.String r2 = ")"
            java.lang.String r3 = "("
            if (r38 <= 0) goto L31
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L229
            r4.<init>()     // Catch: java.lang.Throwable -> L229
            r5 = r34
            r4.append(r5)     // Catch: java.lang.Throwable -> L229
            r4.append(r3)     // Catch: java.lang.Throwable -> L229
            r6 = r39
            r4.append(r6)     // Catch: java.lang.Throwable -> L229
            r4.append(r2)     // Catch: java.lang.Throwable -> L229
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L229
            r11 = r4
            goto L36
        L31:
            r5 = r34
            r6 = r39
            r11 = r5
        L36:
            java.lang.String r10 = com.tencent.bugly.proguard.be.a(r36)     // Catch: java.lang.Throwable -> L229
            java.util.Map r4 = a(r45)     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = "HasPendingException"
            java.lang.Object r5 = r4.get(r5)     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L229
            r9 = 1
            if (r5 == 0) goto L5b
            java.lang.String r7 = "true"
            boolean r5 = r5.equals(r7)     // Catch: java.lang.Throwable -> L229
            if (r5 == 0) goto L5b
            java.lang.String r5 = "Native crash happened with a Java pending exception."
            java.lang.Object[] r7 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.al.a(r5, r7)     // Catch: java.lang.Throwable -> L229
            r18 = 1
            goto L5d
        L5b:
            r18 = 0
        L5d:
            com.tencent.bugly.proguard.aa r5 = r14.c     // Catch: java.lang.Throwable -> L229
            java.lang.String r7 = "ExceptionProcessName"
            java.lang.Object r7 = r4.get(r7)     // Catch: java.lang.Throwable -> L229
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L229
            if (r7 == 0) goto L7c
            int r8 = r7.length()     // Catch: java.lang.Throwable -> L229
            if (r8 != 0) goto L70
            goto L7c
        L70:
            java.lang.String r5 = "Name of crash process: %s"
            java.lang.Object[] r8 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L229
            r8[r12] = r7     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.al.c(r5, r8)     // Catch: java.lang.Throwable -> L229
            r19 = r7
            goto L80
        L7c:
            java.lang.String r5 = r5.d     // Catch: java.lang.Throwable -> L229
            r19 = r5
        L80:
            java.lang.String r5 = "ExceptionThreadName"
            java.lang.Object r5 = r4.get(r5)     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L229
            java.lang.String r7 = "crash thread name:%s tid:%s"
            r8 = 2
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L229
            r8[r12] = r5     // Catch: java.lang.Throwable -> L229
            java.lang.Integer r15 = java.lang.Integer.valueOf(r29)     // Catch: java.lang.Throwable -> L229
            r8[r9] = r15     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.al.c(r7, r8)     // Catch: java.lang.Throwable -> L229
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L229
            if (r7 == 0) goto Lbc
            java.lang.Thread r5 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L229
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L229
            r7.<init>()     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = r5.getName()     // Catch: java.lang.Throwable -> L229
            r7.append(r5)     // Catch: java.lang.Throwable -> L229
            r7.append(r3)     // Catch: java.lang.Throwable -> L229
            r7.append(r0)     // Catch: java.lang.Throwable -> L229
            r7.append(r2)     // Catch: java.lang.Throwable -> L229
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L229
            goto Ld1
        Lbc:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L229
            r7.<init>()     // Catch: java.lang.Throwable -> L229
            r7.append(r5)     // Catch: java.lang.Throwable -> L229
            r7.append(r3)     // Catch: java.lang.Throwable -> L229
            r7.append(r0)     // Catch: java.lang.Throwable -> L229
            r7.append(r2)     // Catch: java.lang.Throwable -> L229
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L229
        Ld1:
            r7 = 1000(0x3e8, double:4.94E-321)
            long r15 = r30 * r7
            long r7 = r32 / r7
            long r7 = r7 + r15
            java.lang.String r5 = "SysLogPath"
            java.lang.Object r5 = r4.get(r5)     // Catch: java.lang.Throwable -> L229
            r20 = r5
            java.lang.String r20 = (java.lang.String) r20     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = "JniLogPath"
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L229
            r21 = r4
            java.lang.String r21 = (java.lang.String) r21     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.ac r4 = r14.d     // Catch: java.lang.Throwable -> L229
            boolean r4 = r4.b()     // Catch: java.lang.Throwable -> L229
            if (r4 != 0) goto Lfb
            java.lang.String r4 = "no remote but still store!"
            java.lang.Object[] r5 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L229
        Lfb:
            com.tencent.bugly.proguard.ac r4 = r14.d     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.crashreport.common.strategy.StrategyBean r4 = r4.c()     // Catch: java.lang.Throwable -> L229
            boolean r4 = r4.f     // Catch: java.lang.Throwable -> L229
            java.lang.String r5 = "\n"
            if (r4 != 0) goto L148
            com.tencent.bugly.proguard.ac r4 = r14.d     // Catch: java.lang.Throwable -> L229
            boolean r4 = r4.b()     // Catch: java.lang.Throwable -> L229
            if (r4 == 0) goto L148
            java.lang.String r1 = "crash report was closed by remote , will not upload to Bugly , print local for helpful!"
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.al.e(r1, r2)     // Catch: java.lang.Throwable -> L229
            java.lang.String r1 = "NATIVE_CRASH"
            java.lang.String r2 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L229
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L229
            r3.<init>()     // Catch: java.lang.Throwable -> L229
            r3.append(r11)     // Catch: java.lang.Throwable -> L229
            r3.append(r5)     // Catch: java.lang.Throwable -> L229
            r3.append(r13)     // Catch: java.lang.Throwable -> L229
            r3.append(r5)     // Catch: java.lang.Throwable -> L229
            r3.append(r10)     // Catch: java.lang.Throwable -> L229
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L229
            r4 = 0
            r28 = r1
            r29 = r2
            r30 = r19
            r31 = r0
            r32 = r3
            r33 = r4
            com.tencent.bugly.proguard.as.a(r28, r29, r30, r31, r32, r33)     // Catch: java.lang.Throwable -> L229
            com.tencent.bugly.proguard.ap.c(r37)     // Catch: java.lang.Throwable -> L229
            return
        L148:
            if (r38 <= 0) goto L14f
            java.lang.String r4 = "KERNEL"
            r22 = r4
            goto L151
        L14f:
            r22 = r6
        L151:
            java.lang.String r4 = "UNKNOWN"
            if (r38 > 0) goto L17d
            if (r1 <= 0) goto L15b
            java.lang.String r4 = com.tencent.bugly.proguard.z.a(r40)     // Catch: java.lang.Throwable -> L229
        L15b:
            java.lang.String r6 = java.lang.String.valueOf(r40)     // Catch: java.lang.Throwable -> L229
            boolean r6 = r4.equals(r6)     // Catch: java.lang.Throwable -> L229
            if (r6 != 0) goto L17d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L229
            r6.<init>()     // Catch: java.lang.Throwable -> L229
            r6.append(r4)     // Catch: java.lang.Throwable -> L229
            r6.append(r3)     // Catch: java.lang.Throwable -> L229
            r6.append(r1)     // Catch: java.lang.Throwable -> L229
            r6.append(r2)     // Catch: java.lang.Throwable -> L229
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L229
            r23 = r1
            goto L17f
        L17d:
            r23 = r4
        L17f:
            r15 = 0
            r16 = 0
            r17 = 1
            r1 = r27
            r2 = r19
            r3 = r0
            r6 = r5
            r4 = r7
            r8 = r6
            r6 = r11
            r7 = r35
            r24 = r8
            r8 = r10
            r9 = r22
            r25 = r10
            r10 = r23
            r26 = r11
            r11 = r37
            r12 = r20
            r13 = r21
            r14 = r44
            com.tencent.bugly.crashreport.crash.CrashDetailBean r1 = r1.packageCrashDatas(r2, r3, r4, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L225
            if (r1 != 0) goto L1b1
            java.lang.String r0 = "pkg crash datas fail!"
            r2 = 0
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L225
            com.tencent.bugly.proguard.al.e(r0, r1)     // Catch: java.lang.Throwable -> L225
            return
        L1b1:
            r2 = 0
            java.lang.String r3 = "NATIVE_CRASH"
            java.lang.String r4 = com.tencent.bugly.proguard.ap.a()     // Catch: java.lang.Throwable -> L225
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L225
            r5.<init>()     // Catch: java.lang.Throwable -> L225
            r6 = r26
            r5.append(r6)     // Catch: java.lang.Throwable -> L225
            r6 = r24
            r5.append(r6)     // Catch: java.lang.Throwable -> L225
            r7 = r35
            r5.append(r7)     // Catch: java.lang.Throwable -> L225
            r5.append(r6)     // Catch: java.lang.Throwable -> L225
            r6 = r25
            r5.append(r6)     // Catch: java.lang.Throwable -> L225
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L225
            r28 = r3
            r29 = r4
            r30 = r19
            r31 = r0
            r32 = r5
            r33 = r1
            com.tencent.bugly.proguard.as.a(r28, r29, r30, r31, r32, r33)     // Catch: java.lang.Throwable -> L225
            r3 = r27
            com.tencent.bugly.proguard.as r0 = r3.b     // Catch: java.lang.Throwable -> L223
            if (r0 != 0) goto L1f5
            java.lang.String r0 = "crashHandler is null. Won't upload native crash."
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L223
            com.tencent.bugly.proguard.al.d(r0, r1)     // Catch: java.lang.Throwable -> L223
            return
        L1f5:
            com.tencent.bugly.proguard.as r0 = r3.b     // Catch: java.lang.Throwable -> L223
            r4 = 1
            boolean r0 = r0.a(r1, r4)     // Catch: java.lang.Throwable -> L223
            if (r0 != 0) goto L1ff
            r2 = 1
        L1ff:
            r0 = 0
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r5 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()     // Catch: java.lang.Throwable -> L223
            if (r5 == 0) goto L20a
            java.lang.String r0 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getDumpFilePath()     // Catch: java.lang.Throwable -> L223
        L20a:
            com.tencent.bugly.proguard.be.a(r4, r0)     // Catch: java.lang.Throwable -> L223
            if (r2 == 0) goto L214
            com.tencent.bugly.proguard.as r0 = r3.b     // Catch: java.lang.Throwable -> L223
            r0.b(r1, r4)     // Catch: java.lang.Throwable -> L223
        L214:
            com.tencent.bugly.proguard.as r0 = r3.b     // Catch: java.lang.Throwable -> L223
            r0.a(r1)     // Catch: java.lang.Throwable -> L223
            com.tencent.bugly.proguard.at r0 = com.tencent.bugly.proguard.at.a()     // Catch: java.lang.Throwable -> L223
            com.tencent.bugly.proguard.av r0 = r0.t     // Catch: java.lang.Throwable -> L223
            r0.b()     // Catch: java.lang.Throwable -> L223
            return
        L223:
            r0 = move-exception
            goto L22b
        L225:
            r0 = move-exception
            r3 = r27
            goto L22b
        L229:
            r0 = move-exception
            r3 = r14
        L22b:
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L234
            r0.printStackTrace()
        L234:
            return
    }

    @Override
    public final com.tencent.bugly.crashreport.crash.CrashDetailBean packageCrashDatas(java.lang.String r12, java.lang.String r13, long r14, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, java.lang.String r24, byte[] r25, java.util.Map<java.lang.String, java.lang.String> r26, boolean r27, boolean r28) {
            r11 = this;
            r0 = r11
            r1 = r12
            r2 = r21
            r3 = r25
            com.tencent.bugly.proguard.at r4 = com.tencent.bugly.proguard.at.a()
            boolean r4 = r4.i()
            r5 = 0
            if (r4 == 0) goto L18
            java.lang.Object[] r6 = new java.lang.Object[r5]
            java.lang.String r7 = "This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful!"
            com.tencent.bugly.proguard.al.e(r7, r6)
        L18:
            com.tencent.bugly.crashreport.crash.CrashDetailBean r6 = new com.tencent.bugly.crashreport.crash.CrashDetailBean
            r6.<init>()
            r7 = 1
            r6.b = r7
            com.tencent.bugly.proguard.aa r8 = r0.c
            java.lang.String r8 = r8.g()
            r6.e = r8
            com.tencent.bugly.proguard.aa r8 = r0.c
            java.lang.String r8 = r8.o
            r6.f = r8
            com.tencent.bugly.proguard.aa r8 = r0.c
            java.lang.String r8 = r8.q()
            r6.g = r8
            com.tencent.bugly.proguard.aa r8 = r0.c
            java.lang.String r8 = r8.f()
            r6.m = r8
            r8 = r16
            r6.n = r8
            java.lang.String r8 = ""
            if (r4 == 0) goto L49
            java.lang.String r4 = " This Crash Caused By ANR , PLS To Fix ANR , This Trace May Be Not Useful![Bugly]"
            goto L4a
        L49:
            r4 = r8
        L4a:
            r6.o = r4
            r4 = r17
            r6.p = r4
            if (r18 != 0) goto L53
            goto L55
        L53:
            r8 = r18
        L55:
            r6.q = r8
            r8 = r14
            r6.r = r8
            java.lang.String r4 = r6.q
            byte[] r4 = r4.getBytes()
            java.lang.String r4 = com.tencent.bugly.proguard.ap.c(r4)
            r6.u = r4
            r6.A = r1
            r4 = r13
            r6.B = r4
            com.tencent.bugly.proguard.aa r4 = r0.c
            java.lang.String r4 = r4.s()
            r6.L = r4
            com.tencent.bugly.proguard.aa r4 = r0.c
            java.util.Map r4 = r4.p()
            r6.h = r4
            com.tencent.bugly.proguard.aa r4 = r0.c
            java.util.Map r4 = r4.A()
            r6.i = r4
            r6.v = r2
            com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler r4 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getInstance()
            r8 = 0
            if (r4 == 0) goto L91
            java.lang.String r4 = com.tencent.bugly.crashreport.crash.jni.NativeCrashHandler.getDumpFilePath()
            goto L92
        L91:
            r4 = r8
        L92:
            java.lang.String r2 = com.tencent.bugly.proguard.be.a(r4, r2)
            boolean r9 = com.tencent.bugly.proguard.ap.b(r2)
            if (r9 != 0) goto L9e
            r6.Z = r2
        L9e:
            java.lang.String r2 = com.tencent.bugly.proguard.be.b(r4)
            r6.aa = r2
            int r2 = com.tencent.bugly.proguard.at.f
            java.lang.String r4 = com.tencent.bugly.proguard.at.k
            boolean r9 = com.tencent.bugly.proguard.at.p
            r10 = r22
            java.lang.String r2 = com.tencent.bugly.proguard.be.a(r10, r2, r4, r9)
            r6.w = r2
            int r2 = com.tencent.bugly.proguard.at.f
            r4 = r23
            java.lang.String r2 = com.tencent.bugly.proguard.be.a(r4, r2, r8, r7)
            r6.x = r2
            r2 = r20
            r6.N = r2
            r2 = r19
            r6.O = r2
            r2 = r24
            r6.P = r2
            com.tencent.bugly.proguard.aa r2 = r0.c
            long r9 = r2.k()
            r6.F = r9
            com.tencent.bugly.proguard.aa r2 = r0.c
            long r9 = r2.j()
            r6.G = r9
            com.tencent.bugly.proguard.aa r2 = r0.c
            long r9 = r2.l()
            r6.H = r9
            android.content.Context r2 = r0.a
            long r9 = com.tencent.bugly.proguard.ab.b(r2)
            r6.I = r9
            long r9 = com.tencent.bugly.proguard.ab.g()
            r6.J = r9
            long r9 = com.tencent.bugly.proguard.ab.h()
            r6.K = r9
            if (r27 == 0) goto L1b4
            long r2 = com.tencent.bugly.proguard.ab.j()
            r6.C = r2
            long r2 = com.tencent.bugly.proguard.ab.f()
            r6.D = r2
            long r2 = com.tencent.bugly.proguard.ab.l()
            r6.E = r2
            byte[] r2 = com.tencent.bugly.proguard.ao.a()
            r6.y = r2
            com.tencent.bugly.proguard.aa r2 = r0.c
            long r2 = r2.a
            r6.Q = r2
            com.tencent.bugly.proguard.aa r2 = r0.c
            boolean r2 = r2.a()
            r6.R = r2
            com.tencent.bugly.proguard.aa r2 = r0.c
            boolean r2 = r2.Q
            int r3 = com.tencent.bugly.proguard.at.h
            java.util.Map r2 = com.tencent.bugly.proguard.ap.a(r2, r3)
            r6.z = r2
            java.lang.String r2 = r6.q
            java.lang.String r3 = "java:\n"
            int r2 = r2.indexOf(r3)
            if (r2 <= 0) goto L18d
            int r2 = r2 + 6
            java.lang.String r3 = r6.q
            int r3 = r3.length()
            if (r2 >= r3) goto L18d
            java.lang.String r3 = r6.q
            int r4 = r3.length()
            int r4 = r4 - r7
            java.lang.String r3 = r3.substring(r2, r4)
            int r4 = r3.length()
            if (r4 <= 0) goto L18d
            java.util.Map<java.lang.String, java.lang.String> r4 = r6.z
            java.lang.String r7 = r6.B
            boolean r4 = r4.containsKey(r7)
            if (r4 == 0) goto L18d
            java.util.Map<java.lang.String, java.lang.String> r4 = r6.z
            java.lang.String r7 = r6.B
            java.lang.Object r4 = r4.get(r7)
            java.lang.String r4 = (java.lang.String) r4
            int r3 = r4.indexOf(r3)
            if (r3 <= 0) goto L18d
            java.lang.String r3 = r4.substring(r3)
            java.util.Map<java.lang.String, java.lang.String> r4 = r6.z
            java.lang.String r7 = r6.B
            r4.put(r7, r3)
            java.lang.String r4 = r6.q
            java.lang.String r2 = r4.substring(r5, r2)
            r6.q = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = r6.q
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r6.q = r2
        L18d:
            if (r1 != 0) goto L195
            com.tencent.bugly.proguard.aa r1 = r0.c
            java.lang.String r1 = r1.d
            r6.A = r1
        L195:
            com.tencent.bugly.proguard.aa r1 = r0.c
            int r1 = r1.z()
            r6.U = r1
            com.tencent.bugly.proguard.aa r1 = r0.c
            int r1 = r1.x
            r6.V = r1
            com.tencent.bugly.proguard.aa r1 = r0.c
            java.util.Map r1 = r1.t()
            r6.W = r1
            com.tencent.bugly.proguard.aa r1 = r0.c
            java.util.Map r1 = r1.y()
            r6.X = r1
            goto L1e3
        L1b4:
            r4 = -1
            r6.C = r4
            r6.D = r4
            r6.E = r4
            java.lang.String r2 = r6.w
            if (r2 != 0) goto L1c4
            java.lang.String r2 = "This crash occurred at last process! Log is miss, when get an terrible ABRT Native Exception etc."
            r6.w = r2
        L1c4:
            r6.Q = r4
            r2 = -1
            r6.U = r2
            r6.V = r2
            r2 = r26
            r6.W = r2
            com.tencent.bugly.proguard.aa r2 = r0.c
            java.util.Map r2 = r2.y()
            r6.X = r2
            r6.z = r8
            if (r1 != 0) goto L1df
            java.lang.String r1 = "unknown(record)"
            r6.A = r1
        L1df:
            if (r3 == 0) goto L1e3
            r6.y = r3
        L1e3:
            return r6
    }
}
