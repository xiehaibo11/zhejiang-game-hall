package com.tkay.expressad.foundation.g.a;

import android.graphics.Bitmap;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;

public final class g extends a<String, Bitmap> {
    @Override
    protected final Reference<Bitmap> c(Bitmap bitmap) {
        return new WeakReference(bitmap);
    }

    private static Reference<Bitmap> a(Bitmap bitmap) {
        return new WeakReference(bitmap);
    }
}
