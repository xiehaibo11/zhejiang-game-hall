package com.sigmob.sdk.base.services;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import android.widget.Toast;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.windad.WindAdError;
import java.io.File;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
class a extends BroadcastReceiver {
    a() {
    }

    private void a(Context context, PackageInfo packageInfo, String str) {
        z.a((BaseAdUnit) null, PointCategory.APP_INSTALL_MONITOR, packageInfo, str);
    }

    private void a(Context context, BaseAdUnit baseAdUnit, PackageInfo packageInfo) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_INSTALL_FINISH);
        z.a(baseAdUnit, PointCategory.APP_INSTALL_END, packageInfo, "1");
        HashMap map = new HashMap();
        map.put("result", "1");
        BaseBroadcastReceiver.a(context, baseAdUnit.getUuid(), map, IntentActions.ACTION_INTERSTITIAL_INSTALL_END);
        TextUtils.isEmpty(baseAdUnit.getDeeplinkUrl());
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        PackageInfo packageInfo;
        try {
            PackageManager packageManager = context.getPackageManager();
            String schemeSpecificPart = intent.getData().getSchemeSpecificPart();
            boolean booleanExtra = intent.getBooleanExtra("android.intent.extra.REPLACING", false);
            if (!intent.getAction().equals("android.intent.action.PACKAGE_REMOVED") || booleanExtra) {
                BaseAdUnit baseAdUnitA = null;
                try {
                    packageInfo = packageManager.getPackageInfo(schemeSpecificPart, 0);
                } catch (PackageManager.NameNotFoundException unused) {
                    packageInfo = null;
                }
                if (!TextUtils.isEmpty(schemeSpecificPart)) {
                    File file = new File(com.sigmob.sdk.base.utils.b.f(), schemeSpecificPart + com.tkay.china.common.a.a.f);
                    Object fromCache = FileUtil.readFromCache(file.getAbsolutePath());
                    if (fromCache != null && (fromCache instanceof BaseAdUnit)) {
                        BaseAdUnit baseAdUnit = (BaseAdUnit) fromCache;
                        baseAdUnitA = com.sigmob.sdk.base.common.f.a(baseAdUnit.getUuid());
                        if (baseAdUnitA == null) {
                            baseAdUnitA = baseAdUnit;
                        }
                    }
                    FileUtil.deleteFile(file.getAbsolutePath());
                }
                if (baseAdUnitA == null) {
                    return;
                }
                String action = intent.getAction();
                byte b = -1;
                switch (action.hashCode()) {
                    case -1585864895:
                        if (action.equals("android.intent.action.INSTALL_FAILURE")) {
                            b = 3;
                        }
                        break;
                    case -810471698:
                        if (action.equals("android.intent.action.PACKAGE_REPLACED")) {
                            b = 2;
                        }
                        break;
                    case 525384130:
                        if (action.equals("android.intent.action.PACKAGE_REMOVED")) {
                            b = 1;
                        }
                        break;
                    case 1544582882:
                        if (action.equals("android.intent.action.PACKAGE_ADDED")) {
                            b = 0;
                        }
                        break;
                }
                if (b != 0) {
                    if (b != 1) {
                        if (b != 2) {
                            if (b != 3) {
                                return;
                            }
                            if (com.sigmob.sdk.base.h.e.booleanValue()) {
                                Toast.makeText(context, "安装失败", 0).show();
                            }
                            z.a(baseAdUnitA, PointCategory.APP_INSTALL_END, packageInfo, WindAdError.ERROR_SIGMOB_INSTALL_FAIL.toString() + ",System");
                            z.a(PointCategory.APP_INSTALL_END, WindAdError.ERROR_SIGMOB_INSTALL_FAIL.getErrorCode(), "system", baseAdUnitA);
                            HashMap map = new HashMap();
                            map.put("result", "0");
                            BaseBroadcastReceiver.a(context, baseAdUnitA.getUuid(), map, IntentActions.ACTION_INTERSTITIAL_INSTALL_END);
                            return;
                        }
                        if (com.sigmob.sdk.base.h.e.booleanValue()) {
                            Toast.makeText(context, "替换成功" + schemeSpecificPart, 1).show();
                        }
                    } else {
                        if (!booleanExtra) {
                            if (com.sigmob.sdk.base.h.e.booleanValue()) {
                                Toast.makeText(context, "卸载成功" + schemeSpecificPart, 1).show();
                                return;
                            }
                            return;
                        }
                        Toast.makeText(context, "替换成功" + schemeSpecificPart, 1).show();
                    }
                } else if (com.sigmob.sdk.base.h.e.booleanValue()) {
                    Toast.makeText(context, "安装成功" + schemeSpecificPart, 1).show();
                }
                a(context, baseAdUnitA, packageInfo);
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }
}
