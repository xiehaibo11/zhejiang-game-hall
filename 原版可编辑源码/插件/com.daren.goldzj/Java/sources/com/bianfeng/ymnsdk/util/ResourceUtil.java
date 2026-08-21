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

    public static boolean deleteFile(String str) {
        File file = new File(str);
        if (file.exists() && file.isFile()) {
            return file.delete();
        }
        return false;
    }

    public static String getAppDataDir(Context context) {
        File cacheDir = context.getCacheDir();
        if (cacheDir != null) {
            return cacheDir.getParent() + File.separator;
        }
        return "/data/data/" + context.getPackageName() + File.separator;
    }

    public static String getFileNameByUrl(String str) {
        return str.substring(str.lastIndexOf("/") + 1, str.length());
    }

    public static String getFolder(String str) {
        String[] strArrSplit = str.split(File.separator);
        if (strArrSplit.length <= 0) {
            return null;
        }
        return str.substring(0, str.length() - strArrSplit[strArrSplit.length - 1].length());
    }

    public static String getSdcardPath() {
        return "";
    }

    public static boolean isSdcardFileExist(String str) {
        return new File(getSdcardPath() + str).exists();
    }

    public static boolean isSdcardReady() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public static void mkFileDirs(String str) {
        File file = new File(str);
        if (file.exists()) {
            return;
        }
        file.mkdirs();
    }

    public static String readPreferences(Context context, String str) {
        return context.getSharedPreferences(FILE_NAME_CFG, 0).getString(str, null);
    }

    public static void removePreferences(Context context, String str) {
        context.getSharedPreferences(FILE_NAME_CFG, 0).edit().remove(str).commit();
    }

    /* JADX WARN: Removed duplicated region for block: B:50:0x0057 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0041 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0050 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0048 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:68:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean retrieveFileFromAssets(Context context, String str, String str2) throws Throwable {
        InputStream inputStreamOpen;
        IOException e;
        FileOutputStream fileOutputStream;
        FileOutputStream fileOutputStream2 = null;
        try {
            inputStreamOpen = context.getAssets().open(str);
            try {
                File file = new File(str2);
                file.createNewFile();
                fileOutputStream = new FileOutputStream(file);
                try {
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
                    } catch (IOException e2) {
                        e = e2;
                        e.printStackTrace();
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
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
                    }
                } catch (Throwable th) {
                    th = th;
                    fileOutputStream2 = fileOutputStream;
                    if (fileOutputStream2 != null) {
                        try {
                            fileOutputStream2.close();
                        } catch (IOException unused5) {
                        }
                    }
                    if (inputStreamOpen != null) {
                        throw th;
                    }
                    try {
                        inputStreamOpen.close();
                        throw th;
                    } catch (IOException unused6) {
                        throw th;
                    }
                }
            } catch (IOException e3) {
                e = e3;
                fileOutputStream = null;
                e.printStackTrace();
                if (fileOutputStream != null) {
                }
                if (inputStreamOpen != null) {
                }
                return false;
            } catch (Throwable th2) {
                th = th2;
                if (fileOutputStream2 != null) {
                }
                if (inputStreamOpen != null) {
                }
            }
        } catch (IOException e4) {
            e = e4;
            inputStreamOpen = null;
        } catch (Throwable th3) {
            th = th3;
            inputStreamOpen = null;
        }
    }

    public static void savePreferences(Context context, String str, String str2) {
        context.getSharedPreferences(FILE_NAME_CFG, 0).edit().putString(str, str2).commit();
    }
}
