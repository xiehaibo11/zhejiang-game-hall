package com.ss.android.socialbase.downloader.logger;

public class Logger {
    public static final boolean DEBUG = false;
    private static final java.lang.String DOWNLOAD_TAG_PREFIX = "Downloader-";
    private static final java.lang.String TAG = "DownloaderLogger";
    private static int mLevel = 4;
    private static com.ss.android.socialbase.downloader.logger.Logger.ILogWritter sLogWritter;

    public static abstract class ILogWritter {
        public ILogWritter() {
                r0 = this;
                r0.<init>()
                return
        }

        public void logD(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logE(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logE(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
                r0 = this;
                return
        }

        public void logI(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logI(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
                r0 = this;
                return
        }

        public void logK(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logV(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logW(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        public void logW(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
                r0 = this;
                return
        }
    }

    static {
            return
    }

    public Logger() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void alertErrorInfo(java.lang.String r1) {
            boolean r0 = debug()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }

    public static void d(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            d(r0, r1)
            return
    }

    public static void d(java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 3
            if (r0 > r1) goto Lf
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.d(r0, r3)
        Lf:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1a
            java.lang.String r2 = downloaderTag(r2)
            r0.logD(r2, r3)
        L1a:
            return
    }

    public static void d(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r3 != 0) goto L5
            if (r4 != 0) goto L5
            return
        L5:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 3
            if (r0 > r1) goto L11
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.d(r0, r3, r4)
        L11:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L2b
            java.lang.String r2 = downloaderTag(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.logD(r2, r3)
        L2b:
            return
    }

    public static boolean debug() {
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 3
            if (r0 > r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public static java.lang.String downloaderTag(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Downloader-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L18:
            java.lang.String r2 = "DownloaderLogger"
            return r2
    }

    public static void e(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            e(r0, r1)
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 6
            if (r0 > r1) goto Lf
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.e(r0, r3)
        Lf:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1a
            java.lang.String r2 = downloaderTag(r2)
            r0.logE(r2, r3)
        L1a:
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r3 != 0) goto L5
            if (r4 != 0) goto L5
            return
        L5:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 6
            if (r0 > r1) goto L11
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.e(r0, r3, r4)
        L11:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1c
            java.lang.String r2 = downloaderTag(r2)
            r0.logE(r2, r3, r4)
        L1c:
            return
    }

    public static int getLogLevel() {
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            return r0
    }

    private static java.lang.String getSimpleClassName(java.lang.String r1) {
            r0 = 46
            int r0 = r1.lastIndexOf(r0)
            if (r0 >= 0) goto L9
            return r1
        L9:
            int r0 = r0 + 1
            java.lang.String r1 = r1.substring(r0)
            return r1
    }

    public static void i(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            i(r0, r1)
            return
    }

    public static void i(java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 4
            if (r0 > r1) goto Lf
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.i(r0, r3)
        Lf:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1a
            java.lang.String r2 = downloaderTag(r2)
            r0.logI(r2, r3)
        L1a:
            return
    }

    public static void i(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r3 != 0) goto L5
            if (r4 != 0) goto L5
            return
        L5:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 4
            if (r0 > r1) goto L11
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.i(r0, r3, r4)
        L11:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1c
            java.lang.String r2 = downloaderTag(r2)
            r0.logI(r2, r3, r4)
        L1c:
            return
    }

    public static void k(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            k(r0, r1)
            return
    }

    public static void k(java.lang.String r2, java.lang.String r3) {
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 3
            if (r0 > r1) goto Lc
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.d(r0, r3)
        Lc:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L17
            java.lang.String r2 = downloaderTag(r2)
            r0.logK(r2, r3)
        L17:
            return
    }

    public static void registerLogHandler(com.ss.android.socialbase.downloader.logger.Logger.ILogWritter r0) {
            com.ss.android.socialbase.downloader.logger.Logger.sLogWritter = r0
            return
    }

    public static void setLogLevel(int r0) {
            com.ss.android.socialbase.downloader.logger.Logger.mLevel = r0
            return
    }

    public static void setLogLevelInDownloaderProcess(int r1) {
            r0 = 1
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.get(r0)
            if (r0 == 0) goto L9
            com.ss.android.socialbase.downloader.logger.Logger.mLevel = r1
        L9:
            return
    }

    public static void st(java.lang.String r5, int r6) {
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L6
            r0.<init>()     // Catch: java.lang.Exception -> L6
            throw r0     // Catch: java.lang.Exception -> L6
        L6:
            r0 = move-exception
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 1
            r3 = r2
        L12:
            int r4 = r0.length
            int r4 = java.lang.Math.min(r6, r4)
            if (r3 >= r4) goto L3e
            if (r3 <= r2) goto L20
            java.lang.String r4 = "\n"
            r1.append(r4)
        L20:
            r4 = r0[r3]
            java.lang.String r4 = r4.getClassName()
            java.lang.String r4 = getSimpleClassName(r4)
            r1.append(r4)
            java.lang.String r4 = "."
            r1.append(r4)
            r4 = r0[r3]
            java.lang.String r4 = r4.getMethodName()
            r1.append(r4)
            int r3 = r3 + 1
            goto L12
        L3e:
            java.lang.String r5 = downloaderTag(r5)
            java.lang.String r6 = r1.toString()
            v(r5, r6)
            return
    }

    public static void throwException(java.lang.Throwable r2) {
            if (r2 != 0) goto L3
            return
        L3:
            r2.printStackTrace()
            boolean r0 = debug()
            if (r0 != 0) goto Ld
            return
        Ld:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Error! Now in debug, we alert to you to correct it !"
            r0.<init>(r1, r2)
            throw r0
    }

    public static void v(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            v(r0, r1)
            return
    }

    public static void v(java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 2
            if (r0 > r1) goto Lb
            android.util.Log.v(r2, r3)
        Lb:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L16
            java.lang.String r2 = downloaderTag(r2)
            r0.logV(r2, r3)
        L16:
            return
    }

    public static void v(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r3 != 0) goto L5
            if (r4 != 0) goto L5
            return
        L5:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 2
            if (r0 > r1) goto Ld
            android.util.Log.v(r2, r3, r4)
        Ld:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L27
            java.lang.String r2 = downloaderTag(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.logV(r2, r3)
        L27:
            return
    }

    public static void w(java.lang.String r1) {
            java.lang.String r0 = "DownloaderLogger"
            w(r0, r1)
            return
    }

    public static void w(java.lang.String r2, java.lang.String r3) {
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 5
            if (r0 > r1) goto Lf
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.w(r0, r3)
        Lf:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1a
            java.lang.String r2 = downloaderTag(r2)
            r0.logW(r2, r3)
        L1a:
            return
    }

    public static void w(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r3 != 0) goto L5
            if (r4 != 0) goto L5
            return
        L5:
            int r0 = com.ss.android.socialbase.downloader.logger.Logger.mLevel
            r1 = 5
            if (r0 > r1) goto L11
            java.lang.String r0 = downloaderTag(r2)
            android.util.Log.w(r0, r3, r4)
        L11:
            com.ss.android.socialbase.downloader.logger.Logger$ILogWritter r0 = com.ss.android.socialbase.downloader.logger.Logger.sLogWritter
            if (r0 == 0) goto L1c
            java.lang.String r2 = downloaderTag(r2)
            r0.logW(r2, r3, r4)
        L1c:
            return
    }
}
