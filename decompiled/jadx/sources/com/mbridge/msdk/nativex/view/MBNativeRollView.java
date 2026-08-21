package com.mbridge.msdk.nativex.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.widget.LinearLayout;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.NativeListener;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class MBNativeRollView extends LinearLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private RollingBCView f3829a;
    private Context b;
    private NativeListener.FilpListener c;

    public interface a {
        View a(Frame frame, int i);
    }

    public void setFilpListening(NativeListener.FilpListener filpListener) {
        if (filpListener != null) {
            this.c = filpListener;
            this.f3829a.setFilpListening(filpListener);
        }
    }

    public MBNativeRollView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public MBNativeRollView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = context;
        RollingBCView rollingBCView = new RollingBCView(context);
        this.f3829a = rollingBCView;
        addView(rollingBCView);
        this.f3829a.setLayoutParams(new LinearLayout.LayoutParams((int) (((double) ae.f(context)) * 0.9d), -2));
        setClipChildren(false);
    }

    public MBNativeRollView(Context context) {
        this(context, null);
    }

    public void setData(List<Frame> list, Context context, String str, a aVar) {
        this.f3829a.setData(list, context, str, aVar);
    }

    public void setFrameWidth(int i) {
        this.f3829a.setLayoutParams(new LinearLayout.LayoutParams(i, -2));
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        return this.f3829a.dispatchTouchEvent(motionEvent);
    }
}
