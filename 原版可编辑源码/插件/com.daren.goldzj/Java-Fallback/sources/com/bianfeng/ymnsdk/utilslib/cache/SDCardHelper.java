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
    public SDCardHelper() {
    }

    protected static boolean isSDCardMounted() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    protected static String getSDCardBaseDir() {
        if (SharedPreferencesUtils.isAgreeprivacy() == true) goto L7;
        System.out.println("state of showDebugLog is isAgreeprivacy");
        return null;
    L7:
        if (isSDCardMounted() == true) goto L9;
        return null;
    L9:
        return Environment.getExternalStorageDirectory().getAbsolutePath();
    }

    protected static boolean saveFileToSDCardPublicDir(Context r3, byte[] r4, String r5, String r6) throws YmnException {
        if (BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", r3) == false) goto L33;
        BufferedOutputStream r32 = null;
        if (isSDCardMounted() == true) goto L36;
        return false;
    L36:
        BufferedOutputStream r0 = new BufferedOutputStream(new FileOutputStream(new File(Environment.getExternalStoragePublicDirectory(r5), r6)));     // Catch: Throwable -> L19 Exception -> L21
        r0.write(r4);     // Catch: Throwable -> L15 Exception -> L17
        r0.flush();     // Catch: Throwable -> L15 Exception -> L17
    L39:
        r0.close();     // Catch: IOException -> L12
    L14:
        return true;
    L12:
        e = move-exception;
        e.printStackTrace();
    L17:
        e = move-exception;
        e = e;
        r32 = r0;
    L23:
        throw new YmnException(e);     // Catch: Throwable -> L19
    L15:
        th = move-exception;
        th = th;
        r32 = r0;
    L24:
        if (r32 != null) goto L34;
    L29:
        throw th;
    L34:
        r32.close();     // Catch: IOException -> L27
    L27:
        e = move-exception;
        e.printStackTrace();
    L21:
        e = e;
    L19:
        th = th;
        goto L24
    L33:
        throw new YmnException("no permission read");
    }

    protected static boolean saveFileToSDCardCustomDir(Context r3, byte[] r4, String r5, String r6) throws YmnException {
        if (BfDataPermissionUtils.check("android.permission.WRITE_EXTERNAL_STORAGE", r3) == false) goto L34;
        BufferedOutputStream r32 = null;
        if (isSDCardMounted() == false) goto L31;
        File r0 = new File(getSDCardBaseDir() + File.separator + r5);
        if (r0.exists() == true) goto L37;
        r0.mkdirs();
    L37:
        BufferedOutputStream r52 = new BufferedOutputStream(new FileOutputStream(new File(r0, r6)));     // Catch: Throwable -> L21 Exception -> L23
        r52.write(r4);     // Catch: Throwable -> L17 Exception -> L19
        r52.flush();     // Catch: Throwable -> L17 Exception -> L19
    L39:
        r52.close();     // Catch: IOException -> L14
    L16:
        return true;
    L14:
        e = move-exception;
        e.printStackTrace();
    L19:
        e = move-exception;
        e = e;
        r32 = r52;
    L25:
        throw new YmnException(e);     // Catch: Throwable -> L21
    L17:
        th = move-exception;
        th = th;
        r32 = r52;
    L35:
        r32.close();     // Catch: IOException -> L28
    L30:
        throw th;
    L28:
        e = move-exception;
        e.printStackTrace();
    L23:
        e = e;
    L21:
        th = th;
        goto L35
    L31:
        return false;
    L34:
        throw new YmnException("no permission read");
    }

    protected static boolean saveFileToSDCardPrivateFilesDir(byte[] r3, String r4, String r5, Context r6) throws YmnException {
        if (isSDCardMounted() == false) goto L27;
        File r42 = r6.getExternalFilesDir(r4);
        BufferedOutputStream r62 = null;
        BufferedOutputStream r0 = new BufferedOutputStream(new FileOutputStream(new File(r42, r5)));     // Catch: Throwable -> L17 Exception -> L19
        r0.write(r3);     // Catch: Throwable -> L13 Exception -> L15
        r0.flush();     // Catch: Throwable -> L13 Exception -> L15
    L30:
        r0.close();     // Catch: IOException -> L10
    L12:
        return true;
    L10:
        e = move-exception;
        e.printStackTrace();
    L15:
        e = e;
    L21:
        throw new YmnException(e);     // Catch: Throwable -> L17
    L13:
        th = th;
        r62 = r0;
    L32:
        r62.close();     // Catch: IOException -> L24
    L26:
        throw th;
    L24:
        e = move-exception;
        e.printStackTrace();
    L17:
        th = th;
    L19:
        e = e;
        goto L21
    L27:
        return false;
    }

    protected static boolean saveFileToSDCardPrivateCacheDir(byte[] r4, String r5, Context r6) throws YmnException {
        if (isSDCardMounted() == false) goto L27;
        BufferedOutputStream r0 = null;
        BufferedOutputStream r1 = new BufferedOutputStream(new FileOutputStream(new File(r6.getExternalCacheDir(), r5)));     // Catch: Throwable -> L17 Exception -> L19
        r1.write(r4);     // Catch: Throwable -> L13 Exception -> L15
        r1.flush();     // Catch: Throwable -> L13 Exception -> L15
    L30:
        r1.close();     // Catch: IOException -> L10
    L12:
        return true;
    L10:
        e = move-exception;
        e.printStackTrace();
    L15:
        e = e;
    L21:
        throw new YmnException(e);     // Catch: Throwable -> L17
    L13:
        th = th;
        r0 = r1;
    L32:
        r0.close();     // Catch: IOException -> L24
    L26:
        throw th;
    L24:
        e = move-exception;
        e.printStackTrace();
    L17:
        th = th;
    L19:
        e = e;
        goto L21
    L27:
        return false;
    }

    protected static boolean saveBitmapToSDCardPrivateCacheDir(Bitmap r4, String r5, Context r6) throws YmnException {
        if (isSDCardMounted() == false) goto L36;
        BufferedOutputStream r0 = null;
        BufferedOutputStream r1 = new BufferedOutputStream(new FileOutputStream(new File(r6.getExternalCacheDir(), r5)));     // Catch: Throwable -> L25 Exception -> L27
        if (r5 != null) goto L45;
    L13:
        r4.compress(Bitmap.CompressFormat.JPEG, 100, r1);     // Catch: Throwable -> L21 Exception -> L23
    L14:
        r1.flush();     // Catch: Throwable -> L21 Exception -> L23
        r1.close();     // Catch: IOException -> L17
        return true;
    L17:
        e = move-exception;
        e.printStackTrace();
        return true;
    L23:
        e = e;
        r0 = r1;
    L29:
        throw new YmnException(e);     // Catch: Throwable -> L25
    L21:
        th = th;
        r0 = r1;
    L30:
        if (r0 != null) goto L43;
    L35:
        throw th;
    L43:
        r0.close();     // Catch: IOException -> L33
    L33:
        e = move-exception;
        e.printStackTrace();
        goto L35
    L45:
        if (r5.contains(".png") == false) goto L11;
    L12:
        r4.compress(Bitmap.CompressFormat.PNG, 100, r1);     // Catch: Throwable -> L21 Exception -> L23
        goto L14
    L11:
        if (r5.contains(".PNG") == false) goto L13;
    L27:
        e = e;
    L25:
        th = th;
        goto L30
    L36:
        return false;
    }

    protected static byte[] loadFileFromSDCard(Context r4, String r5) throws YmnException {
        if (BfDataPermissionUtils.check("android.permission.READ_EXTERNAL_STORAGE", r4) == false) goto L36;
        if (isFileExist(r5) == false) goto L34;
        BufferedInputStream r42 = null;
        ByteArrayOutputStream r0 = new ByteArrayOutputStream();
        BufferedInputStream r1 = new BufferedInputStream(new FileInputStream(new File(r5)));     // Catch: Throwable -> L23 Exception -> L25
        byte[] r43 = new byte[8192];     // Catch: Throwable -> L19 Exception -> L21
    L10:
        int r52 = r1.read(r43);     // Catch: Throwable -> L19 Exception -> L21
        if (r52 == (-1)) goto L13;
        r0.write(r43, 0, r52);     // Catch: Throwable -> L19 Exception -> L21
        r0.flush();     // Catch: Throwable -> L19 Exception -> L21
        goto L10
    L13:
        byte[] r44 = r0.toByteArray();     // Catch: Throwable -> L19 Exception -> L21
        r0.close();     // Catch: IOException -> L16
        r1.close();     // Catch: IOException -> L16
    L18:
        return r44;
    L16:
        e = move-exception;
        e.printStackTrace();
        goto L18
    L21:
        e = move-exception;
        e = e;
        r42 = r1;
    L27:
        throw new YmnException(e);     // Catch: Throwable -> L23
    L19:
        th = move-exception;
        th = th;
        r42 = r1;
    L41:
        r0.close();     // Catch: IOException -> L30
        r42.close();     // Catch: IOException -> L30
    L32:
        throw th;
    L30:
        e = move-exception;
        e.printStackTrace();
    L25:
        e = e;
    L23:
        th = th;
        goto L41
    L34:
        throw new YmnException(r5 + "no file");
    L36:
        throw new YmnException("no permission read");
    }

    protected static Bitmap loadBitmapFromSDCard(Context r1, String r2) throws YmnException {
        byte[] r12 = loadFileFromSDCard(r1, r2);
        if (r12 == null) goto L7;
        Bitmap r13 = BitmapFactory.decodeByteArray(r12, 0, r12.length);
        if (r13 == null) goto L9;
        return r13;
    L9:
        return null;
    L7:
        return null;
    }

    protected static String getSDCardPublicDir(String r0) {
        return Environment.getExternalStoragePublicDirectory(r0).getAbsolutePath();
    }

    protected static String getSDCardPrivateCacheDir(Context r0) {
        return r0.getExternalCacheDir().getAbsolutePath();
    }

    protected static String getSDCardPrivateFilesDir(Context r0, String r1) {
        return r0.getExternalFilesDir(r1).getAbsolutePath();
    }

    protected static String getFilesDir(Context r0) {
        return r0.getFilesDir().getAbsolutePath();
    }

    protected static String getInsideFilePath(Context r2, String r3, String r4) {
        File r0 = new File(r2.getFilesDir().getAbsolutePath() + r3);
        if (r0.exists() == true) goto L6;
        r0.mkdir();
    L6:
        return r0.getAbsolutePath() + File.separator + r4;
    }

    protected static boolean isFileExist(String r3) {
        System.out.println("state of showDebugLog is " + r3);
        return new File(r3).isFile();
    }

    protected static void removeFileFromSDCard(String r1) throws YmnException {
        File r0 = new File(r1);
        if (r0.exists() == true) goto L10;
        return;
    L10:
        r0.delete();     // Catch: Exception -> L6
        return;
    L6:
        e = move-exception;
        throw new YmnException(e);
    }
}
