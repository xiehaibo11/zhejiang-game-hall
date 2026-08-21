package com.bianfeng.fastvo;

import android.content.Context;
import com.bianfeng.fastvo.util.FileUtil;
import com.bianfeng.ymnsdk.utilslib.cache.FileUtils;
import java.io.File;
import java.io.IOException;

public class FastResource {
    private static Context context;

    public static Context getApplication() {
        return context;
    }

    private FastResource() {
    }

    public static void regist(Context context2) {
        context = context2;
        FileUtil.mkFileDirs(defaultDataDir(context2));
    }

    public static String defaultDataDir(Context context2) {
        return FileUtils.getSDCardPrivateCacheDir() + "/bftj/data/";
    }

    public static String mkDataFile(String str) {
        return defaultDataDir(context) + str;
    }

    public static boolean createNewFile(String str) {
        try {
            return new File(str).createNewFile();
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }
    }
}
