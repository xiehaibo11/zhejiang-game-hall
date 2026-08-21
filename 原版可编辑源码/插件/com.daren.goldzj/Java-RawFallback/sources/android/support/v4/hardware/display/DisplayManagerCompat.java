package android.support.v4.hardware.display;

public final class DisplayManagerCompat {
    public static final java.lang.String DISPLAY_CATEGORY_PRESENTATION = "android.hardware.display.category.PRESENTATION";
    private static final java.util.WeakHashMap<android.content.Context, android.support.v4.hardware.display.DisplayManagerCompat> sInstances = null;
    private final android.content.Context mContext;

    static {
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            android.support.v4.hardware.display.DisplayManagerCompat.sInstances = r0
            return
    }

    private DisplayManagerCompat(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    @android.support.annotation.NonNull
    public static android.support.v4.hardware.display.DisplayManagerCompat getInstance(@android.support.annotation.NonNull android.content.Context r3) {
            java.util.WeakHashMap<android.content.Context, android.support.v4.hardware.display.DisplayManagerCompat> r0 = android.support.v4.hardware.display.DisplayManagerCompat.sInstances
            monitor-enter(r0)
            java.util.WeakHashMap<android.content.Context, android.support.v4.hardware.display.DisplayManagerCompat> r1 = android.support.v4.hardware.display.DisplayManagerCompat.sInstances     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L19
            android.support.v4.hardware.display.DisplayManagerCompat r1 = (android.support.v4.hardware.display.DisplayManagerCompat) r1     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            android.support.v4.hardware.display.DisplayManagerCompat r1 = new android.support.v4.hardware.display.DisplayManagerCompat     // Catch: java.lang.Throwable -> L19
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L19
            java.util.WeakHashMap<android.content.Context, android.support.v4.hardware.display.DisplayManagerCompat> r2 = android.support.v4.hardware.display.DisplayManagerCompat.sInstances     // Catch: java.lang.Throwable -> L19
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    @android.support.annotation.Nullable
    public android.view.Display getDisplay(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L15
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "display"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.hardware.display.DisplayManager r0 = (android.hardware.display.DisplayManager) r0
            android.view.Display r3 = r0.getDisplay(r3)
            return r3
        L15:
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "window"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.Display r0 = r0.getDefaultDisplay()
            int r1 = r0.getDisplayId()
            if (r1 != r3) goto L2a
            return r0
        L2a:
            r3 = 0
            return r3
    }

    @android.support.annotation.NonNull
    public android.view.Display[] getDisplays() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L15
            android.content.Context r0 = r3.mContext
            java.lang.String r1 = "display"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.hardware.display.DisplayManager r0 = (android.hardware.display.DisplayManager) r0
            android.view.Display[] r0 = r0.getDisplays()
            return r0
        L15:
            android.content.Context r0 = r3.mContext
            java.lang.String r1 = "window"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.Display r0 = r0.getDefaultDisplay()
            r1 = 1
            android.view.Display[] r1 = new android.view.Display[r1]
            r2 = 0
            r1[r2] = r0
            return r1
    }

    @android.support.annotation.NonNull
    public android.view.Display[] getDisplays(@android.support.annotation.Nullable java.lang.String r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L15
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "display"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.hardware.display.DisplayManager r0 = (android.hardware.display.DisplayManager) r0
            android.view.Display[] r3 = r0.getDisplays(r3)
            return r3
        L15:
            r0 = 0
            if (r3 != 0) goto L1b
            android.view.Display[] r3 = new android.view.Display[r0]
            return r3
        L1b:
            android.content.Context r3 = r2.mContext
            java.lang.String r1 = "window"
            java.lang.Object r3 = r3.getSystemService(r1)
            android.view.WindowManager r3 = (android.view.WindowManager) r3
            android.view.Display r3 = r3.getDefaultDisplay()
            r1 = 1
            android.view.Display[] r1 = new android.view.Display[r1]
            r1[r0] = r3
            return r1
    }
}
