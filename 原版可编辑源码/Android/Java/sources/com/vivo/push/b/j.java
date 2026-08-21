package com.vivo.push.b;

public final class j extends s {
    private int a;
    private int b;

    public j() {
        super(12);
        this.a = -1;
        this.b = -1;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS", this.a);
        aVar.a("OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS", this.b);
    }

    public final int d() {
        return this.a;
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.b("OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS", this.a);
        this.b = aVar.b("OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS", this.b);
    }

    public final int e() {
        return this.b;
    }

    @Override
    public final String toString() {
        return "OnChangePushStatusCommand";
    }
}
