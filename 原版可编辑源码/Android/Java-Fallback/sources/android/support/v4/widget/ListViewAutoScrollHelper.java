package android.support.v4.widget;

public class ListViewAutoScrollHelper extends android.support.v4.widget.AutoScrollHelper {
    private final android.widget.ListView mTarget;

    public ListViewAutoScrollHelper(android.widget.ListView r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mTarget = r1
            return
    }

    @Override
    public boolean canTargetScrollHorizontally(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean canTargetScrollVertically(int r8) {
            r7 = this;
            android.widget.ListView r0 = r7.mTarget
            int r1 = r0.getCount()
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            int r3 = r0.getChildCount()
            int r4 = r0.getFirstVisiblePosition()
            int r5 = r4 + r3
            r6 = 1
            if (r8 <= 0) goto L29
            if (r5 < r1) goto L38
            int r3 = r3 - r6
            android.view.View r8 = r0.getChildAt(r3)
            int r8 = r8.getBottom()
            int r0 = r0.getHeight()
            if (r8 > r0) goto L38
            return r2
        L29:
            if (r8 >= 0) goto L39
            if (r4 > 0) goto L38
            android.view.View r8 = r0.getChildAt(r2)
            int r8 = r8.getTop()
            if (r8 < 0) goto L38
            return r2
        L38:
            return r6
        L39:
            return r2
    }

    @Override
    public void scrollTargetBy(int r1, int r2) {
            r0 = this;
            android.widget.ListView r1 = r0.mTarget
            android.support.v4.widget.ListViewCompat.scrollListBy(r1, r2)
            return
    }
}
