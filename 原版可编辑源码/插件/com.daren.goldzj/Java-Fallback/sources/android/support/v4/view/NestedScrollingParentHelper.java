package android.support.v4.view;

import android.support.annotation.NonNull;
import android.view.View;
import android.view.ViewGroup;

public class NestedScrollingParentHelper {
    private int mNestedScrollAxes;
    private final ViewGroup mViewGroup;

    public NestedScrollingParentHelper(@NonNull ViewGroup r1) {
        this.mViewGroup = r1;
    }

    public void onNestedScrollAccepted(@NonNull View r2, @NonNull View r3, int r4) {
        onNestedScrollAccepted(r2, r3, r4, 0);
    }

    public void onNestedScrollAccepted(@NonNull View r1, @NonNull View r2, int r3, int r4) {
        this.mNestedScrollAxes = r3;
    }

    public int getNestedScrollAxes() {
        return this.mNestedScrollAxes;
    }

    public void onStopNestedScroll(@NonNull View r2) {
        onStopNestedScroll(r2, 0);
    }

    public void onStopNestedScroll(@NonNull View r1, int r2) {
        this.mNestedScrollAxes = 0;
    }
}
