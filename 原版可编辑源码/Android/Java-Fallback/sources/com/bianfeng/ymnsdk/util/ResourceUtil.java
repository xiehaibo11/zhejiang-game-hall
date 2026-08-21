package com.bianfeng.ymnsdk.util;

public class ResourceUtil {
    private static final java.lang.String FILE_NAME_CFG = "ymncfgs";

    public ResourceUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] InputStreamToByte(java.io.InputStream r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L22
            r0.<init>()     // Catch: java.lang.Exception -> L22
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L22
        L9:
            int r2 = r4.read(r1)     // Catch: java.lang.Exception -> L22
            r3 = -1
            if (r2 == r3) goto L14
            r0.write(r1)     // Catch: java.lang.Exception -> L22
            goto L9
        L14:
            r4.close()     // Catch: java.lang.Exception -> L22
            byte[] r2 = r0.toByteArray()     // Catch: java.lang.Exception -> L22
            r0.flush()     // Catch: java.lang.Exception -> L22
            r0.close()     // Catch: java.lang.Exception -> L22
            return r2
        L22:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 0
            return r1
    }

    public static boolean assetFileExist(android.content.Context r6, java.lang.String r7) {
            android.content.res.AssetManager r0 = r6.getAssets()
            r1 = 0
            java.lang.String r2 = ""
            java.lang.String[] r2 = r0.list(r2)     // Catch: java.io.IOException -> L21
            r3 = r1
        Lc:
            int r4 = r2.length     // Catch: java.io.IOException -> L21
            if (r3 >= r4) goto L20
            r4 = r2[r3]     // Catch: java.io.IOException -> L21
            java.lang.String r5 = r7.trim()     // Catch: java.io.IOException -> L21
            boolean r4 = r4.equals(r5)     // Catch: java.io.IOException -> L21
            if (r4 == 0) goto L1d
            r1 = 1
            return r1
        L1d:
            int r3 = r3 + 1
            goto Lc
        L20:
            goto L25
        L21:
            r2 = move-exception
            r2.printStackTrace()
        L25:
            return r1
    }

    public static boolean deleteFile(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
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

    public static java.lang.String getAppDataDir(android.content.Context r3) {
            java.io.File r0 = r3.getCacheDir()
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.getParent()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
        L1c:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "/data/data/"
            r1.append(r2)
            java.lang.String r2 = r3.getPackageName()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static java.lang.String getFileNameByUrl(java.lang.String r2) {
            java.lang.String r0 = "/"
            int r0 = r2.lastIndexOf(r0)
            int r0 = r0 + 1
            int r1 = r2.length()
            java.lang.String r0 = r2.substring(r0, r1)
            return r0
    }

    public static java.lang.String getFolder(java.lang.String r5) {
            java.lang.String r0 = java.io.File.separator
            java.lang.String[] r0 = r5.split(r0)
            int r1 = r0.length
            if (r1 > 0) goto Lb
            r1 = 0
            return r1
        Lb:
            int r1 = r5.length()
            int r2 = r0.length
            int r2 = r2 + (-1)
            r2 = r0[r2]
            int r2 = r2.length()
            r3 = 0
            int r4 = r1 - r2
            java.lang.String r3 = r5.substring(r3, r4)
            return r3
    }

    public static java.lang.String getSdcardPath() {
            java.lang.String r0 = ""
            return r0
    }

    public static boolean isSdcardFileExist(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = getSdcardPath()
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            return r1
    }

    public static boolean isSdcardReady() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }

    public static void mkFileDirs(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Le
            r0.mkdirs()
        Le:
            return
    }

    public static java.lang.String readPreferences(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "ymncfgs"
            r1 = 0
            android.content.SharedPreferences r0 = r2.getSharedPreferences(r0, r1)
            r1 = 0
            java.lang.String r1 = r0.getString(r3, r1)
            return r1
    }

    public static void removePreferences(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "ymncfgs"
            r1 = 0
            android.content.SharedPreferences r0 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            android.content.SharedPreferences$Editor r1 = r1.remove(r3)
            r1.commit()
            return
    }

    public static boolean retrieveFileFromAssets(android.content.Context r7, java.lang.String r8, java.lang.String r9) {
            r0 = 0
            r1 = 0
            r2 = 0
            android.content.res.AssetManager r3 = r7.getAssets()     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            java.io.InputStream r3 = r3.open(r8)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r0 = r3
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r3.createNewFile()     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r1 = r4
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r5 = r2
        L1f:
            int r6 = r0.read(r4)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r5 = r6
            if (r6 <= 0) goto L2a
            r1.write(r4, r2, r5)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            goto L1f
        L2a:
            r2 = 1
            r1.close()     // Catch: java.io.IOException -> L30
            goto L31
        L30:
            r6 = move-exception
        L31:
            if (r0 == 0) goto L39
            r0.close()     // Catch: java.io.IOException -> L37
            goto L39
        L37:
            r6 = move-exception
            goto L3a
        L39:
        L3a:
            return r2
        L3b:
            r2 = move-exception
            goto L54
        L3d:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L49
            r1.close()     // Catch: java.io.IOException -> L47
            goto L49
        L47:
            r3 = move-exception
            goto L4a
        L49:
        L4a:
            if (r0 == 0) goto L52
            r0.close()     // Catch: java.io.IOException -> L50
            goto L52
        L50:
            r3 = move-exception
            goto L53
        L52:
        L53:
            return r2
        L54:
            if (r1 == 0) goto L5c
            r1.close()     // Catch: java.io.IOException -> L5a
            goto L5c
        L5a:
            r3 = move-exception
            goto L5d
        L5c:
        L5d:
            if (r0 == 0) goto L65
            r0.close()     // Catch: java.io.IOException -> L63
            goto L65
        L63:
            r3 = move-exception
            goto L66
        L65:
        L66:
            throw r2
    }

    public static void savePreferences(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "ymncfgs"
            r1 = 0
            android.content.SharedPreferences r0 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r1 = r0.edit()
            android.content.SharedPreferences$Editor r1 = r1.putString(r3, r4)
            r1.commit()
            return
    }
}
