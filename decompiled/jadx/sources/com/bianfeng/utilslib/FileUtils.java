package com.bianfeng.utilslib;

import android.app.Activity;
import android.os.Environment;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class FileUtils {
    private static String FILE_DIR = "bianfeng";
    private static String data_file;
    private static FileUtils utils;

    public static FileUtils getInstance() {
        if (utils == null) {
            utils = new FileUtils();
        }
        return utils;
    }

    private FileUtils() {
    }

    public void init(Activity activity) {
        data_file = activity.getFilesDir().getAbsolutePath();
    }

    public String getDbPath(String str) {
        UtilsSdk.getLogger().i("测试FileUtils" + data_file);
        File file = new File(data_file + FILE_DIR);
        if (!file.exists()) {
            file.mkdir();
        }
        return file.getAbsolutePath() + "/" + str;
    }

    public boolean isFileExist(String str) {
        return new File(str).exists();
    }

    public boolean isSdcardReady() {
        return Environment.getExternalStorageState().equals("mounted");
    }

    public String getSdcardPath() {
        return Environment.getExternalStorageDirectory().getAbsolutePath() + File.separator;
    }

    public boolean isSdcardFileExist(String str) {
        return new File(getSdcardPath() + str).exists();
    }

    public String getFileDir() {
        return FILE_DIR;
    }

    public synchronized void delFile(String str) {
        File file;
        try {
            file = new File(getDbPath(str));
        } catch (Exception unused) {
            UtilsSdk.getLogger().i("删库出现异常了");
        }
        if (file.exists()) {
            file.delete();
            UtilsSdk.getLogger().i("删库成功了");
        } else {
            UtilsSdk.getLogger().i("删库成功了");
        }
    }
}
