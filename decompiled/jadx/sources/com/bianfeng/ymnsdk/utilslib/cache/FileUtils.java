package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.graphics.Bitmap;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public final class FileUtils {
    private static String UTILS_FILE_DIR = "bianfeng";
    private static Context mContext;

    public static void init(Context context) {
        mContext = context;
    }

    public static boolean isSDCardMounted() {
        return SDCardHelper.isSDCardMounted();
    }

    public static String getSDCardBaseDir() {
        return SDCardHelper.getSDCardBaseDir();
    }

    public static boolean saveFileToSDCardPublicDir(byte[] data, String fileName) {
        try {
            return SDCardHelper.saveFileToSDCardPublicDir(mContext, data, UTILS_FILE_DIR, fileName);
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static byte[] readFileToSDCardPublicDir(String fileName) {
        String path = getSDCardPublicDir() + File.separator + fileName;
        return loadFileFromSDCard(path);
    }

    public static boolean removeFileToSDCardPublicDir(String fileName) {
        String path = getSDCardPublicDir() + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static boolean saveFileToSDCardCustomDir(byte[] data, String fileName) {
        try {
            return SDCardHelper.saveFileToSDCardCustomDir(mContext, data, UTILS_FILE_DIR, fileName);
        } catch (Exception e) {
            return false;
        }
    }

    public static byte[] readFileToSDCardCustomDir(String fileName) {
        String path = getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + fileName;
        return loadFileFromSDCard(path);
    }

    public static boolean removeFileToSDCardCustomDir(String fileName) {
        String path = getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static boolean saveFileToSDCardPrivateFilesDir(byte[] data, String fileName) {
        try {
            return SDCardHelper.saveFileToSDCardPrivateFilesDir(data, UTILS_FILE_DIR, fileName, mContext);
        } catch (Exception e) {
            return false;
        }
    }

    public static byte[] readFileToSDCardPrivateFilesDir(String fileName) {
        String path = getSDCardPrivateFilesDir() + File.separator + fileName;
        return loadFileFromSDCard(path);
    }

    public static boolean removeFileToSDCardPrivateFilesDir(String fileName) {
        String path = getSDCardPrivateFilesDir() + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static boolean saveFileToSDCardPrivateCacheDir(byte[] data, String fileName) {
        try {
            return SDCardHelper.saveFileToSDCardPrivateCacheDir(data, fileName, mContext);
        } catch (Exception e) {
            return false;
        }
    }

    public static byte[] readFileToSDCardPrivateCacheDir(String fileName) {
        String path = getSDCardPrivateCacheDir() + File.separator + fileName;
        return loadFileFromSDCard(path);
    }

    public static boolean removeFileToSDCardPrivateCacheDir(String fileName) {
        String path = getSDCardPrivateCacheDir() + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap bitmap, String fileName) {
        try {
            return SDCardHelper.saveBitmapToSDCardPrivateCacheDir(bitmap, fileName, mContext);
        } catch (Exception e) {
            return false;
        }
    }

    public static Bitmap readBitmapToSDCardPrivateCacheDir(String fileName) {
        String path = getSDCardPrivateCacheDir() + File.separator + fileName;
        return loadBitmapFromSDCard(path);
    }

    public static boolean removeBitmapToSDCardPrivateCacheDir(String fileName) {
        String path = getSDCardPrivateCacheDir() + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static boolean removeInsideFile(String fileName) {
        String path = getFilesDir() + UTILS_FILE_DIR + File.separator + fileName;
        return removeFileFromSDCard(path);
    }

    public static byte[] loadFileFromSDCard(String fileDir) {
        try {
            return SDCardHelper.loadFileFromSDCard(mContext, fileDir);
        } catch (Exception e) {
            return null;
        }
    }

    public static Bitmap loadBitmapFromSDCard(String filePath) {
        try {
            return SDCardHelper.loadBitmapFromSDCard(mContext, filePath);
        } catch (Exception e) {
            return null;
        }
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

    public static String getInsideFilePath(String path) {
        return SDCardHelper.getInsideFilePath(mContext, UTILS_FILE_DIR, path);
    }

    public static boolean isFileExist(String filePath) {
        return SDCardHelper.isFileExist(filePath);
    }

    public static boolean isFileExistInSdCard(String filePath) {
        return SDCardHelper.isFileExist(getSDCardBaseDir() + File.separator + filePath);
    }

    public static boolean removeFileFromSDCard(String filePath) {
        try {
            SDCardHelper.removeFileFromSDCard(filePath);
            return true;
        } catch (Exception e) {
            return false;
        }
    }
}
