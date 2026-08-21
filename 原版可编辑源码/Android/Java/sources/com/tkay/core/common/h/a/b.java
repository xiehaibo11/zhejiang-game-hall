package com.tkay.core.common.h.a;

import android.text.TextUtils;

public final class b extends c {
    String a;
    int c;
    private final String k = getClass().getSimpleName();
    boolean b = true;

    @Override
    public final void a(String str, String str2, String str3, int i) {
    }

    @Override
    public final int d() {
        return 3;
    }

    public b(String str, int i) {
        this.c = 1;
        this.a = str;
        if (i == 1000) {
            this.c = 1;
        } else if (i == 1001) {
            this.c = 2;
        }
    }

    @Override
    public final int c() {
        return this.c;
    }

    @Override
    public final byte[] e() {
        return !TextUtils.isEmpty(this.a) ? a(this.a) : new byte[0];
    }

    @Override
    public final boolean f() {
        return this.b;
    }
}
