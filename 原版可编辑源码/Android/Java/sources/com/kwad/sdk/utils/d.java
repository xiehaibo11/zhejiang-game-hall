package com.kwad.sdk.utils;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import com.huawei.hms.common.PackageConstants;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ymnsdk.replugin.util.RomUtil;
import java.util.HashMap;
import java.util.Map;

public final class d {
    private static final Map<String, String> aHI;

    static {
        HashMap map = new HashMap();
        aHI = map;
        map.put("HUAWEI", PackageConstants.SERVICES_PACKAGE_APPMARKET);
        aHI.put(RomUtil.ROM_OPPO, "com.oppo.market");
        aHI.put("vivo", "com.bbk.appstore");
        aHI.put("xiaomi", "com.xiaomi.market");
        aHI.put("OnePlus", "com.oppo.market");
        aHI.put("Meizu", "com.meizu.mstore");
        aHI.put("samsung", "com.sec.android.app.samsungapps");
        aHI.put(RomUtil.ROM_SMARTISAN, "com.smartisanos.appstore");
        aHI.put("Realme", "com.oppo.market");
        aHI.put("HONOR", PackageConstants.SERVICES_PACKAGE_APPMARKET);
    }

    private static boolean G(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        try {
            context.startActivity(intent);
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean a(Context context, String str, AdTemplate adTemplate) {
        if (!as.IT() || adTemplate.mAdScene == null || adTemplate.mAdScene.adStyle == 4 || com.kwad.sdk.core.download.a.b.j(context, str) != 1) {
            return false;
        }
        adTemplate.mXiaomiAppStoreDetailViewOpen = true;
        return true;
    }

    private static boolean a(ResolveInfo resolveInfo) {
        return resolveInfo == null || resolveInfo.activityInfo == null || TextUtils.isEmpty(resolveInfo.activityInfo.packageName);
    }

    public static boolean f(Context context, String str, String str2) {
        if (context == null || TextUtils.isEmpty(str)) {
            return false;
        }
        if ("samsung".equals(Build.BRAND)) {
            str = "http://apps.samsung.com/appquery/appDetail.as?appId=" + str2;
        }
        try {
            String str3 = aHI.get(Build.BRAND);
            Uri uri = Uri.parse(str);
            Intent intent = new Intent();
            intent.setAction("android.intent.action.VIEW");
            intent.setData(uri);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            for (ResolveInfo resolveInfo : context.getPackageManager().queryIntentActivities(intent, 0)) {
                if (!a(resolveInfo)) {
                    String str4 = resolveInfo.activityInfo.packageName;
                    if (str4.equals(str3) || fo(str4)) {
                        intent.setComponent(new ComponentName(str4, resolveInfo.activityInfo.name));
                        context.startActivity(intent);
                        return true;
                    }
                }
            }
            return G(context, str);
        } catch (Exception unused) {
            return G(context, str);
        }
    }

    private static boolean fo(String str) {
        return RomUtil.ROM_OPPO.equals(Build.BRAND) && "com.heytap.market".equals(str);
    }
}
