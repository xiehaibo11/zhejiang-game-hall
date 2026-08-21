package com.bianfeng.fastvo.util;

import android.text.TextUtils;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class FileUtil {
    private FileUtil() {
    }

    public static boolean isFileExist(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return new File(str).exists();
    }

    public static boolean mkFileDirs(String str) {
        File file = new File(str);
        if (file.exists()) {
            return true;
        }
        return file.mkdirs();
    }

    public static boolean deleteFile(String str) {
        File file = new File(str);
        if (file.exists() && file.isFile()) {
            return file.delete();
        }
        return false;
    }

    public static boolean deleteDirectory(String str) {
        File[] fileArrListFiles;
        if (!str.endsWith(File.separator)) {
            str = str + File.separator;
        }
        File file = new File(str);
        if (!file.exists() || !file.isDirectory() || (fileArrListFiles = file.listFiles()) == null) {
            return false;
        }
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

    public static String getFolder(String str) {
        String[] strArrSplit = str.split(File.separator);
        if (strArrSplit.length <= 0) {
            return null;
        }
        return str.substring(0, str.length() - strArrSplit[strArrSplit.length - 1].length());
    }

    public static String getSuffix(String str) {
        if (str.length() <= 0) {
            return null;
        }
        return str.substring(str.lastIndexOf("."), str.length());
    }
}
