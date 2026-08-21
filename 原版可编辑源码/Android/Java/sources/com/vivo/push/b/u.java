package com.vivo.push.b;

public final class u extends v {
    private long a;
    private int b;

    public u() {
        super(20);
        this.a = -1L;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("undo_msg_v1", this.a);
        aVar.a("undo_msg_type_v1", this.b);
    }

    public final long d() {
        return this.a;
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.b("undo_msg_v1", this.a);
        this.b = aVar.b("undo_msg_type_v1", 0);
    }

    public final String e() {
        long j = this.a;
        if (j != -1) {
            return String.valueOf(j);
        }
        return null;
    }

    @Override
    public final String toString() {
        return "OnUndoMsgCommand";
    }
}
