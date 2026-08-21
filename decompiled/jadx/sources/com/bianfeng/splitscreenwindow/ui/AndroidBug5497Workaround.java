package com.bianfeng.splitscreenwindow.ui;

import android.R;
import android.app.Activity;
import android.graphics.Rect;
import android.view.View;
import android.view.ViewTreeObserver;
import android.widget.FrameLayout;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class AndroidBug5497Workaround {
    private ViewTreeObserver.OnGlobalLayoutListener _globalListener;
    private FrameLayout.LayoutParams frameLayoutParams;
    private View mChildOfContent;
    private int usableHeightPrevious;

    public void removeListener() {
    }

    public static AndroidBug5497Workaround getInstance(Activity activity) {
        return new AndroidBug5497Workaround(activity);
    }

    private AndroidBug5497Workaround(final Activity activity) {
        View childAt = ((FrameLayout) activity.findViewById(R.id.content)).getChildAt(0);
        this.mChildOfContent = childAt;
        this.frameLayoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
        this._globalListener = new ViewTreeObserver.OnGlobalLayoutListener() { // from class: com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround.1
            @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
            public void onGlobalLayout() {
                UtilsSdk.getFullScreen().hideBar(activity);
                AndroidBug5497Workaround.this.possiblyResizeChildOfContent();
            }
        };
    }

    public void setListener() {
        this.mChildOfContent.getViewTreeObserver().addOnGlobalLayoutListener(this._globalListener);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void possiblyResizeChildOfContent() {
        int iComputeUsableHeight = computeUsableHeight();
        if (iComputeUsableHeight != this.usableHeightPrevious) {
            int height = this.mChildOfContent.getRootView().getHeight();
            int i = height - iComputeUsableHeight;
            if (i > height / 4) {
                this.frameLayoutParams.height = height - i;
            } else {
                this.frameLayoutParams.height = height;
            }
            this.mChildOfContent.requestLayout();
            this.usableHeightPrevious = iComputeUsableHeight;
        }
    }

    private int computeUsableHeight() {
        Rect rect = new Rect();
        this.mChildOfContent.getWindowVisibleDisplayFrame(rect);
        return rect.bottom - rect.top;
    }
}
