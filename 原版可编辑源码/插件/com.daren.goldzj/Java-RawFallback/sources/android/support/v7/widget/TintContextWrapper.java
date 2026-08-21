package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class TintContextWrapper extends android.content.ContextWrapper {
    private static final java.lang.Object CACHE_LOCK = null;
    private static java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> sCache;
    private final android.content.res.Resources mResources;
    private final android.content.res.Resources.Theme mTheme;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v7.widget.TintContextWrapper.CACHE_LOCK = r0
            return
    }

    private TintContextWrapper(@android.support.annotation.NonNull android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            boolean r0 = android.support.v7.widget.VectorEnabledTintResources.shouldBeUsed()
            if (r0 == 0) goto L26
            android.support.v7.widget.VectorEnabledTintResources r0 = new android.support.v7.widget.VectorEnabledTintResources
            android.content.res.Resources r1 = r3.getResources()
            r0.<init>(r2, r1)
            r2.mResources = r0
            android.content.res.Resources r0 = r2.mResources
            android.content.res.Resources$Theme r0 = r0.newTheme()
            r2.mTheme = r0
            android.content.res.Resources$Theme r0 = r2.mTheme
            android.content.res.Resources$Theme r3 = r3.getTheme()
            r0.setTo(r3)
            goto L34
        L26:
            android.support.v7.widget.TintResources r0 = new android.support.v7.widget.TintResources
            android.content.res.Resources r3 = r3.getResources()
            r0.<init>(r2, r3)
            r2.mResources = r0
            r3 = 0
            r2.mTheme = r3
        L34:
            return
    }

    private static boolean shouldWrap(@android.support.annotation.NonNull android.content.Context r2) {
            boolean r0 = r2 instanceof android.support.v7.widget.TintContextWrapper
            r1 = 0
            if (r0 != 0) goto L23
            android.content.res.Resources r0 = r2.getResources()
            boolean r0 = r0 instanceof android.support.v7.widget.TintResources
            if (r0 != 0) goto L23
            android.content.res.Resources r2 = r2.getResources()
            boolean r2 = r2 instanceof android.support.v7.widget.VectorEnabledTintResources
            if (r2 == 0) goto L16
            goto L23
        L16:
            int r2 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r2 < r0) goto L22
            boolean r2 = android.support.v7.widget.VectorEnabledTintResources.shouldBeUsed()
            if (r2 == 0) goto L23
        L22:
            r1 = 1
        L23:
            return r1
    }

    public static android.content.Context wrap(@android.support.annotation.NonNull android.content.Context r4) {
            boolean r0 = shouldWrap(r4)
            if (r0 == 0) goto L74
            java.lang.Object r0 = android.support.v7.widget.TintContextWrapper.CACHE_LOCK
            monitor-enter(r0)
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r1 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            if (r1 != 0) goto L15
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L71
            r1.<init>()     // Catch: java.lang.Throwable -> L71
            android.support.v7.widget.TintContextWrapper.sCache = r1     // Catch: java.lang.Throwable -> L71
            goto L60
        L15:
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r1 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L71
            int r1 = r1 + (-1)
        L1d:
            if (r1 < 0) goto L37
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r2 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L71
            if (r2 != 0) goto L34
        L2f:
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r2 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            r2.remove(r1)     // Catch: java.lang.Throwable -> L71
        L34:
            int r1 = r1 + (-1)
            goto L1d
        L37:
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r1 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L71
            int r1 = r1 + (-1)
        L3f:
            if (r1 < 0) goto L60
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r2 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L52
            java.lang.Object r2 = r2.get()     // Catch: java.lang.Throwable -> L71
            android.support.v7.widget.TintContextWrapper r2 = (android.support.v7.widget.TintContextWrapper) r2     // Catch: java.lang.Throwable -> L71
            goto L53
        L52:
            r2 = 0
        L53:
            if (r2 == 0) goto L5d
            android.content.Context r3 = r2.getBaseContext()     // Catch: java.lang.Throwable -> L71
            if (r3 != r4) goto L5d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            return r2
        L5d:
            int r1 = r1 + (-1)
            goto L3f
        L60:
            android.support.v7.widget.TintContextWrapper r1 = new android.support.v7.widget.TintContextWrapper     // Catch: java.lang.Throwable -> L71
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L71
            java.util.ArrayList<java.lang.ref.WeakReference<android.support.v7.widget.TintContextWrapper>> r4 = android.support.v7.widget.TintContextWrapper.sCache     // Catch: java.lang.Throwable -> L71
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L71
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L71
            r4.add(r2)     // Catch: java.lang.Throwable -> L71
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            return r1
        L71:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            throw r4
        L74:
            return r4
    }

    @Override
    public android.content.res.AssetManager getAssets() {
            r1 = this;
            android.content.res.Resources r0 = r1.mResources
            android.content.res.AssetManager r0 = r0.getAssets()
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r1 = this;
            android.content.res.Resources r0 = r1.mResources
            return r0
    }

    @Override
    public android.content.res.Resources.Theme getTheme() {
            r1 = this;
            android.content.res.Resources$Theme r0 = r1.mTheme
            if (r0 != 0) goto L8
            android.content.res.Resources$Theme r0 = super.getTheme()
        L8:
            return r0
    }

    @Override
    public void setTheme(int r3) {
            r2 = this;
            android.content.res.Resources$Theme r0 = r2.mTheme
            if (r0 != 0) goto L8
            super.setTheme(r3)
            goto Lc
        L8:
            r1 = 1
            r0.applyStyle(r3, r1)
        Lc:
            return
    }
}
