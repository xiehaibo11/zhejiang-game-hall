package com.sigmob.sdk.base.services;

import android.app.DownloadManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.widget.Toast;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.common.n;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.windad.WindAdError;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.tkay.expressad.foundation.d.r;
import java.io.File;
import java.util.HashMap;
import java.util.Map;

class c extends BroadcastReceiver {
    c() {
    }

    private void a(Context context, long j, BaseAdUnit baseAdUnit) {
        if (baseAdUnit != null) {
            Map<String, Object> mapA = n.a(a(context), j);
            com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.F);
            String str = "download info is null";
            if (mapA != null) {
                String str2 = (String) mapA.get("fileName");
                int iIntValue = ((Integer) mapA.get("status")).intValue();
                int iIntValue2 = ((Integer) mapA.get(r.ac)).intValue();
                Uri uri = (Uri) mapA.get("uri");
                if (str2 != null && iIntValue == 8) {
                    try {
                        String realFilePath = FileUtil.getRealFilePath(context, uri);
                        z.a(baseAdUnit, PointCategory.DOWNLOAD_END, ClientMetadata.getPackageInfoWithUri(context, realFilePath), "1");
                        HashMap map = new HashMap();
                        map.put("result", "1");
                        map.put("downloadId", Long.valueOf(j));
                        BaseBroadcastReceiver.a(context, baseAdUnit.getUuid(), map, IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_END);
                        n.a(context, realFilePath, baseAdUnit);
                        return;
                    } catch (Throwable th) {
                        SigmobLog.e(th.getMessage());
                        z.a(PointCategory.APP_INSTALL_START, WindAdError.ERROR_SIGMOB_INSTALL_FAIL.getErrorCode(), th.getMessage(), baseAdUnit);
                        z.b(PointCategory.APP_INSTALL_START, "0", baseAdUnit);
                        return;
                    }
                }
                try {
                    str = String.format("status %d, reason %d", Integer.valueOf(iIntValue), Integer.valueOf(iIntValue2));
                    SigmobLog.i("handleDownloadComplete:fail:" + FileUtil.deleteFile(FileUtil.getRealFilePath(context, uri)));
                } catch (Throwable th2) {
                    SigmobLog.e(th2.getMessage());
                }
            }
            try {
                Toast.makeText(context, "下载失败", 0).show();
            } catch (Throwable th3) {
                SigmobLog.e(th3.getMessage());
            }
            z.a("download_failed", 2, str, baseAdUnit);
            z.b(PointCategory.DOWNLOAD_END, "0", baseAdUnit);
            HashMap map2 = new HashMap();
            map2.put("result", "0");
            map2.put("downloadId", Long.valueOf(j));
            BaseBroadcastReceiver.a(context, baseAdUnit.getUuid(), map2, IntentActions.ACTION_INTERSTITIAL_DOWNLOAD_END);
        }
    }

    DownloadManager a(Context context) {
        return (DownloadManager) context.getSystemService("download");
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        long longExtra = intent.getLongExtra(DownloadConstants.EXTRA_DOWNLOAD_ID, -1L);
        BaseAdUnit baseAdUnit = null;
        n.b(longExtra, null);
        File file = new File(com.sigmob.sdk.base.utils.b.f(), longExtra + com.tkay.china.common.a.a.f);
        Object fromCache = FileUtil.readFromCache(file.getAbsolutePath());
        if (fromCache != null && (fromCache instanceof BaseAdUnit)) {
            baseAdUnit = (BaseAdUnit) fromCache;
            BaseAdUnit baseAdUnitA = com.sigmob.sdk.base.common.f.a(baseAdUnit.getUuid());
            if (baseAdUnitA != null) {
                baseAdUnit = baseAdUnitA;
            }
        }
        FileUtil.deleteFile(file.getAbsolutePath());
        String action = intent.getAction();
        byte b = -1;
        if (action.hashCode() == 1248865515 && action.equals("android.intent.action.DOWNLOAD_COMPLETE")) {
            b = 0;
        }
        if (b == 0 && baseAdUnit != null) {
            a(context, longExtra, baseAdUnit);
        }
    }
}
