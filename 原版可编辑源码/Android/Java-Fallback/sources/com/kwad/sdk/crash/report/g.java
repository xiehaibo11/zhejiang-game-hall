package com.kwad.sdk.crash.report;

public final class g extends com.kwad.sdk.crash.report.d {
    public static final java.util.regex.Pattern aBn = null;
    public static final java.util.regex.Pattern aBo = null;

    static {
            java.lang.String r0 = "(.*)\\s\\(tid=(\\d+), index=(\\d+)*"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.crash.report.g.aBn = r0
            java.lang.String r0 = "\\sd+\\spc"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.crash.report.g.aBo = r0
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.sdk.crash.model.message.NativeExceptionMessage D(java.io.File r6) {
            r5 = this;
            java.lang.String r0 = "\n"
            java.lang.String r1 = com.kwad.sdk.utils.q.V(r6)     // Catch: java.io.IOException -> L7
            goto L1f
        L7:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.mErrorMessage
            r2.append(r3)
            r2.append(r1)
            r2.append(r0)
            java.lang.String r1 = r2.toString()
            r5.mErrorMessage = r1
            r1 = 0
        L1f:
            com.kwad.sdk.crash.model.message.NativeExceptionMessage r2 = new com.kwad.sdk.crash.model.message.NativeExceptionMessage
            r2.<init>()
            if (r1 == 0) goto L46
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            r3.<init>(r1)     // Catch: java.lang.Exception -> L2f
            r2.parseJson(r3)     // Catch: java.lang.Exception -> L2f
            goto L46
        L2f:
            r1 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r5.mErrorMessage
            r3.append(r4)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r5.mErrorMessage = r0
        L46:
            com.kwad.sdk.utils.q.S(r6)
            return r2
    }

    private void a(com.kwad.sdk.crash.model.message.NativeExceptionMessage r9, java.io.File r10) {
            r8 = this;
            java.lang.String r0 = r10.getName()
            java.lang.String r0 = com.kwad.sdk.crash.utils.g.eR(r0)
            r9.mLogUUID = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.BufferedReader r2 = new java.io.BufferedReader
            java.io.FileReader r3 = new java.io.FileReader
            r3.<init>(r10)
            r2.<init>(r3)
            r10 = 0
            r3 = 1
            r4 = r10
            r5 = r4
        L22:
            java.lang.String r6 = r2.readLine()     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            if (r6 == 0) goto L58
            if (r4 == 0) goto L35
            java.lang.String r7 = "backtrace:"
            boolean r7 = r6.startsWith(r7)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            if (r7 == 0) goto L35
            r4 = r10
            r5 = r3
            goto L22
        L35:
            if (r5 == 0) goto L48
            java.lang.String r7 = "###### ending of java stack trace ######"
            boolean r7 = r6.startsWith(r7)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            if (r7 != 0) goto L58
            r0.append(r6)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            r6 = 10
            r0.append(r6)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            goto L22
        L48:
            if (r4 == 0) goto L4e
            a(r9, r6, r1)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            goto L22
        L4e:
            java.lang.String r7 = "*** ***"
            boolean r6 = r6.startsWith(r7)     // Catch: java.lang.Throwable -> L5c java.io.IOException -> L5e
            if (r6 == 0) goto L22
            r4 = r3
            goto L22
        L58:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            goto L78
        L5c:
            r9 = move-exception
            goto L9b
        L5e:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r5.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r6 = r8.mErrorMessage     // Catch: java.lang.Throwable -> L5c
            r5.append(r6)     // Catch: java.lang.Throwable -> L5c
            r5.append(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = "\n"
            r5.append(r4)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L5c
            r8.mErrorMessage = r4     // Catch: java.lang.Throwable -> L5c
            goto L58
        L78:
            int r2 = r0.length()
            if (r2 <= r3) goto L89
            int r2 = r0.length()
            int r2 = r2 - r3
            java.lang.String r0 = r0.substring(r10, r2)
            r9.mCrashDetail = r0
        L89:
            int r0 = r1.length()
            if (r0 <= r3) goto L9a
            int r0 = r1.length()
            int r0 = r0 - r3
            java.lang.String r10 = r1.substring(r10, r0)
            r9.mRegister = r10
        L9a:
            return
        L9b:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r9
    }

    private static void a(com.kwad.sdk.crash.model.message.NativeExceptionMessage r6, java.lang.String r7, java.lang.StringBuilder r8) {
            java.lang.String r0 = "Build fingerprint: "
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L11
            r8 = 19
            java.lang.String r7 = r7.substring(r8)
            r6.mFingerprint = r7
            return
        L11:
            java.lang.String r0 = "Revision: "
            boolean r0 = r7.startsWith(r0)
            r1 = 10
            if (r0 == 0) goto L22
            java.lang.String r7 = r7.substring(r1)
            r6.mRevision = r7
            return
        L22:
            java.lang.String r0 = "ABI: "
            boolean r0 = r7.startsWith(r0)
            r2 = 5
            if (r0 == 0) goto L32
            java.lang.String r7 = r7.substring(r2)
            r6.mAbi = r7
            return
        L32:
            java.lang.String r0 = "Current UTC: "
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L47
            r8 = 13
            java.lang.String r7 = r7.substring(r8)
            long r7 = java.lang.Long.parseLong(r7)
            r6.mCurrentTimeStamp = r7
            return
        L47:
            java.lang.String r0 = "Abort message: "
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L58
            r8 = 15
            java.lang.String r7 = r7.substring(r8)
            r6.mAbortMsg = r7
            return
        L58:
            java.lang.String r0 = "    r"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L130
            java.lang.String r0 = "    ip"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L130
            java.lang.String r0 = "    x"
            boolean r0 = r7.startsWith(r0)
            if (r0 != 0) goto L130
            java.lang.String r0 = "    sp"
            boolean r0 = r7.startsWith(r0)
            if (r0 == 0) goto L7a
            goto L130
        L7a:
            java.lang.String r8 = "pid: "
            boolean r8 = r7.startsWith(r8)
            r0 = 9
            java.lang.String r1 = "\\s+"
            if (r8 == 0) goto Lf4
            java.lang.String[] r7 = r7.split(r1)
            int r8 = r7.length
            if (r8 < r0) goto Lf3
            r8 = 0
            r0 = r8
            r1 = r0
            r2 = r1
            r3 = r2
        L92:
            int r4 = r7.length
            if (r0 >= r4) goto Lbb
            r4 = r7[r0]
            java.lang.String r5 = "name:"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto La1
            r1 = r0
            goto Lb8
        La1:
            r4 = r7[r0]
            java.lang.String r5 = ">>>"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto Lad
            r2 = r0
            goto Lb8
        Lad:
            r4 = r7[r0]
            java.lang.String r5 = "<<<"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto Lb8
            r3 = r0
        Lb8:
            int r0 = r0 + 1
            goto L92
        Lbb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r1 + 1
            r4 = r7[r1]
        Lc4:
            r0.append(r4)
            int r1 = r1 + 1
            java.lang.String r4 = " "
            if (r1 >= r2) goto Ld3
            r0.append(r4)
            r4 = r7[r1]
            goto Lc4
        Ld3:
            java.lang.String r1 = r0.toString()
            r6.mThreadName = r1
            r0.setLength(r8)
            int r2 = r2 + 1
            r8 = r7[r2]
        Le0:
            r0.append(r8)
            int r2 = r2 + 1
            if (r2 >= r3) goto Led
            r0.append(r4)
            r8 = r7[r2]
            goto Le0
        Led:
            java.lang.String r7 = r0.toString()
            r6.mProcessName = r7
        Lf3:
            return
        Lf4:
            java.lang.String r8 = "signal "
            boolean r8 = r7.startsWith(r8)
            if (r8 == 0) goto L12f
            java.lang.String[] r7 = r7.split(r1)
            int r8 = r7.length
            if (r8 < r0) goto L12f
            r8 = 2
            r8 = r7[r8]
            java.lang.String r8 = com.kwad.sdk.crash.utils.g.eS(r8)
            r6.mSignal = r8
            r8 = r7[r2]
            java.lang.String r8 = com.kwad.sdk.crash.utils.g.eS(r8)
            r6.mCode = r8
            int r8 = r7.length
            int r8 = r8 + (-1)
            r8 = r7[r8]
            r6.mFaultAddr = r8
            int r8 = r7.length
            int r8 = r8 + (-1)
            r7 = r7[r8]
            java.lang.String r8 = "--------"
            boolean r7 = r8.equals(r7)
            if (r7 == 0) goto L12b
            java.lang.String r7 = "True"
            goto L12d
        L12b:
            java.lang.String r7 = "False"
        L12d:
            r6.mManuallyKill = r7
        L12f:
            return
        L130:
            r8.append(r7)
            r8.append(r1)
            return
    }

    private static void c(java.io.File r6, com.kwad.sdk.crash.model.message.ExceptionMessage r7) {
            com.kwad.sdk.crash.model.message.MemoryInfo r0 = new com.kwad.sdk.crash.model.message.MemoryInfo     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = r7.mMemoryInfo     // Catch: java.lang.Exception -> Laf
            r0.<init>(r1)     // Catch: java.lang.Exception -> Laf
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> Laf
            r1.<init>()     // Catch: java.lang.Exception -> Laf
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Exception -> Laf
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Exception -> Laf
            r3.<init>(r6)     // Catch: java.lang.Exception -> Laf
            r2.<init>(r3)     // Catch: java.lang.Exception -> Laf
            com.kwad.sdk.crash.model.message.ThreadInfo r6 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.<init>()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
        L1b:
            java.lang.String r3 = r2.readLine()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            if (r3 == 0) goto L94
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            if (r4 == 0) goto L30
            r1.add(r6)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            com.kwad.sdk.crash.model.message.ThreadInfo r6 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.<init>()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            goto L1b
        L30:
            java.util.regex.Pattern r4 = com.kwad.sdk.crash.report.g.aBo     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.util.regex.Matcher r4 = r4.matcher(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            boolean r4 = r4.matches()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            if (r4 == 0) goto L6a
            java.lang.String r4 = r6.mTrace     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            if (r4 != 0) goto L41
            goto L52
        L41:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r4.<init>()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r5 = r6.mTrace     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r4.append(r5)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r4.append(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
        L52:
            r6.mTrace = r3     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r3.<init>()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r4 = r6.mTrace     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r4 = "\n"
            r3.append(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.mTrace = r3     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            goto L1b
        L6a:
            java.util.regex.Pattern r4 = com.kwad.sdk.crash.report.g.aBn     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.util.regex.Matcher r3 = r4.matcher(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            boolean r4 = r3.lookingAt()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            if (r4 == 0) goto L1b
            r4 = 1
            java.lang.String r4 = r3.group(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.mName = r4     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r4 = 2
            java.lang.String r4 = r3.group(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.mTid = r4     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r4 = 3
            java.lang.String r3 = r3.group(r4)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r6.mIndex = r3     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            goto L1b
        L94:
            r0.mNativeThreads = r1     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            org.json.JSONObject r6 = r0.toJson()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
            r7.mMemoryInfo = r6     // Catch: java.lang.Throwable -> La4 java.io.IOException -> La6
        La0:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Exception -> Laf
            goto Lb3
        La4:
            r6 = move-exception
            goto Lab
        La6:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)     // Catch: java.lang.Throwable -> La4
            goto La0
        Lab:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)     // Catch: java.lang.Exception -> Laf
            throw r6     // Catch: java.lang.Exception -> Laf
        Laf:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
        Lb3:
            return
    }

    @Override
    protected final com.kwad.sdk.crash.model.message.ExceptionMessage a(java.io.File r4, java.io.File r5, java.io.File r6, java.lang.String r7) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            java.lang.String r2 = ".jtrace"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.crash.model.message.NativeExceptionMessage r5 = r3.D(r5)
            r3.a(r5, r4)     // Catch: java.lang.Exception -> L71
            r3.b(r6, r5)     // Catch: java.lang.Exception -> L71
            a(r0, r5)     // Catch: java.lang.Exception -> L71
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L71
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r1.<init>()     // Catch: java.lang.Exception -> L71
            r1.append(r7)     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = ".ntrace"
            r1.append(r2)     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L71
            r0.<init>(r1)     // Catch: java.lang.Exception -> L71
            c(r0, r5)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Exception -> L71
            r1 = 1
            com.kwad.sdk.crash.utils.g.a(r4, r0, r1)     // Catch: java.lang.Exception -> L71
            com.kwad.sdk.crash.utils.g.d(r6, r4)     // Catch: java.lang.Exception -> L71
            r4.renameTo(r6)     // Catch: java.lang.Exception -> L71
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            java.lang.String r6 = "------ Native Crash Report Begin ------\n"
            r4.<init>(r6)     // Catch: java.lang.Exception -> L71
            r4.append(r5)     // Catch: java.lang.Exception -> L71
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L71
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r6.<init>()     // Catch: java.lang.Exception -> L71
            r6.append(r7)     // Catch: java.lang.Exception -> L71
            java.lang.String r7 = ".minfo"
            r6.append(r7)     // Catch: java.lang.Exception -> L71
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L71
            r4.<init>(r6)     // Catch: java.lang.Exception -> L71
            java.lang.String r4 = com.kwad.sdk.utils.q.V(r4)     // Catch: java.lang.Exception -> L71
            r5.mDumpsys = r4     // Catch: java.lang.Exception -> L71
            goto L8d
        L71:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r3.mErrorMessage
            r6.append(r7)
            r6.append(r4)
            java.lang.String r4 = "\n"
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r3.mErrorMessage = r4
        L8d:
            java.lang.String r4 = r3.mErrorMessage
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Laa
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = r5.mErrorMessage
            r4.append(r6)
            java.lang.String r6 = r3.mErrorMessage
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r5.mErrorMessage = r4
        Laa:
            return r5
    }
}
