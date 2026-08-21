package android.support.transition;

class ViewGroupUtils {
    private ViewGroupUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.support.transition.ViewGroupOverlayImpl getOverlay(android.view.ViewGroup r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lc
            android.support.transition.ViewGroupOverlayApi18 r0 = new android.support.transition.ViewGroupOverlayApi18
            r0.<init>(r2)
            return r0
        Lc:
            android.support.transition.ViewGroupOverlayApi14 r2 = android.support.transition.ViewGroupOverlayApi14.createFrom(r2)
            return r2
    }

    static void suppressLayout(android.view.ViewGroup r2, boolean r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto La
            android.support.transition.ViewGroupUtilsApi18.suppressLayout(r2, r3)
            goto Ld
        La:
            android.support.transition.ViewGroupUtilsApi14.suppressLayout(r2, r3)
        Ld:
            return
    }
}
