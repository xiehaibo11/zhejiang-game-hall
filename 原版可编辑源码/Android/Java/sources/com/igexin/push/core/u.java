package com.igexin.push.core;

import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;

class u extends Handler {
    final r a;
    final t b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    u(t tVar, Looper looper, r rVar) {
        super(looper);
        this.b = tVar;
        this.a = rVar;
    }

    @Override
    public void handleMessage(Message message) {
        if (message == null) {
            return;
        }
        try {
            int i = message.what;
            boolean z = true;
            if (i != 1) {
                if (i == 2 || i == 3) {
                    r rVar = this.b.a;
                    if (message.arg1 != 0) {
                        z = false;
                    }
                    rVar.a(z);
                }
            } else if (this.b.a.a((IBinder) message.obj)) {
                removeMessages(2);
                removeMessages(1);
                this.b.a.e();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
