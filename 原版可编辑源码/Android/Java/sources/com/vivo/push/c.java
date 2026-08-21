package com.vivo.push;

import android.os.Handler;
import android.os.Message;

final class c implements Handler.Callback {
    final b a;

    c(b bVar) {
        this.a = bVar;
    }

    @Override
    public final boolean handleMessage(Message message) {
        if (message == null) {
            com.vivo.push.util.p.a("AidlManager", "handleMessage error : msg is null");
            return false;
        }
        int i = message.what;
        if (i == 1) {
            com.vivo.push.util.p.a("AidlManager", "In connect, bind core service time out");
            if (this.a.f.get() == 2) {
                this.a.a(1);
            }
        } else if (i != 2) {
            com.vivo.push.util.p.b("AidlManager", "unknow msg what [" + message.what + "]");
        } else {
            if (this.a.f.get() == 4) {
                this.a.f();
            }
            this.a.a(1);
        }
        return true;
    }
}
