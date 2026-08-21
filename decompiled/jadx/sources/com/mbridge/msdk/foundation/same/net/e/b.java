package com.mbridge.msdk.foundation.same.net.e;

import java.io.InputStream;
import java.util.Collections;
import java.util.List;

/* JADX INFO: compiled from: HttpResponse.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f3447a;
    private final List<com.mbridge.msdk.foundation.same.net.c.b> b;
    private final InputStream c;

    public b(int i, List<com.mbridge.msdk.foundation.same.net.c.b> list, InputStream inputStream) {
        this.f3447a = i;
        this.b = list;
        this.c = inputStream;
    }

    public final int a() {
        return this.f3447a;
    }

    public final List<com.mbridge.msdk.foundation.same.net.c.b> b() {
        return Collections.unmodifiableList(this.b);
    }

    public final InputStream c() {
        return this.c;
    }
}
