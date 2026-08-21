package com.ss.android.downloadlib.utils;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.Signature;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Environment;
import android.os.Looper;
import android.os.StatFs;
import android.text.TextUtils;
import com.ss.android.download.api.config.v;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    private static Object[] df = new Object[0];
    private static Object[] q = new Object[73];
    static final char[] rg = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    private static String pt = null;

    public static boolean rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return new File(str).exists();
    }

    public static boolean df(String str) {
        return !TextUtils.isEmpty(str) && new File(str).exists();
    }

    public static long rg(JSONObject jSONObject, String str) {
        return com.ss.android.download.api.q.df.rg(jSONObject, str);
    }

    public static JSONObject rg(JSONObject jSONObject, JSONObject jSONObject2) {
        return com.ss.android.download.api.q.df.rg(jSONObject, jSONObject2);
    }

    public static JSONObject rg(JSONObject jSONObject) {
        return com.ss.android.download.api.q.df.rg(jSONObject);
    }

    public static JSONObject rg(JSONObject... jSONObjectArr) {
        return com.ss.android.download.api.q.df.rg(jSONObjectArr);
    }

    public static boolean rg(Context context, Intent intent) {
        try {
            List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(intent, 65536);
            if (listQueryIntentActivities != null) {
                return !listQueryIntentActivities.isEmpty();
            }
            return false;
        } catch (Exception unused) {
            return false;
        }
    }

    public static PackageInfo rg(com.ss.android.downloadad.api.rg.df dfVar) {
        DownloadInfo downloadInfo;
        if (dfVar == null || (downloadInfo = Downloader.getInstance(com.ss.android.downloadlib.addownload.bm.getContext()).getDownloadInfo(dfVar.qx())) == null) {
            return null;
        }
        try {
            return com.ss.android.socialbase.appdownloader.q.rg(com.ss.android.downloadlib.addownload.bm.getContext(), downloadInfo, downloadInfo.getSavePath(), downloadInfo.getName());
        } catch (Throwable unused) {
            return null;
        }
    }

    public static Drawable rg(Context context, String str) {
        PackageManager packageManager;
        PackageInfo packageArchiveInfo;
        if (context != null && !TextUtils.isEmpty(str) && (packageArchiveInfo = (packageManager = context.getPackageManager()).getPackageArchiveInfo(str, 0)) != null) {
            ApplicationInfo applicationInfo = packageArchiveInfo.applicationInfo;
            applicationInfo.sourceDir = str;
            applicationInfo.publicSourceDir = str;
            try {
                return applicationInfo.loadIcon(packageManager);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return null;
    }

    public static int df(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return -1;
        }
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 0);
            if (packageInfo != null) {
                return packageInfo.versionCode;
            }
            return -1;
        } catch (PackageManager.NameNotFoundException unused) {
            return -1;
        }
    }

    public static Drawable q(Context context, String str) {
        if (context != null && !TextUtils.isEmpty(str)) {
            try {
                PackageManager packageManager = context.getPackageManager();
                return packageManager.getApplicationInfo(str, 0).loadIcon(packageManager);
            } catch (PackageManager.NameNotFoundException unused) {
            }
        }
        return null;
    }

    public static boolean pt(Context context, String str) {
        if (context == null) {
            context = com.ss.android.downloadlib.addownload.bm.getContext();
        }
        if (context == null || TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            return context.getPackageManager().getPackageInfo(str, 0) != null;
        } catch (Exception unused) {
            return false;
        }
    }

    public static com.ss.android.downloadlib.addownload.model.q rg(String str, int i, String str2) {
        com.ss.android.downloadlib.addownload.model.q qVar = new com.ss.android.downloadlib.addownload.model.q();
        if (TextUtils.isEmpty(str)) {
            return qVar;
        }
        try {
            PackageInfo packageInfo = com.ss.android.downloadlib.addownload.bm.getContext().getPackageManager().getPackageInfo(str, 0);
            if (packageInfo != null) {
                qVar.df(packageInfo.versionCode);
                qVar.rg(com.ss.android.downloadlib.addownload.model.q.df);
                v vVarFw = com.ss.android.downloadlib.addownload.bm.fw();
                if (vVarFw != null && vVarFw.rg() && !rg(packageInfo.versionCode, i, packageInfo.versionName, str2)) {
                    qVar.rg(com.ss.android.downloadlib.addownload.model.q.q);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return qVar;
    }

    private static boolean rg(int i, int i2, String str, String str2) {
        if (i2 == 0 && TextUtils.isEmpty(str2)) {
            return true;
        }
        return (i2 > 0 && i >= i2) || rg(str, str2) >= 0;
    }

    public static boolean df(com.ss.android.downloadad.api.rg.df dfVar) {
        if (dfVar == null) {
            return false;
        }
        return rg(dfVar.pp(), dfVar.g(), dfVar.oy()).rg();
    }

    public static boolean rg(DownloadModel downloadModel) {
        if (downloadModel == null) {
            return false;
        }
        return rg(downloadModel.getPackageName(), downloadModel.getVersionCode(), downloadModel.getVersionName()).rg();
    }

    public static boolean df(Context context, Intent intent) {
        if (intent == null) {
            return false;
        }
        if (context == null) {
            context = com.ss.android.downloadlib.addownload.bm.getContext();
        }
        List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(intent, 65536);
        return listQueryIntentActivities != null && listQueryIntentActivities.size() > 0;
    }

    public static boolean rg(Context context, String str, String str2) {
        PackageInfo packageArchiveInfo;
        PackageInfo packageInfo;
        if (context == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return false;
        }
        try {
            File file = new File(str);
            if (!file.exists() || (packageArchiveInfo = context.getPackageManager().getPackageArchiveInfo(file.getAbsolutePath(), 0)) == null || !packageArchiveInfo.packageName.equals(str2)) {
                return false;
            }
            int i = packageArchiveInfo.versionCode;
            try {
                packageInfo = context.getPackageManager().getPackageInfo(str2, 0);
            } catch (PackageManager.NameNotFoundException unused) {
                packageInfo = null;
            }
            if (packageInfo == null) {
                return false;
            }
            return i == packageInfo.versionCode;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean pp(Context context, String str) {
        PackageInfo packageArchiveInfo;
        PackageInfo packageInfo;
        if (context == null || str == null || TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            File file = new File(str);
            if (!file.exists() || (packageArchiveInfo = context.getPackageManager().getPackageArchiveInfo(file.getAbsolutePath(), 0)) == null) {
                return false;
            }
            String str2 = packageArchiveInfo.packageName;
            int i = packageArchiveInfo.versionCode;
            try {
                packageInfo = context.getPackageManager().getPackageInfo(str2, 0);
            } catch (PackageManager.NameNotFoundException unused) {
                packageInfo = null;
            }
            if (packageInfo == null) {
                return false;
            }
            return i <= packageInfo.versionCode;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static Intent c(Context context, String str) {
        Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
        if (launchIntentForPackage == null) {
            return null;
        }
        if (!launchIntentForPackage.hasCategory("android.intent.category.LAUNCHER")) {
            launchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
        }
        launchIntentForPackage.setPackage(null);
        launchIntentForPackage.addFlags(2097152);
        launchIntentForPackage.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        return launchIntentForPackage;
    }

    public static Signature[] fw(Context context, String str) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 64);
            if (packageInfo != null) {
                return packageInfo.signatures;
            }
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static Signature[] ux(Context context, String str) {
        try {
            PackageInfo packageArchiveInfo = context.getPackageManager().getPackageArchiveInfo(str, 64);
            if (packageArchiveInfo != null) {
                return packageArchiveInfo.signatures;
            }
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static boolean rg(Signature[] signatureArr, Signature[] signatureArr2) {
        if (signatureArr == signatureArr2) {
            return true;
        }
        if (signatureArr == null || signatureArr2 == null || signatureArr.length != signatureArr2.length) {
            return false;
        }
        for (int i = 0; i < signatureArr.length; i++) {
            if ((signatureArr[i] == null && signatureArr2[i] != null) || (signatureArr[i] != null && !signatureArr[i].equals(signatureArr2[i]))) {
                return false;
            }
        }
        return true;
    }

    public static boolean q(String str) {
        File file;
        Context context = com.ss.android.downloadlib.addownload.bm.getContext();
        if (TextUtils.isEmpty(str) || !pt(context, str)) {
            return false;
        }
        int i = context.getApplicationInfo().targetSdkVersion;
        if (com.ss.android.downloadlib.addownload.bm.rz().optInt("get_ext_dir_mode") == 0 && Build.VERSION.SDK_INT >= 29 && ((i == 29 && !Environment.isExternalStorageLegacy()) || i > 29)) {
            return true;
        }
        try {
            if (Build.VERSION.SDK_INT >= 29 && context.getApplicationInfo().targetSdkVersion >= 29 && com.ss.android.downloadlib.addownload.bm.rz().optInt("get_ext_dir_mode") == 1) {
                file = rz(context, str);
            } else {
                file = new File(Environment.getExternalStorageDirectory().getPath(), "android/data/" + str);
            }
            if (!file.exists()) {
                return false;
            }
            long jRg = c.rg(file);
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 0);
            if (packageInfo != null) {
                if (packageInfo.lastUpdateTime < jRg) {
                    return true;
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return true;
        }
    }

    public static File rz(Context context, String str) {
        File parentFile = context.getExternalFilesDir(null).getParentFile();
        File file = new File((parentFile != null ? parentFile.getParent() : null) + File.separator + str);
        StringBuilder sb = new StringBuilder();
        sb.append("getExtDir: file.toString()-->");
        sb.append(file.toString());
        Logger.d("ToolUtils", sb.toString());
        return file;
    }

    public static int rg(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    public static String rg(String str, int i) {
        return i == 0 ? "" : (TextUtils.isEmpty(str) || str.length() <= i) ? str : str.substring(0, i);
    }

    public static int rg(String str, String str2) {
        try {
            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                if (str.equals(str2)) {
                    return 0;
                }
                String[] strArrSplit = str.split("\\.");
                String[] strArrSplit2 = str2.split("\\.");
                int iMin = Math.min(strArrSplit.length, strArrSplit2.length);
                int i = 0;
                int i2 = 0;
                while (i < iMin) {
                    i2 = Integer.parseInt(strArrSplit[i]) - Integer.parseInt(strArrSplit2[i]);
                    if (i2 != 0) {
                        break;
                    }
                    i++;
                }
                if (i2 != 0) {
                    return i2 > 0 ? 1 : -1;
                }
                for (int i3 = i; i3 < strArrSplit.length; i3++) {
                    if (Integer.parseInt(strArrSplit[i3]) > 0) {
                        return 1;
                    }
                }
                while (i < strArrSplit2.length) {
                    if (Integer.parseInt(strArrSplit2[i]) > 0) {
                        return -1;
                    }
                    i++;
                }
                return 0;
            }
        } catch (Exception unused) {
        }
        return -2;
    }

    public static String rg(String... strArr) {
        return com.ss.android.download.api.q.df.rg(strArr);
    }

    public static <T> T rg(T... tArr) {
        if (tArr == null) {
            throw new IllegalArgumentException("args is null");
        }
        for (T t : tArr) {
            if (t != null) {
                return t;
            }
        }
        throw new IllegalArgumentException("args is null");
    }

    public static long rg(long j) {
        try {
            return rg(Environment.getExternalStorageDirectory(), j);
        } catch (Exception e) {
            e.printStackTrace();
            return j;
        }
    }

    public static long rg(File file, long j) {
        if (file == null) {
            return j;
        }
        try {
            return DownloadUtils.getAvailableSpaceBytes(file.getAbsolutePath());
        } catch (Exception e) {
            e.printStackTrace();
            return j;
        }
    }

    public static long rg(File file) {
        if (file == null) {
            return -1L;
        }
        try {
            StatFs statFs = new StatFs(file.getAbsolutePath());
            if (Build.VERSION.SDK_INT >= 18) {
                return statFs.getTotalBytes();
            }
            return -1L;
        } catch (Throwable th) {
            th.printStackTrace();
            return -1L;
        }
    }

    public static boolean rg() {
        return Looper.myLooper() == Looper.getMainLooper();
    }

    public static void rg(JSONObject jSONObject, String str, Object obj) {
        if (jSONObject == null || TextUtils.isEmpty(str)) {
            return;
        }
        try {
            jSONObject.putOpt(str, obj);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void df() {
        try {
            if (com.ss.android.downloadlib.addownload.bm.pp().rg(com.ss.android.downloadlib.addownload.bm.getContext(), "android.permission.REORDER_TASKS")) {
                ActivityManager activityManager = (ActivityManager) com.ss.android.downloadlib.addownload.bm.getContext().getSystemService("activity");
                for (ActivityManager.RunningTaskInfo runningTaskInfo : activityManager.getRunningTasks(20)) {
                    if (com.ss.android.downloadlib.addownload.bm.getContext().getPackageName().equals(runningTaskInfo.topActivity.getPackageName())) {
                        activityManager.moveTaskToFront(runningTaskInfo.id, 1);
                        return;
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static HashMap<String, String> df(JSONObject jSONObject) {
        HashMap<String, String> map = new HashMap<>();
        if (jSONObject != null) {
            try {
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(next, jSONObject.optString(next));
                }
                return map;
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return map;
    }
}
