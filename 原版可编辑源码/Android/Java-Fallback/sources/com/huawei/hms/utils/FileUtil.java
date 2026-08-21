package com.huawei.hms.utils;

public abstract class FileUtil {
    public static final java.lang.String LOCAL_REPORT_FILE = "hms/HwMobileServiceReport.txt";
    public static final java.lang.String LOCAL_REPORT_FILE_CONFIG = "hms/config.txt";
    public static final long LOCAL_REPORT_FILE_MAX_SIZE = 10240;
    public static boolean a;
    public static java.util.concurrent.ScheduledExecutorService b;

    public static class a implements java.lang.Runnable {
        public final java.io.File a;
        public final long b;
        public final java.lang.String c;

        public a(java.io.File r1, long r2, java.lang.String r4) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r7 = this;
                java.io.File r0 = r7.a
                java.lang.String r1 = "FileUtil"
                if (r0 != 0) goto Lc
                java.lang.String r0 = "In writeFile Failed to get local file."
                com.huawei.hms.support.log.HMSLog.e(r1, r0)
                return
            Lc:
                java.io.File r0 = r0.getParentFile()
                if (r0 == 0) goto L88
                boolean r2 = r0.mkdirs()
                if (r2 != 0) goto L1f
                boolean r0 = r0.isDirectory()
                if (r0 != 0) goto L1f
                goto L88
            L1f:
                r0 = 0
                java.io.File r2 = r7.a     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                long r2 = r2.length()     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                long r4 = r7.b     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                java.lang.String r5 = "rw"
                if (r4 <= 0) goto L4d
                java.io.File r2 = r7.a     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.lang.String r2 = r2.getCanonicalPath()     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.io.File r3 = r7.a     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                boolean r3 = r3.delete()     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                if (r3 != 0) goto L41
                java.lang.String r3 = "last file delete failed."
                com.huawei.hms.support.log.HMSLog.e(r1, r3)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
            L41:
                java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.io.File r4 = new java.io.File     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r4.<init>(r2)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r3.<init>(r4, r5)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r0 = r3
                goto L58
            L4d:
                java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.io.File r6 = r7.a     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r4.<init>(r6, r5)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r4.seek(r2)     // Catch: java.lang.Throwable -> L75 java.io.IOException -> L78
                r0 = r4
            L58:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r2.<init>()     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.lang.String r3 = r7.c     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r2.append(r3)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.lang.String r3 = "line.separator"
                java.lang.String r3 = java.lang.System.getProperty(r3)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r2.append(r3)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                r0.writeBytes(r2)     // Catch: java.io.IOException -> L73 java.lang.Throwable -> L83
                goto L7f
            L73:
                r2 = move-exception
                goto L7a
            L75:
                r1 = move-exception
                r0 = r4
                goto L84
            L78:
                r2 = move-exception
                r0 = r4
            L7a:
                java.lang.String r3 = "writeFile exception:"
                com.huawei.hms.support.log.HMSLog.e(r1, r3, r2)     // Catch: java.lang.Throwable -> L83
            L7f:
                com.huawei.hms.utils.IOUtils.closeQuietly(r0)
                return
            L83:
                r1 = move-exception
            L84:
                com.huawei.hms.utils.IOUtils.closeQuietly(r0)
                throw r1
            L88:
                java.lang.String r0 = "In writeFile, Failed to create directory."
                com.huawei.hms.support.log.HMSLog.e(r1, r0)
                return
        }
    }

    static {
            java.util.concurrent.ScheduledExecutorService r0 = java.util.concurrent.Executors.newSingleThreadScheduledExecutor()
            com.huawei.hms.utils.FileUtil.b = r0
            return
    }

    public FileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean verifyHash(java.lang.String r1, java.io.File r2) {
            byte[] r2 = com.huawei.hms.utils.SHA256.digest(r2)
            r0 = 1
            if (r2 == 0) goto L12
            java.lang.String r2 = com.huawei.hms.utils.HEX.encodeHexString(r2, r0)
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L12
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    public static void writeFile(java.io.File r2, java.lang.String r3, long r4) {
            java.util.concurrent.ScheduledExecutorService r0 = com.huawei.hms.utils.FileUtil.b
            com.huawei.hms.utils.FileUtil$a r1 = new com.huawei.hms.utils.FileUtil$a
            r1.<init>(r2, r4, r3)
            r0.execute(r1)
            return
    }

    public static void writeFileReport(android.content.Context r0, java.io.File r1, java.io.File r2, java.lang.String r3, long r4, int r6) {
            if (r1 == 0) goto L49
            boolean r0 = r1.isFile()
            if (r0 == 0) goto L49
            boolean r0 = r1.exists()
            if (r0 == 0) goto L49
            boolean r0 = com.huawei.hms.utils.FileUtil.a
            if (r0 != 0) goto L2a
            if (r2 == 0) goto L27
            boolean r0 = r2.exists()
            if (r0 == 0) goto L27
            boolean r0 = r2.delete()
            if (r0 != 0) goto L27
            java.lang.String r0 = "FileUtil"
            java.lang.String r1 = "file delete failed."
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L27:
            r0 = 1
            com.huawei.hms.utils.FileUtil.a = r0
        L2a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = "|"
            r0.append(r1)
            r0.append(r4)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            r3 = 10240(0x2800, double:5.059E-320)
            writeFile(r2, r0, r3)
        L49:
            return
    }
}
