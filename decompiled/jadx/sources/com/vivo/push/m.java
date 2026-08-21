package com.vivo.push;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;

/* JADX INFO: loaded from: classes4.dex */
public final class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Handler f7929a = new Handler(Looper.getMainLooper());
    private static final HandlerThread b;
    private static final Handler c;

    static {
        HandlerThread handlerThread = new HandlerThread("push_client_thread");
        b = handlerThread;
        handlerThread.start();
        c = new n(b.getLooper());
    }

    public static void a(l lVar) {
        if (lVar == null) {
            com.vivo.push.util.p.a("PushClientThread", "client thread error, task is null!");
            return;
        }
        int iA = lVar.a();
        Message message = new Message();
        message.what = iA;
        message.obj = lVar;
        c.sendMessageDelayed(message, 0L);
    }

    public static void a(Runnable runnable) {
        c.removeCallbacks(runnable);
        c.postDelayed(runnable, MBInterstitialActivity.WEB_LOAD_TIME);
    }

    public static void b(Runnable runnable) {
        f7929a.post(runnable);
    }

    public static void c(Runnable runnable) {
        Handler handler = c;
        if (handler != null) {
            handler.post(runnable);
        }
    }
}
