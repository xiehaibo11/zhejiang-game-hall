package android.support.v4.view;

public interface NestedScrollingParent2 extends android.support.v4.view.NestedScrollingParent {
    void onNestedPreScroll(@android.support.annotation.NonNull android.view.View r1, int r2, int r3, @android.support.annotation.NonNull int[] r4, int r5);

    void onNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2, int r3, int r4, int r5, int r6);

    void onNestedScrollAccepted(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3, int r4);

    boolean onStartNestedScroll(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3, int r4);

    void onStopNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2);
}
