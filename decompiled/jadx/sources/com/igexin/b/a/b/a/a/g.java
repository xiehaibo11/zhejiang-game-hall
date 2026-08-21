package com.igexin.b.a.b.a.a;

import android.os.Message;
import java.net.Socket;

/* JADX INFO: loaded from: classes2.dex */
class g implements com.igexin.b.a.b.a.a.a.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f2433a;

    g(f fVar) {
        this.f2433a = fVar;
    }

    @Override // com.igexin.b.a.b.a.a.a.a
    public void a(com.igexin.b.a.b.e eVar) {
        this.f2433a.n.sendEmptyMessage(q.INTERRUPT_SUCCESS.ordinal());
    }

    @Override // com.igexin.b.a.b.a.a.a.d
    public void a(Exception exc) {
        com.igexin.b.a.c.b.a("GS-M|c ex = " + exc.toString(), new Object[0]);
        this.f2433a.i();
    }

    @Override // com.igexin.b.a.b.a.a.a.d
    public void a(String str) {
        this.f2433a.n.sendEmptyMessage(q.TCP_CREATE_SUCCESS.ordinal());
    }

    @Override // com.igexin.b.a.b.a.a.a.d
    public void a(Socket socket) {
        Message messageObtain = Message.obtain();
        messageObtain.obj = socket;
        messageObtain.what = q.TCP_CONNECT_SUCCESS.ordinal();
        this.f2433a.n.sendMessage(messageObtain);
    }
}
