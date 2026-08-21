package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public class s extends com.vivo.push.o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7889a;
    private int b;

    public s(int i) {
        super(i);
        this.f7889a = null;
        this.b = 0;
    }

    @Override // com.vivo.push.o
    protected void c(com.vivo.push.a aVar) {
        aVar.a("req_id", this.f7889a);
        aVar.a("status_msg_code", this.b);
    }

    @Override // com.vivo.push.o
    protected void d(com.vivo.push.a aVar) {
        this.f7889a = aVar.a("req_id");
        this.b = aVar.b("status_msg_code", this.b);
    }

    public final String g() {
        return this.f7889a;
    }

    public final int h() {
        return this.b;
    }

    @Override // com.vivo.push.o
    public String toString() {
        return "OnReceiveCommand";
    }
}
