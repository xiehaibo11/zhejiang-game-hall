package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.graphics.Bitmap;
import java.io.File;

public final class FileUtils {
    private static String UTILS_FILE_DIR = "bianfeng";
    private static Context mContext;

    static {
    }

    public FileUtils() {
    }

    public static void init(Context r0) {
        mContext = r0;
    }

    public static boolean isSDCardMounted() {
        return SDCardHelper.isSDCardMounted();
    }

    public static String getSDCardBaseDir() {
        return SDCardHelper.getSDCardBaseDir();
    }

    public static boolean saveFileToSDCardPublicDir(byte[] r2, String r3) {
        return SDCardHelper.saveFileToSDCardPublicDir(mContext, r2, UTILS_FILE_DIR, r3);
    L4:
        e = move-exception;
        e.printStackTrace();
        return false;
    }

    public static byte[] readFileToSDCardPublicDir(String r2) {
        return loadFileFromSDCard(getSDCardPublicDir() + File.separator + r2);
    }

    public static boolean removeFileToSDCardPublicDir(String r2) {
        return removeFileFromSDCard(getSDCardPublicDir() + File.separator + r2);
    }

    public static boolean saveFileToSDCardCustomDir(byte[] r2, String r3) {
        return SDCardHelper.saveFileToSDCardCustomDir(mContext, r2, UTILS_FILE_DIR, r3);
    L4:
        return false;
    }

    public static byte[] readFileToSDCardCustomDir(String r2) {
        return loadFileFromSDCard(getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + r2);
    }

    public static boolean removeFileToSDCardCustomDir(String r2) {
        return removeFileFromSDCard(getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + r2);
    }

    public static boolean saveFileToSDCardPrivateFilesDir(byte[] r2, String r3) {
        return SDCardHelper.saveFileToSDCardPrivateFilesDir(r2, UTILS_FILE_DIR, r3, mContext);
    L4:
        return false;
    }

    public static byte[] readFileToSDCardPrivateFilesDir(String r2) {
        return loadFileFromSDCard(getSDCardPrivateFilesDir() + File.separator + r2);
    }

    public static boolean removeFileToSDCardPrivateFilesDir(String r2) {
        return removeFileFromSDCard(getSDCardPrivateFilesDir() + File.separator + r2);
    }

    public static boolean saveFileToSDCardPrivateCacheDir(byte[] r1, String r2) {
        return SDCardHelper.saveFileToSDCardPrivateCacheDir(r1, r2, mContext);
    L4:
        return false;
    }

    public static byte[] readFileToSDCardPrivateCacheDir(String r2) {
        return loadFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + r2);
    }

    public static boolean removeFileToSDCardPrivateCacheDir(String r2) {
        return removeFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + r2);
    }

    public static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap r1, String r2) {
        return SDCardHelper.saveBitmapToSDCardPrivateCacheDir(r1, r2, mContext);
    L4:
        return false;
    }

    public static Bitmap readBitmapToSDCardPrivateCacheDir(String r2) {
        return loadBitmapFromSDCard(getSDCardPrivateCacheDir() + File.separator + r2);
    }

    public static boolean removeBitmapToSDCardPrivateCacheDir(String r2) {
        return removeFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + r2);
    }

    public static boolean removeInsideFile(String r2) {
        return removeFileFromSDCard(getFilesDir() + UTILS_FILE_DIR + File.separator + r2);
    }

    public static byte[] loadFileFromSDCard(String r1) {
        return SDCardHelper.loadFileFromSDCard(mContext, r1);
    L4:
        return null;
    }

    public static Bitmap loadBitmapFromSDCard(String r1) {
        return SDCardHelper.loadBitmapFromSDCard(mContext, r1);
    L4:
        return null;
    }

    public static String getSDCardPublicDir() {
        return SDCardHelper.getSDCardPublicDir(UTILS_FILE_DIR);
    }

    public static String getSDCardPrivateCacheDir() {
        return SDCardHelper.getSDCardPrivateCacheDir(mContext);
    }

    public static String getSDCardPrivateFilesDir() {
        return SDCardHelper.getSDCardPrivateFilesDir(mContext, UTILS_FILE_DIR);
    }

    public static String getFilesDir() {
        return SDCardHelper.getFilesDir(mContext);
    }

    public static String getInsideFilePath(String r2) {
        return SDCardHelper.getInsideFilePath(mContext, UTILS_FILE_DIR, r2);
    }

    public static boolean isFileExist(String r0) {
        return SDCardHelper.isFileExist(r0);
    }

    public static boolean isFileExistInSdCard(String r2) {
        return SDCardHelper.isFileExist(getSDCardBaseDir() + File.separator + r2);
    }

    public static boolean removeFileFromSDCard(String r0) {
        SDCardHelper.removeFileFromSDCard(r0);     // Catch: Exception -> L5
        return true;
    L5:
        return false;
    }
}
