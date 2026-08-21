package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class FileUtils {
    private static com.ymnsdk.replugin.util.FileUtils utils;

    static {
            com.ymnsdk.replugin.util.FileUtils r0 = new com.ymnsdk.replugin.util.FileUtils
            r0.<init>()
            com.ymnsdk.replugin.util.FileUtils.utils = r0
            return
    }

    public FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.util.FileUtils getInstance() {
            com.ymnsdk.replugin.util.FileUtils r0 = com.ymnsdk.replugin.util.FileUtils.utils
            return r0
    }

    public boolean checkFoldExist(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L10
            r0.mkdirs()
            r2 = 0
            return r2
        L10:
            r2 = 1
            return r2
    }

    public java.io.File getPluginFile(android.app.Activity r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = r2.getFilesDir()
            java.io.File r2 = r2.getAbsoluteFile()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "plugin"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r0 = r3.exists()
            if (r0 != 0) goto L2f
            r3.mkdir()
        L2f:
            java.io.File r3 = new java.io.File
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r3.<init>(r0, r4)
            return r3
    }

    public java.io.File getPluginFile(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r0 = r3.exists()
            if (r0 != 0) goto L1d
            r3.mkdir()
        L1d:
            java.io.File r3 = new java.io.File
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r3.<init>(r0, r4)
            return r3
    }
}
