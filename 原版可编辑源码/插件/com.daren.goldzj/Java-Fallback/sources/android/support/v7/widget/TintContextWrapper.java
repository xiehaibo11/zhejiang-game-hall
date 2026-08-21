package android.support.v7.widget;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.AssetManager;
import android.content.res.Resources;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import java.lang.ref.WeakReference;
import java.util.ArrayList;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class TintContextWrapper extends ContextWrapper {
    private static final Object CACHE_LOCK = null;
    private static ArrayList<WeakReference<TintContextWrapper>> sCache;
    private final Resources mResources;
    private final Resources.Theme mTheme;

    static {
        CACHE_LOCK = new Object();
    }

    public static Context wrap(@NonNull Context r4) {
        if (shouldWrap(r4) == false) goto L35;
        Object r0 = CACHE_LOCK;
        monitor-enter(r0);
    L32:
        th = move-exception;
        throw th;
    L7:
        if (sCache != null) goto L9;
        sCache = new ArrayList();     // Catch: Throwable -> L32
    L29:
        TintContextWrapper r1 = new TintContextWrapper(r4);     // Catch: Throwable -> L32
        sCache.add(new WeakReference(r1));     // Catch: Throwable -> L32
        monitor-exit(r0);     // Catch: Throwable -> L32
        return r1;
    L9:
        int r12 = sCache.size() - 1;
    L10:
        if (r12 < 0) goto L17;
        WeakReference<TintContextWrapper> r2 = sCache.get(r12);     // Catch: Throwable -> L32
        if (r2 != null) goto L14;
    L15:
        sCache.remove(r12);     // Catch: Throwable -> L32
    L16:
        r12 = r12 - 1;
        goto L10
    L14:
        if (r2.get() != null) goto L16;
    L17:
        int r13 = sCache.size() - 1;
    L18:
        if (r13 < 0) goto L29;
        WeakReference<TintContextWrapper> r22 = sCache.get(r13);     // Catch: Throwable -> L32
        if (r22 == null) goto L22;
        TintContextWrapper r23 = r22.get();     // Catch: Throwable -> L32
    L23:
        if (r23 == null) goto L28;
        if (r23.getBaseContext() != r4) goto L28;
        monitor-exit(r0);     // Catch: Throwable -> L32
        return r23;
    L28:
        r13 = r13 - 1;
        goto L18
    L22:
        r23 = null;
        goto L23
    L35:
        return r4;
    }

    private static boolean shouldWrap(@NonNull Context r2) {
        if ((r2 instanceof TintContextWrapper) == false) goto L5;
        return false;
    L5:
        if ((r2.getResources() instanceof TintResources) == false) goto L7;
        return false;
    L7:
        if ((r2.getResources() instanceof VectorEnabledTintResources) == false) goto L10;
        return false;
    L10:
        if (Build.VERSION.SDK_INT >= 21) goto L12;
    L13:
        return true;
    L12:
        if (VectorEnabledTintResources.shouldBeUsed() == true) goto L13;
        return false;
    }

    private TintContextWrapper(@NonNull Context r3) {
        super(r3);
        if (VectorEnabledTintResources.shouldBeUsed() == false) goto L5;
        this.mResources = new VectorEnabledTintResources(this, r3.getResources());
        this.mTheme = this.mResources.newTheme();
        this.mTheme.setTo(r3.getTheme());
        return;
    L5:
        this.mResources = new TintResources(this, r3.getResources());
        this.mTheme = null;
    }

    @Override
    public Resources.Theme getTheme() {
        Resources.Theme r0 = this.mTheme;
        if (r0 == null) goto L5;
        return r0;
    L5:
        return super.getTheme();
    }

    @Override
    public void setTheme(int r3) {
        Resources.Theme r0 = this.mTheme;
        if (r0 != null) goto L5;
        super.setTheme(r3);
        return;
    L5:
        r0.applyStyle(r3, true);
    }

    @Override
    public Resources getResources() {
        return this.mResources;
    }

    @Override
    public AssetManager getAssets() {
        return this.mResources.getAssets();
    }
}
