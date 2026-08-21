package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public final class u extends v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f7891a;
    private int b;

    public u() {
        super(20);
        this.f7891a = -1L;
    }

    @Override // com.vivo.push.b.v, com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("undo_msg_v1", this.f7891a);
        aVar.a("undo_msg_type_v1", this.b);
    }

    public final long d() {
        return this.f7891a;
    }

    @Override // com.vivo.push.b.v, com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7891a = aVar.b("undo_msg_v1", this.f7891a);
        this.b = aVar.b("undo_msg_type_v1", 0);
    }

    public final String e() {
        long j = this.f7891a;
        if (j != -1) {
            return String.valueOf(j);
        }
        return null;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnUndoMsgCommand";
    }
}
