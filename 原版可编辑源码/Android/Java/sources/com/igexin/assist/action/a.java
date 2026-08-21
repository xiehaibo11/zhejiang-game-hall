package com.igexin.assist.action;

class a implements Runnable {
    final String a;
    final boolean b;
    final MessageManger c;

    a(MessageManger messageManger, String str, boolean z) {
        this.c = messageManger;
        this.a = str;
        this.b = z;
    }

    @Override
    public void run() {
        if (com.igexin.push.core.d.h.get()) {
            this.c.a(this.a, this.b);
        }
    }
}
