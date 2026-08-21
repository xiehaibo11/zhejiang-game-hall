package com.igexin.assist.control.meizu;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.assist.control.AbstractPushManager;
import com.igexin.assist.sdk.AssistPushConsts;
import com.meizu.cloud.pushsdk.PushManager;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;

public class FlymePushManager implements AbstractPushManager {
    public static final String MEIZU_VERSION = "4.1.4";
    public static final String PLUGIN_VERSION = "1.1.4";
    public static final String TAG = "Assist_MZ";
    private String a;
    private String b;

    public FlymePushManager(Context context) {
        this.a = "";
        this.b = "";
        try {
            Log.d("Assist_MZ", "meizu plugin version = 1.1.4, meizu sdk version = 4.1.4");
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            String str = (String) applicationInfo.metaData.get(AssistPushConsts.MEIZUPUSH_APPID);
            this.a = str;
            this.a = str.replace(AssistPushConsts.MZ_PREFIX, "");
            String str2 = (String) applicationInfo.metaData.get(AssistPushConsts.MEIZUPUSH_APPKEY);
            this.b = str2;
            this.b = str2.replace(AssistPushConsts.MZ_PREFIX, "");
        } catch (Throwable unused) {
        }
    }

    private static boolean a() {
        try {
            if (!"meizu".equalsIgnoreCase(Build.BRAND) && !"22c4185e".equalsIgnoreCase(Build.BRAND)) {
                Class<?> cls = Class.forName("android.os.SystemProperties");
                return !TextUtils.isEmpty((String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls, "ro.meizu.product.model"));
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0022 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean checkMZDevice(Context context) {
        try {
            if (a()) {
                String str = Build.DISPLAY;
                if (!TextUtils.isEmpty(str)) {
                    if (!str.startsWith("Flyme OS")) {
                        if (str.startsWith("Flyme")) {
                            try {
                                return Integer.valueOf(str.replaceAll("Flyme OS", "").replaceAll("Flyme", "").trim().split("\\.")[0]).intValue() >= 5;
                            } catch (Throwable unused) {
                            }
                        }
                    }
                }
                return true;
            }
        } catch (Throwable unused2) {
        }
        return false;
    }

    @Override
    public String getToken(Context context) {
        if (context == null) {
            return null;
        }
        return PushManager.getPushId(context);
    }

    @Override
    public void register(Context context) {
        try {
            if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b)) {
                Log.d("Assist_MZ", "Register meizupush appId not find");
            } else {
                Log.d("Assist_MZ", "Register meizupush, pkg = " + context.getPackageName());
                PushManager.register(context, this.a, this.b);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void setSilentTime(Context context, int i, int i2) {
    }

    @Override
    public void turnOffPush(Context context) {
        if (context == null) {
            return;
        }
        String pushId = PushManager.getPushId(context);
        if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(pushId)) {
            return;
        }
        PushManager.switchPush(context, this.a, this.b, pushId, false);
    }

    @Override
    public void turnOnPush(Context context) {
        if (context == null) {
            return;
        }
        String pushId = PushManager.getPushId(context);
        if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(pushId)) {
            return;
        }
        PushManager.switchPush(context, this.a, this.b, pushId, true);
    }

    @Override
    public void unregister(Context context) {
        try {
            if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(this.b)) {
                Log.d("Assist_MZ", "|Unregister meizupush appId not find");
            } else {
                Log.d("Assist_MZ", "|Unregister meizupush");
                PushManager.unRegister(context, this.a, this.b);
            }
        } catch (Throwable unused) {
        }
    }
}
