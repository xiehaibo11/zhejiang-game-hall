package com.ymnsdk.replugin.util;

import android.app.Activity;
import com.qihoo360.i.IPluginManager;
import java.io.File;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class FileUtils {
    private static FileUtils utils = new FileUtils();

    public static FileUtils getInstance() {
        return utils;
    }

    public File getPluginFile(Activity activity, String str, String str2) {
        String str3 = activity.getFilesDir().getAbsoluteFile() + File.separator + IPluginManager.KEY_PLUGIN + str;
        File file = new File(str3);
        if (!file.exists()) {
            file.mkdir();
        }
        return new File(new File(str3), str2);
    }

    public File getPluginFile(String str, String str2, String str3) {
        String str4 = str + str2;
        File file = new File(str4);
        if (!file.exists()) {
            file.mkdir();
        }
        return new File(new File(str4), str3);
    }

    public boolean checkFoldExist(String str) {
        File file = new File(str);
        if (file.exists()) {
            return true;
        }
        file.mkdirs();
        return false;
    }
}
