package com.tkay.expressad.mbbanner.a.c;

import android.graphics.Bitmap;

public class g implements com.tkay.expressad.foundation.g.d.c {
    private static final String a = g.class.getSimpleName();
    private com.tkay.expressad.mbbanner.a.d.b b;
    private String c;

    public g(com.tkay.expressad.mbbanner.a.d.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override
    public final void a(Bitmap bitmap, String str) {
        this.b.a(this.c, 1, str, true);
    }

    @Override
    public final void a(String str, String str2) {
        this.b.a(this.c, 1, str2, false);
    }
}
