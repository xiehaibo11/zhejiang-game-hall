package com.xiaomi.mipush.sdk;

import android.app.Service;
import android.content.Intent;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes4.dex */
public abstract class BaseService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f7973a;

    public class a extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private WeakReference<BaseService> f7974a;

        public a(WeakReference<BaseService> weakReference) {
            this.f7974a = weakReference;
        }

        public void a() {
            if (hasMessages(1001)) {
                removeMessages(1001);
            }
            sendEmptyMessageDelayed(1001, 1000L);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            WeakReference<BaseService> weakReference;
            BaseService baseService;
            if (message.what != 1001 || (weakReference = this.f7974a) == null || (baseService = weakReference.get()) == null) {
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.c("TimeoutHandler " + baseService.toString() + " kill self");
            if (!baseService.mo63a()) {
                baseService.stopSelf();
            } else {
                com.xiaomi.channel.commonutils.logger.b.c("TimeoutHandler has job");
                sendEmptyMessageDelayed(1001, 1000L);
            }
        }
    }

    /* JADX INFO: renamed from: a */
    protected abstract boolean mo63a();

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        super.onStart(intent, i);
        if (this.f7973a == null) {
            this.f7973a = new a(new WeakReference(this));
        }
        this.f7973a.a();
    }
}
