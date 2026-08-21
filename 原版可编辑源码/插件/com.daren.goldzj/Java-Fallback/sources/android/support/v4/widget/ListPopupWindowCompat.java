package android.support.v4.widget;

import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.View;
import android.widget.ListPopupWindow;

public final class ListPopupWindowCompat {
    private ListPopupWindowCompat() {
    }

    @Deprecated
    public static View.OnTouchListener createDragToOpenListener(Object r0, View r1) {
        return createDragToOpenListener((ListPopupWindow) r0, r1);
    }

    @Nullable
    public static View.OnTouchListener createDragToOpenListener(@NonNull ListPopupWindow r2, @NonNull View r3) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        return null;
    L5:
        return r2.createDragToOpenListener(r3);
    }
}
