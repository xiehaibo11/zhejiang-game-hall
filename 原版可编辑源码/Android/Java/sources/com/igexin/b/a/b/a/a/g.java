package com.igexin.b.a.b.a.a;

import android.os.Message;
import java.net.Socket;

class g implements com.igexin.b.a.b.a.a.a.d {
    final f a;

    g(f fVar) {
        this.a = fVar;
    }

    @Override
    public void a(com.igexin.b.a.b.e eVar) {
        this.a.n.sendEmptyMessage(q.f.ordinal());
    }

    @Override
    public void a(Exception exc) {
        com.igexin.b.a.c.b.a("GS-M|c ex = " + exc.toString(), new Object[0]);
        this.a.i();
    }

    @Override
    public void a(String str) {
        this.a.n.sendEmptyMessage(q.e.ordinal());
    }

    @Override
    public void a(Socket socket) {
        Message messageObtain = Message.obtain();
        messageObtain.obj = socket;
        messageObtain.what = q.c.ordinal();
        this.a.n.sendMessage(messageObtain);
    }
}
