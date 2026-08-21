package com.sigmob.sdk.base.utils;

public final class b {
    public static java.lang.String a = "SigHtmlResource";
    public static java.lang.String b = "SigHtmlPrivacy";
    public static java.lang.String c = "SigZipResource";
    private static java.lang.String d;
    private static java.lang.String e;

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File a(android.content.Context r2) {
            java.io.File r2 = new java.io.File
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.e
            java.lang.String r1 = "SigDownload"
            r2.<init>(r0, r1)
            return r2
    }

    public static java.io.File a(java.lang.String r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.e     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            if (r1 != 0) goto L12
            r0.mkdirs()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
        L12:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r1.<init>(r0, r4)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r4.<init>()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.String r0 = "SigHtmlResource: "
            r4.append(r0)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.String r0 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r4.append(r0)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            com.czhj.sdk.logger.SigmobLog.d(r4)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            boolean r4 = r1.exists()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            if (r4 == 0) goto L38
            r1.delete()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
        L38:
            r1.createNewFile()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.io.FileWriter r4 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0 = 1
            r4.<init>(r1, r0)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0.write(r3)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0.newLine()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r0.close()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            r4.close()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L58
            goto L5d
        L53:
            r3 = move-exception
            r3.printStackTrace()
            goto L5c
        L58:
            r3 = move-exception
            r3.printStackTrace()
        L5c:
            r1 = 0
        L5d:
            return r1
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.d
            return r0
    }

    public static synchronized java.lang.String a(java.lang.String r3) {
            java.lang.Class<com.sigmob.sdk.base.utils.b> r0 = com.sigmob.sdk.base.utils.b.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.d     // Catch: java.lang.Throwable -> L25
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L25
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = "splashAdUnit"
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L25
            r1.append(r2)     // Catch: java.lang.Throwable -> L25
            r1.append(r3)     // Catch: java.lang.Throwable -> L25
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)
            return r3
        L25:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            java.io.File r0 = r2.getCacheDir()
            java.io.File r2 = r2.getExternalCacheDir()
            if (r3 == 0) goto L28
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r3)
            boolean r0 = r1.exists()
            if (r0 != 0) goto L18
            r1.mkdirs()
        L18:
            java.io.File r0 = new java.io.File
            r0.<init>(r2, r3)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L26
            r0.mkdirs()
        L26:
            r2 = r0
            r0 = r1
        L28:
            java.lang.String r3 = r0.getAbsolutePath()
            com.sigmob.sdk.base.utils.b.d = r3
            java.lang.String r2 = r2.getAbsolutePath()
            com.sigmob.sdk.base.utils.b.e = r2
            return
    }

    public static java.io.File[] a(java.io.File[] r6, int r7) {
            if (r6 == 0) goto L4d
            int r0 = r6.length
            if (r0 != 0) goto L6
            goto L4d
        L6:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = java.util.Arrays.asList(r6)
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L11:
            int r3 = r6.length
            if (r2 >= r3) goto L44
            int r3 = r0.size()
            if (r3 > r7) goto L1b
            goto L44
        L1b:
            r3 = r6[r2]
            boolean r4 = r3.exists()
            if (r4 == 0) goto L41
            r3.delete()
            r0.remove(r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "file delete "
            r4.append(r5)
            java.lang.String r3 = r3.getName()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.d(r3)
        L41:
            int r2 = r2 + 1
            goto L11
        L44:
            java.io.File[] r6 = new java.io.File[r1]
            java.lang.Object[] r6 = r0.toArray(r6)
            java.io.File[] r6 = (java.io.File[]) r6
            return r6
        L4d:
            r6 = 0
            return r6
    }

    public static java.io.File b(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.e
            r0.<init>(r1, r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L10
            r0.mkdirs()
        L10:
            return r0
    }

    public static java.lang.String b() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "videoAd"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L26
            r1.mkdirs()
        L26:
            return r0
    }

    public static java.io.File c(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.e
            r0.<init>(r1, r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L10
            r0.mkdirs()
        L10:
            return r0
    }

    public static java.lang.String c() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.e
            return r0
    }

    public static java.lang.String d() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "splashAd"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L26
            r1.mkdirs()
        L26:
            return r0
    }

    public static java.lang.String e() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "nativeAd"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L26
            r1.mkdirs()
        L26:
            return r0
    }

    public static java.lang.String f() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "downloadAPKLog"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L26
            r1.mkdirs()
        L26:
            return r0
    }

    public static synchronized java.lang.String g() {
            java.lang.Class<com.sigmob.sdk.base.utils.b> r0 = com.sigmob.sdk.base.utils.b.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27
            r1.<init>()     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = com.sigmob.sdk.base.utils.b.d     // Catch: java.lang.Throwable -> L27
            r1.append(r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L27
            r1.append(r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "logger"
            r1.append(r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L27
            r1.append(r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r2 = "sdkLog.log"
            r1.append(r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)
            return r1
        L27:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void h() {
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.d
            if (r0 == 0) goto L25
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            java.lang.String r1 = com.sigmob.sdk.base.utils.b.d
            com.czhj.sdk.common.utils.FileUtil.deleteDirectory(r1)
        L16:
            boolean r1 = r0.exists()
            if (r1 == 0) goto L22
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L25
        L22:
            r0.mkdirs()
        L25:
            return
    }
}
