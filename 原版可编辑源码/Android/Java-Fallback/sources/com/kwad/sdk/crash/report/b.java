package com.kwad.sdk.crash.report;

public final class b extends com.kwad.sdk.crash.report.d {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.sdk.crash.model.message.AnrExceptionMessage B(java.io.File r6) {
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
            com.kwad.sdk.crash.model.message.AnrExceptionMessage r2 = new com.kwad.sdk.crash.model.message.AnrExceptionMessage
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

    private void a(com.kwad.sdk.crash.model.message.AnrExceptionMessage r10, java.io.File r11) {
            r9 = this;
            java.lang.String r0 = "\n"
            java.lang.String r1 = r11.getName()
            java.lang.String r1 = com.kwad.sdk.crash.utils.g.eR(r1)
            r10.mLogUUID = r1
            java.lang.String r1 = r10.mLogUUID
            int r1 = com.kwad.sdk.crash.utils.g.getIndex(r1)
            r10.mIndex = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 0
            r4 = 1
            r5 = 0
            java.io.BufferedReader r6 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L81 java.io.FileNotFoundException -> L99
            java.io.FileReader r7 = new java.io.FileReader     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L81 java.io.FileNotFoundException -> L99
            r7.<init>(r11)     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L81 java.io.FileNotFoundException -> L99
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L7e java.io.IOException -> L81 java.io.FileNotFoundException -> L99
            r11 = r3
        L2c:
            java.lang.String r5 = r6.readLine()     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            if (r5 == 0) goto L70
            r7 = 10
            if (r11 != 0) goto L52
            java.lang.String r8 = "\"main\" prio"
            boolean r8 = r5.startsWith(r8)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            if (r8 == 0) goto L52
            r2.append(r5)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            r2.append(r7)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            java.lang.String r11 = "\\s+"
            java.lang.String[] r11 = r5.split(r11)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            int r5 = r11.length     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            int r5 = r5 - r4
            r11 = r11[r5]     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            r10.mThreadStatus = r11     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            r11 = r4
            goto L2c
        L52:
            if (r11 == 0) goto L2c
            int r8 = r5.length()     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            if (r8 == 0) goto L70
            java.lang.String r8 = "  |"
            boolean r8 = r5.startsWith(r8)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            if (r8 == 0) goto L69
            r2.append(r5)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            r2.append(r7)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            goto L2c
        L69:
            r1.append(r5)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            r1.append(r7)     // Catch: java.lang.Throwable -> L74 java.io.IOException -> L78 java.io.FileNotFoundException -> L7b
            goto L2c
        L70:
            com.kwad.sdk.crash.utils.b.closeQuietly(r6)
            goto Lb2
        L74:
            r10 = move-exception
            r5 = r6
            goto L10d
        L78:
            r11 = move-exception
            r5 = r6
            goto L82
        L7b:
            r11 = move-exception
            r5 = r6
            goto L9a
        L7e:
            r10 = move-exception
            goto L10d
        L81:
            r11 = move-exception
        L82:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r6.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r7 = r9.mErrorMessage     // Catch: java.lang.Throwable -> L7e
            r6.append(r7)     // Catch: java.lang.Throwable -> L7e
            r6.append(r11)     // Catch: java.lang.Throwable -> L7e
            r6.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r6.toString()     // Catch: java.lang.Throwable -> L7e
        L96:
            r9.mErrorMessage = r11     // Catch: java.lang.Throwable -> L7e
            goto Laf
        L99:
            r11 = move-exception
        L9a:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r6.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r7 = r9.mErrorMessage     // Catch: java.lang.Throwable -> L7e
            r6.append(r7)     // Catch: java.lang.Throwable -> L7e
            r6.append(r11)     // Catch: java.lang.Throwable -> L7e
            r6.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r6.toString()     // Catch: java.lang.Throwable -> L7e
            goto L96
        Laf:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
        Lb2:
            int r11 = r1.length()
            if (r11 <= r4) goto Lc3
            int r11 = r1.length()
            int r11 = r11 - r4
            java.lang.String r11 = r1.substring(r3, r11)
            r10.mCrashDetail = r11
        Lc3:
            java.lang.String r11 = r10.mCrashDetail
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 == 0) goto Lce
            r10.mCrashSource = r3
            goto Ldc
        Lce:
            java.lang.String r11 = r10.mCrashDetail
            boolean r11 = eM(r11)
            if (r11 == 0) goto Ld9
            r10.mCrashSource = r4
            goto Ldc
        Ld9:
            r11 = 2
            r10.mCrashSource = r11
        Ldc:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = " message.mCrashSource="
            r11.<init>(r0)
            int r0 = r10.mCrashSource
            r11.append(r0)
            java.lang.String r0 = "message.mCrashDetail = "
            r11.append(r0)
            java.lang.String r0 = r10.mCrashDetail
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            java.lang.String r0 = "AnrReporter"
            com.kwad.sdk.core.e.c.d(r0, r11)
            int r11 = r2.length()
            if (r11 <= r4) goto L10c
            int r11 = r2.length()
            int r11 = r11 - r4
            java.lang.String r11 = r2.substring(r3, r11)
            r10.mThreadDetail = r11
        L10c:
            return
        L10d:
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            throw r10
    }

    private java.lang.String eL(java.lang.String r5) {
            r4 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = ".anr"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            boolean r5 = r0.exists()
            java.lang.String r1 = ""
            if (r5 == 0) goto L3f
            java.lang.String r1 = com.kwad.sdk.utils.q.V(r0)     // Catch: java.io.IOException -> L23
            goto L3c
        L23:
            r5 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.mErrorMessage
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = "\n"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r4.mErrorMessage = r5
        L3c:
            com.kwad.sdk.utils.q.S(r0)
        L3f:
            return r1
    }

    private static boolean eM(java.lang.String r6) {
            com.kwad.sdk.crash.e r0 = com.kwad.sdk.crash.e.EC()
            java.lang.String[] r0 = r0.ED()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L2d
            r4 = r0[r3]
            boolean r5 = r6.contains(r4)
            if (r5 == 0) goto L2a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = " tag="
            r6.<init>(r0)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "AnrReporter"
            com.kwad.sdk.core.e.c.d(r0, r6)
            r6 = 1
            return r6
        L2a:
            int r3 = r3 + 1
            goto Lb
        L2d:
            return r2
    }

    @Override
    protected final com.kwad.sdk.crash.model.message.ExceptionMessage a(java.io.File r3, java.io.File r4, java.io.File r5, java.lang.String r6) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AnrReporter parseExceptionInfo basePath="
            r0.<init>(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AnrReporter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.crash.model.message.AnrExceptionMessage r4 = r2.B(r4)
            java.lang.String r0 = r2.eL(r6)     // Catch: java.lang.Exception -> L58
            r4.mReason = r0     // Catch: java.lang.Exception -> L58
            r2.a(r4, r3)     // Catch: java.lang.Exception -> L58
            r2.b(r5, r4)     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L58
            r1 = 1
            com.kwad.sdk.crash.utils.g.a(r3, r0, r1)     // Catch: java.lang.Exception -> L58
            com.kwad.sdk.crash.utils.g.d(r5, r3)     // Catch: java.lang.Exception -> L58
            r3.renameTo(r5)     // Catch: java.lang.Exception -> L58
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L58
            java.lang.String r5 = "------ ANR Report Begin ------\n"
            r3.<init>(r5)     // Catch: java.lang.Exception -> L58
            r3.append(r4)     // Catch: java.lang.Exception -> L58
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L58
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L58
            r5.<init>()     // Catch: java.lang.Exception -> L58
            r5.append(r6)     // Catch: java.lang.Exception -> L58
            java.lang.String r6 = ".minfo"
            r5.append(r6)     // Catch: java.lang.Exception -> L58
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L58
            r3.<init>(r5)     // Catch: java.lang.Exception -> L58
            java.lang.String r3 = com.kwad.sdk.utils.q.V(r3)     // Catch: java.lang.Exception -> L58
            r4.mDumpsys = r3     // Catch: java.lang.Exception -> L58
            goto L74
        L58:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r2.mErrorMessage
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = "\n"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r2.mErrorMessage = r3
        L74:
            java.lang.String r3 = r2.mErrorMessage
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L91
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = r4.mErrorMessage
            r3.append(r5)
            java.lang.String r5 = r2.mErrorMessage
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            r4.mErrorMessage = r3
        L91:
            return r4
    }
}
