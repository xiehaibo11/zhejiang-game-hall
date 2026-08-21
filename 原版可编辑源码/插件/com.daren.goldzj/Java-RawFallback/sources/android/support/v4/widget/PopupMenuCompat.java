package android.support.v4.widget;

public final class PopupMenuCompat {
    private PopupMenuCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.Nullable
    public static android.view.View.OnTouchListener getDragToOpenListener(@android.support.annotation.NonNull java.lang.Object r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Ld
            android.widget.PopupMenu r2 = (android.widget.PopupMenu) r2
            android.view.View$OnTouchListener r2 = r2.getDragToOpenListener()
            return r2
        Ld:
            r2 = 0
            return r2
    }
}
