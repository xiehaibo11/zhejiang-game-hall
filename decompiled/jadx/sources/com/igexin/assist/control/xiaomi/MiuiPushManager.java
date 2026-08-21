package com.igexin.assist.control.xiaomi;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import com.igexin.assist.control.AbstractPushManager;
import com.igexin.assist.sdk.AssistPushConsts;
import com.xiaomi.mipush.sdk.MiPushClient;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/* JADX INFO: loaded from: classes2.dex */
public class MiuiPushManager implements AbstractPushManager {
    public static final String PLUGIN_VERSION = "1.2.0";
    public static final String TAG = "Assist_XM";
    public static final String XIAOMI_VERSION = "4.9.0";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2425a = Build.BRAND;
    private String b;
    private String c;

    public MiuiPushManager(Context context) {
        this.b = "";
        this.c = "";
        try {
            Log.d("Assist_XM", "xiaomi plugin version = 1.2.0, xiaomi sdk version = 4.9.0");
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            String str = (String) applicationInfo.metaData.get(AssistPushConsts.MIPUSH_APPID);
            this.b = str;
            this.b = str.replace(AssistPushConsts.XM_PREFIX, "");
            String str2 = (String) applicationInfo.metaData.get(AssistPushConsts.MIPUSH_APPKEY);
            this.c = str2;
            this.c = str2.replace(AssistPushConsts.XM_PREFIX, "");
        } catch (Throwable unused) {
        }
    }

    private static String a(String str) throws Throwable {
        BufferedReader bufferedReader;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("getprop " + str).getInputStream()), 1024);
            try {
                String line = bufferedReader.readLine();
                try {
                    bufferedReader.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                return line;
            } catch (Exception unused) {
                if (bufferedReader != null) {
                    try {
                        bufferedReader.close();
                    } catch (IOException e2) {
                        e2.printStackTrace();
                    }
                }
                return null;
            } catch (Throwable th) {
                th = th;
                bufferedReader2 = bufferedReader;
                if (bufferedReader2 != null) {
                    try {
                        bufferedReader2.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                throw th;
            }
        } catch (Exception unused2) {
            bufferedReader = null;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static boolean a() {
        return (TextUtils.isEmpty(a("ro.miui.ui.version.name")) && TextUtils.isEmpty(a("ro.miui.ui.version.code"))) ? false : true;
    }

    public static boolean checkXMDevice(Context context) {
        PackageInfo packageInfo;
        try {
            if (!a() || (packageInfo = context.getPackageManager().getPackageInfo("com.xiaomi.xmsf", 0)) == null) {
                return false;
            }
            return packageInfo.versionCode >= 105;
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public String getToken(Context context) {
        if (context == null) {
            return null;
        }
        return MiPushClient.getRegId(context);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void register(Context context) {
        try {
            if (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c)) {
                Log.d("Assist_XM", "Register mipush appId or appKey is null or empty");
            } else {
                Log.d("Assist_XM", "Register mipush, pkg = " + context.getPackageName());
                MiPushClient.registerPush(context, this.b, this.c);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void setSilentTime(Context context, int i, int i2) {
        if (i2 == 0) {
            turnOnPush(context);
        } else {
            MiPushClient.setAcceptTime(context, (i2 + i) % 24, 0, i, 0, null);
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOffPush(Context context) {
        if (context == null) {
            return;
        }
        MiPushClient.pausePush(context, this.b);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOnPush(Context context) {
        if (context == null) {
            return;
        }
        MiPushClient.resumePush(context, this.b);
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void unregister(Context context) {
        try {
            Log.d("Assist_XM", "Unregister mipush");
            if (context == null) {
                return;
            }
            MiPushClient.unregisterPush(context);
        } catch (Throwable unused) {
        }
    }
}
