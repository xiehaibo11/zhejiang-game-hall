package com.bumptech.glide.load.resource.drawable;

import android.graphics.drawable.Drawable;

public abstract class DrawableResource<T extends android.graphics.drawable.Drawable> implements com.bumptech.glide.load.engine.Resource<T> {
    protected final T drawable;

    public DrawableResource(T r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.drawable = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Drawable must not be null!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final T get() {
            r1 = this;
            T extends android.graphics.drawable.Drawable r0 = r1.drawable
            android.graphics.drawable.Drawable$ConstantState r0 = r0.getConstantState()
            android.graphics.drawable.Drawable r0 = r0.newDrawable()
            return r0
    }

    @Override
    public java.lang.Object get() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.get()
            return r0
    }
}
