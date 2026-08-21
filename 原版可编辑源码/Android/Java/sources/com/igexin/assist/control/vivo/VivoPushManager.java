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

public class VivoPushManager implements AbstractPushManager {
    public static final String PLUGIN_VERSION = "1.1.0";
    public static final String TAG = "Assist_VV";
    public static final String VIVO = "Vivo".toLowerCase();
    private static final String a = Build.BRAND;
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

    private void a(MessageBean messageBean) {
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

    @Override
    public String getToken(Context context) {
        return PushClient.getInstance(context).getRegId();
    }

    @Override
    public void register(Context context) {
        try {
            Log.d("Assist_VV", "Register vivo push, pkg = " + context.getPackageName());
            if (PushManager.getInstance().isPushTurnedOn(context) || !a()) {
                turnOnPush(context);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void setSilentTime(Context context, int i, int i2) {
    }

    @Override
    public void turnOffPush(Context context) {
        try {
            PushClient.getInstance(context).turnOffPush(new b(this, context));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void turnOnPush(Context context) {
        try {
            PushClient.getInstance(context).turnOnPush(new a(this, context));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void unregister(Context context) {
        try {
            turnOffPush(context);
        } catch (Throwable unused) {
        }
    }
}
