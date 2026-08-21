package android.support.transition;

class GhostViewUtils {
    private GhostViewUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.support.transition.GhostViewImpl addGhost(android.view.View r2, android.view.ViewGroup r3, android.graphics.Matrix r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.support.transition.GhostViewImpl r2 = android.support.transition.GhostViewApi21.addGhost(r2, r3, r4)
            return r2
        Lb:
            android.support.transition.GhostViewImpl r2 = android.support.transition.GhostViewApi14.addGhost(r2, r3)
            return r2
    }

    static void removeGhost(android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            android.support.transition.GhostViewApi21.removeGhost(r2)
            goto Ld
        La:
            android.support.transition.GhostViewApi14.removeGhost(r2)
        Ld:
            return
    }
}
