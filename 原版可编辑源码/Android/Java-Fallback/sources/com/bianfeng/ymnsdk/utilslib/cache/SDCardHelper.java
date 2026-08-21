package com.bianfeng.ymnsdk.utilslib.cache;

public final class SDCardHelper {
    public SDCardHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static java.lang.String getFilesDir(android.content.Context r1) {
            java.io.File r0 = r1.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getInsideFilePath(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            java.io.File r0 = r4.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L25
            r1.mkdir()
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r1.getAbsolutePath()
            r2.append(r3)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            return r2
    }

    protected static java.lang.String getSDCardBaseDir() {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.isAgreeprivacy()
            r1 = 0
            if (r0 != 0) goto Lf
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r2 = "state of showDebugLog is isAgreeprivacy"
            r0.println(r2)
            return r1
        Lf:
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L1e
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
        L1e:
            return r1
    }

    protected static java.lang.String getSDCardPrivateCacheDir(android.content.Context r1) {
            java.io.File r0 = r1.getExternalCacheDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getSDCardPrivateFilesDir(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = r1.getExternalFilesDir(r2)
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getSDCardPublicDir(java.lang.String r1) {
            java.io.File r0 = android.os.Environment.getExternalStoragePublicDirectory(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static boolean isFileExist(java.lang.String r3) {
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "state of showDebugLog is "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.isFile()
            return r1
    }

    protected static boolean isSDCardMounted() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }

    protected static android.graphics.Bitmap loadBitmapFromSDCard(android.content.Context r3, java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            byte[] r0 = loadFileFromSDCard(r3, r4)
            if (r0 == 0) goto Lf
            r1 = 0
            int r2 = r0.length
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeByteArray(r0, r1, r2)
            if (r1 == 0) goto Lf
            return r1
        Lf:
            r1 = 0
            return r1
    }

    protected static byte[] loadFileFromSDCard(android.content.Context r7, java.lang.String r8) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.READ_EXTERNAL_STORAGE"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r7)
            if (r0 == 0) goto L75
            boolean r0 = isFileExist(r8)
            if (r0 == 0) goto L5e
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r4.<init>(r8)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0 = r2
            r2 = 8192(0x2000, float:1.148E-41)
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3 = 0
            r4 = r3
        L2a:
            int r5 = r0.read(r2)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r4 = r5
            r6 = -1
            if (r5 == r6) goto L39
            r1.write(r2, r3, r4)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r1.flush()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            goto L2a
        L39:
            byte[] r3 = r1.toByteArray()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r1.close()     // Catch: java.io.IOException -> L44
            r0.close()     // Catch: java.io.IOException -> L44
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return r3
        L49:
            r2 = move-exception
            goto L52
        L4b:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L49
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L49
            throw r3     // Catch: java.lang.Throwable -> L49
        L52:
            r1.close()     // Catch: java.io.IOException -> L59
            r0.close()     // Catch: java.io.IOException -> L59
            goto L5d
        L59:
            r3 = move-exception
            r3.printStackTrace()
        L5d:
            throw r2
        L5e:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            java.lang.String r2 = "no file"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L75:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = "no permission read"
            r0.<init>(r1)
            throw r0
    }

    protected static void removeFileFromSDCard(java.lang.String r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            r0.delete()     // Catch: java.lang.Exception -> Lf
            goto L16
        Lf:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r2 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r2.<init>(r1)
            throw r2
        L16:
            return
    }

    protected static boolean saveBitmapToSDCardPrivateCacheDir(android.graphics.Bitmap r5, java.lang.String r6, android.content.Context r7) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L5d
            r0 = 0
            java.io.File r1 = r7.getExternalCacheDir()
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r4.<init>(r1, r6)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0 = r2
            r2 = 100
            if (r6 == 0) goto L35
            java.lang.String r3 = ".png"
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            if (r3 != 0) goto L2f
            java.lang.String r3 = ".PNG"
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            if (r3 == 0) goto L35
        L2f:
            android.graphics.Bitmap$CompressFormat r3 = android.graphics.Bitmap.CompressFormat.PNG     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r5.compress(r3, r2, r0)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            goto L3a
        L35:
            android.graphics.Bitmap$CompressFormat r3 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r5.compress(r3, r2, r0)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
        L3a:
            r0.flush()     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4b
            r0.close()     // Catch: java.io.IOException -> L42
        L41:
            goto L47
        L42:
            r2 = move-exception
            r2.printStackTrace()
            goto L41
        L47:
            r2 = 1
            return r2
        L49:
            r2 = move-exception
            goto L52
        L4b:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L49
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L49
            throw r3     // Catch: java.lang.Throwable -> L49
        L52:
            if (r0 == 0) goto L5c
            r0.close()     // Catch: java.io.IOException -> L58
            goto L5c
        L58:
            r3 = move-exception
            r3.printStackTrace()
        L5c:
            throw r2
        L5d:
            r0 = 0
            return r0
    }

    protected static boolean saveFileToSDCardCustomDir(android.content.Context r5, byte[] r6, java.lang.String r7, java.lang.String r8) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r5)
            if (r0 == 0) goto L69
            r0 = 0
            boolean r1 = isSDCardMounted()
            if (r1 == 0) goto L67
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = getSDCardBaseDir()
            r2.append(r3)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r7)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            boolean r2 = r1.exists()
            if (r2 != 0) goto L35
            r1.mkdirs()
        L35:
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r4.<init>(r1, r8)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r0 = r2
            r0.write(r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r0.flush()     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L57
            r2 = 1
            r0.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r3 = move-exception
            r3.printStackTrace()
        L54:
            return r2
        L55:
            r2 = move-exception
            goto L5e
        L57:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L55
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L55
            throw r3     // Catch: java.lang.Throwable -> L55
        L5e:
            r0.close()     // Catch: java.io.IOException -> L62
            goto L66
        L62:
            r3 = move-exception
            r3.printStackTrace()
        L66:
            throw r2
        L67:
            r1 = 0
            return r1
        L69:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = "no permission read"
            r0.<init>(r1)
            throw r0
    }

    protected static boolean saveFileToSDCardPrivateCacheDir(byte[] r5, java.lang.String r6, android.content.Context r7) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r0 = 0
            boolean r1 = isSDCardMounted()
            if (r1 == 0) goto L3d
            java.io.File r1 = r7.getExternalCacheDir()
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r4.<init>(r1, r6)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0 = r2
            r0.write(r5)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.flush()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r2 = 1
            r0.close()     // Catch: java.io.IOException -> L26
            goto L2a
        L26:
            r3 = move-exception
            r3.printStackTrace()
        L2a:
            return r2
        L2b:
            r2 = move-exception
            goto L34
        L2d:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L2b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2b
            throw r3     // Catch: java.lang.Throwable -> L2b
        L34:
            r0.close()     // Catch: java.io.IOException -> L38
            goto L3c
        L38:
            r3 = move-exception
            r3.printStackTrace()
        L3c:
            throw r2
        L3d:
            r1 = 0
            return r1
    }

    protected static boolean saveFileToSDCardPrivateFilesDir(byte[] r5, java.lang.String r6, java.lang.String r7, android.content.Context r8) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r0 = 0
            boolean r1 = isSDCardMounted()
            if (r1 == 0) goto L3d
            java.io.File r1 = r8.getExternalFilesDir(r6)
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r4.<init>(r1, r7)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0 = r2
            r0.write(r5)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r0.flush()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L2d
            r2 = 1
            r0.close()     // Catch: java.io.IOException -> L26
            goto L2a
        L26:
            r3 = move-exception
            r3.printStackTrace()
        L2a:
            return r2
        L2b:
            r2 = move-exception
            goto L34
        L2d:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L2b
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L2b
            throw r3     // Catch: java.lang.Throwable -> L2b
        L34:
            r0.close()     // Catch: java.io.IOException -> L38
            goto L3c
        L38:
            r3 = move-exception
            r3.printStackTrace()
        L3c:
            throw r2
        L3d:
            r1 = 0
            return r1
    }

    protected static boolean saveFileToSDCardPublicDir(android.content.Context r5, byte[] r6, java.lang.String r7, java.lang.String r8) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r5)
            if (r0 == 0) goto L4c
            r0 = 0
            boolean r1 = isSDCardMounted()
            if (r1 == 0) goto L4a
            java.io.File r1 = android.os.Environment.getExternalStoragePublicDirectory(r7)
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r4.<init>(r1, r8)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r0 = r2
            r0.write(r6)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r0.flush()     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L36
            r2 = 1
            r0.close()     // Catch: java.io.IOException -> L2f
            goto L33
        L2f:
            r3 = move-exception
            r3.printStackTrace()
        L33:
            return r2
        L34:
            r2 = move-exception
            goto L3d
        L36:
            r2 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L34
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L34
            throw r3     // Catch: java.lang.Throwable -> L34
        L3d:
            if (r0 == 0) goto L48
            r0.close()     // Catch: java.io.IOException -> L43
            goto L48
        L43:
            r3 = move-exception
            r3.printStackTrace()
            goto L49
        L48:
        L49:
            throw r2
        L4a:
            r1 = 0
            return r1
        L4c:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r1 = "no permission read"
            r0.<init>(r1)
            throw r0
    }
}
