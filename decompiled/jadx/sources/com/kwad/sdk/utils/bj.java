package com.kwad.sdk.utils;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.VibrationEffect;
import android.os.Vibrator;
import java.io.Closeable;

/* JADX INFO: loaded from: classes2.dex */
public final class bj {
    private static final Handler aKp = new Handler(Looper.getMainLooper());
    private static long jM = 400;

    public static void a(Context context, Vibrator vibrator) {
        vibrate(context, vibrator, jM);
    }

    public static void a(Runnable runnable, Object obj, long j) {
        Message messageObtain = Message.obtain(aKp, runnable);
        messageObtain.obj = null;
        aKp.sendMessageDelayed(messageObtain, j);
    }

    public static void b(Context context, Vibrator vibrator) {
        if (vibrator == null || al.ao(context, "android.permission.VIBRATE") != 0) {
            return;
        }
        vibrator.cancel();
    }

    public static void b(Runnable runnable) {
        aKp.removeCallbacks(runnable);
    }

    public static void c(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Throwable unused) {
            }
        }
    }

    public static void postOnUiThread(Runnable runnable) {
        aKp.post(runnable);
    }

    public static void runOnUiThread(Runnable runnable) {
        if (Looper.getMainLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            aKp.post(runnable);
        }
    }

    public static void runOnUiThreadDelay(Runnable runnable, long j) {
        aKp.postDelayed(runnable, j);
    }

    public static void vibrate(Context context, Vibrator vibrator, long j) {
        if (vibrator != null) {
            try {
                if (al.ao(context, "android.permission.VIBRATE") == 0) {
                    if (Build.VERSION.SDK_INT >= 26) {
                        vibrator.vibrate(VibrationEffect.createOneShot(j, -1));
                    } else {
                        vibrator.vibrate(j);
                    }
                }
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
            }
        }
    }
}
