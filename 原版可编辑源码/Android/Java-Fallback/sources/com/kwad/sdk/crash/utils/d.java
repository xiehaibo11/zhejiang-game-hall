package com.kwad.sdk.crash.utils;

public final class d {
    public static java.util.List<java.lang.String> a(java.lang.String[] r8, int r9) {
            java.util.ArrayList r9 = new java.util.ArrayList
            r0 = 20
            r9.<init>(r0)
            r0 = 0
            java.lang.Process r1 = f(r8)     // Catch: java.lang.Throwable -> L94 java.lang.InterruptedException -> L9a
            java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Throwable -> L8a java.lang.InterruptedException -> L8d
            java.io.OutputStream r3 = r1.getOutputStream()     // Catch: java.lang.Throwable -> L82 java.lang.InterruptedException -> L87
            java.io.InputStream r4 = r1.getErrorStream()     // Catch: java.lang.Throwable -> L7c java.lang.InterruptedException -> L7f
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L76 java.lang.InterruptedException -> L79
            java.io.InputStreamReader r6 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L76 java.lang.InterruptedException -> L79
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L76 java.lang.InterruptedException -> L79
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L76 java.lang.InterruptedException -> L79
        L22:
            java.lang.String r0 = r5.readLine()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            if (r0 == 0) goto L32
            int r6 = r9.size()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            if (r6 >= 0) goto L32
            r9.add(r0)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            goto L22
        L32:
            r1.waitFor()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            int r0 = r1.exitValue()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            if (r0 != 0) goto L4d
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            if (r1 == 0) goto L4c
            r1.destroy()
        L4c:
            return r9
        L4d:
            java.io.IOException r9 = new java.io.IOException     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            java.lang.String r6 = "Command line returned OS error code '"
            r0.<init>(r6)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            int r6 = r1.exitValue()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            r0.append(r6)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            java.lang.String r6 = "' for command "
            r0.append(r6)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            java.util.List r6 = java.util.Arrays.asList(r8)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            r0.append(r6)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            r9.<init>(r0)     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
            throw r9     // Catch: java.lang.Throwable -> L71 java.lang.InterruptedException -> L74
        L71:
            r8 = move-exception
            goto Lb9
        L74:
            r9 = move-exception
            goto L92
        L76:
            r8 = move-exception
            r5 = r0
            goto Lb9
        L79:
            r9 = move-exception
            r5 = r0
            goto L92
        L7c:
            r8 = move-exception
            r4 = r0
            goto L85
        L7f:
            r9 = move-exception
            r4 = r0
            goto L91
        L82:
            r8 = move-exception
            r3 = r0
            r4 = r3
        L85:
            r5 = r4
            goto Lb9
        L87:
            r9 = move-exception
            r3 = r0
            goto L90
        L8a:
            r8 = move-exception
            r3 = r0
            goto L97
        L8d:
            r9 = move-exception
            r2 = r0
            r3 = r2
        L90:
            r4 = r3
        L91:
            r5 = r4
        L92:
            r0 = r1
            goto L9f
        L94:
            r8 = move-exception
            r1 = r0
            r3 = r1
        L97:
            r4 = r3
            r5 = r4
            goto Lba
        L9a:
            r9 = move-exception
            r2 = r0
            r3 = r2
            r4 = r3
            r5 = r4
        L9f:
            java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> Lb7
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r7 = "Command line threw an InterruptedException for command "
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Lb7
            java.util.List r8 = java.util.Arrays.asList(r8)     // Catch: java.lang.Throwable -> Lb7
            r6.append(r8)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Throwable -> Lb7
            r1.<init>(r8, r9)     // Catch: java.lang.Throwable -> Lb7
            throw r1     // Catch: java.lang.Throwable -> Lb7
        Lb7:
            r8 = move-exception
            r1 = r0
        Lb9:
            r0 = r2
        Lba:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            com.kwad.sdk.crash.utils.b.closeQuietly(r3)
            com.kwad.sdk.crash.utils.b.closeQuietly(r4)
            com.kwad.sdk.crash.utils.b.closeQuietly(r5)
            if (r1 == 0) goto Lcb
            r1.destroy()
        Lcb:
            throw r8
    }

    private static java.lang.Process f(java.lang.String[] r1) {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            java.lang.Process r1 = r0.exec(r1)
            return r1
    }
}
