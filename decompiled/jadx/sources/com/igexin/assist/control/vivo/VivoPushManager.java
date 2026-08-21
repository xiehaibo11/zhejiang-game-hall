package com.igexin.assist.control.vivo;

import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import com.igexin.assist.MessageBean;
import com.igexin.assist.control.AbstractPushManager;
import com.igexin.sdk.PushManager;
import com.vivo.push.PushClient;
import java.io.File;
import java.lang.reflect.Field;

/* JADX INFO: loaded from: classes2.dex */
public class VivoPushManager implements AbstractPushManager {
    public static final String PLUGIN_VERSION = "1.1.0";
    public static final String TAG = "Assist_VV";
    public static final String VIVO = "Vivo".toLowerCase();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2422a = Build.BRAND;
    private String b;

    public VivoPushManager(Context context) {
        try {
            Log.d("Assist_VV", "vivo plugin version = 1.1.0, vivo sdk version = " + context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.get("sdk_version_vivo"));
            this.b = context.getFilesDir().getPath() + "/init.pid";
            PushClient.getInstance(context).initialize();
            PushClient.getInstance(context).checkManifest();
        } catch (Throwable th) {
            Log.e("Assist_VV", th.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(MessageBean messageBean) {
        try {
            Field declaredField = MessageBean.class.getDeclaredField("extra");
            declaredField.setAccessible(true);
            ((Bundle) declaredField.get(messageBean)).putBoolean("isForce", true);
        } catch (Throwable unused) {
        }
    }

    private boolean a() {
        if (this.b != null) {
            return new File(this.b).exists();
        }
        return false;
    }

    public static boolean checkVivoDevice(Context context) {
        try {
            return PushClient.getInstance(context).isSupport();
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public String getToken(Context context) {
        return PushClient.getInstance(context).getRegId();
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void register(Context context) {
        try {
            Log.d("Assist_VV", "Register vivo push, pkg = " + context.getPackageName());
            if (PushManager.getInstance().isPushTurnedOn(context) || !a()) {
                turnOnPush(context);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void setSilentTime(Context context, int i, int i2) {
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOffPush(Context context) {
        try {
            PushClient.getInstance(context).turnOffPush(new b(this, context));
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void turnOnPush(Context context) {
        try {
            PushClient.getInstance(context).turnOnPush(new a(this, context));
        } catch (Throwable unused) {
        }
    }

    @Override // com.igexin.assist.control.AbstractPushManager
    public void unregister(Context context) {
        try {
            turnOffPush(context);
        } catch (Throwable unused) {
        }
    }
}
