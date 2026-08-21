package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DbJsonConstants;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.expressad.foundation.g.a;
import java.io.File;
import org.json.JSONObject;

public class pt {
    public static rg rg(Context context, String str, JSONObject jSONObject, DownloadInfo downloadInfo) {
        if (downloadInfo == null || context == null || jSONObject == null) {
            return null;
        }
        String savePath = downloadInfo.getSavePath();
        if (TextUtils.isEmpty(savePath) || TextUtils.isEmpty(str)) {
            return null;
        }
        File file = new File(savePath);
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo);
        if (str.equals("v1")) {
            return new bm(context, downloadSettingObtain, downloadInfo.getTargetFilePath());
        }
        if (str.equals("v2")) {
            return new b(context, downloadSettingObtain, file.getAbsolutePath());
        }
        if (str.equals(a.j)) {
            return new hq(context, downloadSettingObtain, file.getAbsolutePath());
        }
        if (str.equals("o1")) {
            return new fw(context, downloadSettingObtain, file.getAbsolutePath());
        }
        if (str.equals("o2")) {
            return new ux(context, downloadSettingObtain, file.getAbsolutePath());
        }
        if (str.equals("o3")) {
            String dBJsonString = downloadInfo.getDBJsonString(DbJsonConstants.CONTENT_URI);
            if (TextUtils.isEmpty(dBJsonString)) {
                return null;
            }
            return new rz(context, downloadSettingObtain, file.getAbsolutePath(), dBJsonString, downloadInfo.getName());
        }
        if (str.equals("custom")) {
            return new q(context, downloadSettingObtain, file.getAbsolutePath(), jSONObject);
        }
        if (!str.equals("vbi")) {
            return null;
        }
        return new oh(context, downloadSettingObtain, com.ss.android.socialbase.appdownloader.q.rg(downloadInfo.getId(), Downloader.getInstance(context).getDownloadFileUriProvider(downloadInfo.getId()), context, com.ss.android.socialbase.appdownloader.pt.bm().pt(), new File(downloadInfo.getSavePath() + File.separator + downloadInfo.getName())).toString());
    }

    public static boolean rg(Context context, String str, JSONObject jSONObject, DownloadSetting downloadSetting) {
        if (context == null || str == null) {
            return false;
        }
        rg ohVar = null;
        String strDf = com.ss.android.socialbase.appdownloader.q.df();
        if (TextUtils.isEmpty(strDf) || TextUtils.isEmpty(str)) {
            return false;
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.q() && str.equals("v1")) {
            ohVar = new bm(context, downloadSetting, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.q() && str.equals("v2")) {
            ohVar = new b(context, downloadSetting, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.q() && str.equals(a.j)) {
            ohVar = new hq(context, downloadSetting, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.pt() && str.equals("o1")) {
            ohVar = new fw(context, downloadSetting, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.pt() && str.equals("o2")) {
            ohVar = new ux(context, downloadSetting, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.pt() && str.equals("o3")) {
            ohVar = new rz(context, downloadSetting, strDf, strDf, strDf);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.q() && str.equals("custom")) {
            ohVar = new q(context, downloadSetting, strDf, jSONObject);
        } else if (com.ss.android.socialbase.appdownloader.c.pt.q() && str.equals("vbi")) {
            ohVar = new oh(context, downloadSetting, strDf);
        }
        return ohVar != null && ohVar.rg();
    }
}
