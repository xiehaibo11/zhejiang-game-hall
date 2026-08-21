package com.tkay.expressad.videocommon.b;

import com.tkay.core.common.res.a.a;

public final class m {
    private String a;
    private int b;
    private int c;
    private com.tkay.core.common.res.a.a d;

    public m(String str, int i, int i2) {
        this.a = str;
        this.b = i;
        this.c = i2;
        com.tkay.core.common.res.a.a aVarA = com.tkay.core.common.res.a.c.a().a(this.a);
        this.d = aVarA;
        aVarA.a(new com.tkay.core.common.res.a.b(i, i2));
    }

    public final void a(a.a aVar) {
        this.d.a(aVar);
    }

    public final void a() {
        this.d.e();
    }

    public final void b() {
        this.d.f();
    }
}
