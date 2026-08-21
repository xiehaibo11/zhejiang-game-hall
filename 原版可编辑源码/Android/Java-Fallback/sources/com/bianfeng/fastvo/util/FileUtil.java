package com.bianfeng.fastvo.util;

public class FileUtil {
    private FileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean deleteDirectory(java.lang.String r5) {
            java.lang.String r0 = java.io.File.separator
            boolean r0 = r5.endsWith(r0)
            if (r0 != 0) goto L19
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = java.io.File.separator
            r0.append(r5)
            java.lang.String r5 = r0.toString()
        L19:
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r5 = r0.exists()
            r1 = 0
            if (r5 == 0) goto L65
            boolean r5 = r0.isDirectory()
            if (r5 != 0) goto L2c
            goto L65
        L2c:
            java.io.File[] r5 = r0.listFiles()
            if (r5 != 0) goto L33
            return r1
        L33:
            r2 = 1
            r3 = 0
        L35:
            int r4 = r5.length
            if (r3 >= r4) goto L5d
            r2 = r5[r3]
            boolean r2 = r2.isFile()
            if (r2 == 0) goto L4d
            r2 = r5[r3]
            java.lang.String r2 = r2.getAbsolutePath()
            boolean r2 = deleteFile(r2)
            if (r2 != 0) goto L5a
            goto L5d
        L4d:
            r2 = r5[r3]
            java.lang.String r2 = r2.getAbsolutePath()
            boolean r2 = deleteDirectory(r2)
            if (r2 != 0) goto L5a
            goto L5d
        L5a:
            int r3 = r3 + 1
            goto L35
        L5d:
            if (r2 != 0) goto L60
            return r1
        L60:
            boolean r5 = r0.delete()
            return r5
        L65:
            return r1
    }

    public static boolean deleteFile(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L16
            boolean r1 = r0.delete()
            return r1
        L16:
            r1 = 0
            return r1
    }

    public static java.lang.String getFolder(java.lang.String r3) {
            java.lang.String r0 = java.io.File.separator
            java.lang.String[] r0 = r3.split(r0)
            int r1 = r0.length
            if (r1 > 0) goto Lb
            r3 = 0
            return r3
        Lb:
            int r1 = r3.length()
            int r2 = r0.length
            int r2 = r2 + (-1)
            r0 = r0[r2]
            int r0 = r0.length()
            r2 = 0
            int r1 = r1 - r0
            java.lang.String r3 = r3.substring(r2, r1)
            return r3
    }

    public static java.lang.String getSuffix(java.lang.String r2) {
            int r0 = r2.length()
            if (r0 > 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "."
            int r0 = r2.lastIndexOf(r0)
            int r1 = r2.length()
            java.lang.String r2 = r2.substring(r0, r1)
            return r2
    }

    public static boolean isFileExist(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            return r1
    }

    public static boolean mkFileDirs(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L10
            boolean r1 = r0.mkdirs()
            return r1
        L10:
            r1 = 1
            return r1
    }
}
