package com.qq.e.ads.nativ.widget;

public interface ViewStatusListener {
    void onAttachToWindow();

    void onDetachFromWindow();

    void onDispatchTouchEvent(android.view.MotionEvent r1);

    void onWindowFocusChanged(boolean r1);

    void onWindowVisibilityChanged(int r1);
}
