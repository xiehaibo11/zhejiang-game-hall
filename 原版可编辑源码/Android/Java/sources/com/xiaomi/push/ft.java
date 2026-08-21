package com.xiaomi.push;

class ft extends Thread {
    final fs a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    ft(fs fsVar, String str) {
        super(str);
        this.a = fsVar;
    }

    @Override
    public void run() {
        try {
            this.a.a.a();
        } catch (Exception e) {
            this.a.c(9, e);
        }
    }
}
