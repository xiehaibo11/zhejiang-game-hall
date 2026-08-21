package com.vivo.push.sdk;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.NetworkInfo;
import android.os.Handler;
import android.os.HandlerThread;
import com.vivo.push.PushClient;
import com.vivo.push.cache.ClientConfigManagerImpl;
import com.vivo.push.e;
import com.vivo.push.util.ContextDelegate;
import com.vivo.push.util.VivoPushException;
import com.vivo.push.util.p;
import com.vivo.push.util.r;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes4.dex */
public class PushServiceReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HandlerThread f7936a;
    private static Handler b;
    private static a c = new a();

    final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Context f7937a;
        private String b;

        a() {
        }

        static /* synthetic */ void a(a aVar, Context context, String str) {
            aVar.f7937a = ContextDelegate.getContext(context);
            aVar.b = str;
        }

        @Override // java.lang.Runnable
        public final void run() {
            NetworkInfo networkInfoA = r.a(this.f7937a);
            if (!(networkInfoA != null ? networkInfoA.isConnectedOrConnecting() : false)) {
                p.d("PushServiceReceiver", this.f7937a.getPackageName() + ": 无网络  by " + this.b);
                p.a(this.f7937a, "触发静态广播:无网络(" + this.b + Constants.ACCEPT_TIME_SEPARATOR_SP + this.f7937a.getPackageName() + ")");
                return;
            }
            p.d("PushServiceReceiver", this.f7937a.getPackageName() + ": 执行开始出发动作: " + this.b);
            p.a(this.f7937a, "触发静态广播(" + this.b + Constants.ACCEPT_TIME_SEPARATOR_SP + this.f7937a.getPackageName() + ")");
            e.a().a(this.f7937a);
            if (ClientConfigManagerImpl.getInstance(this.f7937a).isCancleBroadcastReceiver()) {
                return;
            }
            try {
                PushClient.getInstance(this.f7937a).initialize();
            } catch (VivoPushException e) {
                e.printStackTrace();
                p.a(this.f7937a, " 初始化异常 error= " + e.getMessage());
            }
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Context context2 = ContextDelegate.getContext(context);
        String action = intent.getAction();
        if ("android.net.conn.CONNECTIVITY_CHANGE".equals(action) || "android.intent.action.ACTION_POWER_CONNECTED".equals(action) || "android.intent.action.ACTION_POWER_DISCONNECTED".equals(action)) {
            if (f7936a == null) {
                HandlerThread handlerThread = new HandlerThread("PushServiceReceiver");
                f7936a = handlerThread;
                handlerThread.start();
                b = new Handler(f7936a.getLooper());
            }
            p.d("PushServiceReceiver", context2.getPackageName() + ": start PushSerevice for by " + action + "  ; handler : " + b);
            a.a(c, context2, action);
            b.removeCallbacks(c);
            b.postDelayed(c, 2000L);
        }
    }
}
