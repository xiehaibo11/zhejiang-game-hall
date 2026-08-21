package com.bianfeng.splitscreenwindow.ui;

public class SoftKeyBoardListener implements android.view.ViewTreeObserver.OnGlobalLayoutListener {
    private static com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener softKeyBoardListener;
    private com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener;
    private android.view.View rootView;
    int rootViewVisibleHeight;

    public interface OnSoftKeyBoardChangeListener {
        void keyBoardHide(int r1);

        void keyBoardShow(int r1);
    }

    public SoftKeyBoardListener(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            android.view.Window r1 = r1.getWindow()
            android.view.View r1 = r1.getDecorView()
            r0.rootView = r1
            android.view.ViewTreeObserver r1 = r1.getViewTreeObserver()
            r1.addOnGlobalLayoutListener(r0)
            return
    }

    public static void removeListener() {
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener r0 = com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.softKeyBoardListener
            r0.remove()
            return
    }

    public static void setListener(android.app.Activity r1, com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener r2) {
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener r0 = new com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener
            r0.<init>(r1)
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.softKeyBoardListener = r0
            r0.setOnSoftKeyBoardChangeListener(r2)
            return
    }

    private void setOnSoftKeyBoardChangeListener(com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener.OnSoftKeyBoardChangeListener r1) {
            r0 = this;
            r0.onSoftKeyBoardChangeListener = r1
            return
    }

    @Override
    public void onGlobalLayout() {
            r4 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "获取当前根视图在屏幕上显示的大小"
            r0.i(r1)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.view.View r1 = r4.rootView
            r1.getWindowVisibleDisplayFrame(r0)
            int r0 = r0.height()
            int r1 = r4.rootViewVisibleHeight
            if (r1 != 0) goto L27
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r2 = "rootViewVisibleHeight == 0"
            r1.i(r2)
            r4.rootViewVisibleHeight = r0
            return
        L27:
            if (r1 != r0) goto L33
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "根视图显示高度没有变化 == 0"
            r0.i(r1)
            return
        L33:
            int r2 = r1 - r0
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 <= r3) goto L60
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "可以看作软键盘显示了 == 0---"
            r2.append(r3)
            int r3 = r4.rootViewVisibleHeight
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.i(r2)
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener$OnSoftKeyBoardChangeListener r1 = r4.onSoftKeyBoardChangeListener
            if (r1 == 0) goto L5d
            int r2 = r4.rootViewVisibleHeight
            int r2 = r2 - r0
            r1.keyBoardShow(r2)
        L5d:
            r4.rootViewVisibleHeight = r0
            return
        L60:
            int r1 = r0 - r1
            if (r1 <= r3) goto L8b
            com.bianfeng.utilslib.Logger r1 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "可以看作软键盘隐藏了 == 0---"
            r2.append(r3)
            int r3 = r4.rootViewVisibleHeight
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.i(r2)
            com.bianfeng.splitscreenwindow.ui.SoftKeyBoardListener$OnSoftKeyBoardChangeListener r1 = r4.onSoftKeyBoardChangeListener
            if (r1 == 0) goto L89
            int r2 = r4.rootViewVisibleHeight
            int r2 = r0 - r2
            r1.keyBoardHide(r2)
        L89:
            r4.rootViewVisibleHeight = r0
        L8b:
            return
    }

    public void remove() {
            r1 = this;
            android.view.View r0 = r1.rootView
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            r0.removeOnGlobalLayoutListener(r1)
            return
    }
}
