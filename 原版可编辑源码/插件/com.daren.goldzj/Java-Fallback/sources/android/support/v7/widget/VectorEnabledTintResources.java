package android.support.v7.widget;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import java.lang.ref.WeakReference;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class VectorEnabledTintResources extends Resources {
    public static final int MAX_SDK_WHERE_REQUIRED = 20;
    private static boolean sCompatVectorFromResourcesEnabled = false;
    private final WeakReference<Context> mContextRef;

    static {
    }

    public static boolean shouldBeUsed() {
        if (isCompatVectorFromResourcesEnabled() == true) goto L5;
    L7:
        return false;
    L5:
        if (Build.VERSION.SDK_INT > 20) goto L7;
        return true;
    }

    public VectorEnabledTintResources(@NonNull Context r3, @NonNull Resources r4) {
        super(r4.getAssets(), r4.getDisplayMetrics(), r4.getConfiguration());
        this.mContextRef = new WeakReference(r3);
    }

    @Override
    public Drawable getDrawable(int r3) throws Resources.NotFoundException {
        Context r0 = this.mContextRef.get();
        if (r0 == null) goto L7;
        return AppCompatDrawableManager.get().onDrawableLoadedFromResources(r0, this, r3);
    L7:
        return super.getDrawable(r3);
    }

    final Drawable superGetDrawable(int r1) {
        return super.getDrawable(r1);
    }

    public static void setCompatVectorFromResourcesEnabled(boolean r0) {
        sCompatVectorFromResourcesEnabled = r0;
    }

    public static boolean isCompatVectorFromResourcesEnabled() {
        return sCompatVectorFromResourcesEnabled;
    }
}
