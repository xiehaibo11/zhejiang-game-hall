package com.ss.android.downloadlib.addownload;

import android.content.Intent;
import android.text.TextUtils;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import java.io.File;
import org.json.JSONArray;
import org.json.JSONObject;

public class ux {
    public static boolean df(int i) {
        return i == 2 || i == 1;
    }

    public static boolean rg(int i) {
        return i == 0 || i == 1;
    }

    public static boolean rg(DownloadModel downloadModel) {
        return downloadModel.isAd() && (downloadModel instanceof AdDownloadModel) && downloadModel.getModelType() == 1;
    }

    public static boolean df(DownloadModel downloadModel) {
        return downloadModel != null && downloadModel.getModelType() == 2;
    }

    public static boolean rg(DownloadModel downloadModel, IDownloadButtonClickListener iDownloadButtonClickListener) {
        return downloadModel.isAd() && iDownloadButtonClickListener != null;
    }

    public static int rg(com.ss.android.downloadlib.addownload.model.pp ppVar, boolean z, com.ss.android.socialbase.appdownloader.c cVar) {
        int iRg;
        if (cVar == null || TextUtils.isEmpty(cVar.rg()) || cVar.getContext() == null) {
            return 0;
        }
        try {
            iRg = rg(cVar, cVar.rg());
        } catch (Throwable th) {
            bm.qx().rg(th, "redirectSavePathIfPossible");
            iRg = 4;
        }
        cVar.rg(iRg);
        if (iRg == 0) {
            cVar.rg(new com.ss.android.downloadlib.q.rg());
        }
        if (!cVar.ey()) {
            cVar.rg(new com.ss.android.downloadlib.q.df());
        }
        int iRg2 = com.ss.android.socialbase.appdownloader.pt.bm().rg(cVar);
        com.ss.android.downloadad.api.rg.df dfVarRg = rg(ppVar, iRg2);
        com.ss.android.downloadlib.addownload.model.c.rg().rg(dfVarRg);
        dfVarRg.fw(iRg2);
        dfVarRg.ux(System.currentTimeMillis());
        dfVarRg.rz(0L);
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(cVar.vd());
        if (!rg(cVar, downloadSettingObtain, iRg2) && ppVar.df.isShowToast()) {
            String startToast = ppVar.df.getStartToast();
            if (TextUtils.isEmpty(startToast)) {
                startToast = downloadSettingObtain.optString("download_start_toast_text");
            }
            if (TextUtils.isEmpty(startToast)) {
                startToast = z ? "已开始下载，可在\"我的\"里查看管理" : "已开始下载";
            }
            bm.q().rg(2, cVar.getContext(), ppVar.df, startToast, null, 0);
        }
        return iRg2;
    }

    private static com.ss.android.downloadad.api.rg.df rg(com.ss.android.downloadlib.addownload.model.pp ppVar, int i) {
        com.ss.android.downloadad.api.rg.df dfVar = new com.ss.android.downloadad.api.rg.df(ppVar.df, ppVar.q, ppVar.pt, i);
        boolean z = true;
        if (DownloadSetting.obtain(i).optInt("download_event_opt", 1) > 1) {
            try {
                String packageName = ppVar.df.getPackageName();
                if (!TextUtils.isEmpty(packageName)) {
                    if (bm.getContext().getPackageManager().getPackageInfo(packageName, 0) == null) {
                        z = false;
                    }
                    dfVar.ux(z);
                }
            } catch (Throwable unused) {
            }
        }
        return dfVar;
    }

    private static boolean rg(com.ss.android.socialbase.appdownloader.c cVar, DownloadSetting downloadSetting, int i) {
        String strOptString;
        JSONArray jSONArrayOptJSONArray = downloadSetting.optJSONArray(DownloadSettingKeys.KEY_AH_PLANS);
        if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() != 0) {
            int length = jSONArrayOptJSONArray.length();
            int i2 = 0;
            JSONObject jSONObject = null;
            while (true) {
                if (i2 < length) {
                    JSONObject jSONObjectOptJSONObject = jSONArrayOptJSONArray.optJSONObject(i2);
                    if (jSONObjectOptJSONObject != null && ((strOptString = jSONObjectOptJSONObject.optString("type")) == "plan_c" || com.ss.android.socialbase.appdownloader.c.rg.rg(jSONObjectOptJSONObject))) {
                        switch (strOptString) {
                            case "plan_a":
                            case "plan_b":
                            case "plan_e":
                            case "plan_f":
                                if (com.ss.android.socialbase.appdownloader.df.rg(jSONObjectOptJSONObject, downloadSetting).df != 0) {
                                    break;
                                } else {
                                    break;
                                }
                                break;
                            case "plan_g":
                                if (com.ss.android.socialbase.appdownloader.df.df(jSONObjectOptJSONObject, downloadSetting).df != 0) {
                                    break;
                                } else {
                                    break;
                                }
                                break;
                            case "plan_c":
                                jSONObject = jSONObjectOptJSONObject;
                                continue;
                                break;
                        }
                    }
                    i2++;
                }
            }
            if (jSONObject != null) {
                if (jSONObject.optInt(DownloadSettingKeys.AhPlans.KEY_ALLOW_UNKNOWN_SOURCE_ON_STARTUP) == 1) {
                    return com.ss.android.socialbase.appdownloader.df.rg(DownloadComponentManager.getAppContext(), (Intent) null, jSONObject, i, new com.ss.android.socialbase.appdownloader.rg());
                }
            }
        }
        return false;
    }

    public static String rg(DownloadInfo downloadInfo) {
        if (downloadInfo == null) {
            return null;
        }
        try {
            String extra = downloadInfo.getExtra();
            if (!TextUtils.isEmpty(extra)) {
                return new JSONObject(extra).optString("notification_jump_url", null);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    private static int rg(com.ss.android.socialbase.appdownloader.c cVar, String str) {
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(cVar.vd());
        JSONObject jSONObjectOptJSONObject = downloadSettingObtain.optJSONObject(DownloadSettingKeys.KEY_ANTI_HIJACK_DIR);
        if (jSONObjectOptJSONObject == null || TextUtils.isEmpty(jSONObjectOptJSONObject.optString(DownloadSettingKeys.AntiHijackDir.KEY_ANTI_HIJACK_DIR_NAME))) {
            return -1;
        }
        String strDf = cVar.df();
        String strCd = cVar.cd();
        if (TextUtils.isEmpty(strCd)) {
            strCd = com.ss.android.socialbase.appdownloader.q.rg(str, strDf, cVar.hq(), true);
        }
        if (strCd.length() > 255) {
            strCd = strCd.substring(strCd.length() - 255);
        }
        if (TextUtils.isEmpty(strDf)) {
            strDf = strCd;
        }
        String strQ = cVar.q();
        if (TextUtils.isEmpty(strQ)) {
            strQ = com.ss.android.socialbase.appdownloader.q.df();
        }
        String str2 = strQ + File.separator + com.ss.android.socialbase.appdownloader.q.rg(strDf, downloadSettingObtain);
        DownloadInfo downloadInfoRg = com.ss.android.socialbase.appdownloader.pt.bm().rg(cVar.getContext(), str);
        if (downloadInfoRg != null && downloadInfoRg.isSavePathRedirected()) {
            cVar.q(downloadInfoRg.getSavePath());
            try {
                cVar.rg(new JSONObject(downloadInfoRg.getDownloadSettingString()));
                return 0;
            } catch (Throwable unused) {
                return 0;
            }
        }
        if (downloadInfoRg != null || !AdBaseConstants.MIME_APK.equalsIgnoreCase(com.ss.android.socialbase.appdownloader.pt.bm().rg(strCd, cVar.hq()))) {
            return downloadInfoRg != null ? 8 : 9;
        }
        int iRg = com.ss.android.socialbase.appdownloader.df.rg(downloadSettingObtain);
        if (iRg != 0) {
            return iRg;
        }
        cVar.q(str2);
        return iRg;
    }
}
