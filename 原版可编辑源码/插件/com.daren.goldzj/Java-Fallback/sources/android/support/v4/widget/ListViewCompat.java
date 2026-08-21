package android.support.v4.widget;

import android.os.Build;
import android.support.annotation.NonNull;
import android.view.View;
import android.widget.ListView;

public final class ListViewCompat {
    public static void scrollListBy(@NonNull ListView r2, int r3) {
        if (Build.VERSION.SDK_INT < 19) goto L5;
        r2.scrollListBy(r3);
        return;
    L5:
        int r0 = r2.getFirstVisiblePosition();
        if (r0 != (-1)) goto L8;
        return;
    L8:
        View r1 = r2.getChildAt(0);
        if (r1 != null) goto L11;
        return;
    L11:
        r2.setSelectionFromTop(r0, r1.getTop() - r3);
    }

    public static boolean canScrollList(@NonNull ListView r4, int r5) {
        if (Build.VERSION.SDK_INT >= 19) goto L5;
        int r0 = r4.getChildCount();
        if (r0 != 0) goto L9;
        return false;
    L9:
        int r2 = r4.getFirstVisiblePosition();
        if (r5 <= 0) goto L17;
        int r52 = r4.getChildAt(r0 - 1).getBottom();
        if ((r2 + r0) >= r4.getCount()) goto L14;
    L15:
        return true;
    L14:
        if (r52 > (r4.getHeight() - r4.getListPaddingBottom())) goto L15;
        return false;
    L17:
        int r53 = r4.getChildAt(0).getTop();
        if (r2 <= 0) goto L20;
    L21:
        return true;
    L20:
        if (r53 < r4.getListPaddingTop()) goto L21;
        return false;
    L5:
        return r4.canScrollList(r5);
    }

    private ListViewCompat() {
    }
}
