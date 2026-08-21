package com.sigmob.sdk.base.utils;

import android.content.Context;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.logger.SigmobLog;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.Arrays;

public final class b {
    public static String a = "SigHtmlResource";
    public static String b = "SigHtmlPrivacy";
    public static String c = "SigZipResource";
    private static String d;
    private static String e;

    public static File a(Context context) {
        return new File(e, "SigDownload");
    }

    public static File a(String str, String str2) {
        try {
            File file = new File(e, a);
            if (!file.exists()) {
                file.mkdirs();
            }
            File file2 = new File(file, str2);
            SigmobLog.d("SigHtmlResource: " + file2.getAbsolutePath());
            if (file2.exists()) {
                file2.delete();
            }
            file2.createNewFile();
            FileWriter fileWriter = new FileWriter(file2, true);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);
            bufferedWriter.write(str);
            bufferedWriter.newLine();
            bufferedWriter.close();
            fileWriter.close();
            return file2;
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static String a() {
        return d;
    }

    public static synchronized String a(String str) {
        return d + File.separator + "splashAdUnit" + File.separator + str;
    }

    public static void a(Context context, String str) {
        File cacheDir = context.getCacheDir();
        File externalCacheDir = context.getExternalCacheDir();
        if (str != null) {
            File file = new File(cacheDir, str);
            if (!file.exists()) {
                file.mkdirs();
            }
            File file2 = new File(externalCacheDir, str);
            if (!file2.exists()) {
                file2.mkdirs();
            }
            externalCacheDir = file2;
            cacheDir = file;
        }
        d = cacheDir.getAbsolutePath();
        e = externalCacheDir.getAbsolutePath();
    }

    public static File[] a(File[] fileArr, int i) {
        if (fileArr == null || fileArr.length == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList(Arrays.asList(fileArr));
        for (int i2 = 0; i2 < fileArr.length && arrayList.size() > i; i2++) {
            File file = fileArr[i2];
            if (file.exists()) {
                file.delete();
                arrayList.remove(file);
                SigmobLog.d("file delete " + file.getName());
            }
        }
        return (File[]) arrayList.toArray(new File[0]);
    }

    public static File b(String str) {
        File file = new File(e, str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    public static String b() {
        String str = d + File.separator + "videoAd";
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return str;
    }

    public static File c(String str) {
        File file = new File(e, str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    public static String c() {
        return e;
    }

    public static String d() {
        String str = d + File.separator + "splashAd";
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return str;
    }

    public static String e() {
        String str = d + File.separator + "nativeAd";
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return str;
    }

    public static String f() {
        String str = d + File.separator + "downloadAPKLog";
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        return str;
    }

    public static synchronized String g() {
        return d + File.separator + "logger" + File.separator + "sdkLog.log";
    }

    public static void h() {
        if (d != null) {
            File file = new File(d);
            if (file.exists()) {
                FileUtil.deleteDirectory(d);
            }
            if (!file.exists() || file.isFile()) {
                file.mkdirs();
            }
        }
    }
}
