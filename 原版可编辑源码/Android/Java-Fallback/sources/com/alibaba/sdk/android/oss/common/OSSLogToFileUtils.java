package com.alibaba.sdk.android.oss.common;

public class OSSLogToFileUtils {
    private static final java.lang.String LOG_DIR_NAME = "OSSLog";
    private static long LOG_MAX_SIZE;
    private static com.alibaba.sdk.android.oss.common.OSSLogToFileUtils instance;
    private static com.alibaba.sdk.android.oss.common.LogThreadPoolManager logService;
    private static android.content.Context sContext;
    private static java.io.File sLogFile;
    private static java.text.SimpleDateFormat sLogSDF;
    private static android.net.Uri sLogUri;
    private boolean useSdCard;


    private static class WriteCall implements java.lang.Runnable {
        private java.lang.Object mStr;

        public WriteCall(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.mStr = r1
                return
        }

        private java.io.PrintWriter printEx(java.io.PrintWriter r4) {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "crash_time："
                r0.append(r1)
                java.text.SimpleDateFormat r1 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$500()
                java.util.Date r2 = new java.util.Date
                r2.<init>()
                java.lang.String r1 = r1.format(r2)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r4.println(r0)
                java.lang.Object r0 = r3.mStr
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                r0.printStackTrace(r4)
                return r4
        }

        @Override
        public void run() {
                r5 = this;
                java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$000()
                if (r0 == 0) goto L6f
                com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getInstance()
                java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$000()
                long r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getLogFileSize(r0)
                long r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$300()
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L20
                com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getInstance()
                r0.resetLogFile()
            L20:
                java.io.PrintWriter r0 = new java.io.PrintWriter     // Catch: java.io.IOException -> L6b
                java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.io.IOException -> L6b
                java.io.File r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$000()     // Catch: java.io.IOException -> L6b
                r3 = 1
                r1.<init>(r2, r3)     // Catch: java.io.IOException -> L6b
                r0.<init>(r1, r3)     // Catch: java.io.IOException -> L6b
                java.lang.Object r1 = r5.mStr     // Catch: java.io.IOException -> L6b
                boolean r1 = r1 instanceof java.lang.Throwable     // Catch: java.io.IOException -> L6b
                if (r1 == 0) goto L39
                r5.printEx(r0)     // Catch: java.io.IOException -> L6b
                goto L5f
            L39:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L6b
                r1.<init>()     // Catch: java.io.IOException -> L6b
                com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.getInstance()     // Catch: java.io.IOException -> L6b
                r3 = 0
                java.lang.String r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.access$400(r2, r3)     // Catch: java.io.IOException -> L6b
                r1.append(r2)     // Catch: java.io.IOException -> L6b
                java.lang.String r2 = " - "
                r1.append(r2)     // Catch: java.io.IOException -> L6b
                java.lang.Object r2 = r5.mStr     // Catch: java.io.IOException -> L6b
                java.lang.String r2 = r2.toString()     // Catch: java.io.IOException -> L6b
                r1.append(r2)     // Catch: java.io.IOException -> L6b
                java.lang.String r1 = r1.toString()     // Catch: java.io.IOException -> L6b
                r0.println(r1)     // Catch: java.io.IOException -> L6b
            L5f:
                java.lang.String r1 = "------>end of log"
                r0.println(r1)     // Catch: java.io.IOException -> L6b
                r0.println()     // Catch: java.io.IOException -> L6b
                r0.close()     // Catch: java.io.IOException -> L6b
                goto L6f
            L6b:
                r0 = move-exception
                r0.printStackTrace()
            L6f:
                return
        }
    }

    static {
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r0 = com.alibaba.sdk.android.oss.common.LogThreadPoolManager.newInstance()
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.logService = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogSDF = r0
            r0 = 5242880(0x500000, double:2.590327E-317)
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.LOG_MAX_SIZE = r0
            return
    }

    private OSSLogToFileUtils() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.useSdCard = r0
            return
    }

    static java.io.File access$000() {
            java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            return r0
    }

    static java.io.File access$002(java.io.File r0) {
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile = r0
            return r0
    }

    static com.alibaba.sdk.android.oss.common.OSSLogToFileUtils access$100() {
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance
            return r0
    }

    static java.io.File access$200(com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0) {
            java.io.File r0 = r0.getLogFile()
            return r0
    }

    static long access$300() {
            long r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.LOG_MAX_SIZE
            return r0
    }

    static java.lang.String access$400(com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0, java.lang.StackTraceElement[] r1) {
            java.lang.String r0 = r0.getFunctionInfo(r1)
            return r0
    }

    static java.text.SimpleDateFormat access$500() {
            java.text.SimpleDateFormat r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogSDF
            return r0
    }

    private java.lang.String getFunctionInfo(java.lang.StackTraceElement[] r3) {
            r2 = this;
            if (r3 != 0) goto L24
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "["
            r3.append(r0)
            java.text.SimpleDateFormat r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogSDF
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            r3.append(r0)
            java.lang.String r0 = "]"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            goto L25
        L24:
            r3 = 0
        L25:
            return r3
    }

    public static com.alibaba.sdk.android.oss.common.OSSLogToFileUtils getInstance() {
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.alibaba.sdk.android.oss.common.OSSLogToFileUtils> r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.class
            monitor-enter(r0)
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r1 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r1 = new com.alibaba.sdk.android.oss.common.OSSLogToFileUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance
            return r0
    }

    public static long getLocalLogFileSize() {
            java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            long r0 = getLogFileSize(r0)
            return r0
    }

    private java.io.File getLogFile() {
            r11 = this;
            r0 = 0
            r1 = 0
            boolean r2 = r11.useSdCard     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = "OSSLog"
            r4 = 1
            r5 = 1024(0x400, double:5.06E-321)
            if (r2 == 0) goto L4c
            java.lang.String r2 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Exception -> L7e
            java.lang.String r7 = "mounted"
            boolean r2 = r2.equals(r7)     // Catch: java.lang.Exception -> L7e
            if (r2 == 0) goto L4c
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L7e
            r7 = 29
            if (r2 >= r7) goto L4c
            long r7 = r11.readSDCardSpace()     // Catch: java.lang.Exception -> L7e
            long r9 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.LOG_MAX_SIZE     // Catch: java.lang.Exception -> L7e
            long r9 = r9 / r5
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 <= 0) goto L29
            goto L2a
        L29:
            r4 = 0
        L2a:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r5.<init>()     // Catch: java.lang.Exception -> L7e
            java.io.File r6 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Exception -> L7e
            r5.append(r6)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Exception -> L7e
            r5.append(r6)     // Catch: java.lang.Exception -> L7e
            r5.append(r3)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L7e
            r2.<init>(r3)     // Catch: java.lang.Exception -> L7e
            goto L7c
        L4c:
            long r7 = r11.readSystemSpace()     // Catch: java.lang.Exception -> L7e
            long r9 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.LOG_MAX_SIZE     // Catch: java.lang.Exception -> L7e
            long r9 = r9 / r5
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 <= 0) goto L58
            goto L59
        L58:
            r4 = 0
        L59:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r5.<init>()     // Catch: java.lang.Exception -> L7e
            android.content.Context r6 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext     // Catch: java.lang.Exception -> L7e
            java.io.File r6 = r6.getFilesDir()     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Exception -> L7e
            r5.append(r6)     // Catch: java.lang.Exception -> L7e
            java.lang.String r6 = java.io.File.separator     // Catch: java.lang.Exception -> L7e
            r5.append(r6)     // Catch: java.lang.Exception -> L7e
            r5.append(r3)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L7e
            r2.<init>(r3)     // Catch: java.lang.Exception -> L7e
        L7c:
            r1 = r4
            goto L7f
        L7e:
            r2 = r0
        L7f:
            if (r1 == 0) goto Lad
            boolean r0 = r2.exists()
            if (r0 != 0) goto L8a
            r2.mkdirs()
        L8a:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getPath()
            r1.append(r2)
            java.lang.String r2 = "/logs.csv"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Lad
            r11.createNewFile(r0)
        Lad:
            return r0
    }

    public static long getLogFileSize(java.io.File r2) {
            if (r2 == 0) goto Ld
            boolean r0 = r2.exists()
            if (r0 == 0) goto Ld
            long r0 = r2.length()
            goto Lf
        Ld:
            r0 = 0
        Lf:
            return r0
    }

    private android.net.Uri getLogUri() {
            r5 = this;
            android.content.Context r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r1 = r5.queryLogUri()
            if (r1 != 0) goto L3d
            android.content.ContentValues r1 = new android.content.ContentValues
            r1.<init>()
            java.lang.String r2 = "logs.csv"
            java.lang.String r3 = "_display_name"
            r1.put(r3, r2)
            java.lang.String r3 = "mime_type"
            java.lang.String r4 = "file/csv"
            r1.put(r3, r4)
            java.lang.String r3 = "title"
            r1.put(r3, r2)
            java.lang.String r2 = "relative_path"
            java.lang.String r3 = "Documents/OSSLog"
            r1.put(r2, r3)
            java.lang.String r2 = "external"
            android.net.Uri r2 = android.provider.MediaStore.Files.getContentUri(r2)
            android.net.Uri r1 = r0.insert(r2, r1)
            java.lang.String r2 = "w"
            r0.openFileDescriptor(r1, r2)     // Catch: java.lang.Exception -> L3b
            goto L3d
        L3b:
            r0 = 0
            return r0
        L3d:
            return r1
    }

    public static void init(android.content.Context r3, com.alibaba.sdk.android.oss.ClientConfiguration r4) {
            r0 = 0
            java.lang.String r1 = "init ..."
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r0)
            if (r4 == 0) goto Le
            long r1 = r4.getMaxLogSize()
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.LOG_MAX_SIZE = r1
        Le:
            android.content.Context r4 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext
            if (r4 == 0) goto L27
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r4 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance
            if (r4 == 0) goto L27
            java.io.File r4 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            if (r4 == 0) goto L27
            boolean r4 = r4.exists()
            if (r4 != 0) goto L21
            goto L27
        L21:
            java.lang.String r3 = "LogToFileUtils has been init ..."
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3, r0)
            goto L3d
        L27:
            android.content.Context r3 = r3.getApplicationContext()
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext = r3
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r3 = getInstance()
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance = r3
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r3 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.logService
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils$1 r4 = new com.alibaba.sdk.android.oss.common.OSSLogToFileUtils$1
            r4.<init>()
            r3.addExecuteTask(r4)
        L3d:
            return
    }

    private android.net.Uri queryLogUri() {
            r7 = this;
            android.content.Context r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext
            android.content.ContentResolver r1 = r0.getContentResolver()
            java.lang.String r0 = "external"
            android.net.Uri r0 = android.provider.MediaStore.Files.getContentUri(r0)
            java.lang.String r2 = "Documents/OSSLog%"
            java.lang.String r3 = "logs.csv"
            java.lang.String[] r5 = new java.lang.String[]{r2, r3}
            java.lang.String r2 = "_id"
            java.lang.String[] r3 = new java.lang.String[]{r2}
            java.lang.String r4 = "relative_path like ? AND _display_name=?"
            r6 = 0
            r2 = r0
            android.database.Cursor r1 = r1.query(r2, r3, r4, r5, r6)
            if (r1 == 0) goto L37
            boolean r2 = r1.moveToFirst()
            if (r2 == 0) goto L37
            r2 = 0
            long r2 = r1.getLong(r2)
            android.net.Uri r0 = android.content.ContentUris.withAppendedId(r0, r2)
            r1.close()
            goto L38
        L37:
            r0 = 0
        L38:
            return r0
    }

    private long readSDCardSpace() {
            r7 = this;
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r1.equals(r0)
            r1 = 0
            if (r0 == 0) goto L32
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            android.os.StatFs r3 = new android.os.StatFs     // Catch: java.lang.Exception -> L32
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L32
            r3.<init>(r0)     // Catch: java.lang.Exception -> L32
            int r0 = r3.getBlockSize()     // Catch: java.lang.Exception -> L32
            long r4 = (long) r0     // Catch: java.lang.Exception -> L32
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L32
            r6 = 18
            if (r0 < r6) goto L2b
            long r0 = r3.getAvailableBlocksLong()     // Catch: java.lang.Exception -> L32
            goto L30
        L2b:
            int r0 = r3.getAvailableBlocks()     // Catch: java.lang.Exception -> L32
            long r0 = (long) r0
        L30:
            long r1 = r0 * r4
        L32:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "sd卡存储空间:"
            r0.append(r3)
            java.lang.String r3 = java.lang.String.valueOf(r1)
            r0.append(r3)
            java.lang.String r3 = "kb"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r3 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r0, r3)
            return r1
    }

    private long readSystemSpace() {
            r5 = this;
            java.io.File r0 = android.os.Environment.getDataDirectory()
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Exception -> L28
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L28
            r1.<init>(r0)     // Catch: java.lang.Exception -> L28
            int r0 = r1.getBlockSize()     // Catch: java.lang.Exception -> L28
            long r2 = (long) r0     // Catch: java.lang.Exception -> L28
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L28
            r4 = 18
            if (r0 < r4) goto L1d
            long r0 = r1.getAvailableBlocksLong()     // Catch: java.lang.Exception -> L28
            goto L22
        L1d:
            int r0 = r1.getAvailableBlocks()     // Catch: java.lang.Exception -> L28
            long r0 = (long) r0     // Catch: java.lang.Exception -> L28
        L22:
            long r0 = r0 * r2
            r2 = 1024(0x400, double:5.06E-321)
            long r0 = r0 / r2
            goto L2a
        L28:
            r0 = 0
        L2a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "内部存储空间:"
            r2.append(r3)
            java.lang.String r3 = java.lang.String.valueOf(r0)
            r2.append(r3)
            java.lang.String r3 = "kb"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r3 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r2, r3)
            return r0
    }

    public static void reset() {
            r0 = 0
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext = r0
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance = r0
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile = r0
            return
    }

    public void createNewFile(java.io.File r3) {
            r2 = this;
            r3.createNewFile()     // Catch: java.lang.Exception -> L4
            goto L1e
        L4:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Create log file failure !!! "
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            com.alibaba.sdk.android.oss.common.OSSLog.logError(r3, r0)
        L1e:
            return
    }

    public void deleteLogFile() {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            java.lang.String r2 = r2.getParent()
            r1.append(r2)
            java.lang.String r2 = "/logs.csv"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L2b
            r1 = 0
            java.lang.String r2 = "delete Log File ... "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r2, r1)
            r0.delete()
        L2b:
            return
    }

    public void deleteLogFileDir() {
            r3 = this;
            r3.deleteLogFile()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r2 = r2.getPath()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "OSSLog"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L35
            r1 = 0
            java.lang.String r2 = "delete Log FileDir ... "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r2, r1)
            r0.delete()
        L35:
            return
    }

    public void resetLogFile() {
            r3 = this;
            r0 = 0
            java.lang.String r1 = "Reset Log File ... "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r0)
            java.io.File r1 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            java.io.File r1 = r1.getParentFile()
            boolean r1 = r1.exists()
            if (r1 != 0) goto L20
            java.lang.String r1 = "Reset Log make File dir ... "
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1, r0)
            java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            java.io.File r0 = r0.getParentFile()
            r0.mkdir()
        L20:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile
            java.lang.String r2 = r2.getParent()
            r1.append(r2)
            java.lang.String r2 = "/logs.csv"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L45
            r0.delete()
        L45:
            r3.createNewFile(r0)
            return
    }

    public void setUseSdCard(boolean r1) {
            r0 = this;
            r0.useSdCard = r1
            return
    }

    public synchronized void write(java.lang.Object r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = com.alibaba.sdk.android.oss.common.OSSLog.isEnableLog()     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2c
            android.content.Context r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sContext     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2a
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.instance     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2a
            java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L14
            goto L2a
        L14:
            java.io.File r0 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.sLogFile     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L1f
            r1.resetLogFile()     // Catch: java.lang.Throwable -> L2e
        L1f:
            com.alibaba.sdk.android.oss.common.OSSLogToFileUtils$WriteCall r0 = new com.alibaba.sdk.android.oss.common.OSSLogToFileUtils$WriteCall     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            com.alibaba.sdk.android.oss.common.LogThreadPoolManager r2 = com.alibaba.sdk.android.oss.common.OSSLogToFileUtils.logService     // Catch: java.lang.Throwable -> L2e
            r2.addExecuteTask(r0)     // Catch: java.lang.Throwable -> L2e
            goto L2c
        L2a:
            monitor-exit(r1)
            return
        L2c:
            monitor-exit(r1)
            return
        L2e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
