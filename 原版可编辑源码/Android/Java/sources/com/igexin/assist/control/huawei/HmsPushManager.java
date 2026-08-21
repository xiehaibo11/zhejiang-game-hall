package com.igexin.assist.control.huawei;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.util.Log;
import com.huawei.hms.push.HmsMessaging;
import com.igexin.assist.control.AbstractPushManager;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;

public class HmsPushManager implements AbstractPushManager {
    public static final String PLUGIN_VERSION = "2.1.0";
    public static final String TAG = "Assist_HW";
    private String a;
    private String b = "";
    private final Object c = new Object();

    public HmsPushManager(Context context) {
        try {
            Log.d("Assist_HW", "huawei plugin version = 2.1.0, huawei sdk version = " + ((String) context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.get("com.huawei.hms.client.service.name:push")).split(Constants.COLON_SEPARATOR)[1]);
        } catch (Throwable unused) {
            Log.d("Assist_HW", "huawei plugin version = 2.1.0, not meta-data");
        }
    }

    public static boolean checkHWDevice(Context context) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo("com.huawei.hwid", 0);
            Class<?> cls = Class.forName("android.os.SystemProperties");
            int i = Integer.parseInt((String) cls.getDeclaredMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, "ro.build.hw_emui_api_level"));
            if (packageInfo != null) {
                return packageInfo.versionCode >= 30000000 && i > 9;
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override
    public String getToken(Context context) {
        return this.b;
    }

    @Override
    public void register(Context context) {
        Log.d("Assist_HW", "Register hmspush, pkg = " + context.getPackageName());
        new a(this, context).start();
    }

    @Override
    public void setSilentTime(Context context, int i, int i2) {
    }

    @Override
    public void turnOffPush(Context context) {
        Log.d("Assist_HW", "turnOffPush");
        HmsMessaging.getInstance(context).turnOffPush().addOnCompleteListener(new d(this));
    }

    @Override
    public void turnOnPush(Context context) {
        Log.d("Assist_HW", "turnOnPush");
        HmsMessaging.getInstance(context).turnOnPush().addOnCompleteListener(new c(this));
    }

    @Override
    public void unregister(Context context) {
        new b(this, context).start();
    }
}
