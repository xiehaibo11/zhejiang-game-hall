package com.ss.android.socialbase.appdownloader;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.provider.Settings;
import android.support.v4.provider.FontsContractCompat;
import android.text.TextUtils;
import com.heytap.mcssdk.constant.a;
import com.meizu.cloud.pushsdk.notification.model.NotificationStyle;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.constants.DbJsonConstants;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.ss.android.socialbase.downloader.constants.SpJsonConstants;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.thread.WeakDownloadHandler;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import org.json.JSONArray;
import org.json.JSONObject;

public class df {
    private static q df;
    private static rg q;
    private static final String rg = df.class.getSimpleName();

    interface df {
        boolean rg(Context context);
    }

    public interface q {
        void rg(DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.rg rgVar);
    }

    public static boolean rg(Context context, DownloadInfo downloadInfo, Intent intent, boolean z) {
        JSONArray jSONArrayOptJSONArray = DownloadSetting.obtain(downloadInfo.getId()).optJSONArray(DownloadSettingKeys.KEY_AH_PLANS);
        if (jSONArrayOptJSONArray == null) {
            return false;
        }
        int length = jSONArrayOptJSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i);
            if (com.ss.android.socialbase.appdownloader.c.rg.rg(jSONObjectOptJSONObject) && rg(context, downloadInfo, intent, jSONObjectOptJSONObject, z)) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:100:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0199  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x015c  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0164 A[PHI: r15
      0x0164: PHI (r15v10 com.ss.android.socialbase.appdownloader.rg) = 
      (r15v2 com.ss.android.socialbase.appdownloader.rg)
      (r15v8 com.ss.android.socialbase.appdownloader.rg)
      (r15v11 com.ss.android.socialbase.appdownloader.rg)
     binds: [B:91:0x0162, B:81:0x013a, B:69:0x010d] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean rg(Context context, DownloadInfo downloadInfo, Intent intent, JSONObject jSONObject, boolean z) {
        DownloadSetting downloadSettingObtain;
        com.ss.android.socialbase.appdownloader.rg rgVarRg;
        boolean zRg;
        boolean z2 = false;
        if (jSONObject != null && downloadInfo != null) {
            com.ss.android.socialbase.appdownloader.rg rgVar = new com.ss.android.socialbase.appdownloader.rg();
            String strOptString = jSONObject.optString("type");
            if (!TextUtils.isEmpty(strOptString)) {
                downloadSettingObtain = DownloadSetting.obtain(downloadInfo);
                rgVar.rg = strOptString;
                switch (strOptString) {
                    case "plan_a":
                    case "plan_e":
                        if (!downloadInfo.isSavePathRedirected()) {
                            rgVar.df = downloadInfo.getAntiHijackErrorCode(-1);
                        } else {
                            rgVarRg = rg(jSONObject, downloadSettingObtain);
                            if (rgVarRg.df != 0) {
                                rgVar = rgVarRg;
                            } else if (strOptString.equals("plan_f") && TextUtils.isEmpty(downloadInfo.getDBJsonString(DbJsonConstants.CONTENT_URI))) {
                                rgVar.df = downloadInfo.getAntiHijackErrorCode(10);
                            } else {
                                zRg = rg(context, downloadInfo, jSONObject, rgVar);
                                z2 = zRg;
                            }
                        }
                        if (z2) {
                            downloadInfo.getTempCacheData().put("ah_attempt", rgVar.rg());
                        }
                        if (df != null) {
                            downloadInfo.getTempCacheData().put("intent", intent);
                            df.rg(downloadInfo, rgVar);
                            break;
                        }
                        break;
                    case "plan_f":
                        break;
                    case "plan_b":
                        rgVarRg = rg(jSONObject, downloadSettingObtain);
                        if (rgVarRg.df == 0) {
                            if (!downloadInfo.isSavePathRedirected()) {
                                rgVar.df = downloadInfo.getAntiHijackErrorCode(-1);
                            } else {
                                zRg = df(context, downloadInfo, jSONObject, rgVar);
                                z2 = zRg;
                            }
                        }
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                    case "plan_d":
                        rgVar.rg = "plan_d";
                        if (!com.ss.android.socialbase.appdownloader.c.pt.q()) {
                            rgVar.df = 2;
                        } else {
                            try {
                                com.ss.android.socialbase.appdownloader.q.rg(context, intent);
                                rgVar.df = 0;
                                z2 = true;
                            } catch (Throwable th) {
                                rgVar.df = 4;
                                rgVar.q = th.toString();
                            }
                        }
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                    case "plan_g":
                        rgVarRg = df(jSONObject, downloadSettingObtain);
                        if (rgVarRg.df == 0) {
                            zRg = rg(context, downloadInfo, jSONObject, rgVar, downloadSettingObtain);
                            z2 = zRg;
                            if (z2) {
                            }
                            if (df != null) {
                            }
                        }
                        rgVar = rgVarRg;
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                    case "plan_h":
                        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(downloadSettingObtain.optString("bh"), downloadSettingObtain.optString("s"));
                        com.ss.android.socialbase.appdownloader.rg rgVarRg2 = rg(jSONObject, strRg, context, downloadSettingObtain);
                        if (rgVarRg2.df != 0) {
                            rgVar = rgVarRg2;
                        } else {
                            String packageName = context.getPackageName();
                            if (com.ss.android.socialbase.appdownloader.c.rg.rg(DownloadSetting.getGlobalSettings(), context, strRg)) {
                                try {
                                    com.ss.android.socialbase.appdownloader.q.rg(context, intent);
                                    rgVar.df = 0;
                                    z2 = true;
                                } catch (Throwable th2) {
                                    try {
                                        rgVar.df = 1;
                                        rgVar.q = th2.toString();
                                    } finally {
                                        com.ss.android.socialbase.appdownloader.c.rg.rg(DownloadSetting.getGlobalSettings(), context, packageName);
                                    }
                                }
                            } else {
                                rgVar.df = 11;
                            }
                        }
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                    case "plan_c":
                        if (Build.VERSION.SDK_INT >= 26 || com.ss.android.socialbase.appdownloader.c.pt.df()) {
                            if ((jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_JUMP_UNKNOWN_SOURCE_ENABLE_FOR_ALL, 0) == 1) || z) {
                                if (!(jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1)) {
                                    zRg = rg(context, intent, jSONObject, downloadInfo.getId(), rgVar);
                                    z2 = zRg;
                                }
                            }
                        }
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                    default:
                        if (z2) {
                        }
                        if (df != null) {
                        }
                        break;
                }
            }
        }
        return z2;
    }

    private static boolean rg(Context context, DownloadInfo downloadInfo, JSONObject jSONObject, com.ss.android.socialbase.appdownloader.rg rgVar, DownloadSetting downloadSetting) {
        boolean zDf;
        String strOptString = jSONObject.optString("type");
        rgVar.rg = strOptString;
        Intent intentDf = com.ss.android.socialbase.appdownloader.rg.pt.rg(context, "vbi", jSONObject, downloadInfo).df();
        StringBuilder sb = new StringBuilder();
        try {
            zDf = df(context, intentDf);
        } catch (Throwable th) {
            sb.append(strOptString);
            sb.append(" startActivity failed : ");
            sb.append(rg(th));
            rg(rgVar, 1);
            zDf = false;
        }
        if (!zDf) {
            rgVar.q = sb.toString();
        } else {
            rgVar.df = 0;
        }
        return true;
    }

    private static boolean rg(Context context, DownloadInfo downloadInfo, JSONObject jSONObject, com.ss.android.socialbase.appdownloader.rg rgVar) {
        boolean z;
        if (context != null && jSONObject != null) {
            String strOptString = jSONObject.optString(DownloadSettingKeys.AhPlans.KEY_AH_DEVICE_PLANS);
            rgVar.pp = strOptString;
            if (!TextUtils.isEmpty(strOptString)) {
                String[] strArrSplit = strOptString.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                String savePath = downloadInfo.getSavePath();
                if (TextUtils.isEmpty(savePath)) {
                    return false;
                }
                File file = new File(savePath);
                StringBuilder sb = new StringBuilder();
                String str = null;
                int length = strArrSplit.length;
                int i = 0;
                while (true) {
                    z = true;
                    if (i >= length) {
                        z = false;
                        break;
                    }
                    String str2 = strArrSplit[i];
                    com.ss.android.socialbase.appdownloader.rg.rg rgVarRg = com.ss.android.socialbase.appdownloader.rg.pt.rg(context, str2, jSONObject, downloadInfo);
                    if (rgVarRg != null) {
                        Intent intentDf = rgVarRg.df();
                        if (intentDf != null) {
                            if (rg(file, downloadInfo, jSONObject)) {
                                try {
                                    rg(context, intentDf, false);
                                    str = str2;
                                    break;
                                } catch (Throwable th) {
                                    sb.append(str2);
                                    sb.append(" startActivity failed : ");
                                    sb.append(rg(th));
                                    rg(rgVar, 1);
                                }
                            } else {
                                rg(rgVar, 6);
                                sb.append(str2);
                                sb.append(" createDescFile failed! ");
                            }
                        } else {
                            rg(rgVar, 3);
                            sb.append(str2);
                            sb.append(" resolveActivity failed! ");
                        }
                    }
                    sb.append("  ");
                    i++;
                }
                if (!z) {
                    rgVar.q = sb.toString();
                } else {
                    rgVar.pt = str;
                    rgVar.df = 0;
                }
                return z;
            }
        }
        return false;
    }

    private static boolean df(Context context, DownloadInfo downloadInfo, JSONObject jSONObject, com.ss.android.socialbase.appdownloader.rg rgVar) {
        if (context != null && jSONObject != null) {
            String savePath = downloadInfo.getSavePath();
            if (TextUtils.isEmpty(savePath)) {
                return false;
            }
            rgVar.pt = "custom";
            com.ss.android.socialbase.appdownloader.rg.rg rgVarRg = com.ss.android.socialbase.appdownloader.rg.pt.rg(context, "custom", jSONObject, downloadInfo);
            if (rgVarRg == null || !rgVarRg.rg()) {
                rgVar.df = 3;
            } else {
                Intent intentDf = rgVarRg.df();
                if (intentDf == null) {
                    return false;
                }
                if (rg(new File(savePath), downloadInfo, jSONObject)) {
                    if (df(context, intentDf)) {
                        rgVar.df = 0;
                        return true;
                    }
                    rgVar.df = 1;
                } else {
                    rgVar.df = 6;
                }
                return false;
            }
        }
        return false;
    }

    public static int rg(DownloadSetting downloadSetting) {
        int i;
        if (!(downloadSetting.optJSONObject(DownloadSettingKeys.KEY_ANTI_HIJACK_DIR) != null ? !TextUtils.isEmpty(r0.optString(DownloadSettingKeys.AntiHijackDir.KEY_ANTI_HIJACK_DIR_NAME)) : false)) {
            return 5;
        }
        if (!DownloadSetting.obtainGlobal().optBugFix(DownloadSettingKeys.BugFix.BUGFIX_GET_DOWNLOAD_INFO_BY_LIST)) {
            return 4;
        }
        JSONArray jSONArrayOptJSONArray = downloadSetting.optJSONArray(DownloadSettingKeys.KEY_AH_PLANS);
        int i2 = -1;
        if (jSONArrayOptJSONArray != null) {
            int length = jSONArrayOptJSONArray.length();
            for (int i3 = 0; i3 < length; i3++) {
                JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i3);
                if (com.ss.android.socialbase.appdownloader.c.rg.rg(jSONObjectOptJSONObject)) {
                    String strOptString = jSONObjectOptJSONObject.optString("type");
                    if ("plan_a".equals(strOptString) || "plan_b".equals(strOptString) || "plan_e".equals(strOptString) || "plan_f".equals(strOptString)) {
                        com.ss.android.socialbase.appdownloader.rg rgVarRg = rg(jSONObjectOptJSONObject, downloadSetting);
                        i = rgVarRg.df;
                        if (rgVarRg.df == 0) {
                            return 0;
                        }
                    } else {
                        if (!"plan_d".equalsIgnoreCase(strOptString) && !"plan_h".equalsIgnoreCase(strOptString)) {
                            if ("plan_g".equalsIgnoreCase(strOptString)) {
                                com.ss.android.socialbase.appdownloader.rg rgVarDf = df(jSONObjectOptJSONObject, downloadSetting);
                                i = rgVarDf.df;
                                if (rgVarDf.df == 0) {
                                }
                            } else {
                                continue;
                            }
                        }
                        return 0;
                    }
                    i2 = i;
                }
            }
        }
        return i2;
    }

    public static com.ss.android.socialbase.appdownloader.rg rg(JSONObject jSONObject, DownloadSetting downloadSetting) {
        com.ss.android.socialbase.appdownloader.rg rgVar = new com.ss.android.socialbase.appdownloader.rg();
        if (jSONObject == null) {
            return rgVar;
        }
        String strOptString = jSONObject.optString("type");
        rgVar.rg = strOptString;
        if ("plan_b".equals(strOptString)) {
            rgVar.pp = "custom";
            if (com.ss.android.socialbase.appdownloader.rg.pt.rg(DownloadComponentManager.getAppContext(), "custom", jSONObject, downloadSetting)) {
                rgVar.df = 0;
                return rgVar;
            }
            rg(rgVar, 3);
        } else {
            String strOptString2 = jSONObject.optString(DownloadSettingKeys.AhPlans.KEY_AH_DEVICE_PLANS);
            rgVar.pp = strOptString2;
            if (!TextUtils.isEmpty(strOptString2)) {
                for (String str : strOptString2.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                    if (com.ss.android.socialbase.appdownloader.rg.pt.rg(DownloadComponentManager.getAppContext(), str, jSONObject, downloadSetting)) {
                        rgVar.df = 0;
                        return rgVar;
                    }
                    rg(rgVar, 3);
                }
            }
        }
        return rgVar;
    }

    public static com.ss.android.socialbase.appdownloader.rg df(JSONObject jSONObject, DownloadSetting downloadSetting) {
        com.ss.android.socialbase.appdownloader.rg rgVar = new com.ss.android.socialbase.appdownloader.rg();
        if (jSONObject == null) {
            return rgVar;
        }
        rgVar.rg = jSONObject.optString("type");
        rgVar.pp = "vbi";
        if (com.ss.android.socialbase.appdownloader.rg.pt.rg(DownloadComponentManager.getAppContext(), "vbi", jSONObject, downloadSetting)) {
            rgVar.df = 0;
        } else {
            rg(rgVar, 3);
        }
        return rgVar;
    }

    public static com.ss.android.socialbase.appdownloader.rg rg(JSONObject jSONObject, String str, Context context, DownloadSetting downloadSetting) {
        com.ss.android.socialbase.appdownloader.rg rgVar = new com.ss.android.socialbase.appdownloader.rg();
        if (jSONObject != null && com.ss.android.socialbase.appdownloader.c.pt.df()) {
            rgVar.rg = jSONObject.optString("type");
            if (downloadSetting.optInt(NotificationStyle.BANNER_IMAGE_URL, 0) == 1) {
                rgVar.df = 0;
                return rgVar;
            }
            if (rg(context)) {
                rgVar.df = 2;
            } else if (com.ss.android.socialbase.appdownloader.c.rg.rg(str) != null) {
                rgVar.df = 0;
            } else {
                rgVar.df = 9;
            }
        }
        return rgVar;
    }

    private static void rg(com.ss.android.socialbase.appdownloader.rg rgVar, int i) {
        if (rgVar.df != -1) {
            rgVar.df = (rgVar.df * 10) + i;
        } else {
            rgVar.df = i;
        }
    }

    private static boolean rg(File file, DownloadInfo downloadInfo, JSONObject jSONObject) {
        if (file == null) {
            return false;
        }
        String path = file.getPath();
        JSONObject jSONObjectOptJSONObject = DownloadSetting.obtain(downloadInfo.getId()).optJSONObject(DownloadSettingKeys.KEY_ANTI_HIJACK_DIR);
        File file2 = null;
        String strOptString = jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.optString(DownloadSettingKeys.AntiHijackDir.KEY_ANTI_HIJACK_INSTALL_DESC) : null;
        if (!TextUtils.isEmpty(strOptString) && !TextUtils.isEmpty(strOptString)) {
            file2 = new File(path + File.separator + strOptString);
        }
        if (file2 == null) {
            return true;
        }
        try {
            if (!file2.createNewFile()) {
                return true;
            }
            file2.deleteOnExit();
            return true;
        } catch (IOException unused) {
            return false;
        }
    }

    public static boolean rg(Context context, Intent intent, JSONObject jSONObject, int i, com.ss.android.socialbase.appdownloader.rg rgVar) {
        if (context != null && jSONObject != null) {
            long jOptLong = jSONObject.optLong(DownloadSettingKeys.AhPlans.KEY_JUMP_INTERVAL, 0L);
            if (jOptLong <= 0) {
                return false;
            }
            SharedPreferences sharedPreferences = context.getSharedPreferences(DownloadConstants.SP_ANTI_HIJACK_CONFIG, 0);
            if ((System.currentTimeMillis() - sharedPreferences.getLong(SpJsonConstants.KEY_LAST_JUMP_UNKNOWN_SOURCE_TIME, 0L)) / 60000 >= jOptLong && !rg(context)) {
                sharedPreferences.edit().putLong(SpJsonConstants.KEY_LAST_JUMP_UNKNOWN_SOURCE_TIME, System.currentTimeMillis()).apply();
                if (jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_SHOW_UNKNOWN_SOURCE_DIALOG, 0) == 1) {
                    Intent intent2 = new Intent(context, (Class<?>) JumpUnknownSourceActivity.class);
                    intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    intent2.putExtra("intent", intent);
                    intent2.putExtra("config", jSONObject.toString());
                    intent2.putExtra("id", i);
                    try {
                        if (rg(context, intent2, false)) {
                            pt(i, jSONObject);
                        }
                        return true;
                    } catch (Throwable th) {
                        if (rgVar != null) {
                            rgVar.df = 1;
                            rgVar.q = "tryShowUnknownSourceDialog" + rg(th);
                        }
                        return false;
                    }
                }
                if (rg(context, intent, i, jSONObject)) {
                    q(i, jSONObject);
                }
                return true;
            }
        }
        return false;
    }

    public static boolean rg(Context context, Intent intent, int i, JSONObject jSONObject) {
        try {
            if (com.ss.android.socialbase.appdownloader.c.pt.df() && Build.VERSION.SDK_INT < 26 && !pt(context)) {
                com.ss.android.socialbase.appdownloader.rg.c cVar = new com.ss.android.socialbase.appdownloader.rg.c(context);
                if (cVar.rg()) {
                    rg(context, intent, i, jSONObject, new df() {
                        @Override
                        public boolean rg(Context context2) {
                            return df.pt(context2);
                        }
                    });
                    return df(context, cVar.df());
                }
            } else if (Build.VERSION.SDK_INT >= 26 && context.getApplicationInfo().targetSdkVersion >= 26 && !pp(context)) {
                com.ss.android.socialbase.appdownloader.rg.df dfVar = new com.ss.android.socialbase.appdownloader.rg.df(context);
                if (dfVar.rg()) {
                    rg(context, intent, i, jSONObject, new df() {
                        @Override
                        public boolean rg(Context context2) {
                            return df.pp(context2);
                        }
                    });
                    return df(context, dfVar.df());
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static boolean rg(Context context) {
        if (context == null) {
            return true;
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.df() && Build.VERSION.SDK_INT < 26) {
            return pt(context);
        }
        if (Build.VERSION.SDK_INT >= 26 && context.getApplicationInfo().targetSdkVersion >= 26) {
            return pp(context);
        }
        return true;
    }

    private static boolean pt(Context context) {
        if (context == null) {
            return true;
        }
        try {
            return Settings.Secure.getInt(context.getContentResolver(), "install_non_market_apps", 1) > 0;
        } catch (Throwable unused) {
            return true;
        }
    }

    private static boolean pp(Context context) {
        if (context == null) {
            return true;
        }
        try {
            return context.getPackageManager().canRequestPackageInstalls();
        } catch (Throwable unused) {
            return true;
        }
    }

    public static boolean rg() {
        return pp.rg == 1;
    }

    private static void pt(int i, JSONObject jSONObject) {
        int i2 = 1;
        boolean z = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1;
        JSONObject jSONObject2 = new JSONObject();
        if (!z) {
            i2 = 2;
        }
        try {
            jSONObject2.put("scene", i2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onUnityEvent(i, MonitorConstants.UnityLabel.GUIDE_AUTH_DIALOG_SHOW, jSONObject2);
    }

    public static void rg(int i, JSONObject jSONObject) {
        int i2 = 1;
        boolean z = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1;
        JSONObject jSONObject2 = new JSONObject();
        if (!z) {
            i2 = 2;
        }
        try {
            jSONObject2.put("scene", i2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onUnityEvent(i, MonitorConstants.UnityLabel.GUIDE_AUTH_DIALOG_CONFIRM, jSONObject2);
    }

    public static void df(int i, JSONObject jSONObject) {
        int i2 = 1;
        boolean z = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1;
        JSONObject jSONObject2 = new JSONObject();
        if (!z) {
            i2 = 2;
        }
        try {
            jSONObject2.put("scene", i2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onUnityEvent(i, MonitorConstants.UnityLabel.GUIDE_AUTH_DIALOG_CANCEL, jSONObject2);
    }

    public static void q(int i, JSONObject jSONObject) {
        int i2 = 1;
        boolean z = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1;
        JSONObject jSONObject2 = new JSONObject();
        if (!z) {
            i2 = 2;
        }
        try {
            jSONObject2.put("scene", i2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onUnityEvent(i, MonitorConstants.UnityLabel.GUIDE_AUTH_OPEN_SETTING, jSONObject2);
    }

    private static void df(int i, boolean z, boolean z2) {
        JSONObject jSONObject = new JSONObject();
        int i2 = 1;
        try {
            jSONObject.put("scene", z ? 1 : 2);
            if (!z2) {
                i2 = 2;
            }
            jSONObject.put(FontsContractCompat.Columns.RESULT_CODE, i2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        DownloadComponentManager.getEventListener().onUnityEvent(i, MonitorConstants.UnityLabel.GUIDE_AUTH_RESULT, jSONObject);
    }

    private static void rg(Context context, Intent intent, int i, JSONObject jSONObject, df dfVar) {
        if (q != null) {
            AppStatusManager.getInstance().unregisterAppSwitchListener(q);
            q = null;
        }
        q = new rg(context, intent, i, jSONObject, dfVar);
        AppStatusManager.getInstance().registerAppSwitchListener(q);
    }

    private static boolean df(Context context, Intent intent) {
        return rg(context, intent, true);
    }

    public static boolean rg(Context context, Intent intent, boolean z) {
        if (context == null || intent == null) {
            return false;
        }
        if (z) {
            try {
                intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
                context.startActivity(intent);
                return true;
            } catch (Throwable unused) {
                return false;
            }
        }
        intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        context.startActivity(intent);
        return true;
    }

    public static String rg(Throwable th) {
        String string = th.toString();
        return string.length() > 800 ? string.substring(0, 500) : string;
    }

    private static class pt implements Callable<Boolean> {
        private final df df;
        private final long pt;
        private final Handler q;
        private final Context rg;

        public pt(Handler handler, Context context, df dfVar, long j) {
            this.rg = context;
            this.df = dfVar;
            this.q = handler;
            this.pt = j;
        }

        @Override
        public Boolean call() throws Exception {
            if (this.df != null && this.pt > 0 && this.pt <= a.q) {
                Context context = this.rg;
                boolean zRg = context != null ? this.df.rg(context) : false;
                Message messageObtain = Message.obtain();
                if (zRg) {
                    messageObtain.what = 2;
                    this.q.sendMessage(messageObtain);
                } else {
                    messageObtain.what = 1;
                    this.q.sendMessageDelayed(messageObtain, this.pt);
                }
                return false;
            }
            return false;
        }
    }

    public static void rg(q qVar) {
        df = qVar;
    }

    private static class rg implements AppStatusManager.AppStatusChangeListener {
        private final int df;
        private JSONObject q;
        private final pp rg;

        public rg(Context context, Intent intent, int i, JSONObject jSONObject, df dfVar) {
            this.q = jSONObject;
            int iOptInt = jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_JUMP_UNKNWON_SOURCE_QUERY_INTERVAL, 1000);
            this.df = iOptInt;
            this.rg = new pp(context, intent, i, dfVar, iOptInt);
        }

        @Override
        public void onAppForeground() {
            if (!this.rg.rz) {
                Message messageObtain = Message.obtain();
                messageObtain.what = 2;
                this.rg.c.sendMessage(messageObtain);
            }
            AppStatusManager.getInstance().unregisterAppSwitchListener(this);
            rg unused = df.q = null;
        }

        @Override
        public void onAppBackground() {
            int iOptInt = this.q.optInt(DownloadSettingKeys.AhPlans.KEY_JUMP_UNKNWON_SOURCE_WAIT_TIME_OUT, 20);
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            this.rg.c.sendMessage(messageObtain);
            if (iOptInt <= 0 || iOptInt >= 60) {
                return;
            }
            Message messageObtain2 = Message.obtain();
            messageObtain2.what = 2;
            this.rg.c.sendMessageDelayed(messageObtain2, iOptInt * 1000);
        }
    }

    private static class pp implements WeakDownloadHandler.IHandler {
        private static int df;
        public static int rg;
        private final Handler c;
        private final long fw;
        private final df pp;
        private final Intent pt;
        private final Context q;
        private boolean rz = false;
        private Future<Boolean> ux;

        public pp(Context context, Intent intent, int i, df dfVar, long j) {
            this.q = context;
            this.pt = intent;
            df = i;
            this.pp = dfVar;
            this.c = new WeakDownloadHandler(Looper.getMainLooper(), this);
            this.fw = j;
        }

        @Override
        public void handleMsg(Message message) {
            if (message != null) {
                if (message.what == 1) {
                    long j = this.fw;
                    if (j <= 0 || j > a.q) {
                        return;
                    }
                    rg = 1;
                    this.ux = DownloadComponentManager.getCPUThreadExecutor().submit(new pt(this.c, this.q, this.pp, this.fw));
                    return;
                }
                if (message.what == 2) {
                    rg = 2;
                    this.c.removeMessages(2);
                    this.c.removeMessages(1);
                    Future<Boolean> future = this.ux;
                    if (future != null) {
                        future.cancel(true);
                    }
                    if (!this.rz && (Build.VERSION.SDK_INT < 29 || AppStatusManager.getInstance().isAppForeground())) {
                        Intent intent = this.pt;
                        if (intent != null) {
                            df.df(this.q, intent);
                        } else {
                            DownloadInfo downloadInfo = Downloader.getInstance(this.q).getDownloadInfo(df);
                            if (downloadInfo != null && downloadInfo.isDownloadOverStatus()) {
                                com.ss.android.socialbase.appdownloader.q.df(this.q, df, false);
                            }
                        }
                        this.rz = true;
                    }
                    df.df(df, this.pt == null, df.rg(this.q));
                }
            }
        }
    }
}
