package com.huawei.hms.framework.common;

public class CreateFileUtil {
    private static final java.lang.String EXTERNAL_FILE_NAME = "com.huawei.libcore.io.ExternalStorageFile";
    private static final java.lang.String EXTERNAL_INPUTSTREAM_NAME = "com.huawei.libcore.io.ExternalStorageFileInputStream";
    private static final java.lang.String EXTERNAL_OUTPUTSTREAM_NAME = "com.huawei.libcore.io.ExternalStorageFileOutputStream";
    private static final java.lang.String RANDOM_ACCESS_FILE_NAME = "com.huawei.libcore.io.ExternalStorageRandomAccessFile";
    private static final java.lang.String TAG = "CreateFileUtil";

    public CreateFileUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void deleteSecure(java.io.File r1) {
            if (r1 == 0) goto L15
            boolean r0 = r1.exists()
            if (r0 == 0) goto L15
            boolean r1 = r1.delete()
            if (r1 != 0) goto L15
            java.lang.String r1 = "CreateFileUtil"
            java.lang.String r0 = "deleteSecure exception"
            com.huawei.hms.framework.common.Logger.w(r1, r0)
        L15:
            return
    }

    public static void deleteSecure(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Ld
            java.io.File r1 = newFile(r1)
            deleteSecure(r1)
        Ld:
            return
    }

    public static java.lang.String getCacheDirPath(android.content.Context r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            android.content.Context r0 = com.huawei.hms.framework.common.ContextCompat.getProtectedStorageContext(r0)
            java.io.File r0 = r0.getCacheDir()
            java.lang.String r0 = r0.getPath()
            return r0
    }

    public static java.lang.String getCanonicalPath(java.lang.String r3) {
            java.lang.String r0 = "CreateFileUtil"
            java.io.File r1 = newFile(r3)     // Catch: java.lang.Exception -> Lb java.lang.SecurityException -> L12 java.io.IOException -> L19
            java.lang.String r3 = r1.getCanonicalPath()     // Catch: java.lang.Exception -> Lb java.lang.SecurityException -> L12 java.io.IOException -> L19
            goto L1f
        Lb:
            r1 = move-exception
            java.lang.String r2 = "the canonicalPath has other Exception"
            com.huawei.hms.framework.common.Logger.w(r0, r2, r1)
            goto L1f
        L12:
            r1 = move-exception
            java.lang.String r2 = "the canonicalPath has securityException"
            com.huawei.hms.framework.common.Logger.w(r0, r2, r1)
            goto L1f
        L19:
            r1 = move-exception
            java.lang.String r2 = "the canonicalPath has IOException"
            com.huawei.hms.framework.common.Logger.w(r0, r2, r1)
        L1f:
            return r3
    }

    @java.lang.Deprecated
    public static boolean isPVersion() {
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            return r0
    }

    public static java.io.File newFile(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            if (r0 == 0) goto L18
            java.lang.String r0 = "com.huawei.libcore.io.ExternalStorageFile"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            if (r0 == 0) goto L18
            com.huawei.libcore.io.ExternalStorageFile r0 = new com.huawei.libcore.io.ExternalStorageFile
            r0.<init>(r1)
            return r0
        L18:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            return r0
    }

    public static java.io.FileInputStream newFileInputStream(java.lang.String r1) throws java.io.FileNotFoundException {
            if (r1 == 0) goto L1c
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            if (r0 == 0) goto L16
            java.lang.String r0 = "com.huawei.libcore.io.ExternalStorageFileInputStream"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            if (r0 == 0) goto L16
            com.huawei.libcore.io.ExternalStorageFileInputStream r0 = new com.huawei.libcore.io.ExternalStorageFileInputStream
            r0.<init>(r1)
            return r0
        L16:
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            return r0
        L1c:
            java.lang.String r1 = "CreateFileUtil"
            java.lang.String r0 = "newFileInputStream  file is null"
            com.huawei.hms.framework.common.Logger.w(r1, r0)
            java.io.FileNotFoundException r1 = new java.io.FileNotFoundException
            java.lang.String r0 = "file is null"
            r1.<init>(r0)
            throw r1
    }

    public static java.io.FileOutputStream newFileOutputStream(java.io.File r1) throws java.io.FileNotFoundException {
            if (r1 == 0) goto L1c
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            if (r0 == 0) goto L16
            java.lang.String r0 = "com.huawei.libcore.io.ExternalStorageFileOutputStream"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            if (r0 == 0) goto L16
            com.huawei.libcore.io.ExternalStorageFileOutputStream r0 = new com.huawei.libcore.io.ExternalStorageFileOutputStream
            r0.<init>(r1)
            return r0
        L16:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1)
            return r0
        L1c:
            java.lang.String r1 = "CreateFileUtil"
            java.lang.String r0 = "newFileOutputStream  file is null"
            com.huawei.hms.framework.common.Logger.e(r1, r0)
            java.io.FileNotFoundException r1 = new java.io.FileNotFoundException
            java.lang.String r0 = "file is null"
            r1.<init>(r0)
            throw r1
    }

    public static java.io.RandomAccessFile newRandomAccessFile(java.lang.String r1, java.lang.String r2) throws java.io.FileNotFoundException {
            if (r1 == 0) goto L1c
            boolean r0 = com.huawei.hms.framework.common.EmuiUtil.isUpPVersion()
            if (r0 == 0) goto L16
            java.lang.String r0 = "com.huawei.libcore.io.ExternalStorageRandomAccessFile"
            boolean r0 = com.huawei.hms.framework.common.ReflectionUtils.checkCompatible(r0)
            if (r0 == 0) goto L16
            com.huawei.libcore.io.ExternalStorageRandomAccessFile r0 = new com.huawei.libcore.io.ExternalStorageRandomAccessFile
            r0.<init>(r1, r2)
            return r0
        L16:
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            r0.<init>(r1, r2)
            return r0
        L1c:
            java.lang.String r1 = "CreateFileUtil"
            java.lang.String r2 = "newFileOutputStream  file is null"
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            java.io.FileNotFoundException r1 = new java.io.FileNotFoundException
            java.lang.String r2 = "file is null"
            r1.<init>(r2)
            throw r1
    }
}
