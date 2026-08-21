package com.meizu.cloud.pushsdk.b;

import android.content.Context;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f4495a = "";

    public static String a(Context context) {
        if (!TextUtils.isEmpty(f4495a)) {
            return f4495a;
        }
        f4495a = !a() ? d(context) : b(context);
        return f4495a;
    }

    public static boolean a() {
        String strA = i.a("ro.target.product");
        if (TextUtils.isEmpty(strA)) {
            DebugLogger.i("DeviceUtils", "current product is phone");
            return true;
        }
        DebugLogger.i("DeviceUtils", "current product is " + strA);
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static String b(Context context) {
        String deviceId;
        try {
            com.meizu.cloud.pushsdk.b.b.d dVarA = com.meizu.cloud.pushsdk.b.b.a.a("android.telephony.MzTelephonyManager").a("getDeviceId", new Class[0]).a(new Object[0]);
            if (!dVarA.f4494a || TextUtils.isEmpty((CharSequence) dVarA.b)) {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                if (telephonyManager == null) {
                    return null;
                }
                deviceId = telephonyManager.getDeviceId();
            } else {
                deviceId = (String) dVarA.b;
            }
            return deviceId;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String c(Context context) {
        return null;
    }

    private static String d(Context context) {
        StringBuilder sb = new StringBuilder();
        String str = Build.SERIAL;
        DebugLogger.i("DeviceUtils", "device serial " + str);
        if (!TextUtils.isEmpty(str)) {
            sb.append(str);
            String strC = c(context);
            DebugLogger.e("DeviceUtils", "mac address " + strC);
            if (!TextUtils.isEmpty(strC)) {
                sb.append(strC.replace(Constants.COLON_SEPARATOR, "").toUpperCase());
                return sb.toString();
            }
        }
        return null;
    }
}
