package com.vivo.push.b;

public final class h extends com.vivo.push.o {
    private String a;

    public h() {
        super(2013);
    }

    public h(String str) {
        this();
        this.a = str;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        aVar.a("MsgArriveCommand.MSG_TAG", this.a);
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        this.a = aVar.a("MsgArriveCommand.MSG_TAG");
    }
}
