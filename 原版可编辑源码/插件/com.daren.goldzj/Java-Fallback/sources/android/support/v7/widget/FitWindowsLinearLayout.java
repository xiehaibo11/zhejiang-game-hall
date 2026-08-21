package android.support.v7.widget;

import android.content.Context;
import android.graphics.Rect;
import android.support.annotation.RestrictTo;
import android.support.v7.widget.FitWindowsViewGroup;
import android.util.AttributeSet;
import android.widget.LinearLayout;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class FitWindowsLinearLayout extends LinearLayout implements FitWindowsViewGroup {
    private FitWindowsViewGroup.OnFitSystemWindowsListener mListener;

    public FitWindowsLinearLayout(Context r1) {
        super(r1);
    }

    public FitWindowsLinearLayout(Context r1, AttributeSet r2) {
        super(r1, r2);
    }

    @Override
    public void setOnFitSystemWindowsListener(FitWindowsViewGroup.OnFitSystemWindowsListener r1) {
        this.mListener = r1;
    }

    @Override
    protected boolean fitSystemWindows(Rect r2) {
        FitWindowsViewGroup.OnFitSystemWindowsListener r0 = this.mListener;
        if (r0 == null) goto L6;
        r0.onFitSystemWindows(r2);
    L6:
        return super.fitSystemWindows(r2);
    }
}
