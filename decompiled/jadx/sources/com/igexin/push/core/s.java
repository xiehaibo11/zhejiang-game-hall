package com.igexin.push.core;

import android.os.IBinder;
import android.os.Message;

/* JADX INFO: loaded from: classes2.dex */
class s implements IBinder.DeathRecipient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ r f2584a;

    s(r rVar) {
        this.f2584a = rVar;
    }

    @Override // android.os.IBinder.DeathRecipient
    public void binderDied() {
        com.igexin.b.a.c.b.a("MsgServerSender|remote iservice binderDied and reconnect !!!", new Object[0]);
        Message.obtain(this.f2584a.c.a(), 2, 0, 0).sendToTarget();
    }
}
