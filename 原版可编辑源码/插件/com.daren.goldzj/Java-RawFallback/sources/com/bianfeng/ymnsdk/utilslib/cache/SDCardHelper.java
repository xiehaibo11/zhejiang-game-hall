package com.bianfeng.ymnsdk.utilslib.cache;

public final class SDCardHelper {
    public SDCardHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static java.lang.String getFilesDir(android.content.Context r0) {
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getInsideFilePath(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getAbsolutePath()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L25
            r0.mkdir()
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r0.getAbsolutePath()
            r2.append(r3)
            java.lang.String r3 = java.io.File.separator
            r2.append(r3)
            r2.append(r4)
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

    protected static java.lang.String getSDCardPrivateCacheDir(android.content.Context r0) {
            java.io.File r0 = r0.getExternalCacheDir()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getSDCardPrivateFilesDir(android.content.Context r0, java.lang.String r1) {
            java.io.File r0 = r0.getExternalFilesDir(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    protected static java.lang.String getSDCardPublicDir(java.lang.String r0) {
            java.io.File r0 = android.os.Environment.getExternalStoragePublicDirectory(r0)
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
            boolean r3 = r0.isFile()
            return r3
    }

    protected static boolean isSDCardMounted() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }

    protected static android.graphics.Bitmap loadBitmapFromSDCard(android.content.Context r1, java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            byte[] r1 = loadFileFromSDCard(r1, r2)
            if (r1 == 0) goto Lf
            r2 = 0
            int r0 = r1.length
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeByteArray(r1, r2, r0)
            if (r1 == 0) goto Lf
            return r1
        Lf:
            r1 = 0
            return r1
    }

    protected static byte[] loadFileFromSDCard(android.content.Context r4, java.lang.String r5) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.READ_EXTERNAL_STORAGE"
            boolean r4 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r4)
            if (r4 == 0) goto L7a
            boolean r4 = isFileExist(r5)
            if (r4 == 0) goto L63
            r4 = 0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4a
        L27:
            int r5 = r1.read(r4)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4a
            r2 = -1
            if (r5 == r2) goto L36
            r2 = 0
            r0.write(r4, r2, r5)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4a
            r0.flush()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4a
            goto L27
        L36:
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L4a
            r0.close()     // Catch: java.io.IOException -> L41
            r1.close()     // Catch: java.io.IOException -> L41
            goto L45
        L41:
            r5 = move-exception
            r5.printStackTrace()
        L45:
            return r4
        L46:
            r4 = move-exception
            r5 = r4
            r4 = r1
            goto L57
        L4a:
            r4 = move-exception
            r5 = r4
            r4 = r1
            goto L51
        L4e:
            r5 = move-exception
            goto L57
        L50:
            r5 = move-exception
        L51:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L4e
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L4e
            throw r1     // Catch: java.lang.Throwable -> L4e
        L57:
            r0.close()     // Catch: java.io.IOException -> L5e
            r4.close()     // Catch: java.io.IOException -> L5e
            goto L62
        L5e:
            r4 = move-exception
            r4.printStackTrace()
        L62:
            throw r5
        L63:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = "no file"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
        L7a:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r5 = "no permission read"
            r4.<init>(r5)
            throw r4
    }

    protected static void removeFileFromSDCard(java.lang.String r1) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            r0.delete()     // Catch: java.lang.Exception -> Lf
            goto L16
        Lf:
            r1 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r1)
            throw r0
        L16:
            return
    }

    protected static boolean saveBitmapToSDCardPrivateCacheDir(android.graphics.Bitmap r4, java.lang.String r5, android.content.Context r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L60
            r0 = 0
            java.io.File r6 = r6.getExternalCacheDir()
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r3.<init>(r6, r5)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            r6 = 100
            if (r5 == 0) goto L34
            java.lang.String r0 = ".png"
            boolean r0 = r5.contains(r0)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            if (r0 != 0) goto L2e
            java.lang.String r0 = ".PNG"
            boolean r5 = r5.contains(r0)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            if (r5 == 0) goto L34
        L2e:
            android.graphics.Bitmap$CompressFormat r5 = android.graphics.Bitmap.CompressFormat.PNG     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            r4.compress(r5, r6, r1)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            goto L39
        L34:
            android.graphics.Bitmap$CompressFormat r5 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            r4.compress(r5, r6, r1)     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
        L39:
            r1.flush()     // Catch: java.lang.Throwable -> L46 java.lang.Exception -> L49
            r1.close()     // Catch: java.io.IOException -> L40
            goto L44
        L40:
            r4 = move-exception
            r4.printStackTrace()
        L44:
            r4 = 1
            return r4
        L46:
            r4 = move-exception
            r0 = r1
            goto L55
        L49:
            r4 = move-exception
            r0 = r1
            goto L4f
        L4c:
            r4 = move-exception
            goto L55
        L4e:
            r4 = move-exception
        L4f:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r5 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L4c
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L4c
            throw r5     // Catch: java.lang.Throwable -> L4c
        L55:
            if (r0 == 0) goto L5f
            r0.close()     // Catch: java.io.IOException -> L5b
            goto L5f
        L5b:
            r5 = move-exception
            r5.printStackTrace()
        L5f:
            throw r4
        L60:
            r4 = 0
            return r4
    }

    protected static boolean saveFileToSDCardCustomDir(android.content.Context r3, byte[] r4, java.lang.String r5, java.lang.String r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r3)
            if (r3 == 0) goto L70
            r3 = 0
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L6e
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = getSDCardBaseDir()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            boolean r5 = r0.exists()
            if (r5 != 0) goto L35
            r0.mkdirs()
        L35:
            java.io.BufferedOutputStream r5 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r2.<init>(r0, r6)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L5c java.lang.Exception -> L5e
            r5.write(r4)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L58
            r5.flush()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L58
            r3 = 1
            r5.close()     // Catch: java.io.IOException -> L4f
            goto L53
        L4f:
            r4 = move-exception
            r4.printStackTrace()
        L53:
            return r3
        L54:
            r3 = move-exception
            r4 = r3
            r3 = r5
            goto L65
        L58:
            r3 = move-exception
            r4 = r3
            r3 = r5
            goto L5f
        L5c:
            r4 = move-exception
            goto L65
        L5e:
            r4 = move-exception
        L5f:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r5 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L5c
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L5c
            throw r5     // Catch: java.lang.Throwable -> L5c
        L65:
            r3.close()     // Catch: java.io.IOException -> L69
            goto L6d
        L69:
            r3 = move-exception
            r3.printStackTrace()
        L6d:
            throw r4
        L6e:
            r3 = 0
            return r3
        L70:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r4 = "no permission read"
            r3.<init>(r4)
            throw r3
    }

    protected static boolean saveFileToSDCardPrivateCacheDir(byte[] r4, java.lang.String r5, android.content.Context r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L42
            java.io.File r6 = r6.getExternalCacheDir()
            r0 = 0
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r3.<init>(r6, r5)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r1.write(r4)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r1.flush()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r4 = 1
            r1.close()     // Catch: java.io.IOException -> L25
            goto L29
        L25:
            r5 = move-exception
            r5.printStackTrace()
        L29:
            return r4
        L2a:
            r4 = move-exception
            r0 = r1
            goto L39
        L2d:
            r4 = move-exception
            r0 = r1
            goto L33
        L30:
            r4 = move-exception
            goto L39
        L32:
            r4 = move-exception
        L33:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r5 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L30
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L30
            throw r5     // Catch: java.lang.Throwable -> L30
        L39:
            r0.close()     // Catch: java.io.IOException -> L3d
            goto L41
        L3d:
            r5 = move-exception
            r5.printStackTrace()
        L41:
            throw r4
        L42:
            r4 = 0
            return r4
    }

    protected static boolean saveFileToSDCardPrivateFilesDir(byte[] r3, java.lang.String r4, java.lang.String r5, android.content.Context r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L42
            java.io.File r4 = r6.getExternalFilesDir(r4)
            r6 = 0
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L30 java.lang.Exception -> L32
            r0.write(r3)     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r0.flush()     // Catch: java.lang.Throwable -> L2a java.lang.Exception -> L2d
            r3 = 1
            r0.close()     // Catch: java.io.IOException -> L25
            goto L29
        L25:
            r4 = move-exception
            r4.printStackTrace()
        L29:
            return r3
        L2a:
            r3 = move-exception
            r6 = r0
            goto L39
        L2d:
            r3 = move-exception
            r6 = r0
            goto L33
        L30:
            r3 = move-exception
            goto L39
        L32:
            r3 = move-exception
        L33:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r4 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L30
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L30
            throw r4     // Catch: java.lang.Throwable -> L30
        L39:
            r6.close()     // Catch: java.io.IOException -> L3d
            goto L41
        L3d:
            r4 = move-exception
            r4.printStackTrace()
        L41:
            throw r3
        L42:
            r3 = 0
            return r3
    }

    protected static boolean saveFileToSDCardPublicDir(android.content.Context r3, byte[] r4, java.lang.String r5, java.lang.String r6) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.check(r0, r3)
            if (r3 == 0) goto L50
            r3 = 0
            boolean r0 = isSDCardMounted()
            if (r0 == 0) goto L4e
            java.io.File r5 = android.os.Environment.getExternalStoragePublicDirectory(r5)
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r2.<init>(r5, r6)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3a java.lang.Exception -> L3c
            r0.write(r4)     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L36
            r0.flush()     // Catch: java.lang.Throwable -> L32 java.lang.Exception -> L36
            r3 = 1
            r0.close()     // Catch: java.io.IOException -> L2d
            goto L31
        L2d:
            r4 = move-exception
            r4.printStackTrace()
        L31:
            return r3
        L32:
            r3 = move-exception
            r4 = r3
            r3 = r0
            goto L43
        L36:
            r3 = move-exception
            r4 = r3
            r3 = r0
            goto L3d
        L3a:
            r4 = move-exception
            goto L43
        L3c:
            r4 = move-exception
        L3d:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r5 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException     // Catch: java.lang.Throwable -> L3a
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L3a
            throw r5     // Catch: java.lang.Throwable -> L3a
        L43:
            if (r3 == 0) goto L4d
            r3.close()     // Catch: java.io.IOException -> L49
            goto L4d
        L49:
            r3 = move-exception
            r3.printStackTrace()
        L4d:
            throw r4
        L4e:
            r3 = 0
            return r3
        L50:
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r3 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            java.lang.String r4 = "no permission read"
            r3.<init>(r4)
            throw r3
    }
}
