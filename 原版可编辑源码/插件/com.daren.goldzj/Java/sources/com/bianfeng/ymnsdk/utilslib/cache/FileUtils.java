package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.graphics.Bitmap;
import java.io.File;

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

    public static boolean saveFileToSDCardPublicDir(byte[] bArr, String str) {
        try {
            return SDCardHelper.saveFileToSDCardPublicDir(mContext, bArr, UTILS_FILE_DIR, str);
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static byte[] readFileToSDCardPublicDir(String str) {
        return loadFileFromSDCard(getSDCardPublicDir() + File.separator + str);
    }

    public static boolean removeFileToSDCardPublicDir(String str) {
        return removeFileFromSDCard(getSDCardPublicDir() + File.separator + str);
    }

    public static boolean saveFileToSDCardCustomDir(byte[] bArr, String str) {
        try {
            return SDCardHelper.saveFileToSDCardCustomDir(mContext, bArr, UTILS_FILE_DIR, str);
        } catch (Exception unused) {
            return false;
        }
    }

    public static byte[] readFileToSDCardCustomDir(String str) {
        return loadFileFromSDCard(getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + str);
    }

    public static boolean removeFileToSDCardCustomDir(String str) {
        return removeFileFromSDCard(getSDCardBaseDir() + File.separator + UTILS_FILE_DIR + File.separator + str);
    }

    public static boolean saveFileToSDCardPrivateFilesDir(byte[] bArr, String str) {
        try {
            return SDCardHelper.saveFileToSDCardPrivateFilesDir(bArr, UTILS_FILE_DIR, str, mContext);
        } catch (Exception unused) {
            return false;
        }
    }

    public static byte[] readFileToSDCardPrivateFilesDir(String str) {
        return loadFileFromSDCard(getSDCardPrivateFilesDir() + File.separator + str);
    }

    public static boolean removeFileToSDCardPrivateFilesDir(String str) {
        return removeFileFromSDCard(getSDCardPrivateFilesDir() + File.separator + str);
    }

    public static boolean saveFileToSDCardPrivateCacheDir(byte[] bArr, String str) {
        try {
            return SDCardHelper.saveFileToSDCardPrivateCacheDir(bArr, str, mContext);
        } catch (Exception unused) {
            return false;
        }
    }

    public static byte[] readFileToSDCardPrivateCacheDir(String str) {
        return loadFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + str);
    }

    public static boolean removeFileToSDCardPrivateCacheDir(String str) {
        return removeFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + str);
    }

    public static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap bitmap, String str) {
        try {
            return SDCardHelper.saveBitmapToSDCardPrivateCacheDir(bitmap, str, mContext);
        } catch (Exception unused) {
            return false;
        }
    }

    public static Bitmap readBitmapToSDCardPrivateCacheDir(String str) {
        return loadBitmapFromSDCard(getSDCardPrivateCacheDir() + File.separator + str);
    }

    public static boolean removeBitmapToSDCardPrivateCacheDir(String str) {
        return removeFileFromSDCard(getSDCardPrivateCacheDir() + File.separator + str);
    }

    public static boolean removeInsideFile(String str) {
        return removeFileFromSDCard(getFilesDir() + UTILS_FILE_DIR + File.separator + str);
    }

    public static byte[] loadFileFromSDCard(String str) {
        try {
            return SDCardHelper.loadFileFromSDCard(mContext, str);
        } catch (Exception unused) {
            return null;
        }
    }

    public static Bitmap loadBitmapFromSDCard(String str) {
        try {
            return SDCardHelper.loadBitmapFromSDCard(mContext, str);
        } catch (Exception unused) {
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

    public static String getInsideFilePath(String str) {
        return SDCardHelper.getInsideFilePath(mContext, UTILS_FILE_DIR, str);
    }

    public static boolean isFileExist(String str) {
        return SDCardHelper.isFileExist(str);
    }

    public static boolean isFileExistInSdCard(String str) {
        return SDCardHelper.isFileExist(getSDCardBaseDir() + File.separator + str);
    }

    public static boolean removeFileFromSDCard(String str) {
        try {
            SDCardHelper.removeFileFromSDCard(str);
            return true;
        } catch (Exception unused) {
            return false;
        }
    }
}
