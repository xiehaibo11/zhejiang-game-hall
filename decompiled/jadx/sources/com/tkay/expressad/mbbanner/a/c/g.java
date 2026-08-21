package com.tkay.expressad.mbbanner.a.c;

import android.graphics.Bitmap;

/* JADX INFO: loaded from: classes3.dex */
public class g implements com.tkay.expressad.foundation.g.d.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6987a = g.class.getSimpleName();
    private com.tkay.expressad.mbbanner.a.d.b b;
    private String c;

    public g(com.tkay.expressad.mbbanner.a.d.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override // com.tkay.expressad.foundation.g.d.c
    public final void a(Bitmap bitmap, String str) {
        this.b.a(this.c, 1, str, true);
    }

    @Override // com.tkay.expressad.foundation.g.d.c
    public final void a(String str, String str2) {
        this.b.a(this.c, 1, str2, false);
    }
}
