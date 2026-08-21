package com.tkay.core.common.h.a;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6187a;
    int c;
    private final String k = getClass().getSimpleName();
    boolean b = true;

    @Override // com.tkay.core.common.h.a.c
    public final void a(String str, String str2, String str3, int i) {
    }

    @Override // com.tkay.core.common.h.a.c
    public final int d() {
        return 3;
    }

    public b(String str, int i) {
        this.c = 1;
        this.f6187a = str;
        if (i == 1000) {
            this.c = 1;
        } else if (i == 1001) {
            this.c = 2;
        }
    }

    @Override // com.tkay.core.common.h.a.c
    public final int c() {
        return this.c;
    }

    @Override // com.tkay.core.common.h.a.c
    public final byte[] e() {
        return !TextUtils.isEmpty(this.f6187a) ? a(this.f6187a) : new byte[0];
    }

    @Override // com.tkay.core.common.h.a.c
    public final boolean f() {
        return this.b;
    }
}
