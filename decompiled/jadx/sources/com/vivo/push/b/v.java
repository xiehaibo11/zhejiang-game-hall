package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public abstract class v extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7892a;
    private long b;

    public v(int i) {
        super(i);
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("OnVerifyCallBackCommand.EXTRA_SECURITY_CONTENT", this.f7892a);
        aVar.a("notify_id", this.b);
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7892a = aVar.a("OnVerifyCallBackCommand.EXTRA_SECURITY_CONTENT");
        this.b = aVar.b("notify_id", -1L);
    }

    public final long f() {
        return this.b;
    }

    public final String i() {
        return this.f7892a;
    }
}
