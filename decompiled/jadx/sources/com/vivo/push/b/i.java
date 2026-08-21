package com.vivo.push.b;

import com.tencent.connect.common.Constants;

/* JADX INFO: loaded from: classes4.dex */
public final class i extends s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7881a;
    private String b;
    private String c;

    public i(int i) {
        super(i);
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("app_id", this.f7881a);
        aVar.a(Constants.PARAM_CLIENT_ID, this.b);
        aVar.a("client_token", this.c);
    }

    public final String d() {
        return this.f7881a;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.f7881a = aVar.a("app_id");
        this.b = aVar.a(Constants.PARAM_CLIENT_ID);
        this.c = aVar.a("client_token");
    }

    public final String e() {
        return this.c;
    }

    @Override // com.vivo.push.b.s, com.vivo.push.o
    public final String toString() {
        return "OnBindCommand";
    }
}
