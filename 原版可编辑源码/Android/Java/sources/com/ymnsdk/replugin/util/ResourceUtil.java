package com.ymnsdk.replugin.util;

import android.content.Context;
import android.os.Environment;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.Properties;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ResourceUtil {
    private static final String FILE_NAME_CFG = "replugincfgs";

    public static void savePreferences(Context context, String str, String str2) {
        context.getSharedPreferences(FILE_NAME_CFG, 0).edit().putString(str, str2).commit();
    }

    public static String readPreferences(Context context, String str) {
        return context.getSharedPreferences(FILE_NAME_CFG, 0).getString(str, null);
    }

    public static void removePreferences(Context context, String str) {
        context.getSharedPreferences(FILE_NAME_CFG, 0).edit().remove(str).commit();
    }

    public static boolean isSdcardReady() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public static String getSdcardPath() {
        return Environment.getExternalStorageDirectory().getAbsolutePath();
    }

    public static boolean isSdcardFileExist(String str) {
        return new File(getSdcardPath() + str).exists();
    }

    public static boolean assetFileExist(Context context, String str) {
        try {
            for (String str2 : context.getAssets().list("")) {
                if (str2.equals(str.trim())) {
                    return true;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return false;
    }

    public static byte[] InputStreamToByte(InputStream inputStream) {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            byte[] bArr = new byte[1024];
            while (inputStream.read(bArr) != -1) {
                byteArrayOutputStream.write(bArr);
            }
            inputStream.close();
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            byteArrayOutputStream.flush();
            byteArrayOutputStream.close();
            return byteArray;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String getFolder(String str) {
        String[] strArrSplit = str.split(File.separator);
        if (strArrSplit.length <= 0) {
            return null;
        }
        return str.substring(0, str.length() - strArrSplit[strArrSplit.length - 1].length());
    }

    public static boolean retrieveFileFromAssets(Context context, String str, String str2) throws Throwable {
        InputStream inputStreamOpen;
        FileOutputStream fileOutputStream;
        FileOutputStream fileOutputStream2 = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            try {
                try {
                    File file = new File(str2);
                    file.createNewFile();
                    fileOutputStream = new FileOutputStream(file);
                } catch (IOException e) {
                    e = e;
                }
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e2) {
            e = e2;
            inputStreamOpen = null;
        } catch (Throwable th2) {
            th = th2;
            inputStreamOpen = null;
        }
        try {
            byte[] bArr = new byte[1024];
            while (true) {
                int i = inputStreamOpen.read(bArr);
                if (i <= 0) {
                    break;
                }
                fileOutputStream.write(bArr, 0, i);
            }
            try {
                fileOutputStream.close();
            } catch (IOException unused) {
            }
            if (inputStreamOpen != null) {
                try {
                    inputStreamOpen.close();
                } catch (IOException unused2) {
                }
            }
            return true;
        } catch (IOException e3) {
            e = e3;
            fileOutputStream2 = fileOutputStream;
            e.printStackTrace();
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException unused3) {
                }
            }
            if (inputStreamOpen != null) {
                try {
                    inputStreamOpen.close();
                } catch (IOException unused4) {
                }
            }
            return false;
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream2 = fileOutputStream;
            if (fileOutputStream2 != null) {
                try {
                    fileOutputStream2.close();
                } catch (IOException unused5) {
                }
            }
            if (inputStreamOpen != null) {
                try {
                    inputStreamOpen.close();
                    throw th;
                } catch (IOException unused6) {
                    throw th;
                }
            }
            throw th;
        }
    }

    public static String getAppDataDir(Context context) {
        File cacheDir = context.getCacheDir();
        if (cacheDir != null) {
            return cacheDir.getParent() + File.separator;
        }
        return "/data/data/" + context.getPackageName() + File.separator;
    }

    public static void mkFileDirs(String str) {
        File file = new File(str);
        if (file.exists()) {
            return;
        }
        file.mkdirs();
    }

    public static boolean deleteFile(String str) {
        File file = new File(str);
        if (file.exists() && file.isFile()) {
            return file.delete();
        }
        return false;
    }

    public static boolean deleteDirectory(String str) {
        if (!str.endsWith(File.separator)) {
            str = str + File.separator;
        }
        File file = new File(str);
        if (!file.exists() || !file.isDirectory()) {
            return false;
        }
        File[] fileArrListFiles = file.listFiles();
        boolean zDeleteDirectory = true;
        for (int i = 0; i < fileArrListFiles.length; i++) {
            if (fileArrListFiles[i].isFile()) {
                zDeleteDirectory = deleteFile(fileArrListFiles[i].getAbsolutePath());
                if (!zDeleteDirectory) {
                    break;
                }
            } else {
                zDeleteDirectory = deleteDirectory(fileArrListFiles[i].getAbsolutePath());
                if (!zDeleteDirectory) {
                    break;
                }
            }
        }
        if (zDeleteDirectory) {
            return file.delete();
        }
        return false;
    }

    public static String getFileNameByUrl(String str) {
        return str.substring(str.lastIndexOf("/") + 1, str.length());
    }

    public static String urlOnSdCard4Public() {
        try {
            if (!isSdcardReady()) {
                return "";
            }
            File file = new File(getSdcardPath() + File.separator + ".bftj/sdk/repluginDebug");
            if (!file.exists()) {
                return "";
            }
            Properties properties = new Properties();
            properties.load(new FileInputStream(file));
            return properties.getProperty("url_host_replugin");
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }
}
