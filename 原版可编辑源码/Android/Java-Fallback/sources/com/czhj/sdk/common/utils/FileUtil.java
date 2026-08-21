package com.czhj.sdk.common.utils;

public final class FileUtil {


    public FileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File[] clearCacheFileByCount(java.io.File[] r6, int r7) {
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

    public static boolean deleteDirectory(java.lang.String r9) {
            r0 = 0
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Throwable -> L9b
            boolean r1 = r9.endsWith(r1)     // Catch: java.lang.Throwable -> L9b
            if (r1 != 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            r1.<init>()     // Catch: java.lang.Throwable -> L9b
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = java.io.File.separator     // Catch: java.lang.Throwable -> L9b
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L9b
        L1a:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L9b
            r1.<init>(r9)     // Catch: java.lang.Throwable -> L9b
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L9b
            if (r2 == 0) goto L81
            boolean r2 = r1.isDirectory()     // Catch: java.lang.Throwable -> L9b
            if (r2 != 0) goto L2c
            goto L81
        L2c:
            java.io.File[] r2 = r1.listFiles()     // Catch: java.lang.Throwable -> L9b
            int r3 = r2.length     // Catch: java.lang.Throwable -> L9b
            r4 = 1
            r5 = r0
            r6 = r4
        L34:
            if (r5 >= r3) goto L5d
            r7 = r2[r5]     // Catch: java.lang.Throwable -> L9b
            boolean r8 = r7.isFile()     // Catch: java.lang.Throwable -> L9b
            if (r8 == 0) goto L49
            java.lang.String r6 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> L9b
            boolean r6 = deleteFile(r6)     // Catch: java.lang.Throwable -> L9b
            if (r6 != 0) goto L5a
            goto L5d
        L49:
            boolean r8 = r7.isDirectory()     // Catch: java.lang.Throwable -> L9b
            if (r8 == 0) goto L5a
            java.lang.String r6 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> L9b
            boolean r6 = deleteDirectory(r6)     // Catch: java.lang.Throwable -> L9b
            if (r6 != 0) goto L5a
            goto L5d
        L5a:
            int r5 = r5 + 1
            goto L34
        L5d:
            if (r6 != 0) goto L60
            return r0
        L60:
            boolean r1 = r1.delete()     // Catch: java.lang.Throwable -> L9b
            if (r1 == 0) goto L80
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            r1.<init>()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "删除目录"
            r1.append(r2)     // Catch: java.lang.Throwable -> L9b
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = "成功！"
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L9b
            com.czhj.sdk.logger.SigmobLog.d(r9)     // Catch: java.lang.Throwable -> L9b
            return r4
        L80:
            return r0
        L81:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            r1.<init>()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "删除目录失败："
            r1.append(r2)     // Catch: java.lang.Throwable -> L9b
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = "不存在！"
            r1.append(r9)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L9b
            com.czhj.sdk.logger.SigmobLog.d(r9)     // Catch: java.lang.Throwable -> L9b
            return r0
        L9b:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r9)
            return r0
    }

    public static boolean deleteFile(java.lang.String r3) {
            r0 = 0
            java.lang.SecurityManager r1 = new java.lang.SecurityManager     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            r1.checkDelete(r3)     // Catch: java.lang.Throwable -> L6d
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L6d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L6d
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L6d
            if (r2 == 0) goto L53
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L6d
            if (r2 == 0) goto L53
            boolean r1 = r1.delete()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "删除单个文件"
            if (r1 == 0) goto L3b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            r1.append(r2)     // Catch: java.lang.Throwable -> L6d
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = "成功！"
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L6d
            com.czhj.sdk.logger.SigmobLog.d(r3)     // Catch: java.lang.Throwable -> L6d
            r3 = 1
            return r3
        L3b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            r1.append(r2)     // Catch: java.lang.Throwable -> L6d
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = "失败！"
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L6d
            com.czhj.sdk.logger.SigmobLog.d(r3)     // Catch: java.lang.Throwable -> L6d
            return r0
        L53:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "删除单个文件失败："
            r1.append(r2)     // Catch: java.lang.Throwable -> L6d
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = "不存在！"
            r1.append(r3)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L6d
            com.czhj.sdk.logger.SigmobLog.d(r3)     // Catch: java.lang.Throwable -> L6d
            return r0
        L6d:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            return r0
    }

    public static java.lang.String getExtensionName(java.lang.String r2) {
            if (r2 == 0) goto L1f
            int r0 = r2.length()
            if (r0 <= 0) goto L1f
            r0 = 46
            int r0 = r2.lastIndexOf(r0)
            r1 = -1
            if (r0 <= r1) goto L1f
            int r1 = r2.length()
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L1f
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)
        L1f:
            return r2
    }

    public static java.lang.String getRealFilePath(android.content.Context r8, android.net.Uri r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r9.getScheme()
            if (r1 != 0) goto Lf
        La:
            java.lang.String r0 = r9.getPath()
            goto L49
        Lf:
            java.lang.String r2 = "file"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L18
            goto La
        L18:
            java.lang.String r2 = "content"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L49
            android.content.ContentResolver r2 = r8.getContentResolver()
            java.lang.String r8 = "_data"
            java.lang.String[] r4 = new java.lang.String[]{r8}
            r5 = 0
            r6 = 0
            r7 = 0
            r3 = r9
            android.database.Cursor r9 = r2.query(r3, r4, r5, r6, r7)
            if (r9 == 0) goto L49
            boolean r1 = r9.moveToFirst()
            if (r1 == 0) goto L46
            int r8 = r9.getColumnIndex(r8)
            r1 = -1
            if (r8 <= r1) goto L46
            java.lang.String r8 = r9.getString(r8)
            r0 = r8
        L46:
            r9.close()
        L49:
            return r0
    }

    public static java.io.File[] orderByDate(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            java.io.File[] r1 = r0.listFiles()
            if (r1 == 0) goto L13
            com.czhj.sdk.common.utils.FileUtil$1 r0 = new com.czhj.sdk.common.utils.FileUtil$1
            r0.<init>()
            java.util.Arrays.sort(r1, r0)
        L13:
            return r1
    }

    public static byte[] readBytes(java.lang.String r4) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L2a
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L2a
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L2a
            r0.<init>()     // Catch: java.lang.Throwable -> L2a
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L2a
        L13:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L2a
            r3 = -1
            if (r2 == r3) goto L1f
            r3 = 0
            r0.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L2a
            goto L13
        L1f:
            r4.close()     // Catch: java.lang.Throwable -> L2a
            r0.close()     // Catch: java.lang.Throwable -> L2a
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Throwable -> L2a
            goto L33
        L2a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
            r4 = 0
        L33:
            return r4
    }

    public static java.lang.String readFileToString(java.io.File r3) {
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L28
            java.io.FileReader r1 = new java.io.FileReader     // Catch: java.lang.Throwable -> L28
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L28
            r3 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L28
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28
            r3.<init>()     // Catch: java.lang.Throwable -> L28
        L11:
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L20
            java.lang.String r2 = "\n"
            r3.append(r2)     // Catch: java.lang.Throwable -> L28
            r3.append(r1)     // Catch: java.lang.Throwable -> L28
            goto L11
        L20:
            r0.close()     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L28
            return r3
        L28:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            r3 = 0
            return r3
    }

    public static java.lang.Object readFromCache(java.lang.String r5) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L34
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L34
            boolean r5 = r1.exists()     // Catch: java.lang.Throwable -> L30
            if (r5 != 0) goto Ld
            return r0
        Ld:
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L30
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L30
            java.io.ObjectInputStream r2 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L2d
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r0 = r2.readObject()     // Catch: java.lang.Throwable -> L2b
            r5.close()     // Catch: java.lang.Throwable -> L22
            r2.close()     // Catch: java.lang.Throwable -> L22
            goto L54
        L22:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            goto L54
        L2b:
            r3 = move-exception
            goto L38
        L2d:
            r3 = move-exception
            r2 = r0
            goto L38
        L30:
            r3 = move-exception
            r5 = r0
            r2 = r5
            goto L38
        L34:
            r3 = move-exception
            r5 = r0
            r1 = r5
            r2 = r1
        L38:
            if (r1 == 0) goto L43
            boolean r4 = r1.exists()     // Catch: java.lang.Throwable -> L55
            if (r4 == 0) goto L43
            r1.delete()     // Catch: java.lang.Throwable -> L55
        L43:
            java.lang.String r1 = r3.getMessage()     // Catch: java.lang.Throwable -> L55
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L55
            if (r5 == 0) goto L4f
            r5.close()     // Catch: java.lang.Throwable -> L22
        L4f:
            if (r2 == 0) goto L54
            r2.close()     // Catch: java.lang.Throwable -> L22
        L54:
            return r0
        L55:
            r0 = move-exception
            if (r5 == 0) goto L5e
            r5.close()     // Catch: java.lang.Throwable -> L5c
            goto L5e
        L5c:
            r5 = move-exception
            goto L64
        L5e:
            if (r2 == 0) goto L6b
            r2.close()     // Catch: java.lang.Throwable -> L5c
            goto L6b
        L64:
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
        L6b:
            throw r0
    }

    public static void writeToBuffer(byte[] r2, java.lang.String r3) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L3e
            java.io.File r3 = r1.getParentFile()     // Catch: java.lang.Throwable -> L3e
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L3e
            if (r3 != 0) goto L17
            java.io.File r3 = r1.getParentFile()     // Catch: java.lang.Throwable -> L3e
            r3.mkdirs()     // Catch: java.lang.Throwable -> L3e
        L17:
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L3e
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L3e
            r3.write(r2)     // Catch: java.lang.Throwable -> L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            r2.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = "writeCache :"
            r2.append(r0)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r0 = r1.getName()     // Catch: java.lang.Throwable -> L3b
            r2.append(r0)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3b
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Throwable -> L3b
            r3.close()     // Catch: java.lang.Throwable -> L4c
            goto L54
        L3b:
            r2 = move-exception
            r0 = r3
            goto L3f
        L3e:
            r2 = move-exception
        L3f:
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L55
            com.czhj.sdk.logger.SigmobLog.e(r2)     // Catch: java.lang.Throwable -> L55
            if (r0 == 0) goto L54
            r0.close()     // Catch: java.lang.Throwable -> L4c
            goto L54
        L4c:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
        L54:
            return
        L55:
            r2 = move-exception
            if (r0 == 0) goto L64
            r0.close()     // Catch: java.lang.Throwable -> L5c
            goto L64
        L5c:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L64:
            throw r2
    }

    public static void writeToCache(java.lang.Object r3, java.lang.String r4) {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L49
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L49
            java.io.File r4 = r1.getParentFile()     // Catch: java.lang.Throwable -> L49
            boolean r4 = r4.exists()     // Catch: java.lang.Throwable -> L49
            if (r4 != 0) goto L17
            java.io.File r4 = r1.getParentFile()     // Catch: java.lang.Throwable -> L49
            r4.mkdirs()     // Catch: java.lang.Throwable -> L49
        L17:
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L49
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L49
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L45
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L45
            r2.writeObject(r3)     // Catch: java.lang.Throwable -> L43
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r3.<init>()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "writeCache :"
            r3.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r1.getName()     // Catch: java.lang.Throwable -> L43
            r3.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L43
            com.czhj.sdk.logger.SigmobLog.d(r3)     // Catch: java.lang.Throwable -> L43
            r4.close()     // Catch: java.lang.Throwable -> L58
            r2.close()     // Catch: java.lang.Throwable -> L58
            goto L67
        L43:
            r3 = move-exception
            goto L47
        L45:
            r3 = move-exception
            r2 = r0
        L47:
            r0 = r4
            goto L4b
        L49:
            r3 = move-exception
            r2 = r0
        L4b:
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L68
            com.czhj.sdk.logger.SigmobLog.e(r3)     // Catch: java.lang.Throwable -> L68
            if (r0 == 0) goto L5a
            r0.close()     // Catch: java.lang.Throwable -> L58
            goto L5a
        L58:
            r3 = move-exception
            goto L60
        L5a:
            if (r2 == 0) goto L67
            r2.close()     // Catch: java.lang.Throwable -> L58
            goto L67
        L60:
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L67:
            return
        L68:
            r3 = move-exception
            if (r0 == 0) goto L71
            r0.close()     // Catch: java.lang.Throwable -> L6f
            goto L71
        L6f:
            r4 = move-exception
            goto L77
        L71:
            if (r2 == 0) goto L7e
            r2.close()     // Catch: java.lang.Throwable -> L6f
            goto L7e
        L77:
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L7e:
            throw r3
    }
}
