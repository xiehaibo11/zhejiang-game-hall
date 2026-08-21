package com.qq.e.ads.nativ.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.FrameLayout;
import com.qq.e.comm.util.GDTLogger;

/* JADX INFO: loaded from: classes3.dex */
public class NativeAdContainer extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ViewStatusListener f4665a;
    private ViewStatus b;

    /* JADX INFO: renamed from: com.qq.e.ads.nativ.widget.NativeAdContainer$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4666a;

        static {
            int[] iArr = new int[ViewStatus.values().length];
            f4666a = iArr;
            try {
                iArr[1] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4666a[2] = 2;
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

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        ViewStatusListener viewStatusListener = this.f4665a;
        if (viewStatusListener != null) {
            viewStatusListener.onDispatchTouchEvent(motionEvent);
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        GDTLogger.d("NativeAdContainer onAttachedToWindow");
        this.b = ViewStatus.ATTACHED;
        ViewStatusListener viewStatusListener = this.f4665a;
        if (viewStatusListener != null) {
            viewStatusListener.onAttachToWindow();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        GDTLogger.d("NativeAdContainer onDetachedFromWindow");
        this.b = ViewStatus.DETACHED;
        ViewStatusListener viewStatusListener = this.f4665a;
        if (viewStatusListener != null) {
            viewStatusListener.onDetachFromWindow();
        }
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        GDTLogger.d("onWindowFocusChanged: hasWindowFocus: " + z);
        ViewStatusListener viewStatusListener = this.f4665a;
        if (viewStatusListener != null) {
            viewStatusListener.onWindowFocusChanged(z);
        }
    }

    @Override // android.view.View
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        GDTLogger.d("onWindowVisibilityChanged: visibility: " + i);
        ViewStatusListener viewStatusListener = this.f4665a;
        if (viewStatusListener != null) {
            viewStatusListener.onWindowVisibilityChanged(i);
        }
    }

    public void setViewStatusListener(ViewStatusListener viewStatusListener) {
        this.f4665a = viewStatusListener;
        if (viewStatusListener != null) {
            int iOrdinal = this.b.ordinal();
            if (iOrdinal == 1) {
                this.f4665a.onAttachToWindow();
            } else {
                if (iOrdinal != 2) {
                    return;
                }
                this.f4665a.onDetachFromWindow();
            }
        }
    }
}
