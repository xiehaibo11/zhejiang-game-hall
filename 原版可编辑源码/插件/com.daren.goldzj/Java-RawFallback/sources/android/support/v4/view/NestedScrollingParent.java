package android.support.v4.view;

public interface NestedScrollingParent {
    int getNestedScrollAxes();

    boolean onNestedFling(@android.support.annotation.NonNull android.view.View r1, float r2, float r3, boolean r4);

    boolean onNestedPreFling(@android.support.annotation.NonNull android.view.View r1, float r2, float r3);

    void onNestedPreScroll(@android.support.annotation.NonNull android.view.View r1, int r2, int r3, @android.support.annotation.NonNull int[] r4);

    void onNestedScroll(@android.support.annotation.NonNull android.view.View r1, int r2, int r3, int r4, int r5);

    void onNestedScrollAccepted(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3);

    boolean onStartNestedScroll(@android.support.annotation.NonNull android.view.View r1, @android.support.annotation.NonNull android.view.View r2, int r3);

    void onStopNestedScroll(@android.support.annotation.NonNull android.view.View r1);
}
