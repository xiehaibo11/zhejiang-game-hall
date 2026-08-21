package com.kwad.sdk.api.loader;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncTask;
import android.util.Log;
import java.io.File;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public class DynamicInstallReceiver extends BroadcastReceiver {
    private static final AtomicBoolean HAS_REGISTER = new AtomicBoolean(false);
    private static final String TAG = "DynamicInstallReceiver";

    public static void registerToApp(Context context) {
        if (context == null || HAS_REGISTER.get() || context.getApplicationContext() == null) {
            return;
        }
        String str = context.getPackageName() + ".loader.install.DynamicApk";
        Log.i(TAG, "registerToApp action:" + str);
        context.getApplicationContext().registerReceiver(new DynamicInstallReceiver(), new IntentFilter(str));
        HAS_REGISTER.set(true);
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, Intent intent) {
        Log.i(TAG, "onReceive success");
        if (intent == null) {
            Log.i(TAG, "intent is null");
            return;
        }
        String stringExtra = intent.getStringExtra("apkPath");
        final String stringExtra2 = intent.getStringExtra(com.heytap.mcssdk.constant.b.C);
        final File file = new File(stringExtra);
        if (!file.exists()) {
            Log.i(TAG, "downloadFile not exists: " + file);
        } else {
            Log.i(TAG, "downloadFile is exists, apkPath :" + stringExtra + " sdkVersion:" + stringExtra2);
            AsyncTask.execute(new Runnable() { // from class: com.kwad.sdk.api.loader.DynamicInstallReceiver.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        if (b.a(context, getClass().getClassLoader(), file.getPath(), stringExtra2)) {
                            Log.i(DynamicInstallReceiver.TAG, "onReceive ApkInstaller installApk success");
                            g.l(context, stringExtra2);
                            h.h(file);
                        }
                    } catch (Exception e) {
                        Log.i(DynamicInstallReceiver.TAG, "onReceive ApkInstaller installApk error:" + e);
                        e.printStackTrace();
                    }
                }
            });
        }
    }
}
