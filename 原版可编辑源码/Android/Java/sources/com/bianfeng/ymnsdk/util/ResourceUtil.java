package com.bianfeng.ymnsdk.util;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.res.AssetManager;
import android.os.Environment;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class ResourceUtil {
    private static final String FILE_NAME_CFG = "ymncfgs";

    public static void savePreferences(Context context, String key, String value) {
        SharedPreferences preferences = context.getSharedPreferences(FILE_NAME_CFG, 0);
        preferences.edit().putString(key, value).commit();
    }

    public static String readPreferences(Context context, String key) {
        SharedPreferences preferences = context.getSharedPreferences(FILE_NAME_CFG, 0);
        return preferences.getString(key, null);
    }

    public static void removePreferences(Context context, String key) {
        SharedPreferences preferences = context.getSharedPreferences(FILE_NAME_CFG, 0);
        preferences.edit().remove(key).commit();
    }

    public static boolean isSdcardReady() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public static String getSdcardPath() {
        return "";
    }

    public static boolean isSdcardFileExist(String filePath) {
        File file = new File(getSdcardPath() + filePath);
        return file.exists();
    }

    public static boolean assetFileExist(Context context, String filePath) {
        AssetManager am = context.getAssets();
        try {
            String[] names = am.list("");
            for (String str : names) {
                if (str.equals(filePath.trim())) {
                    return true;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return false;
    }

    public static byte[] InputStreamToByte(InputStream in) {
        try {
            ByteArrayOutputStream out = new ByteArrayOutputStream();
            byte[] buff = new byte[1024];
            while (in.read(buff) != -1) {
                out.write(buff);
            }
            in.close();
            byte[] bytes = out.toByteArray();
            out.flush();
            out.close();
            return bytes;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getFolder(String filePath) {
        String[] a = filePath.split(File.separator);
        if (a.length <= 0) {
            return null;
        }
        int tL = filePath.length();
        int nL = a[a.length - 1].length();
        return filePath.substring(0, tL - nL);
    }

    public static boolean retrieveFileFromAssets(Context context, String fromPath, String toPath) {
        InputStream is = null;
        FileOutputStream fos = null;
        try {
            try {
                is = context.getAssets().open(fromPath);
                File file = new File(toPath);
                file.createNewFile();
                fos = new FileOutputStream(file);
                byte[] temp = new byte[1024];
                while (true) {
                    int i = is.read(temp);
                    if (i <= 0) {
                        break;
                    }
                    fos.write(temp, 0, i);
                }
                try {
                    fos.close();
                } catch (IOException e) {
                }
                if (is != null) {
                    try {
                        is.close();
                    } catch (IOException e2) {
                    }
                }
                return true;
            } catch (IOException e3) {
                e3.printStackTrace();
                if (fos != null) {
                    try {
                        fos.close();
                    } catch (IOException e4) {
                    }
                }
                if (is != null) {
                    try {
                        is.close();
                    } catch (IOException e5) {
                    }
                }
                return false;
            }
        } finally {
        }
    }

    public static String getAppDataDir(Context context) {
        File cacheDir = context.getCacheDir();
        if (cacheDir != null) {
            return cacheDir.getParent() + File.separator;
        }
        return "/data/data/" + context.getPackageName() + File.separator;
    }

    public static void mkFileDirs(String fullPath) {
        File file = new File(fullPath);
        if (!file.exists()) {
            file.mkdirs();
        }
    }

    public static boolean deleteFile(String path) {
        File file = new File(path);
        if (file.exists() && file.isFile()) {
            return file.delete();
        }
        return false;
    }

    public static String getFileNameByUrl(String url) {
        return url.substring(url.lastIndexOf("/") + 1, url.length());
    }
}
