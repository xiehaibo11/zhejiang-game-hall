package com.tkay.expressad.foundation.g.a;

import android.graphics.Bitmap;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends a<String, Bitmap> {
    @Override // com.tkay.expressad.foundation.g.a.a
    protected final /* synthetic */ Reference<Bitmap> c(Bitmap bitmap) {
        return new WeakReference(bitmap);
    }

    private static Reference<Bitmap> a(Bitmap bitmap) {
        return new WeakReference(bitmap);
    }
}
