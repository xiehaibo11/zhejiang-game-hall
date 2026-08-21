package com.xiaomi.push;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.xiaomi.push.ao;

/* JADX INFO: loaded from: classes4.dex */
class ap extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ao f8039a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ap(ao aoVar, Looper looper) {
        super(looper);
        this.f8039a = aoVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        ao.b bVar = (ao.b) message.obj;
        if (message.what == 0) {
            bVar.a();
        } else if (message.what == 1) {
            bVar.mo221c();
        }
        super.handleMessage(message);
    }
}
