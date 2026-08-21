package com.tencent.bugly.proguard;

public final class bs extends m implements Cloneable {
    public String a = "";
    public String b = "";

    @Override
    public final void a(StringBuilder sb, int i) {
    }

    @Override
    public final void a(l lVar) {
        lVar.a(this.a, 0);
        lVar.a(this.b, 1);
    }

    @Override
    public final void a(k kVar) {
        this.a = kVar.b(0, true);
        this.b = kVar.b(1, true);
    }
}
