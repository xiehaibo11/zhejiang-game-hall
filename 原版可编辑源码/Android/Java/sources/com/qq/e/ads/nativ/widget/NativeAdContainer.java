package com.qq.e.ads.nativ.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.FrameLayout;
import com.qq.e.comm.util.GDTLogger;

public class NativeAdContainer extends FrameLayout {
    private ViewStatusListener a;
    private ViewStatus b;

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[ViewStatus.values().length];
            a = iArr;
            try {
                iArr[1] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[2] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    private enum ViewStatus {
        INIT,
        ATTACHED,
        DETACHED
    }

    public NativeAdContainer(Context context) {
        super(context);
        this.b = ViewStatus.INIT;
    }

    public NativeAdContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = ViewStatus.INIT;
    }

    public NativeAdContainer(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = ViewStatus.INIT;
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        ViewStatusListener viewStatusListener = this.a;
        if (viewStatusListener != null) {
            viewStatusListener.onDispatchTouchEvent(motionEvent);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        GDTLogger.d("NativeAdContainer onAttachedToWindow");
        this.b = ViewStatus.ATTACHED;
        ViewStatusListener viewStatusListener = this.a;
        if (viewStatusListener != null) {
            viewStatusListener.onAttachToWindow();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        GDTLogger.d("NativeAdContainer onDetachedFromWindow");
        this.b = ViewStatus.DETACHED;
        ViewStatusListener viewStatusListener = this.a;
        if (viewStatusListener != null) {
            viewStatusListener.onDetachFromWindow();
        }
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        GDTLogger.d("onWindowFocusChanged: hasWindowFocus: " + z);
        ViewStatusListener viewStatusListener = this.a;
        if (viewStatusListener != null) {
            viewStatusListener.onWindowFocusChanged(z);
        }
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        GDTLogger.d("onWindowVisibilityChanged: visibility: " + i);
        ViewStatusListener viewStatusListener = this.a;
        if (viewStatusListener != null) {
            viewStatusListener.onWindowVisibilityChanged(i);
        }
    }

    public void setViewStatusListener(ViewStatusListener viewStatusListener) {
        this.a = viewStatusListener;
        if (viewStatusListener != null) {
            int iOrdinal = this.b.ordinal();
            if (iOrdinal == 1) {
                this.a.onAttachToWindow();
            } else {
                if (iOrdinal != 2) {
                    return;
                }
                this.a.onDetachFromWindow();
            }
        }
    }
}
