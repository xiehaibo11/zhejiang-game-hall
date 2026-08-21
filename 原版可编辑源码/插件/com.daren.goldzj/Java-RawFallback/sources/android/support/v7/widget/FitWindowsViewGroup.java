package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface FitWindowsViewGroup {

    public interface OnFitSystemWindowsListener {
        void onFitSystemWindows(android.graphics.Rect r1);
    }

    void setOnFitSystemWindowsListener(android.support.v7.widget.FitWindowsViewGroup.OnFitSystemWindowsListener r1);
}
