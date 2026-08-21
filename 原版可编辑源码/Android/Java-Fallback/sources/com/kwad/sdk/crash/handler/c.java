package com.kwad.sdk.crash.handler;

public final class c extends com.kwad.sdk.crash.handler.b {

    static class a {
        private static final com.kwad.sdk.crash.handler.c aAi = null;

        static {
                com.kwad.sdk.crash.handler.c r0 = new com.kwad.sdk.crash.handler.c
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.crash.handler.c.a.aAi = r0
                return
        }

        static com.kwad.sdk.crash.handler.c ET() {
                com.kwad.sdk.crash.handler.c r0 = com.kwad.sdk.crash.handler.c.a.aAi
                return r0
        }
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    c(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.crash.handler.c ES() {
            com.kwad.sdk.crash.handler.c r0 = com.kwad.sdk.crash.handler.c.a.ET()
            return r0
    }

    private void a(java.lang.Throwable r21, com.kwad.sdk.crash.model.message.ExceptionMessage r22, android.content.Context r23, boolean r24) {
            r20 = this;
            r1 = r20
            r2 = r22
            java.lang.String r3 = "uploader.uploadEvent(message);"
            java.lang.String r4 = "ExceptionCollector"
            java.lang.String r5 = "------  Java Crash Happened Begin ------\n"
            java.util.concurrent.atomic.AtomicInteger r0 = r1.mIndex
            int r0 = r0.getAndIncrement()
            java.io.File r6 = r1.mDumpFile
            java.io.File r7 = r1.mLogFile
            java.io.File r8 = r1.mJavaTraceFile
            java.io.File r9 = r1.mMemoryInfoFile
            com.kwad.sdk.crash.report.e r10 = r20.getUploader()
            java.lang.String r11 = r21.toString()     // Catch: java.lang.Throwable -> L1bd
            r2.mCrashDetail = r11     // Catch: java.lang.Throwable -> L1bd
            java.io.File r11 = r1.mLogDir     // Catch: java.lang.Throwable -> L1bd
            boolean r11 = r11.exists()     // Catch: java.lang.Throwable -> L1bd
            if (r11 != 0) goto L5e
            java.io.File r11 = r1.mLogDir     // Catch: java.lang.Throwable -> L5b
            boolean r11 = r11.mkdirs()     // Catch: java.lang.Throwable -> L5b
            if (r11 != 0) goto L5e
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r11.<init>()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r13 = r2.mErrorMessage     // Catch: java.lang.Throwable -> L5b
            r11.append(r13)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r13 = "create "
            r11.append(r13)     // Catch: java.lang.Throwable -> L5b
            com.kwad.sdk.crash.handler.c r13 = ES()     // Catch: java.lang.Throwable -> L5b
            java.io.File r13 = r13.mLogDir     // Catch: java.lang.Throwable -> L5b
            java.lang.String r13 = r13.getPath()     // Catch: java.lang.Throwable -> L5b
            r11.append(r13)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r13 = " failed!\n"
            r11.append(r13)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L5b
            r2.mErrorMessage = r11     // Catch: java.lang.Throwable -> L5b
            r11 = 0
            goto L5f
        L5b:
            r0 = move-exception
            goto L1c6
        L5e:
            r11 = 1
        L5f:
            java.lang.String r13 = "-"
            if (r6 == 0) goto L65
            if (r0 == 0) goto L88
        L65:
            java.io.File r14 = new java.io.File     // Catch: java.lang.Throwable -> L1b3
            java.io.File r12 = r1.mLogDir     // Catch: java.lang.Throwable -> L1b3
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b3
            r15.<init>()     // Catch: java.lang.Throwable -> L1b3
            r16 = r6
            java.lang.String r6 = com.kwad.sdk.crash.handler.c.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L1a9
            r15.append(r6)     // Catch: java.lang.Throwable -> L1a9
            r15.append(r13)     // Catch: java.lang.Throwable -> L1a9
            r15.append(r0)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r6 = ".dump"
            r15.append(r6)     // Catch: java.lang.Throwable -> L1a9
            java.lang.String r6 = r15.toString()     // Catch: java.lang.Throwable -> L1a9
            r14.<init>(r12, r6)     // Catch: java.lang.Throwable -> L1a9
            r6 = r14
        L88:
            if (r7 == 0) goto L8c
            if (r0 == 0) goto Laf
        L8c:
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L1a7
            java.io.File r14 = r1.mLogDir     // Catch: java.lang.Throwable -> L1a7
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a7
            r15.<init>()     // Catch: java.lang.Throwable -> L1a7
            r17 = r7
            java.lang.String r7 = com.kwad.sdk.crash.handler.c.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L19f
            r15.append(r7)     // Catch: java.lang.Throwable -> L19f
            r15.append(r13)     // Catch: java.lang.Throwable -> L19f
            r15.append(r0)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r7 = ".log"
            r15.append(r7)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r7 = r15.toString()     // Catch: java.lang.Throwable -> L19f
            r12.<init>(r14, r7)     // Catch: java.lang.Throwable -> L19f
            r7 = r12
        Laf:
            if (r8 == 0) goto Lb3
            if (r0 == 0) goto Ld6
        Lb3:
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L19d
            java.io.File r14 = r1.mLogDir     // Catch: java.lang.Throwable -> L19d
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            r15.<init>()     // Catch: java.lang.Throwable -> L19d
            r18 = r8
            java.lang.String r8 = com.kwad.sdk.crash.handler.c.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L197
            r15.append(r8)     // Catch: java.lang.Throwable -> L197
            r15.append(r13)     // Catch: java.lang.Throwable -> L197
            r15.append(r0)     // Catch: java.lang.Throwable -> L197
            java.lang.String r8 = ".jtrace"
            r15.append(r8)     // Catch: java.lang.Throwable -> L197
            java.lang.String r8 = r15.toString()     // Catch: java.lang.Throwable -> L197
            r12.<init>(r14, r8)     // Catch: java.lang.Throwable -> L197
            r8 = r12
        Ld6:
            if (r9 == 0) goto Lda
            if (r0 == 0) goto Lfd
        Lda:
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L195
            java.io.File r14 = r1.mLogDir     // Catch: java.lang.Throwable -> L195
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L195
            r15.<init>()     // Catch: java.lang.Throwable -> L195
            r19 = r9
            java.lang.String r9 = com.kwad.sdk.crash.handler.c.FILE_NAME_BASE     // Catch: java.lang.Throwable -> L191
            r15.append(r9)     // Catch: java.lang.Throwable -> L191
            r15.append(r13)     // Catch: java.lang.Throwable -> L191
            r15.append(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = ".minfo"
            r15.append(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r15.toString()     // Catch: java.lang.Throwable -> L191
            r12.<init>(r14, r0)     // Catch: java.lang.Throwable -> L191
            r9 = r12
        Lfd:
            com.kwad.sdk.crash.utils.g.b(r21, r22, r23)     // Catch: java.lang.Throwable -> L18f
            int r0 = r20.getCrashType()     // Catch: java.lang.Throwable -> L18f
            com.kwad.sdk.crash.utils.g.a(r2, r0)     // Catch: java.lang.Throwable -> L18f
            com.kwad.sdk.crash.f r0 = r1.mExceptionListener     // Catch: java.lang.Throwable -> L18f
            if (r0 == 0) goto L114
            com.kwad.sdk.crash.f r0 = r1.mExceptionListener     // Catch: java.lang.Throwable -> L18f
            int r12 = r20.getCrashType()     // Catch: java.lang.Throwable -> L18f
            r0.a(r12, r2)     // Catch: java.lang.Throwable -> L18f
        L114:
            org.json.JSONObject r0 = r22.toJson()     // Catch: java.lang.Throwable -> L186
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L186
            if (r11 == 0) goto L160
            com.kwad.sdk.crash.utils.g.a(r6, r0)     // Catch: java.lang.Throwable -> L186
            com.kwad.sdk.crash.utils.g.G(r8)     // Catch: java.lang.Throwable -> L186
            com.kwad.sdk.crash.utils.g.E(r7)     // Catch: java.lang.Throwable -> L186
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> L186
            boolean r0 = r0.isDebug()     // Catch: java.lang.Throwable -> L186
            if (r0 == 0) goto L136
            java.io.File r0 = r1.mLogDir     // Catch: java.lang.Throwable -> L186
            r1.backupLogFiles(r0)     // Catch: java.lang.Throwable -> L186
        L136:
            if (r10 == 0) goto L15b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L186
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L186
            r0.append(r2)     // Catch: java.lang.Throwable -> L186
            if (r24 == 0) goto L158
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L186
            r2 = 1
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L186
            java.io.File[] r2 = new java.io.File[r2]     // Catch: java.lang.Throwable -> L186
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.Throwable -> L186
            r1.reportException(r2, r0)     // Catch: java.lang.Throwable -> L186
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L15b java.lang.Throwable -> L186
            r3 = 5
            r0.await(r3, r2)     // Catch: java.lang.InterruptedException -> L15b java.lang.Throwable -> L186
            goto L15b
        L158:
            r20.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L186
        L15b:
            com.kwad.sdk.crash.utils.g.H(r9)     // Catch: java.lang.Throwable -> L186
            goto L250
        L160:
            if (r10 == 0) goto L185
            com.kwad.sdk.core.e.c.d(r4, r3)     // Catch: java.lang.Throwable -> L186
            if (r24 == 0) goto L16e
            java.util.concurrent.CountDownLatch r11 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L186
            r3 = 1
            r11.<init>(r3)     // Catch: java.lang.Throwable -> L186
            goto L16f
        L16e:
            r11 = 0
        L16f:
            r10.a(r2, r11)     // Catch: java.lang.Throwable -> L186
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L186
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L186
            r0.append(r2)     // Catch: java.lang.Throwable -> L186
            if (r11 == 0) goto L185
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L185 java.lang.Throwable -> L186
            r2 = 5
            r11.await(r2, r0)     // Catch: java.lang.InterruptedException -> L185 java.lang.Throwable -> L186
            goto L250
        L185:
            return
        L186:
            r0 = move-exception
            if (r10 == 0) goto L18e
            com.kwad.sdk.crash.utils.g.p(r0)     // Catch: java.lang.Exception -> L18e
            goto L250
        L18e:
            return
        L18f:
            r0 = move-exception
            goto L1c7
        L191:
            r0 = move-exception
            r9 = r19
            goto L1c7
        L195:
            r0 = move-exception
            goto L1ba
        L197:
            r0 = move-exception
            r19 = r9
            r8 = r18
            goto L1c7
        L19d:
            r0 = move-exception
            goto L1b8
        L19f:
            r0 = move-exception
            r18 = r8
            r19 = r9
            r7 = r17
            goto L1c7
        L1a7:
            r0 = move-exception
            goto L1b6
        L1a9:
            r0 = move-exception
            r17 = r7
            r18 = r8
            r19 = r9
            r6 = r16
            goto L1c7
        L1b3:
            r0 = move-exception
            r16 = r6
        L1b6:
            r17 = r7
        L1b8:
            r18 = r8
        L1ba:
            r19 = r9
            goto L1c7
        L1bd:
            r0 = move-exception
            r16 = r6
            r17 = r7
            r18 = r8
            r19 = r9
        L1c6:
            r11 = 1
        L1c7:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L251
            r12.<init>()     // Catch: java.lang.Throwable -> L251
            java.lang.String r13 = r2.mErrorMessage     // Catch: java.lang.Throwable -> L251
            r12.append(r13)     // Catch: java.lang.Throwable -> L251
            r12.append(r0)     // Catch: java.lang.Throwable -> L251
            java.lang.String r0 = r12.toString()     // Catch: java.lang.Throwable -> L251
            r2.mErrorMessage = r0     // Catch: java.lang.Throwable -> L251
            org.json.JSONObject r0 = r22.toJson()     // Catch: java.lang.Throwable -> L24a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L24a
            if (r11 == 0) goto L225
            com.kwad.sdk.crash.utils.g.a(r6, r0)     // Catch: java.lang.Throwable -> L24a
            com.kwad.sdk.crash.utils.g.G(r8)     // Catch: java.lang.Throwable -> L24a
            com.kwad.sdk.crash.utils.g.E(r7)     // Catch: java.lang.Throwable -> L24a
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> L24a
            boolean r0 = r0.isDebug()     // Catch: java.lang.Throwable -> L24a
            if (r0 == 0) goto L1fc
            java.io.File r0 = r1.mLogDir     // Catch: java.lang.Throwable -> L24a
            r1.backupLogFiles(r0)     // Catch: java.lang.Throwable -> L24a
        L1fc:
            if (r10 == 0) goto L221
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L24a
            r0.append(r2)     // Catch: java.lang.Throwable -> L24a
            if (r24 == 0) goto L21e
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L24a
            r2 = 1
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L24a
            java.io.File[] r2 = new java.io.File[r2]     // Catch: java.lang.Throwable -> L24a
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.Throwable -> L24a
            r1.reportException(r2, r0)     // Catch: java.lang.Throwable -> L24a
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L221 java.lang.Throwable -> L24a
            r3 = 5
            r0.await(r3, r2)     // Catch: java.lang.InterruptedException -> L221 java.lang.Throwable -> L24a
            goto L221
        L21e:
            r20.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L24a
        L221:
            com.kwad.sdk.crash.utils.g.H(r9)     // Catch: java.lang.Throwable -> L24a
            goto L250
        L225:
            if (r10 == 0) goto L249
            com.kwad.sdk.core.e.c.d(r4, r3)     // Catch: java.lang.Throwable -> L24a
            if (r24 == 0) goto L233
            java.util.concurrent.CountDownLatch r11 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L24a
            r3 = 1
            r11.<init>(r3)     // Catch: java.lang.Throwable -> L24a
            goto L234
        L233:
            r11 = 0
        L234:
            r10.a(r2, r11)     // Catch: java.lang.Throwable -> L24a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L24a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L24a
            r0.append(r2)     // Catch: java.lang.Throwable -> L24a
            if (r11 == 0) goto L249
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L249 java.lang.Throwable -> L24a
            r2 = 5
            r11.await(r2, r0)     // Catch: java.lang.InterruptedException -> L249 java.lang.Throwable -> L24a
            goto L250
        L249:
            return
        L24a:
            r0 = move-exception
            if (r10 == 0) goto L250
            com.kwad.sdk.crash.utils.g.p(r0)     // Catch: java.lang.Exception -> L250
        L250:
            return
        L251:
            r0 = move-exception
            r12 = r0
            org.json.JSONObject r0 = r22.toJson()     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2c2
            if (r11 == 0) goto L29e
            com.kwad.sdk.crash.utils.g.a(r6, r0)     // Catch: java.lang.Throwable -> L2c2
            com.kwad.sdk.crash.utils.g.G(r8)     // Catch: java.lang.Throwable -> L2c2
            com.kwad.sdk.crash.utils.g.E(r7)     // Catch: java.lang.Throwable -> L2c2
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()     // Catch: java.lang.Throwable -> L2c2
            boolean r0 = r0.isDebug()     // Catch: java.lang.Throwable -> L2c2
            if (r0 == 0) goto L275
            java.io.File r0 = r1.mLogDir     // Catch: java.lang.Throwable -> L2c2
            r1.backupLogFiles(r0)     // Catch: java.lang.Throwable -> L2c2
        L275:
            if (r10 == 0) goto L29a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c2
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2c2
            r0.append(r2)     // Catch: java.lang.Throwable -> L2c2
            if (r24 == 0) goto L297
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L2c2
            r2 = 1
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2c2
            java.io.File[] r2 = new java.io.File[r2]     // Catch: java.lang.Throwable -> L2c2
            r3 = 0
            r2[r3] = r6     // Catch: java.lang.Throwable -> L2c2
            r1.reportException(r2, r0)     // Catch: java.lang.Throwable -> L2c2
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L29a java.lang.Throwable -> L2c2
            r3 = 5
            r0.await(r3, r2)     // Catch: java.lang.InterruptedException -> L29a java.lang.Throwable -> L2c2
            goto L29a
        L297:
            r20.uploadRemainingExceptions()     // Catch: java.lang.Throwable -> L2c2
        L29a:
            com.kwad.sdk.crash.utils.g.H(r9)     // Catch: java.lang.Throwable -> L2c2
            goto L2c8
        L29e:
            if (r10 == 0) goto L2c8
            com.kwad.sdk.core.e.c.d(r4, r3)     // Catch: java.lang.Throwable -> L2c2
            if (r24 == 0) goto L2ac
            java.util.concurrent.CountDownLatch r11 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L2c2
            r3 = 1
            r11.<init>(r3)     // Catch: java.lang.Throwable -> L2c2
            goto L2ad
        L2ac:
            r11 = 0
        L2ad:
            r10.a(r2, r11)     // Catch: java.lang.Throwable -> L2c2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c2
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2c2
            r0.append(r2)     // Catch: java.lang.Throwable -> L2c2
            if (r11 == 0) goto L2c8
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L2c2 java.lang.Throwable -> L2c8
            r2 = 5
            r11.await(r2, r0)     // Catch: java.lang.Throwable -> L2c2 java.lang.Throwable -> L2c8
            goto L2c8
        L2c2:
            r0 = move-exception
            if (r10 == 0) goto L2c8
            com.kwad.sdk.crash.utils.g.p(r0)
        L2c8:
            throw r12
    }

    public final void a(java.lang.Throwable r2, com.kwad.sdk.crash.model.message.ExceptionMessage r3, android.content.Context r4) {
            r1 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.getIsExternal()
            r1.a(r2, r3, r4, r0)
            return
    }

    @Override
    protected final int getCrashType() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final void init(java.io.File r1, com.kwad.sdk.crash.f r2, com.kwad.sdk.crash.report.e r3) {
            r0 = this;
            super.init(r1, r2, r3)
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            boolean r1 = r1.isDebug()
            if (r1 == 0) goto L17
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "sdcard/kwad_ex/java_crash/dump"
            r1.<init>(r2)
            initBackupDir(r1)
        L17:
            return
    }

    @Override
    protected final void reportException(java.io.File[] r5, java.util.concurrent.CountDownLatch r6) {
            r4 = this;
            com.kwad.sdk.crash.report.f r0 = new com.kwad.sdk.crash.report.f
            r0.<init>()
            com.kwad.sdk.crash.report.e r1 = r4.getUploader()
            r0.a(r1)
            int r1 = r5.length
            r2 = 0
        Le:
            if (r2 >= r1) goto L18
            r3 = r5[r2]
            r0.a(r3, r6)
            int r2 = r2 + 1
            goto Le
        L18:
            return
    }
}
