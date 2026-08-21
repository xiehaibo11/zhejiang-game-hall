package com.tkay.expressad.videocommon.b;

import com.tkay.core.common.res.a.a;

/* JADX INFO: loaded from: classes3.dex */
public final class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7475a;
    private int b;
    private int c;
    private com.tkay.core.common.res.a.a d;

    public m(String str, int i, int i2) {
        this.f7475a = str;
        this.b = i;
        this.c = i2;
        com.tkay.core.common.res.a.a aVarA = com.tkay.core.common.res.a.c.a().a(this.f7475a);
        this.d = aVarA;
        aVarA.a(new com.tkay.core.common.res.a.b(i, i2));
    }

    public final void a(a.AbstractC0425a abstractC0425a) {
        this.d.a(abstractC0425a);
    }

    public final void a() {
        this.d.e();
    }

    public final void b() {
        this.d.f();
    }
}
