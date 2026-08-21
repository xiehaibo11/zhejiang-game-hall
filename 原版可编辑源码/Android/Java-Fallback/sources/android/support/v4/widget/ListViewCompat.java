package android.support.v4.widget;

public final class ListViewCompat {
    private ListViewCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean canScrollList(android.widget.ListView r4, int r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            boolean r4 = r4.canScrollList(r5)
            return r4
        Lb:
            int r0 = r4.getChildCount()
            r1 = 0
            if (r0 != 0) goto L13
            return r1
        L13:
            int r2 = r4.getFirstVisiblePosition()
            r3 = 1
            if (r5 <= 0) goto L38
            int r5 = r0 + (-1)
            android.view.View r5 = r4.getChildAt(r5)
            int r5 = r5.getBottom()
            int r2 = r2 + r0
            int r0 = r4.getCount()
            if (r2 < r0) goto L36
            int r0 = r4.getHeight()
            int r4 = r4.getListPaddingBottom()
            int r0 = r0 - r4
            if (r5 <= r0) goto L37
        L36:
            r1 = r3
        L37:
            return r1
        L38:
            android.view.View r5 = r4.getChildAt(r1)
            int r5 = r5.getTop()
            if (r2 > 0) goto L48
            int r4 = r4.getListPaddingTop()
            if (r5 >= r4) goto L49
        L48:
            r1 = r3
        L49:
            return r1
    }

    public static void scrollListBy(android.widget.ListView r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r2.scrollListBy(r3)
            goto L22
        La:
            int r0 = r2.getFirstVisiblePosition()
            r1 = -1
            if (r0 != r1) goto L12
            return
        L12:
            r1 = 0
            android.view.View r1 = r2.getChildAt(r1)
            if (r1 != 0) goto L1a
            return
        L1a:
            int r1 = r1.getTop()
            int r1 = r1 - r3
            r2.setSelectionFromTop(r0, r1)
        L22:
            return
    }
}
