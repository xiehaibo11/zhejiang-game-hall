package android.support.v4.widget;

public final class ListPopupWindowCompat {
    private ListPopupWindowCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @android.support.annotation.Nullable
    public static android.view.View.OnTouchListener createDragToOpenListener(@android.support.annotation.NonNull android.widget.ListPopupWindow r2, @android.support.annotation.NonNull android.view.View r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            android.view.View$OnTouchListener r2 = r2.createDragToOpenListener(r3)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static android.view.View.OnTouchListener createDragToOpenListener(java.lang.Object r0, android.view.View r1) {
            android.widget.ListPopupWindow r0 = (android.widget.ListPopupWindow) r0
            android.view.View$OnTouchListener r0 = createDragToOpenListener(r0, r1)
            return r0
    }
}
