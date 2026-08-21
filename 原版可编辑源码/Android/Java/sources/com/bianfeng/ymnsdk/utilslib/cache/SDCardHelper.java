package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Environment;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.kuaishou.weapon.p0.g;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public final class SDCardHelper {
    protected static boolean isSDCardMounted() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    protected static String getSDCardBaseDir() {
        if (!SharedPreferencesUtils.isAgreeprivacy()) {
            System.out.println("state of showDebugLog is isAgreeprivacy");
            return null;
        }
        if (isSDCardMounted()) {
            return Environment.getExternalStorageDirectory().getAbsolutePath();
        }
        return null;
    }

    protected static boolean saveFileToSDCardPublicDir(Context context, byte[] data, String type, String fileName) throws YmnException {
        if (!BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", context)) {
            throw new YmnException("no permission read");
        }
        BufferedOutputStream bos = null;
        if (isSDCardMounted()) {
            File file = Environment.getExternalStoragePublicDirectory(type);
            try {
                try {
                    bos = new BufferedOutputStream(new FileOutputStream(new File(file, fileName)));
                    bos.write(data);
                    bos.flush();
                    try {
                        bos.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                    return true;
                } catch (Throwable th) {
                    if (bos != null) {
                        try {
                            bos.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    throw th;
                }
            } catch (Exception e3) {
                throw new YmnException(e3);
            }
        }
        return false;
    }

    protected static boolean saveFileToSDCardCustomDir(Context context, byte[] data, String dir, String fileName) throws YmnException {
        if (!BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", context)) {
            throw new YmnException("no permission read");
        }
        BufferedOutputStream bos = null;
        if (isSDCardMounted()) {
            File file = new File(getSDCardBaseDir() + File.separator + dir);
            if (!file.exists()) {
                file.mkdirs();
            }
            try {
                try {
                    bos = new BufferedOutputStream(new FileOutputStream(new File(file, fileName)));
                    bos.write(data);
                    bos.flush();
                    return true;
                } finally {
                    try {
                        bos.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                throw new YmnException(e2);
            }
        }
        return false;
    }

    protected static boolean saveFileToSDCardPrivateFilesDir(byte[] data, String type, String fileName, Context context) throws YmnException {
        BufferedOutputStream bos = null;
        if (isSDCardMounted()) {
            File file = context.getExternalFilesDir(type);
            try {
                try {
                    bos = new BufferedOutputStream(new FileOutputStream(new File(file, fileName)));
                    bos.write(data);
                    bos.flush();
                    return true;
                } catch (Exception e) {
                    throw new YmnException(e);
                }
            } finally {
                try {
                    bos.close();
                } catch (IOException e2) {
                    e2.printStackTrace();
                }
            }
        }
        return false;
    }

    protected static boolean saveFileToSDCardPrivateCacheDir(byte[] data, String fileName, Context context) throws YmnException {
        BufferedOutputStream bos = null;
        if (isSDCardMounted()) {
            File file = context.getExternalCacheDir();
            try {
                try {
                    bos = new BufferedOutputStream(new FileOutputStream(new File(file, fileName)));
                    bos.write(data);
                    bos.flush();
                    return true;
                } catch (Exception e) {
                    throw new YmnException(e);
                }
            } finally {
                try {
                    bos.close();
                } catch (IOException e2) {
                    e2.printStackTrace();
                }
            }
        }
        return false;
    }

    protected static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap bitmap, String fileName, Context context) throws YmnException {
        if (isSDCardMounted()) {
            BufferedOutputStream bos = null;
            File file = context.getExternalCacheDir();
            try {
                try {
                    bos = new BufferedOutputStream(new FileOutputStream(new File(file, fileName)));
                    if (fileName == null || (!fileName.contains(".png") && !fileName.contains(".PNG"))) {
                        bitmap.compress(Bitmap.CompressFormat.JPEG, 100, bos);
                    } else {
                        bitmap.compress(Bitmap.CompressFormat.PNG, 100, bos);
                    }
                    bos.flush();
                    try {
                        bos.close();
                        return true;
                    } catch (IOException e) {
                        e.printStackTrace();
                        return true;
                    }
                } catch (Exception e2) {
                    throw new YmnException(e2);
                }
            } catch (Throwable th) {
                if (bos != null) {
                    try {
                        bos.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                throw th;
            }
        }
        return false;
    }

    protected static byte[] loadFileFromSDCard(Context context, String fileDir) throws YmnException {
        byte[] buffer;
        if (!BfDataPermissionUtils.check(g.i, context)) {
            throw new YmnException("no permission read");
        }
        if (!isFileExist(fileDir)) {
            throw new YmnException(fileDir + "no file");
        }
        BufferedInputStream bis = null;
        ByteArrayOutputStream baos = new ByteArrayOutputStream();
        try {
            try {
                bis = new BufferedInputStream(new FileInputStream(new File(fileDir)));
                buffer = new byte[8192];
            } catch (Exception e) {
                throw new YmnException(e);
            }
        } finally {
            try {
                baos.close();
                bis.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
        }
        while (true) {
            int c = bis.read(buffer);
            if (c == -1) {
                break;
            }
            baos.write(buffer, 0, c);
            baos.flush();
            baos.close();
            bis.close();
        }
        return baos.toByteArray();
    }

    protected static Bitmap loadBitmapFromSDCard(Context context, String filePath) throws YmnException {
        Bitmap bm;
        byte[] data = loadFileFromSDCard(context, filePath);
        if (data != null && (bm = BitmapFactory.decodeByteArray(data, 0, data.length)) != null) {
            return bm;
        }
        return null;
    }

    protected static String getSDCardPublicDir(String type) {
        return Environment.getExternalStoragePublicDirectory(type).getAbsolutePath();
    }

    protected static String getSDCardPrivateCacheDir(Context context) {
        return context.getExternalCacheDir().getAbsolutePath();
    }

    protected static String getSDCardPrivateFilesDir(Context context, String type) {
        return context.getExternalFilesDir(type).getAbsolutePath();
    }

    protected static String getFilesDir(Context context) {
        return context.getFilesDir().getAbsolutePath();
    }

    protected static String getInsideFilePath(Context context, String type, String path) {
        String insidePath = context.getFilesDir().getAbsolutePath();
        File file = new File(insidePath + type);
        if (!file.exists()) {
            file.mkdir();
        }
        return file.getAbsolutePath() + File.separator + path;
    }

    protected static boolean isFileExist(String filePath) {
        System.out.println("state of showDebugLog is " + filePath);
        File file = new File(filePath);
        return file.isFile();
    }

    protected static void removeFileFromSDCard(String filePath) throws YmnException {
        File file = new File(filePath);
        if (file.exists()) {
            try {
                file.delete();
            } catch (Exception e) {
                throw new YmnException(e);
            }
        }
    }
}
