package com.kwad.sdk.crash.report;

public abstract class d {
    protected java.lang.String mErrorMessage;
    protected com.kwad.sdk.crash.report.e mUploader;


    public d() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.mErrorMessage = r0
            return
    }

    private void a(com.kwad.sdk.crash.model.message.ExceptionMessage r6, java.util.List<java.io.File> r7, java.util.concurrent.CountDownLatch r8) {
            r5 = this;
            java.lang.String r0 = "ExceptionCollector"
            java.lang.String r1 = "compressAndUpload"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.sdk.crash.report.e r1 = r5.mUploader
            java.io.File r1 = r1.Ey()
            boolean r2 = r1.exists()
            if (r2 != 0) goto L16
            r1.mkdir()
        L16:
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.mLogUUID
            r3.append(r4)
            java.lang.String r4 = ".zip"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r1, r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "compressAndUpload zipFile="
            r1.<init>(r3)
            java.lang.String r3 = r2.getPath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r1)
            boolean r0 = r2.exists()
            if (r0 != 0) goto L51
            r2.createNewFile()     // Catch: java.lang.Exception -> L4d
            goto L51
        L4d:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L51:
            r0 = 0
            java.io.File[] r0 = new java.io.File[r0]
            java.lang.Object[] r7 = r7.toArray(r0)
            java.io.File[] r7 = (java.io.File[]) r7
            java.lang.String r0 = r2.getPath()
            com.kwad.sdk.utils.m.a(r7, r0)
            long r0 = r2.length()
            r3 = 0
            int r7 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r7 <= 0) goto L80
            java.util.HashMap r7 = new java.util.HashMap
            r7.<init>()
            java.lang.String r6 = r6.mLogUUID
            java.lang.String r0 = "mLogUUID"
            r7.put(r0, r6)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>(r7)
            b(r2, r8)
            return
        L80:
            com.kwad.sdk.utils.q.S(r2)
            return
    }

    protected static void a(java.io.File r6, com.kwad.sdk.crash.model.message.ExceptionMessage r7) {
            com.kwad.sdk.crash.model.message.MemoryInfo r0 = new com.kwad.sdk.crash.model.message.MemoryInfo     // Catch: java.lang.Exception -> L97
            java.lang.String r1 = r7.mMemoryInfo     // Catch: java.lang.Exception -> L97
            r0.<init>(r1)     // Catch: java.lang.Exception -> L97
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L97
            r1.<init>()     // Catch: java.lang.Exception -> L97
            r2 = 0
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L89 java.io.IOException -> L8b
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L89 java.io.IOException -> L8b
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L89 java.io.IOException -> L8b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L89 java.io.IOException -> L8b
            com.kwad.sdk.crash.model.message.ThreadInfo r6 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r6.<init>()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
        L1c:
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            if (r2 == 0) goto L73
            boolean r4 = r2.isEmpty()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            if (r4 == 0) goto L31
            r1.add(r6)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            com.kwad.sdk.crash.model.message.ThreadInfo r6 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r6.<init>()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            goto L1c
        L31:
            java.lang.String r4 = "at "
            boolean r4 = r2.startsWith(r4)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            if (r4 != 0) goto L45
            java.lang.String r4 = "(no "
            boolean r4 = r2.startsWith(r4)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            if (r4 == 0) goto L42
            goto L45
        L42:
            r6.mName = r2     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            goto L1c
        L45:
            java.lang.String r4 = r6.mTrace     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            if (r4 != 0) goto L4a
            goto L5b
        L4a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r4.<init>()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r5 = r6.mTrace     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r4.append(r5)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r4.append(r2)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
        L5b:
            r6.mTrace = r2     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r2.<init>()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r4 = r6.mTrace     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r2.append(r4)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r4 = "#"
            r2.append(r4)     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r6.mTrace = r2     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            goto L1c
        L73:
            r0.mJavaThreads = r1     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            org.json.JSONObject r6 = r0.toJson()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            r7.mMemoryInfo = r6     // Catch: java.lang.Throwable -> L83 java.io.IOException -> L86
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)     // Catch: java.lang.Exception -> L97
            goto L9b
        L83:
            r6 = move-exception
            r2 = r3
            goto L93
        L86:
            r6 = move-exception
            r2 = r3
            goto L8c
        L89:
            r6 = move-exception
            goto L93
        L8b:
            r6 = move-exception
        L8c:
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)     // Catch: java.lang.Throwable -> L89
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Exception -> L97
            goto L9b
        L93:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Exception -> L97
            throw r6     // Catch: java.lang.Exception -> L97
        L97:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
        L9b:
            return
    }

    private static void b(java.io.File r1, java.util.concurrent.CountDownLatch r2) {
            r0 = 1
            com.kwad.sdk.crash.report.upload.d.a(r1, r0, r2)
            return
    }

    private static java.lang.String eN(java.lang.String r2) {
            if (r2 == 0) goto L15
            java.lang.String r0 = "-"
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L15
            r0 = 0
            r1 = 45
            int r1 = r2.lastIndexOf(r1)
            java.lang.String r2 = r2.substring(r0, r1)
        L15:
            return r2
    }

    public final void C(java.io.File r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "reportException dir ="
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.crash.report.d$1 r0 = new com.kwad.sdk.crash.report.d$1
            r0.<init>(r4)
            java.io.File[] r5 = r5.listFiles(r0)
            if (r5 == 0) goto L2b
            int r0 = r5.length
            r1 = 0
        L20:
            if (r1 >= r0) goto L2b
            r2 = r5[r1]
            r3 = 0
            r4.a(r2, r3)
            int r1 = r1 + 1
            goto L20
        L2b:
            return
    }

    protected abstract com.kwad.sdk.crash.model.message.ExceptionMessage a(java.io.File r1, java.io.File r2, java.io.File r3, java.lang.String r4);

    public final void a(com.kwad.sdk.crash.report.e r1) {
            r0 = this;
            r0.mUploader = r1
            return
    }

    public final void a(java.io.File r17, java.util.concurrent.CountDownLatch r18) {
            r16 = this;
            r1 = r16
            r0 = r18
            java.lang.String r2 = "ExceptionCollector"
            java.lang.String r3 = r17.getPath()
            java.lang.String r3 = com.kwad.sdk.crash.utils.g.eR(r3)
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            java.lang.String r6 = ".msg"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            java.lang.String r7 = ".log"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r8 = ".blog"
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r3)
            java.lang.String r9 = ".jtrace"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            java.io.File r8 = new java.io.File
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r3)
            java.lang.String r10 = ".minfo"
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r10 = r17
            com.kwad.sdk.crash.model.message.ExceptionMessage r3 = r1.a(r10, r4, r5, r3)     // Catch: java.lang.Throwable -> L25e
            if (r3 != 0) goto Ld6
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> Ld1
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> Ld1
        Lb7:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> Ld1
            if (r2 == 0) goto Lcb
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> Ld1
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> Ld1
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.utils.q.delete(r2)     // Catch: java.lang.Throwable -> Ld1
            goto Lb7
        Lcb:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> Ld1
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> Ld1
            return
        Ld1:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
        Ld6:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25e
            java.lang.String r12 = "message.mCrashSource="
            r11.<init>(r12)     // Catch: java.lang.Throwable -> L25e
            int r12 = r3.mCrashSource     // Catch: java.lang.Throwable -> L25e
            r11.append(r12)     // Catch: java.lang.Throwable -> L25e
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L25e
            com.kwad.sdk.core.e.c.d(r2, r11)     // Catch: java.lang.Throwable -> L25e
            int r11 = r3.mCrashSource     // Catch: java.lang.Throwable -> L25e
            r12 = 2
            if (r11 != r12) goto L13b
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L136
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> L136
        L11c:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L136
            if (r2 == 0) goto L130
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L136
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L136
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.utils.q.delete(r2)     // Catch: java.lang.Throwable -> L136
            goto L11c
        L130:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> L136
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> L136
            return
        L136:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
        L13b:
            com.kwad.sdk.crash.report.e r11 = r1.mUploader     // Catch: java.lang.Throwable -> L25e
            r11.a(r3, r0)     // Catch: java.lang.Throwable -> L25e
            boolean r11 = r1 instanceof com.kwad.sdk.crash.report.f     // Catch: java.lang.Throwable -> L25e
            if (r11 == 0) goto L196
            java.lang.String r0 = " java crash 不上传文件"
            com.kwad.sdk.core.e.c.d(r2, r0)     // Catch: java.lang.Throwable -> L25e
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L191
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> L191
        L177:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L191
            if (r2 == 0) goto L18b
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L191
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L191
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.utils.q.delete(r2)     // Catch: java.lang.Throwable -> L191
            goto L177
        L18b:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> L191
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> L191
            return
        L191:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
        L196:
            com.kwad.sdk.crash.utils.g.E(r6)     // Catch: java.lang.Throwable -> L25e
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L25e
            r2.<init>()     // Catch: java.lang.Throwable -> L25e
            java.io.File[] r11 = new java.io.File[r12]     // Catch: java.lang.Throwable -> L25e
            r12 = 0
            r11[r12] = r5     // Catch: java.lang.Throwable -> L25e
            r13 = 1
            r11[r13] = r6     // Catch: java.lang.Throwable -> L25e
            java.util.Collections.addAll(r2, r11)     // Catch: java.lang.Throwable -> L25e
            java.util.Iterator r11 = r2.iterator()     // Catch: java.lang.Throwable -> L25e
        L1ad:
            boolean r13 = r11.hasNext()     // Catch: java.lang.Throwable -> L25e
            if (r13 == 0) goto L1c3
            java.lang.Object r13 = r11.next()     // Catch: java.lang.Throwable -> L25e
            java.io.File r13 = (java.io.File) r13     // Catch: java.lang.Throwable -> L25e
            boolean r13 = r13.exists()     // Catch: java.lang.Throwable -> L25e
            if (r13 != 0) goto L1ad
            r11.remove()     // Catch: java.lang.Throwable -> L25e
            goto L1ad
        L1c3:
            java.io.File r11 = new java.io.File     // Catch: java.lang.Throwable -> L25e
            java.io.File r13 = r17.getParentFile()     // Catch: java.lang.Throwable -> L25e
            java.lang.String r13 = r13.getParent()     // Catch: java.lang.Throwable -> L25e
            java.lang.String r14 = "custom"
            r11.<init>(r13, r14)     // Catch: java.lang.Throwable -> L25e
            boolean r13 = r11.exists()     // Catch: java.lang.Throwable -> L25e
            if (r13 == 0) goto L20e
            java.io.File[] r11 = r11.listFiles()     // Catch: java.lang.Throwable -> L25e
            int r13 = r11.length     // Catch: java.lang.Throwable -> L25e
        L1dd:
            if (r12 >= r13) goto L20b
            r14 = r11[r12]     // Catch: java.lang.Throwable -> L25e
            boolean r15 = r14.isDirectory()     // Catch: java.lang.Throwable -> L25e
            if (r15 != 0) goto L206
            java.lang.String r15 = r14.getName()     // Catch: java.lang.Throwable -> L25e
            java.lang.String r10 = r3.mLogUUID     // Catch: java.lang.Throwable -> L25e
            boolean r10 = r15.startsWith(r10)     // Catch: java.lang.Throwable -> L25e
            if (r10 != 0) goto L203
            java.lang.String r10 = r14.getName()     // Catch: java.lang.Throwable -> L25e
            java.lang.String r15 = r3.mLogUUID     // Catch: java.lang.Throwable -> L25e
            java.lang.String r15 = eN(r15)     // Catch: java.lang.Throwable -> L25e
            boolean r10 = r10.startsWith(r15)     // Catch: java.lang.Throwable -> L25e
            if (r10 == 0) goto L206
        L203:
            r9.add(r14)     // Catch: java.lang.Throwable -> L25e
        L206:
            int r12 = r12 + 1
            r10 = r17
            goto L1dd
        L20b:
            r2.addAll(r9)     // Catch: java.lang.Throwable -> L25e
        L20e:
            r1.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L25e
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L259
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> L259
        L23f:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L259
            if (r2 == 0) goto L253
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L259
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L259
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.utils.q.delete(r2)     // Catch: java.lang.Throwable -> L259
            goto L23f
        L253:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> L259
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> L259
            return
        L259:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
        L25e:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)     // Catch: java.lang.Throwable -> L2b2
            com.kwad.sdk.crash.utils.g.p(r0)     // Catch: java.lang.Throwable -> L2b2
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2ad
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> L2ad
        L293:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L2ad
            if (r2 == 0) goto L2a7
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L2ad
            java.io.File r2 = (java.io.File) r2     // Catch: java.lang.Throwable -> L2ad
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.utils.q.delete(r2)     // Catch: java.lang.Throwable -> L2ad
            goto L293
        L2a7:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> L2ad
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> L2ad
            return
        L2ad:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
        L2b2:
            r0 = move-exception
            r2 = r0
            java.lang.String r0 = r17.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r0 = r5.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r0 = r6.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r0 = r4.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r0 = r7.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r0 = r8.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r0)     // Catch: java.lang.Throwable -> L2fc
            java.util.Iterator r0 = r9.iterator()     // Catch: java.lang.Throwable -> L2fc
        L2e2:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L2fc
            if (r3 == 0) goto L2f6
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L2fc
            java.io.File r3 = (java.io.File) r3     // Catch: java.lang.Throwable -> L2fc
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.utils.q.delete(r3)     // Catch: java.lang.Throwable -> L2fc
            goto L2e2
        L2f6:
            java.io.File r0 = com.kwad.sdk.crash.handler.b.sBackupDir     // Catch: java.lang.Throwable -> L2fc
            com.kwad.sdk.crash.utils.g.F(r0)     // Catch: java.lang.Throwable -> L2fc
            goto L300
        L2fc:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L300:
            throw r2
    }

    protected final void b(java.io.File r7, com.kwad.sdk.crash.model.message.ExceptionMessage r8) {
            r6 = this;
            java.lang.String r0 = "JNI DETECTED ERROR IN APPLICATION"
            java.lang.String r1 = "\n"
            r2 = 0
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L149 java.io.IOException -> L14b java.io.FileNotFoundException -> L166
            java.io.FileReader r4 = new java.io.FileReader     // Catch: java.lang.Throwable -> L149 java.io.IOException -> L14b java.io.FileNotFoundException -> L166
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L149 java.io.IOException -> L14b java.io.FileNotFoundException -> L166
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L149 java.io.IOException -> L14b java.io.FileNotFoundException -> L166
            r7 = 0
        L10:
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r2 == 0) goto L13c
            if (r7 != 0) goto L2a
            boolean r4 = r2.contains(r0)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L2a
            int r7 = r2.indexOf(r0)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r7 = r2.substring(r7)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r8.mJNIError = r7     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r7 = 1
            goto L10
        L2a:
            java.lang.String r4 = "Waiting for a blocking GC "
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 != 0) goto L10f
            java.lang.String r4 = "WaitForGcToComplete"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L3c
            goto L10f
        L3c:
            java.lang.String r4 = "dvm_lock_sample"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L70
            java.lang.String r4 = r8.mLockInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L5c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
        L57:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L6d
        L5c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r5 = r8.mLockInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r5)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L57
        L6d:
            r8.mLockInfo = r2     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10
        L70:
            java.lang.String r4 = "Long monitor"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto La5
            java.lang.String r4 = r8.mMonitorInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L90
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
        L8b:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto La1
        L90:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r5 = r8.mMonitorInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r5)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L8b
        La1:
            r8.mMonitorInfo = r2     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10
        La5:
            java.lang.String r4 = "Slow Looper"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto Lda
            java.lang.String r4 = r8.mSlowLooper     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto Lc5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
        Lc0:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto Ld6
        Lc5:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r5 = r8.mSlowLooper     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r5)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto Lc0
        Ld6:
            r8.mSlowLooper = r2     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10
        Lda:
            java.lang.String r4 = "Slow Operation"
            boolean r4 = r2.contains(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L10
            java.lang.String r4 = r8.mSlowOperation     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto Lfa
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
        Lf5:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10b
        Lfa:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r5 = r8.mSlowOperation     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r5)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto Lf5
        L10b:
            r8.mSlowOperation = r2     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10
        L10f:
            java.lang.String r4 = r8.mGCInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            if (r4 == 0) goto L127
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
        L122:
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L138
        L127:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.<init>()     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            java.lang.String r5 = r8.mGCInfo     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r5)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r2)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            r4.append(r1)     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L122
        L138:
            r8.mGCInfo = r2     // Catch: java.lang.Throwable -> L140 java.io.IOException -> L143 java.io.FileNotFoundException -> L146
            goto L10
        L13c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            return
        L140:
            r7 = move-exception
            r2 = r3
            goto L181
        L143:
            r7 = move-exception
            r2 = r3
            goto L14c
        L146:
            r7 = move-exception
            r2 = r3
            goto L167
        L149:
            r7 = move-exception
            goto L181
        L14b:
            r7 = move-exception
        L14c:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149
            r8.<init>()     // Catch: java.lang.Throwable -> L149
            java.lang.String r0 = r6.mErrorMessage     // Catch: java.lang.Throwable -> L149
            r8.append(r0)     // Catch: java.lang.Throwable -> L149
            r8.append(r7)     // Catch: java.lang.Throwable -> L149
            r8.append(r1)     // Catch: java.lang.Throwable -> L149
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L149
            r6.mErrorMessage = r7     // Catch: java.lang.Throwable -> L149
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return
        L166:
            r7 = move-exception
        L167:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149
            r8.<init>()     // Catch: java.lang.Throwable -> L149
            java.lang.String r0 = r6.mErrorMessage     // Catch: java.lang.Throwable -> L149
            r8.append(r0)     // Catch: java.lang.Throwable -> L149
            r8.append(r7)     // Catch: java.lang.Throwable -> L149
            r8.append(r1)     // Catch: java.lang.Throwable -> L149
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L149
            r6.mErrorMessage = r7     // Catch: java.lang.Throwable -> L149
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return
        L181:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r7
    }
}
