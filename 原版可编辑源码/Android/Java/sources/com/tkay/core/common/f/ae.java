package com.tkay.core.common.f;

public final class ae {
    private String a;
    private boolean b;
    private Boolean c;

    public ae(String str, boolean z) {
        this.a = str;
        this.b = z;
    }

    public final synchronized void a(boolean z) {
        this.c = Boolean.valueOf(z);
    }

    public final synchronized String a() {
        return this.a;
    }

    public final synchronized boolean b() {
        return this.b;
    }

    public final synchronized Boolean c() {
        return this.c;
    }
}
