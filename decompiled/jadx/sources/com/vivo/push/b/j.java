package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public final class j extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7882a;
    private int b;

    public j() {
        super(12);
        this.f7882a = -1;
        this.b = -1;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS", this.f7882a);
        aVar.a("OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS", this.b);
    }

    public final int d() {
        return this.f7882a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7882a = aVar.b("OnChangePushStatus.EXTRA_REQ_SERVICE_STATUS", this.f7882a);
        this.b = aVar.b("OnChangePushStatus.EXTRA_REQ_RECEIVER_STATUS", this.b);
    }

    public final int e() {
        return this.b;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnChangePushStatusCommand";
    }
}
