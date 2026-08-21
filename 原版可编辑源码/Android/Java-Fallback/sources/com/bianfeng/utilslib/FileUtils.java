package com.bianfeng.utilslib;

public class FileUtils {
    private static java.lang.String FILE_DIR = "bianfeng";
    private static java.lang.String data_file;
    private static com.bianfeng.utilslib.FileUtils utils;

    static {
            return
    }

    private FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.FileUtils getInstance() {
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.FileUtils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.FileUtils r0 = new com.bianfeng.utilslib.FileUtils
            r0.<init>()
            com.bianfeng.utilslib.FileUtils.utils = r0
        Lb:
            com.bianfeng.utilslib.FileUtils r0 = com.bianfeng.utilslib.FileUtils.utils
            return r0
    }

    public synchronized void delFile(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L16
            java.lang.String r2 = r1.getDbPath(r2)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L16
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L16
            boolean r2 = r0.exists()     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L16
            if (r2 == 0) goto L1f
            r0.delete()     // Catch: java.lang.Throwable -> L14 java.lang.Exception -> L16
            goto L1f
        L14:
            r2 = move-exception
            goto L2a
        L16:
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = "删库出现异常了"
            r2.i(r0)     // Catch: java.lang.Throwable -> L14
        L1f:
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = "删库成功了"
            r2.i(r0)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)
            return
        L2a:
            monitor-exit(r1)
            throw r2
    }

    public java.lang.String getDbPath(java.lang.String r4) {
            r3 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "测试FileUtils"
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.utilslib.FileUtils.data_file
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.bianfeng.utilslib.FileUtils.data_file
            r1.append(r2)
            java.lang.String r2 = com.bianfeng.utilslib.FileUtils.FILE_DIR
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L3b
            r0.mkdir()
        L3b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = r0.getAbsolutePath()
            r1.append(r0)
            java.lang.String r0 = "/"
            r1.append(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            return r4
    }

    public java.lang.String getFileDir() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.utilslib.FileUtils.FILE_DIR
            return r0
    }

    public java.lang.String getSdcardPath() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void init(android.app.Activity r1) {
            r0 = this;
            java.io.File r1 = r1.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            com.bianfeng.utilslib.FileUtils.data_file = r1
            return
    }

    public boolean isFileExist(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            return r2
    }

    public boolean isSdcardFileExist(java.lang.String r4) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.getSdcardPath()
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            boolean r4 = r0.exists()
            return r4
    }

    public boolean isSdcardReady() {
            r2 = this;
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }
}
