package com.igexin.push.core;

import android.os.IBinder;
import android.os.Message;

class s implements IBinder.DeathRecipient {
    final r a;

    s(r rVar) {
        this.a = rVar;
    }

    @Override
    public void binderDied() {
        com.igexin.b.a.c.b.a("MsgServerSender|remote iservice binderDied and reconnect !!!", new Object[0]);
        Message.obtain(this.a.c.a(), 2, 0, 0).sendToTarget();
    }
}
