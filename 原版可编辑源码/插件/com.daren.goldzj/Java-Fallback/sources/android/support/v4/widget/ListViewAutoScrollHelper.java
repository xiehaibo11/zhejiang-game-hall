package android.support.v4.widget;

import android.support.annotation.NonNull;
import android.widget.ListView;

public class ListViewAutoScrollHelper extends AutoScrollHelper {
    private final ListView mTarget;

    @Override
    public boolean canTargetScrollHorizontally(int r1) {
        return false;
    }

    public ListViewAutoScrollHelper(@NonNull ListView r1) {
        super(r1);
        this.mTarget = r1;
    }

    @Override
    public void scrollTargetBy(int r1, int r2) {
        ListViewCompat.scrollListBy(this.mTarget, r2);
    }

    @Override
    public boolean canTargetScrollVertically(int r8) {
        ListView r0 = this.mTarget;
        int r1 = r0.getCount();
        if (r1 != 0) goto L5;
        return false;
    L5:
        int r3 = r0.getChildCount();
        int r4 = r0.getFirstVisiblePosition();
        int r5 = r4 + r3;
        if (r8 <= 0) goto L11;
        if (r5 >= r1) goto L9;
    L16:
        return true;
    L9:
        if (r0.getChildAt(r3 - 1).getBottom() > r0.getHeight()) goto L16;
        return false;
    L11:
        if (r8 >= 0) goto L17;
        if (r4 > 0) goto L16;
        if (r0.getChildAt(0).getTop() < 0) goto L16;
        return false;
    L17:
        return false;
    }
}
