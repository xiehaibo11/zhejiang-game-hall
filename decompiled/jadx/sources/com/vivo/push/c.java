package com.vivo.push;

import android.os.Handler;
import android.os.Message;

/* JADX INFO: loaded from: classes4.dex */
final class c implements Handler.Callback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f7897a;

    c(b bVar) {
        this.f7897a = bVar;
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (message == null) {
            com.vivo.push.util.p.a("AidlManager", "handleMessage error : msg is null");
            return false;
        }
        int i = message.what;
        if (i == 1) {
            com.vivo.push.util.p.a("AidlManager", "In connect, bind core service time out");
            if (this.f7897a.f.get() == 2) {
                this.f7897a.a(1);
            }
        } else if (i != 2) {
            com.vivo.push.util.p.b("AidlManager", "unknow msg what [" + message.what + "]");
        } else {
            if (this.f7897a.f.get() == 4) {
                this.f7897a.f();
            }
            this.f7897a.a(1);
        }
        return true;
    }
}
