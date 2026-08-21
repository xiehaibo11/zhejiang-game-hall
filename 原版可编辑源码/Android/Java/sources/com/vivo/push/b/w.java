package com.vivo.push.b;

public final class w extends com.vivo.push.o {
    private int a;

    public w() {
        super(2011);
        this.a = 0;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        aVar.a("com.bbk.push.ikey.MODE_TYPE", this.a);
    }

    @Override
    public final boolean c() {
        return true;
    }

    public final int d() {
        return this.a;
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        this.a = aVar.b("com.bbk.push.ikey.MODE_TYPE", 0);
    }

    @Override
    public final String toString() {
        return "PushModeCommand";
    }
}
