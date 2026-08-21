package com.vivo.push.b;

/* JADX INFO: loaded from: classes4.dex */
public final class n extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7885a;
    private int b;
    private boolean c;

    public n() {
        super(7);
        this.b = 0;
        this.c = false;
    }

    public final void a(int i) {
        this.b = i;
    }

    public final void a(boolean z) {
        this.c = z;
    }

    public final void b(String str) {
        this.f7885a = str;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("content", this.f7885a);
        aVar.a("log_level", this.b);
        aVar.a("is_server_log", this.c);
    }

    public final String d() {
        return this.f7885a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7885a = aVar.a("content");
        this.b = aVar.b("log_level", 0);
        this.c = aVar.e("is_server_log");
    }

    public final int e() {
        return this.b;
    }

    public final boolean f() {
        return this.c;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnLogCommand";
    }
}
