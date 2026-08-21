package android.support.v7.widget;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.support.annotation.NonNull;
import java.lang.ref.WeakReference;

class TintResources extends ResourcesWrapper {
    private final WeakReference<Context> mContextRef;

    public TintResources(@NonNull Context r1, @NonNull Resources r2) {
        super(r2);
        this.mContextRef = new WeakReference(r1);
    }

    @Override
    public Drawable getDrawable(int r3) throws Resources.NotFoundException {
        Drawable r0 = super.getDrawable(r3);
        Context r1 = this.mContextRef.get();
        if (r0 == null) goto L6;
        if (r1 == null) goto L6;
        AppCompatDrawableManager.get();
        AppCompatDrawableManager.tintDrawableUsingColorFilter(r1, r3, r0);
    L6:
        return r0;
    }
}
