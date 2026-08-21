package com.xiaomi.push;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.xiaomi.push.ao;

class ap extends Handler {
    final ao a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ap(ao aoVar, Looper looper) {
        super(looper);
        this.a = aoVar;
    }

    @Override
    public void handleMessage(Message message) {
        ao.b bVar = (ao.b) message.obj;
        if (message.what == 0) {
            bVar.a();
        } else if (message.what == 1) {
            bVar.c();
        }
        super.handleMessage(message);
    }
}
