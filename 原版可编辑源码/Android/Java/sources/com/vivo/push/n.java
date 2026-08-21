package com.vivo.push;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;

final class n extends Handler {
    n(Looper looper) {
        super(looper);
    }

    @Override
    public final void handleMessage(Message message) {
        Object obj = message.obj;
        if (obj instanceof l) {
            l lVar = (l) obj;
            com.vivo.push.util.p.c("PushClientThread", "PushClientThread-handleMessage, task = ".concat(String.valueOf(lVar)));
            lVar.run();
        }
    }
}
