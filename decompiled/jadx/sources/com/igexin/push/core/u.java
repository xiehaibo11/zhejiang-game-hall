package com.igexin.push.core;

import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;

/* JADX INFO: loaded from: classes2.dex */
class u extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ r f2587a;
    final /* synthetic */ t b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    u(t tVar, Looper looper, r rVar) {
        super(looper);
        this.b = tVar;
        this.f2587a = rVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message == null) {
            return;
        }
        try {
            int i = message.what;
            boolean z = true;
            if (i != 1) {
                if (i == 2 || i == 3) {
                    r rVar = this.b.f2586a;
                    if (message.arg1 != 0) {
                        z = false;
                    }
                    rVar.a(z);
                }
            } else if (this.b.f2586a.a((IBinder) message.obj)) {
                removeMessages(2);
                removeMessages(1);
                this.b.f2586a.e();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
