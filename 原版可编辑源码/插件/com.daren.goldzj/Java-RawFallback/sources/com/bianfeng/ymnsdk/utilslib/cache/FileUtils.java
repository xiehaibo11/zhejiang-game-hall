package com.bianfeng.ymnsdk.utilslib.cache;

public final class FileUtils {
    private static java.lang.String UTILS_FILE_DIR = "bianfeng";
    private static android.content.Context mContext;

    static {
            return
    }

    public FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getFilesDir() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getFilesDir(r0)
            return r0
    }

    public static java.lang.String getInsideFilePath(java.lang.String r2) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            java.lang.String r2 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getInsideFilePath(r0, r1, r2)
            return r2
    }

    public static java.lang.String getSDCardBaseDir() {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getSDCardBaseDir()
            return r0
    }

    public static java.lang.String getSDCardPrivateCacheDir() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getSDCardPrivateCacheDir(r0)
            return r0
    }

    public static java.lang.String getSDCardPrivateFilesDir() {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getSDCardPrivateFilesDir(r0, r1)
            return r0
    }

    public static java.lang.String getSDCardPublicDir() {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.getSDCardPublicDir(r0)
            return r0
    }

    public static void init(android.content.Context r0) {
            com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext = r0
            return
    }

    public static boolean isFileExist(java.lang.String r0) {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.isFileExist(r0)
            return r0
    }

    public static boolean isFileExistInSdCard(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardBaseDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.isFileExist(r2)
            return r2
    }

    public static boolean isSDCardMounted() {
            boolean r0 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.isSDCardMounted()
            return r0
    }

    public static android.graphics.Bitmap loadBitmapFromSDCard(java.lang.String r1) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L7
            android.graphics.Bitmap r1 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.loadBitmapFromSDCard(r0, r1)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static byte[] loadFileFromSDCard(java.lang.String r1) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L7
            byte[] r1 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.loadFileFromSDCard(r0, r1)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static android.graphics.Bitmap readBitmapToSDCardPrivateCacheDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateCacheDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.graphics.Bitmap r2 = loadBitmapFromSDCard(r2)
            return r2
    }

    public static byte[] readFileToSDCardCustomDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardBaseDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            byte[] r2 = loadFileFromSDCard(r2)
            return r2
    }

    public static byte[] readFileToSDCardPrivateCacheDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateCacheDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            byte[] r2 = loadFileFromSDCard(r2)
            return r2
    }

    public static byte[] readFileToSDCardPrivateFilesDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateFilesDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            byte[] r2 = loadFileFromSDCard(r2)
            return r2
    }

    public static byte[] readFileToSDCardPublicDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPublicDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            byte[] r2 = loadFileFromSDCard(r2)
            return r2
    }

    public static boolean removeBitmapToSDCardPrivateCacheDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateCacheDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean removeFileFromSDCard(java.lang.String r0) {
            com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.removeFileFromSDCard(r0)     // Catch: java.lang.Exception -> L5
            r0 = 1
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static boolean removeFileToSDCardCustomDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardBaseDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean removeFileToSDCardPrivateCacheDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateCacheDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean removeFileToSDCardPrivateFilesDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPrivateFilesDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean removeFileToSDCardPublicDir(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getSDCardPublicDir()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean removeInsideFile(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = getFilesDir()
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            boolean r2 = removeFileFromSDCard(r2)
            return r2
    }

    public static boolean saveBitmapToSDCardPrivateCacheDir(android.graphics.Bitmap r1, java.lang.String r2) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L7
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.saveBitmapToSDCardPrivateCacheDir(r1, r2, r0)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static boolean saveFileToSDCardCustomDir(byte[] r2, java.lang.String r3) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L9
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR     // Catch: java.lang.Exception -> L9
            boolean r2 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.saveFileToSDCardCustomDir(r0, r2, r1, r3)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public static boolean saveFileToSDCardPrivateCacheDir(byte[] r1, java.lang.String r2) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L7
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.saveFileToSDCardPrivateCacheDir(r1, r2, r0)     // Catch: java.lang.Exception -> L7
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static boolean saveFileToSDCardPrivateFilesDir(byte[] r2, java.lang.String r3) {
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR     // Catch: java.lang.Exception -> L9
            android.content.Context r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L9
            boolean r2 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.saveFileToSDCardPrivateFilesDir(r2, r0, r3, r1)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = 0
            return r2
    }

    public static boolean saveFileToSDCardPublicDir(byte[] r2, java.lang.String r3) {
            android.content.Context r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.mContext     // Catch: java.lang.Exception -> L9
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.UTILS_FILE_DIR     // Catch: java.lang.Exception -> L9
            boolean r2 = com.bianfeng.ymnsdk.utilslib.cache.SDCardHelper.saveFileToSDCardPublicDir(r0, r2, r1, r3)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }
}
