package android.support.v4.view;

public class NestedScrollingParentHelper {
    private int mNestedScrollAxes;
    private final android.view.ViewGroup mViewGroup;

    public NestedScrollingParentHelper(@android.support.annotation.NonNull android.view.ViewGroup r1) {
            r0 = this;
            r0.<init>()
            r0.mViewGroup = r1
            return
    }

    public int getNestedScrollAxes() {
            r1 = this;
            int r0 = r1.mNestedScrollAxes
            return r0
    }

    public void onNestedScrollAccepted(@android.support.annotation.NonNull android.view.View r2, @android.support.annotation.NonNull android.view.View r3, int r4) {
            r1 = this;
            r0 = 0
            r1.onNestedScrollAccepted(r2, r3, r4, r0)
            return
    }

    public void onNestedScrollAccepted(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3, int r4) {
            r0 = this;
            r0.mNestedScrollAxes = r3
            return
    }

    public void onStopNestedScroll(@android.support.annotation.NonNull android.view.View r2) {
            r1 = this;
            r0 = 0
            r1.onStopNestedScroll(r2, r0)
            return
    }

    public void onStopNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2) {
            r0 = this;
            r1 = 0
            r0.mNestedScrollAxes = r1
            return
    }
}
