package com.ss.android.socialbase.appdownloader;

import android.app.Activity;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.TypedArray;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.socialbase.appdownloader.q.bm;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.constants.DownloadStatus;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.ss.android.socialbase.downloader.utils.SystemUtils;
import java.io.File;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class q {
    private static NotificationChannel df;
    private static int rg;

    private static String rg(long j, long j2, String str, boolean z) {
        double d = j;
        if (j2 > 1) {
            d /= j2;
        }
        if (z || "GB".equals(str) || "TB".equals(str)) {
            return new DecimalFormat("#.##").format(d) + " " + str;
        }
        return new DecimalFormat("#").format(d) + " " + str;
    }

    public static String rg(long j) {
        return rg(j, true);
    }

    public static String rg(long j, boolean z) {
        long[] jArr = {DownloadConstants.TB, DownloadConstants.GB, 1048576, 1024, 1};
        String[] strArr = {"TB", "GB", "MB", "KB", "B"};
        if (j < 1) {
            return "0 " + strArr[4];
        }
        for (int i = 0; i < 5; i++) {
            long j2 = jArr[i];
            if (j >= j2) {
                return rg(j, j2, strArr[i], z);
            }
        }
        return null;
    }

    private static String rg(long j, long j2, String str) {
        double d = j;
        if (j2 > 1) {
            d /= j2;
        }
        if ("MB".equals(str)) {
            return new DecimalFormat("#").format(d) + str;
        }
        return new DecimalFormat("#.##").format(d) + str;
    }

    public static String df(long j) {
        long[] jArr = {DownloadConstants.TB, DownloadConstants.GB, 1048576, 1024, 1};
        String[] strArr = {"TB", "GB", "MB", "KB", "B"};
        if (j < 1) {
            return "0 " + strArr[4];
        }
        for (int i = 0; i < 5; i++) {
            long j2 = jArr[i];
            if (j >= j2) {
                return rg(j, j2, strArr[i]);
            }
        }
        return null;
    }

    public static int rg(final Context context, final int i, final boolean z) {
        bm bmVarFw = pt.bm().fw();
        if (bmVarFw == null) {
            return pt(context, i, z);
        }
        DownloadInfo downloadInfo = Downloader.getInstance(context).getDownloadInfo(i);
        rg = 1;
        bmVarFw.rg(downloadInfo, new com.ss.android.socialbase.appdownloader.q.rz() { // from class: com.ss.android.socialbase.appdownloader.q.1
            @Override // com.ss.android.socialbase.appdownloader.q.rz
            public void rg() {
                int unused = q.rg = q.pt(context, i, z);
            }
        });
        return rg;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int pt(Context context, int i, boolean z) {
        if (DownloadSetting.obtain(i).optInt("notification_opt_2") == 1) {
            DownloadNotificationManager.getInstance().cancelNotification(i);
        }
        rg((Activity) ux.rg().df());
        if (DownloadSetting.obtain(i).optInt("install_queue_enable", 0) == 1) {
            return ux.rg().rg(context, i, z);
        }
        return df(context, i, z);
    }

    public static int df(final Context context, final int i, final boolean z) {
        final DownloadInfo downloadInfo = Downloader.getInstance(context).getDownloadInfo(i);
        if (downloadInfo != null && AdBaseConstants.MIME_APK.equals(downloadInfo.getMimeType()) && !TextUtils.isEmpty(downloadInfo.getSavePath()) && !TextUtils.isEmpty(downloadInfo.getName())) {
            final File file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
            if (file.exists()) {
                DownloadComponentManager.submitIOTask(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.q.2
                    @Override // java.lang.Runnable
                    public void run() {
                        int iRg = q.rg(context, i, z, downloadInfo, file);
                        if (iRg == 1 && pt.bm().v() != null) {
                            pt.bm().v().onOpenInstaller(downloadInfo, null);
                        }
                        q.df(downloadInfo, z, iRg);
                    }
                });
                return 1;
            }
        }
        df(downloadInfo, z, 2);
        return 2;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void df(DownloadInfo downloadInfo, boolean z, int i) {
        if (downloadInfo == null) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("by_user", z ? 1 : 2);
            jSONObject.put("view_result", i);
            jSONObject.put(EventConstants.ExtraJson.REAL_PACKAGE_NAME, downloadInfo.getFilePackageName());
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onEvent(downloadInfo.getId(), MonitorConstants.EventLabel.INSTALL_VIEW_RESULT, jSONObject);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0093 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0050 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static int rg(android.content.Context r5, int r6, boolean r7, com.ss.android.socialbase.downloader.model.DownloadInfo r8, java.io.File r9) {
        /*
            Method dump skipped, instruction units count: 296
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.q.rg(android.content.Context, int, boolean, com.ss.android.socialbase.downloader.model.DownloadInfo, java.io.File):int");
    }

    public static int rg(Context context, Intent intent) {
        try {
            if (pt.bm().f() != null) {
                if (pt.bm().f().installApp(intent)) {
                    return 1;
                }
            }
        } catch (Throwable unused) {
        }
        try {
            context.startActivity(intent);
            return 1;
        } catch (Throwable unused2) {
            return 0;
        }
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo, PackageInfo packageInfo) {
        if (packageInfo == null || packageInfo.packageName.equals(downloadInfo.getPackageName())) {
            return false;
        }
        com.ss.android.socialbase.appdownloader.q.pt ptVarDf = pt.bm().df();
        if (ptVarDf != null) {
            ptVarDf.rg(downloadInfo.getId(), 8, downloadInfo.getPackageName(), packageInfo.packageName, "");
            if (ptVarDf.rg()) {
                return true;
            }
        }
        IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(context).getDownloadNotificationEventListener(downloadInfo.getId());
        if (downloadNotificationEventListener == null) {
            return false;
        }
        downloadNotificationEventListener.onNotificationEvent(8, downloadInfo, packageInfo.packageName, "");
        com.ss.android.socialbase.appdownloader.q.q qVarRg = pt.bm().rg();
        return (qVarRg instanceof com.ss.android.socialbase.appdownloader.q.rg) && ((com.ss.android.socialbase.appdownloader.q.rg) qVarRg).q();
    }

    public static boolean rg(Context context, int i, File file) {
        if (DownloadSetting.obtain(i).optInt("back_miui_silent_install", 1) == 1) {
            return false;
        }
        if ((com.ss.android.socialbase.appdownloader.c.pt.hq() || com.ss.android.socialbase.appdownloader.c.pt.oh()) && SystemUtils.checkServiceExists(context, "com.miui.securitycore", "com.miui.enterprise.service.EntInstallService")) {
            Intent intent = new Intent();
            intent.setComponent(new ComponentName("com.miui.securitycore", "com.miui.enterprise.service.EntInstallService"));
            Bundle bundle = new Bundle();
            bundle.putInt("userId", 0);
            bundle.putInt("flag", 256);
            bundle.putString("apkPath", file.getPath());
            bundle.putString("installerPkg", "com.miui.securitycore");
            intent.putExtras(bundle);
            try {
                context.startService(intent);
                return true;
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return false;
    }

    public static int rg() {
        return pt.bm().c() ? 16384 : 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0021 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static android.net.Uri rg(int r1, com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2, android.content.Context r3, java.lang.String r4, java.io.File r5) {
        /*
            if (r2 == 0) goto Lb
            java.lang.String r1 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> L1e
            android.net.Uri r1 = r2.getUriForFile(r4, r1)     // Catch: java.lang.Throwable -> L1e
            goto L1f
        Lb:
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.c r2 = r2.pp()
            if (r2 == 0) goto L1e
            java.lang.String r0 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> L1e
            android.net.Uri r1 = r2.rg(r1, r4, r0)     // Catch: java.lang.Throwable -> L1e
            goto L1f
        L1e:
            r1 = 0
        L1f:
            if (r1 != 0) goto L3b
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L37
            r0 = 24
            if (r2 < r0) goto L32
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L37
            if (r2 != 0) goto L32
            android.net.Uri r1 = android.support.v4.content.FileProvider.getUriForFile(r3, r4, r5)     // Catch: java.lang.Throwable -> L37
            goto L3b
        L32:
            android.net.Uri r1 = android.net.Uri.fromFile(r5)     // Catch: java.lang.Throwable -> L37
            goto L3b
        L37:
            r2 = move-exception
            r2.printStackTrace()
        L3b:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.q.rg(int, com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider, android.content.Context, java.lang.String, java.io.File):android.net.Uri");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v10 */
    /* JADX WARN: Type inference failed for: r6v11 */
    /* JADX WARN: Type inference failed for: r6v6 */
    private static Intent rg(Context context, DownloadInfo downloadInfo, File file, boolean z, int[] iArr) {
        Uri uriRg = rg(downloadInfo.getId(), Downloader.getInstance(context).getDownloadFileUriProvider(downloadInfo.getId()), context, pt.bm().pt(), file);
        if (uriRg == null) {
            return null;
        }
        Intent intent = new Intent("android.intent.action.VIEW");
        if (Build.VERSION.SDK_INT >= 24) {
            intent.addFlags(1);
        }
        intent.setDataAndType(uriRg, AdBaseConstants.MIME_APK);
        com.ss.android.socialbase.appdownloader.q.pt ptVarDf = pt.bm().df();
        boolean zRg = ptVarDf != null ? ptVarDf.rg(downloadInfo.getId(), z) : false;
        IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(context).getDownloadNotificationEventListener(downloadInfo.getId());
        ?? InterceptAfterNotificationSuccess = zRg;
        if (downloadNotificationEventListener != null) {
            InterceptAfterNotificationSuccess = downloadNotificationEventListener.interceptAfterNotificationSuccess(z);
        }
        iArr[0] = InterceptAfterNotificationSuccess;
        if (InterceptAfterNotificationSuccess != 0) {
            return null;
        }
        return intent;
    }

    public static boolean rg(DownloadInfo downloadInfo, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        if (TextUtils.isEmpty(downloadInfo.getPackageName()) || !str.equals(downloadInfo.getPackageName())) {
            return !TextUtils.isEmpty(downloadInfo.getName()) && rg(DownloadComponentManager.getAppContext(), downloadInfo, str);
        }
        return true;
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo, String str) {
        if (context == null) {
            return false;
        }
        try {
            File file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
            PackageInfo packageInfo = null;
            if (file.exists()) {
                Log.e("AppDownloadUtils", "isPackageNameEqualsWithApk fileName:" + downloadInfo.getName() + " apkFileSize：" + file.length() + " fileUrl：" + downloadInfo.getUrl());
                PackageInfo packageInfoRg = rg(downloadInfo, file);
                if (packageInfoRg == null || !packageInfoRg.packageName.equals(str)) {
                    return false;
                }
                int i = packageInfoRg.versionCode;
                try {
                    packageInfo = context.getPackageManager().getPackageInfo(str, rg());
                } catch (PackageManager.NameNotFoundException unused) {
                }
                if (packageInfo == null || i != packageInfo.versionCode) {
                    return false;
                }
            } else {
                if (!DownloadSetting.obtain(downloadInfo.getId()).optBugFix("install_callback_error")) {
                    return false;
                }
                String string = DownloadUtils.getString(downloadInfo.getTempCacheData().get("extra_apk_package_name"), null);
                int i2 = DownloadUtils.getInt(downloadInfo.getTempCacheData().get("extra_apk_version_code"), 0);
                if (string == null || TextUtils.isEmpty(string) || !string.equals(str)) {
                    return false;
                }
                try {
                    packageInfo = context.getPackageManager().getPackageInfo(str, rg());
                } catch (PackageManager.NameNotFoundException unused2) {
                }
                if (packageInfo == null || i2 != packageInfo.versionCode) {
                    return false;
                }
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean df(Context context, DownloadInfo downloadInfo, PackageInfo packageInfo) {
        return rg(context, downloadInfo, packageInfo, false);
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo, PackageInfo packageInfo, boolean z) {
        PackageInfo packageInfo2;
        if (packageInfo == null) {
            return false;
        }
        String str = packageInfo.packageName;
        int i = packageInfo.versionCode;
        if (downloadInfo != null) {
            downloadInfo.setAppVersionCode(i);
        }
        try {
            packageInfo2 = context.getPackageManager().getPackageInfo(str, rg());
        } catch (PackageManager.NameNotFoundException unused) {
            packageInfo2 = null;
        }
        if (packageInfo2 == null) {
            return false;
        }
        int i2 = packageInfo2.versionCode;
        return z ? i < i2 : (downloadInfo == null || DownloadSetting.obtain(downloadInfo.getId()).optInt("install_with_same_version_code", 0) != 1) ? i <= i2 : i < i2;
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo) {
        return rg(context, downloadInfo, true);
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo, boolean z) {
        if (downloadInfo == null) {
            return false;
        }
        String packageName = downloadInfo.getPackageName();
        int appVersionCode = downloadInfo.getAppVersionCode();
        if (appVersionCode > 0 || !z) {
            PackageInfo packageInfo = null;
            try {
                packageInfo = context.getPackageManager().getPackageInfo(packageName, rg());
            } catch (PackageManager.NameNotFoundException unused) {
            }
            if (packageInfo == null) {
                return false;
            }
            return DownloadSetting.obtain(downloadInfo.getId()).optInt("install_with_same_version_code", 0) == 1 ? appVersionCode < packageInfo.versionCode : appVersionCode <= packageInfo.versionCode;
        }
        return q(context, downloadInfo);
    }

    public static int df(Context context, DownloadInfo downloadInfo) {
        if (context != null && downloadInfo != null && !TextUtils.isEmpty(downloadInfo.getSavePath()) && !TextUtils.isEmpty(downloadInfo.getName())) {
            int appVersionCode = downloadInfo.getAppVersionCode();
            if (appVersionCode > 0) {
                return appVersionCode;
            }
            try {
                PackageInfo packageInfoRg = rg(context, downloadInfo, downloadInfo.getSavePath(), downloadInfo.getName());
                if (packageInfoRg != null) {
                    int i = packageInfoRg.versionCode;
                    downloadInfo.setAppVersionCode(i);
                    return i;
                }
            } catch (Throwable unused) {
            }
        }
        return 0;
    }

    public static boolean q(Context context, DownloadInfo downloadInfo) {
        if (context == null || downloadInfo == null || TextUtils.isEmpty(downloadInfo.getSavePath()) || TextUtils.isEmpty(downloadInfo.getName())) {
            return false;
        }
        return df(context, downloadInfo, rg(context, downloadInfo, downloadInfo.getSavePath(), downloadInfo.getName()));
    }

    public static PackageInfo rg(Context context, DownloadInfo downloadInfo, String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return null;
        }
        File file = new File(str, str2);
        if (!file.exists()) {
            return null;
        }
        Log.e("AppDownloadUtils", "isApkInstalled apkFileSize：fileName:" + file.getPath() + " apkFileSize" + file.length());
        return rg(downloadInfo, file);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0037  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String rg(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
        /*
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            android.net.Uri r1 = android.net.Uri.parse(r1)
            java.lang.String r0 = "default.apk"
            if (r4 == 0) goto L26
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L3a
            java.lang.String r2 = r1.getLastPathSegment()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L37
            java.lang.String r2 = r1.getLastPathSegment()
            goto L3a
        L26:
            java.lang.String r1 = r1.getLastPathSegment()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 == 0) goto L39
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L37
            goto L3a
        L37:
            r2 = r0
            goto L3a
        L39:
            r2 = r1
        L3a:
            boolean r1 = q(r3)
            if (r1 == 0) goto L57
            java.lang.String r1 = ".apk"
            boolean r3 = r2.endsWith(r1)
            if (r3 != 0) goto L57
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r1)
            java.lang.String r2 = r3.toString()
        L57:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.q.rg(java.lang.String, java.lang.String, java.lang.String, boolean):java.lang.String");
    }

    public static String df() {
        return DownloadUtils.getDownloadPath();
    }

    public static String rg(String str, DownloadSetting downloadSetting) {
        JSONObject jSONObjectOptJSONObject;
        String str2;
        if (downloadSetting == null || (jSONObjectOptJSONObject = downloadSetting.optJSONObject(DownloadSettingKeys.KEY_ANTI_HIJACK_DIR)) == null) {
            return "";
        }
        String strOptString = jSONObjectOptJSONObject.optString(DownloadSettingKeys.AntiHijackDir.KEY_ANTI_HIJACK_DIR_NAME);
        if (!TextUtils.isEmpty(strOptString) && strOptString.startsWith("/")) {
            strOptString = strOptString.substring(1);
        }
        if (TextUtils.isEmpty(strOptString)) {
            return strOptString;
        }
        if (!strOptString.contains("%s")) {
            str2 = strOptString + str;
        } else {
            try {
                str2 = String.format(strOptString, str);
            } catch (Throwable unused) {
            }
        }
        strOptString = str2;
        return strOptString.length() > 255 ? strOptString.substring(strOptString.length() - 255) : strOptString;
    }

    public static boolean rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return new JSONObject(str).optBoolean("bind_app", false);
    }

    public static boolean df(String str) {
        JSONObject jSONObject;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            jSONObject = new JSONObject(str);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        if (!jSONObject.optBoolean("bind_app", false)) {
            if (jSONObject.optBoolean("auto_install_with_notification", true)) {
                return false;
            }
        }
        return true;
    }

    public static int rg(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == -2) {
            return 2;
        }
        if (i == 1) {
            return 4;
        }
        if (DownloadStatus.isDownloading(i) || i == 11) {
            return 1;
        }
        return DownloadStatus.isDownloadOver(i) ? 3 : 0;
    }

    public static boolean q(String str) {
        return !TextUtils.isEmpty(str) && str.equals(AdBaseConstants.MIME_APK);
    }

    public static boolean rg(Context context) {
        int color;
        if (Build.VERSION.SDK_INT > 20 && context != null) {
            TypedArray typedArrayObtainStyledAttributes = null;
            try {
                color = context.getResources().getColor(pp.df());
                typedArrayObtainStyledAttributes = context.obtainStyledAttributes(pp.pp(), new int[]{pp.q(), pp.pt()});
            } catch (Throwable unused) {
                if (typedArrayObtainStyledAttributes != null) {
                }
            }
            if (color == typedArrayObtainStyledAttributes.getColor(0, 0)) {
                if (typedArrayObtainStyledAttributes != null) {
                    try {
                        typedArrayObtainStyledAttributes.recycle();
                    } catch (Throwable unused2) {
                    }
                }
                return true;
            }
            if (typedArrayObtainStyledAttributes != null) {
                try {
                    typedArrayObtainStyledAttributes.recycle();
                } catch (Throwable unused3) {
                }
            }
        }
        return false;
    }

    public static String df(Context context) {
        try {
            if (df == null) {
                NotificationChannel notificationChannel = new NotificationChannel("111111", "channel_appdownloader", 3);
                df = notificationChannel;
                notificationChannel.setSound(null, null);
                df.setShowBadge(false);
                ((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).createNotificationChannel(df);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return "111111";
    }

    public static List<String> q() {
        ArrayList arrayList = new ArrayList(2);
        arrayList.add(AdBaseConstants.MIME_APK);
        arrayList.add("application/ttpatch");
        return arrayList;
    }

    public static void rg(DownloadInfo downloadInfo, boolean z, boolean z2) {
        pt.bm().rg(new c(DownloadComponentManager.getAppContext(), downloadInfo.getUrl()).rg(downloadInfo.getTitle()).df(downloadInfo.getName()).q(downloadInfo.getSavePath()).rg(downloadInfo.isShowNotification()).df(downloadInfo.isAutoInstallWithoutNotification()).q(downloadInfo.isOnlyWifi() || z2).pt(downloadInfo.getExtra()).pp(downloadInfo.getMimeType()).rg(downloadInfo.getExtraHeaders()).pp(true).df(downloadInfo.getRetryCount()).q(downloadInfo.getBackUpUrlRetryCount()).df(downloadInfo.getBackUpUrls()).pt(downloadInfo.getMinProgressTimeMsInterval()).pp(downloadInfo.getMaxProgressCount()).c(z).pt(downloadInfo.isNeedHttpsToHttpRetry()).c(downloadInfo.getPackageName()).fw(downloadInfo.getMd5()).rg(downloadInfo.getExpectFileLength()).rz(downloadInfo.isNeedDefaultHttpServiceBackUp()).bm(downloadInfo.isNeedReuseFirstConnection()).hq(downloadInfo.isNeedIndependentProcess()).rg(downloadInfo.getEnqueueType()).f(downloadInfo.isForce()).oh(downloadInfo.isHeadConnectionAvailable()).fw(downloadInfo.isNeedRetryDelay()).ux(downloadInfo.getRetryDelayTimeArray()).rg(pt(downloadInfo.getDownloadSettingString())).bm(downloadInfo.getIconUrl()).c(downloadInfo.getExecutorGroup()).un(downloadInfo.isAutoInstall()));
    }

    private static JSONObject pt(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            return new JSONObject(str);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void rg(Activity activity) {
        if (activity != null) {
            try {
                if (activity.isFinishing()) {
                    return;
                }
                activity.finish();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static PackageInfo rg(DownloadInfo downloadInfo, File file) {
        if (downloadInfo == null) {
            return com.ss.android.socialbase.appdownloader.c.rg.pp.rg(DownloadComponentManager.getAppContext(), file, rg());
        }
        PackageInfo packageInfo = downloadInfo.getPackageInfo();
        if (packageInfo != null) {
            return packageInfo;
        }
        PackageInfo packageInfoRg = com.ss.android.socialbase.appdownloader.c.rg.pp.rg(DownloadComponentManager.getAppContext(), file, rg());
        downloadInfo.setPackageInfo(packageInfoRg);
        return packageInfoRg;
    }

    public static int rg(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }
}
