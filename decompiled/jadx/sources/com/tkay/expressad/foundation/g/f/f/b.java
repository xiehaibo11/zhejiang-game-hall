package com.tkay.expressad.foundation.g.f.f;

import java.io.InputStream;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f6913a;
    private final List<com.tkay.expressad.foundation.g.f.c.c> b;
    private final InputStream c;

    public b(int i, List<com.tkay.expressad.foundation.g.f.c.c> list) {
        this(i, list, null);
    }

    public b(int i, List<com.tkay.expressad.foundation.g.f.c.c> list, InputStream inputStream) {
        this.f6913a = i;
        this.b = list;
        this.c = inputStream;
    }

    public final int a() {
        return this.f6913a;
    }

    public final List<com.tkay.expressad.foundation.g.f.c.c> b() {
        return Collections.unmodifiableList(this.b);
    }

    public final InputStream c() {
        return this.c;
    }
}
