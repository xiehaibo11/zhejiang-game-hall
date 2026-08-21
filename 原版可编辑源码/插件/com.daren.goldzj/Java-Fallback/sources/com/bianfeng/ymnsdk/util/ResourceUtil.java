package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.os.Environment;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class ResourceUtil {
    private static final String FILE_NAME_CFG = "ymncfgs";

    public ResourceUtil() {
    }

    public static byte[] InputStreamToByte(InputStream r4) {
        ByteArrayOutputStream r0 = new ByteArrayOutputStream();     // Catch: Exception -> L8
        byte[] r1 = new byte[1024];     // Catch: Exception -> L8
    L4:
        if (r4.read(r1) == (-1)) goto L6;
        r0.write(r1);     // Catch: Exception -> L8
        goto L4
    L6:
        r4.close();     // Catch: Exception -> L8
        byte[] r42 = r0.toByteArray();     // Catch: Exception -> L8
        r0.flush();     // Catch: Exception -> L8
        r0.close();     // Catch: Exception -> L8
        return r42;
    L8:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public static boolean assetFileExist(Context r4, String r5) {
        String[] r42 = r4.getAssets().list("");     // Catch: IOException -> L11
        int r1 = 0;
    L4:
        if (r1 >= r42.length) goto L13;
        if (r42[r1].equals(r5.trim()) == true) goto L8;
        r1 = r1 + 1;
        goto L4
    L8:
        return true;
    L13:
        return false;
    L11:
        e = move-exception;
        e.printStackTrace();
        goto L13
    }

    public static boolean deleteFile(String r1) {
        File r0 = new File(r1);
        if (r0.exists() == true) goto L5;
        return false;
    L5:
        if (r0.isFile() == true) goto L7;
        return false;
    L7:
        return r0.delete();
    }

    public static String getAppDataDir(Context r2) {
        File r0 = r2.getCacheDir();
        if (r0 == null) goto L7;
        return r0.getParent() + File.separator;
    L7:
        return "/data/data/" + r2.getPackageName() + File.separator;
    }

    public static String getFileNameByUrl(String r2) {
        return r2.substring(r2.lastIndexOf("/") + 1, r2.length());
    }

    public static String getFolder(String r3) {
        String[] r0 = r3.split(File.separator);
        if (r0.length > 0) goto L7;
        return null;
    L7:
        return r3.substring(0, r3.length() - r0[r0.length - 1].length());
    }

    public static String getSdcardPath() {
        return "";
    }

    public static boolean isSdcardFileExist(String r3) {
        return new File(getSdcardPath() + r3).exists();
    }

    public static boolean isSdcardReady() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public static void mkFileDirs(String r1) {
        File r0 = new File(r1);
        if (r0.exists() == true) goto L6;
        r0.mkdirs();
        return;
    }

    public static String readPreferences(Context r2, String r3) {
        return r2.getSharedPreferences(FILE_NAME_CFG, 0).getString(r3, null);
    }

    public static void removePreferences(Context r2, String r3) {
        r2.getSharedPreferences(FILE_NAME_CFG, 0).edit().remove(r3).commit();
    }

    public static boolean retrieveFileFromAssets(Context r2, String r3, String r4) {
        FileOutputStream r1 = null;
        InputStream r22 = r2.getAssets().open(r3);     // Catch: Throwable -> L22 IOException -> L24
        File r32 = new File(r4);     // Catch: Throwable -> L18 IOException -> L20
        r32.createNewFile();     // Catch: Throwable -> L18 IOException -> L20
        FileOutputStream r42 = new FileOutputStream(r32);     // Catch: Throwable -> L18 IOException -> L20
    L56:
        byte[] r33 = new byte[1024];     // Catch: IOException -> L16 Throwable -> L35
    L7:
        int r12 = r22.read(r33);     // Catch: IOException -> L16 Throwable -> L35
        if (r12 <= 0) goto L48;
        r42.write(r33, 0, r12);     // Catch: IOException -> L16 Throwable -> L35
        goto L7
    L48:
        r42.close();     // Catch: IOException -> L44
    L13:
        if (r22 != null) goto L59;
    L15:
        return true;
    L59:
        r22.close();     // Catch: IOException -> L45
    L16:
        IOException e = e;
    L27:
        e.printStackTrace();     // Catch: Throwable -> L35
        if (r42 != null) goto L52;
    L32:
        if (r22 != null) goto L61;
    L34:
        return false;
    L61:
        r22.close();     // Catch: IOException -> L46
        goto L34
    L52:
        r42.close();     // Catch: IOException -> L31
    L35:
        th = th;
        r1 = r42;
    L37:
        if (r1 != null) goto L54;
    L41:
        if (r22 == null) goto L68;
        r22.close();     // Catch: IOException -> L47
        throw th;
    L69:
        throw th;
    L68:
        throw th;
    L54:
        r1.close();     // Catch: IOException -> L40
    L20:
        e = e;
    L26:
        r42 = null;
    L18:
        th = th;
        goto L37
    L24:
        e = move-exception;
        e = e;
        r22 = null;
    L22:
        th = th;
        r22 = null;
        goto L37
    }

    public static void savePreferences(Context r2, String r3, String r4) {
        r2.getSharedPreferences(FILE_NAME_CFG, 0).edit().putString(r3, r4).commit();
    }
}
