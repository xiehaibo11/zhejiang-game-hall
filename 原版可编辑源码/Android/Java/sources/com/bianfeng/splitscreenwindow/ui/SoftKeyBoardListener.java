package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.graphics.Rect;
import android.view.View;
import android.view.ViewTreeObserver;
import com.bianfeng.utilslib.UtilsSdk;

public class SoftKeyBoardListener implements ViewTreeObserver.OnGlobalLayoutListener {
    private static SoftKeyBoardListener softKeyBoardListener;
    private OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener;
    private View rootView;
    int rootViewVisibleHeight;

    public interface OnSoftKeyBoardChangeListener {
        void keyBoardHide(int i);

        void keyBoardShow(int i);
    }

    public SoftKeyBoardListener(Activity activity) {
        View decorView = activity.getWindow().getDecorView();
        this.rootView = decorView;
        decorView.getViewTreeObserver().addOnGlobalLayoutListener(this);
    }

    public void remove() {
        this.rootView.getViewTreeObserver().removeOnGlobalLayoutListener(this);
    }

    private void setOnSoftKeyBoardChangeListener(OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener) {
        this.onSoftKeyBoardChangeListener = onSoftKeyBoardChangeListener;
    }

    @Override
    public void onGlobalLayout() {
        UtilsSdk.getLogger().i("获取当前根视图在屏幕上显示的大小");
        Rect rect = new Rect();
        this.rootView.getWindowVisibleDisplayFrame(rect);
        int iHeight = rect.height();
        int i = this.rootViewVisibleHeight;
        if (i == 0) {
            UtilsSdk.getLogger().i("rootViewVisibleHeight == 0");
            this.rootViewVisibleHeight = iHeight;
            return;
        }
        if (i == iHeight) {
            UtilsSdk.getLogger().i("根视图显示高度没有变化 == 0");
            return;
        }
        if (i - iHeight > 200) {
            UtilsSdk.getLogger().i("可以看作软键盘显示了 == 0---" + this.rootViewVisibleHeight);
            OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener = this.onSoftKeyBoardChangeListener;
            if (onSoftKeyBoardChangeListener != null) {
                onSoftKeyBoardChangeListener.keyBoardShow(this.rootViewVisibleHeight - iHeight);
            }
            this.rootViewVisibleHeight = iHeight;
            return;
        }
        if (iHeight - i > 200) {
            UtilsSdk.getLogger().i("可以看作软键盘隐藏了 == 0---" + this.rootViewVisibleHeight);
            OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener2 = this.onSoftKeyBoardChangeListener;
            if (onSoftKeyBoardChangeListener2 != null) {
                onSoftKeyBoardChangeListener2.keyBoardHide(iHeight - this.rootViewVisibleHeight);
            }
            this.rootViewVisibleHeight = iHeight;
        }
    }

    public static void setListener(Activity activity, OnSoftKeyBoardChangeListener onSoftKeyBoardChangeListener) {
        SoftKeyBoardListener softKeyBoardListener2 = new SoftKeyBoardListener(activity);
        softKeyBoardListener = softKeyBoardListener2;
        softKeyBoardListener2.setOnSoftKeyBoardChangeListener(onSoftKeyBoardChangeListener);
    }

    public static void removeListener() {
        softKeyBoardListener.remove();
    }
}
