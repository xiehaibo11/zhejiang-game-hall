package com.bianfeng.splitscreenwindow.ui;

public class AndroidBug5497Workaround {
    private android.view.ViewTreeObserver.OnGlobalLayoutListener _globalListener;
    private android.widget.FrameLayout.LayoutParams frameLayoutParams;
    private android.view.View mChildOfContent;
    private int usableHeightPrevious;


    private AndroidBug5497Workaround(android.app.Activity r3) {
            r2 = this;
            r2.<init>()
            r0 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1 = 0
            android.view.View r0 = r0.getChildAt(r1)
            r2.mChildOfContent = r0
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r2.frameLayoutParams = r0
            com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround$1 r0 = new com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround$1
            r0.<init>(r2, r3)
            r2._globalListener = r0
            return
    }

    static void access$000(com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround r0) {
            r0.possiblyResizeChildOfContent()
            return
    }

    private int computeUsableHeight() {
            r2 = this;
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.view.View r1 = r2.mChildOfContent
            r1.getWindowVisibleDisplayFrame(r0)
            int r1 = r0.bottom
            int r0 = r0.top
            int r1 = r1 - r0
            return r1
    }

    public static com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround getInstance(android.app.Activity r1) {
            com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround r0 = new com.bianfeng.splitscreenwindow.ui.AndroidBug5497Workaround
            r0.<init>(r1)
            return r0
    }

    private void possiblyResizeChildOfContent() {
            r4 = this;
            int r0 = r4.computeUsableHeight()
            int r1 = r4.usableHeightPrevious
            if (r0 == r1) goto L29
            android.view.View r1 = r4.mChildOfContent
            android.view.View r1 = r1.getRootView()
            int r1 = r1.getHeight()
            int r2 = r1 - r0
            int r3 = r1 / 4
            if (r2 <= r3) goto L1e
            android.widget.FrameLayout$LayoutParams r3 = r4.frameLayoutParams
            int r1 = r1 - r2
            r3.height = r1
            goto L22
        L1e:
            android.widget.FrameLayout$LayoutParams r2 = r4.frameLayoutParams
            r2.height = r1
        L22:
            android.view.View r1 = r4.mChildOfContent
            r1.requestLayout()
            r4.usableHeightPrevious = r0
        L29:
            return
    }

    public void removeListener() {
            r0 = this;
            return
    }

    public void setListener() {
            r2 = this;
            android.view.View r0 = r2.mChildOfContent
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnGlobalLayoutListener r1 = r2._globalListener
            r0.addOnGlobalLayoutListener(r1)
            return
    }
}
