package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Environment;
import android.text.TextUtils;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public final class av {
    private static String aJf;
    private static File aJg;

    private static boolean Jq() {
        try {
            if ("mounted".equals(Environment.getExternalStorageState())) {
                return true;
            }
            return !Environment.isExternalStorageRemovable();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return false;
        }
    }

    private static String cI(Context context) {
        if (!TextUtils.isEmpty(aJf)) {
            return aJf;
        }
        String path = null;
        if (Jq()) {
            try {
                File externalFilesDir = context.getExternalFilesDir(null);
                if (externalFilesDir != null) {
                    path = externalFilesDir.getPath();
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        if (TextUtils.isEmpty(path)) {
            path = context.getFilesDir().getPath();
        }
        String str = path + File.separator + "ksadsdk";
        aJf = str;
        return str;
    }

    public static File cJ(Context context) {
        File file = aJg;
        if (file != null) {
            return file;
        }
        String path = null;
        if (Jq()) {
            try {
                File externalCacheDir = context.getExternalCacheDir();
                if (externalCacheDir != null) {
                    path = externalCacheDir.getPath();
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        if (TextUtils.isEmpty(path)) {
            path = context.getCacheDir().getPath();
        }
        File file2 = new File(path + File.separator + "ksadsdk");
        aJg = file2;
        if (!file2.exists()) {
            aJg.mkdirs();
        }
        return aJg;
    }

    public static File cK(Context context) {
        File file = new File(cI(context) + File.separator + "Download");
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    public static File cL(Context context) {
        File file = new File(cI(context) + File.separator + "downloadFileSync/.temp");
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    public static File cM(Context context) {
        String strCI;
        if (com.kwad.framework.a.a.ml.booleanValue()) {
            strCI = cI(context);
        } else {
            strCI = context.getFilesDir().getAbsolutePath() + File.separator + "ksadsdk";
        }
        return new File(strCI + File.separator + "ksadlog");
    }

    public static String cN(Context context) {
        if (context == null) {
            return "";
        }
        return context.getFilesDir().getPath() + File.separator + "ksadsdk";
    }

    public static String cO(Context context) {
        return cJ(context).getPath() + "/cookie";
    }

    public static String getTkJsFileDir(Context context, String str) {
        if (context == null) {
            return "";
        }
        return cN(context) + File.separator + "ksad/download/js" + File.separator + str;
    }

    public static String getTkJsRootDir(Context context) {
        if (context == null) {
            return "";
        }
        return cN(context) + File.separator + "ksad/download/js";
    }
}
