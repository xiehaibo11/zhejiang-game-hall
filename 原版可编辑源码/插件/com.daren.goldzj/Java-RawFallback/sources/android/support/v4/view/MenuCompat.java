package android.support.v4.view;

public final class MenuCompat {
    private MenuCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.annotation.SuppressLint({"NewApi"})
    public static void setGroupDividerEnabled(android.view.Menu r2, boolean r3) {
            boolean r0 = r2 instanceof android.support.v4.internal.view.SupportMenu
            if (r0 == 0) goto La
            android.support.v4.internal.view.SupportMenu r2 = (android.support.v4.internal.view.SupportMenu) r2
            r2.setGroupDividerEnabled(r3)
            goto L13
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L13
            r2.setGroupDividerEnabled(r3)
        L13:
            return
    }

    @java.lang.Deprecated
    public static void setShowAsAction(android.view.MenuItem r0, int r1) {
            r0.setShowAsAction(r1)
            return
    }
}
