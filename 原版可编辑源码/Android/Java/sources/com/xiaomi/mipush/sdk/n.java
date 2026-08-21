package com.xiaomi.mipush.sdk;

import android.content.ComponentName;
import android.content.Context;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.push.bk;

public class n {
    private static int a = -1;

    public static ag a(Context context) {
        try {
            return (context.getPackageManager().getServiceInfo(new ComponentName("com.huawei.hwid", "com.huawei.hms.core.service.HMSCoreService"), 128) == null || !a()) ? ag.f : ag.a;
        } catch (Exception unused) {
            return ag.f;
        }
    }

    private static boolean a() {
        try {
            String str = (String) bk.a("android.os.SystemProperties", MonitorConstants.CONNECT_TYPE_GET, "ro.build.hw_emui_api_level", "");
            if (!TextUtils.isEmpty(str)) {
                if (Integer.parseInt(str) >= 9) {
                    return true;
                }
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
        return false;
    }

    public static boolean a(Context context) {
        Object objA = bk.a(bk.a("com.google.android.gms.common.GoogleApiAvailability", "getInstance", new Object[0]), "isGooglePlayServicesAvailable", context);
        Object objA2 = bk.a("com.google.android.gms.common.ConnectionResult", "SUCCESS");
        if (objA2 == null || !(objA2 instanceof Integer)) {
            com.xiaomi.channel.commonutils.logger.b.c("google service is not avaliable");
            a = 0;
            return false;
        }
        int iIntValue = ((Integer) Integer.class.cast(objA2)).intValue();
        if (objA != null) {
            if (objA instanceof Integer) {
                a = ((Integer) Integer.class.cast(objA)).intValue() == iIntValue ? 1 : 0;
            } else {
                a = 0;
                com.xiaomi.channel.commonutils.logger.b.c("google service is not avaliable");
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append("is google service can be used");
        sb.append(a > 0);
        com.xiaomi.channel.commonutils.logger.b.c(sb.toString());
        return a > 0;
    }

    public static boolean b(Context context) {
        boolean zBooleanValue = false;
        Object objA = bk.a("com.xiaomi.assemble.control.COSPushManager", "isSupportPush", context);
        if (objA != null && (objA instanceof Boolean)) {
            zBooleanValue = ((Boolean) Boolean.class.cast(objA)).booleanValue();
        }
        com.xiaomi.channel.commonutils.logger.b.c("color os push  is avaliable ? :" + zBooleanValue);
        return zBooleanValue;
    }

    public static boolean c(Context context) {
        boolean zBooleanValue = false;
        Object objA = bk.a("com.xiaomi.assemble.control.FTOSPushManager", "isSupportPush", context);
        if (objA != null && (objA instanceof Boolean)) {
            zBooleanValue = ((Boolean) Boolean.class.cast(objA)).booleanValue();
        }
        com.xiaomi.channel.commonutils.logger.b.c("fun touch os push  is avaliable ? :" + zBooleanValue);
        return zBooleanValue;
    }
}
