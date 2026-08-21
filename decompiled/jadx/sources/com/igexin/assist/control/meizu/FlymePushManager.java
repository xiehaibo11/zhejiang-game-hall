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

/* JADX INFO: loaded from: classes2.dex */
public class FlymePushManager implements AbstractPushManager {
    public static final String MEIZU_VERSION = "4.1.4";
    public static final String PLUGIN_VERSION = "1.1.4";
    public static final String TAG = "Assist_MZ";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2421a;
    private String b;

    public FlymePushManager(Context context) {
        this.f2421a = "";
        this.b = "";
        try {
            Log.d("Assist_MZ", "meizu plugin version = 1.1.4, meizu sdk version = 4.1.4");
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            String str = (String) applicationInfo.metaData.get(AssistPushConsts.MEIZUPUSH_APPID);
            this.f2421a = str;
            this.f2421a = str.replace(AssistPushConsts.MZ_PREFIX, "");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean checkMZDevice(android.content.Context r6) {
        /*
            java.lang.String r6 = ""
            java.lang.String r0 = "Flyme OS"
            r1 = 0
            boolean r2 = a()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L44
            java.lang.String r2 = android.os.Build.DISPLAY     // Catch: java.lang.Throwable -> L44
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L44
            r4 = 1
            if (r3 != 0) goto L43
            boolean r3 = r2.startsWith(r0)     // Catch: java.lang.Throwable -> L44
            java.lang.String r5 = "Flyme"
            if (r3 != 0) goto L22
            boolean r3 = r2.startsWith(r5)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L43
        L22:
            java.lang.String r0 = r2.replaceAll(r0, r6)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = r0.replaceAll(r5, r6)     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "\\."
            java.lang.String[] r6 = r6.split(r0)     // Catch: java.lang.Throwable -> L43
            r6 = r6[r1]     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L43
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L43
            r0 = 5
            if (r6 < r0) goto L42
            r1 = r4
        L42:
            return r1
        L43:
            return r4
        L44:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.assist.control.meizu.FlymePushManager.checkMZDevice(android.content.Context):boolean");
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public String getToken(Context context) {
        if (context == null) {
            return null;
        }
        return PushManager.getPushId(context);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void register(Context context) {
        try {
            if (TextUtils.isEmpty(this.f2421a) || TextUtils.isEmpty(this.b)) {
                Log.d("Assist_MZ", "Register meizupush appId not find");
            } else {
                Log.d("Assist_MZ", "Register meizupush, pkg = " + context.getPackageName());
                PushManager.register(context, this.f2421a, this.b);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void setSilentTime(Context context, int i, int i2) {
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOffPush(Context context) {
        if (context == null) {
            return;
        }
        String pushId = PushManager.getPushId(context);
        if (TextUtils.isEmpty(this.f2421a) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(pushId)) {
            return;
        }
        PushManager.switchPush(context, this.f2421a, this.b, pushId, false);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOnPush(Context context) {
        if (context == null) {
            return;
        }
        String pushId = PushManager.getPushId(context);
        if (TextUtils.isEmpty(this.f2421a) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(pushId)) {
            return;
        }
        PushManager.switchPush(context, this.f2421a, this.b, pushId, true);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void unregister(Context context) {
        try {
            if (TextUtils.isEmpty(this.f2421a) || TextUtils.isEmpty(this.b)) {
                Log.d("Assist_MZ", "|Unregister meizupush appId not find");
            } else {
                Log.d("Assist_MZ", "|Unregister meizupush");
                PushManager.unRegister(context, this.f2421a, this.b);
            }
        } catch (Throwable unused) {
        }
    }
}
