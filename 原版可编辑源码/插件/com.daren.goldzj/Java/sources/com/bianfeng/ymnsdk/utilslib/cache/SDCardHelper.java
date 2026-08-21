package com.bianfeng.ymnsdk.utilslib.cache;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Environment;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
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

    protected static boolean saveFileToSDCardPublicDir(Context context, byte[] bArr, String str, String str2) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        if (!BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", context)) {
            throw new YmnException("no permission read");
        }
        BufferedOutputStream bufferedOutputStream2 = null;
        if (!isSDCardMounted()) {
            return false;
        }
        try {
            try {
                bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(new File(Environment.getExternalStoragePublicDirectory(str), str2)));
            } catch (Exception e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            bufferedOutputStream.write(bArr);
            bufferedOutputStream.flush();
            try {
                bufferedOutputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return true;
        } catch (Exception e3) {
            e = e3;
            bufferedOutputStream2 = bufferedOutputStream;
            throw new YmnException(e);
        } catch (Throwable th2) {
            th = th2;
            bufferedOutputStream2 = bufferedOutputStream;
            if (bufferedOutputStream2 != null) {
                try {
                    bufferedOutputStream2.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            throw th;
        }
    }

    protected static boolean saveFileToSDCardCustomDir(Context context, byte[] bArr, String str, String str2) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        if (!BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", context)) {
            throw new YmnException("no permission read");
        }
        BufferedOutputStream bufferedOutputStream2 = null;
        if (!isSDCardMounted()) {
            return false;
        }
        File file = new File(getSDCardBaseDir() + File.separator + str);
        if (!file.exists()) {
            file.mkdirs();
        }
        try {
            try {
                bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(new File(file, str2)));
            } catch (Exception e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            bufferedOutputStream.write(bArr);
            bufferedOutputStream.flush();
            try {
                bufferedOutputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return true;
        } catch (Exception e3) {
            e = e3;
            bufferedOutputStream2 = bufferedOutputStream;
            throw new YmnException(e);
        } catch (Throwable th2) {
            th = th2;
            bufferedOutputStream2 = bufferedOutputStream;
            try {
                bufferedOutputStream2.close();
            } catch (IOException e4) {
                e4.printStackTrace();
            }
            throw th;
        }
    }

    protected static boolean saveFileToSDCardPrivateFilesDir(byte[] bArr, String str, String str2, Context context) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        if (!isSDCardMounted()) {
            return false;
        }
        File externalFilesDir = context.getExternalFilesDir(str);
        BufferedOutputStream bufferedOutputStream2 = null;
        try {
            try {
                bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(new File(externalFilesDir, str2)));
            } catch (Throwable th) {
                th = th;
            }
        } catch (Exception e) {
            e = e;
        }
        try {
            bufferedOutputStream.write(bArr);
            bufferedOutputStream.flush();
            try {
                bufferedOutputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return true;
        } catch (Exception e3) {
            e = e3;
            throw new YmnException(e);
        } catch (Throwable th2) {
            th = th2;
            bufferedOutputStream2 = bufferedOutputStream;
            try {
                bufferedOutputStream2.close();
            } catch (IOException e4) {
                e4.printStackTrace();
            }
            throw th;
        }
    }

    protected static boolean saveFileToSDCardPrivateCacheDir(byte[] bArr, String str, Context context) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        if (!isSDCardMounted()) {
            return false;
        }
        BufferedOutputStream bufferedOutputStream2 = null;
        try {
            try {
                bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(new File(context.getExternalCacheDir(), str)));
            } catch (Throwable th) {
                th = th;
            }
        } catch (Exception e) {
            e = e;
        }
        try {
            bufferedOutputStream.write(bArr);
            bufferedOutputStream.flush();
            try {
                bufferedOutputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return true;
        } catch (Exception e3) {
            e = e3;
            throw new YmnException(e);
        } catch (Throwable th2) {
            th = th2;
            bufferedOutputStream2 = bufferedOutputStream;
            try {
                bufferedOutputStream2.close();
            } catch (IOException e4) {
                e4.printStackTrace();
            }
            throw th;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0034 A[Catch: all -> 0x0046, Exception -> 0x0049, TryCatch #6 {Exception -> 0x0049, all -> 0x0046, blocks: (B:8:0x001e, B:10:0x0026, B:12:0x002e, B:14:0x0039, B:13:0x0034), top: B:45:0x001e }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap bitmap, String str, Context context) throws Throwable {
        if (!isSDCardMounted()) {
            return false;
        }
        BufferedOutputStream bufferedOutputStream = null;
        try {
            try {
                BufferedOutputStream bufferedOutputStream2 = new BufferedOutputStream(new FileOutputStream(new File(context.getExternalCacheDir(), str)));
                if (str != null) {
                    try {
                        if (str.contains(".png") || str.contains(".PNG")) {
                            bitmap.compress(Bitmap.CompressFormat.PNG, 100, bufferedOutputStream2);
                        } else {
                            bitmap.compress(Bitmap.CompressFormat.JPEG, 100, bufferedOutputStream2);
                        }
                    } catch (Exception e) {
                        e = e;
                        bufferedOutputStream = bufferedOutputStream2;
                        throw new YmnException(e);
                    } catch (Throwable th) {
                        th = th;
                        bufferedOutputStream = bufferedOutputStream2;
                        if (bufferedOutputStream != null) {
                            try {
                                bufferedOutputStream.close();
                            } catch (IOException e2) {
                                e2.printStackTrace();
                            }
                        }
                        throw th;
                    }
                }
                bufferedOutputStream2.flush();
                try {
                    bufferedOutputStream2.close();
                    return true;
                } catch (IOException e3) {
                    e3.printStackTrace();
                    return true;
                }
            } catch (Exception e4) {
                e = e4;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    protected static byte[] loadFileFromSDCard(Context context, String str) throws Throwable {
        BufferedInputStream bufferedInputStream;
        if (!BfDataPermissionUtils.check("android.permission.READ_EXTERNAL_STORAGE", context)) {
            throw new YmnException("no permission read");
        }
        if (!isFileExist(str)) {
            throw new YmnException(str + "no file");
        }
        BufferedInputStream bufferedInputStream2 = null;
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            try {
                bufferedInputStream = new BufferedInputStream(new FileInputStream(new File(str)));
            } catch (Exception e) {
                e = e;
            }
        } catch (Throwable th) {
            th = th;
        }
        try {
            byte[] bArr = new byte[8192];
            while (true) {
                int i = bufferedInputStream.read(bArr);
                if (i == -1) {
                    break;
                }
                byteArrayOutputStream.write(bArr, 0, i);
                byteArrayOutputStream.flush();
            }
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            try {
                byteArrayOutputStream.close();
                bufferedInputStream.close();
            } catch (IOException e2) {
                e2.printStackTrace();
            }
            return byteArray;
        } catch (Exception e3) {
            e = e3;
            bufferedInputStream2 = bufferedInputStream;
            throw new YmnException(e);
        } catch (Throwable th2) {
            th = th2;
            bufferedInputStream2 = bufferedInputStream;
            try {
                byteArrayOutputStream.close();
                bufferedInputStream2.close();
            } catch (IOException e4) {
                e4.printStackTrace();
            }
            throw th;
        }
    }

    protected static Bitmap loadBitmapFromSDCard(Context context, String str) throws Throwable {
        Bitmap bitmapDecodeByteArray;
        byte[] bArrLoadFileFromSDCard = loadFileFromSDCard(context, str);
        if (bArrLoadFileFromSDCard == null || (bitmapDecodeByteArray = BitmapFactory.decodeByteArray(bArrLoadFileFromSDCard, 0, bArrLoadFileFromSDCard.length)) == null) {
            return null;
        }
        return bitmapDecodeByteArray;
    }

    protected static String getSDCardPublicDir(String str) {
        return Environment.getExternalStoragePublicDirectory(str).getAbsolutePath();
    }

    protected static String getSDCardPrivateCacheDir(Context context) {
        return context.getExternalCacheDir().getAbsolutePath();
    }

    protected static String getSDCardPrivateFilesDir(Context context, String str) {
        return context.getExternalFilesDir(str).getAbsolutePath();
    }

    protected static String getFilesDir(Context context) {
        return context.getFilesDir().getAbsolutePath();
    }

    protected static String getInsideFilePath(Context context, String str, String str2) {
        File file = new File(context.getFilesDir().getAbsolutePath() + str);
        if (!file.exists()) {
            file.mkdir();
        }
        return file.getAbsolutePath() + File.separator + str2;
    }

    protected static boolean isFileExist(String str) {
        System.out.println("state of showDebugLog is " + str);
        return new File(str).isFile();
    }

    protected static void removeFileFromSDCard(String str) throws YmnException {
        File file = new File(str);
        if (file.exists()) {
            try {
                file.delete();
            } catch (Exception e) {
                throw new YmnException(e);
            }
        }
    }
}
