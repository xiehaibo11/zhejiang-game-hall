package com.kwad.sdk.core.view;

import android.content.Context;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.widget.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
@Deprecated
public class AdBaseFrameLayout extends FrameLayout implements e {
    private static final ac.a axd = new ac.a();
    private List<View.OnTouchListener> axc;

    public AdBaseFrameLayout(Context context) {
        super(context);
        this.axc = new ArrayList();
    }

    public AdBaseFrameLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.axc = new ArrayList();
    }

    public AdBaseFrameLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.axc = new ArrayList();
    }

    public final void a(View.OnTouchListener onTouchListener) {
        if (this.axc.contains(onTouchListener)) {
            return;
        }
        this.axc.add(onTouchListener);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchRestoreInstanceState(SparseArray<Parcelable> sparseArray) {
        try {
            super.dispatchRestoreInstanceState(sparseArray);
        } catch (Throwable th) {
            c.printStackTrace(th);
            com.kwad.sdk.service.c.gatherException(th);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void dispatchSaveInstanceState(SparseArray<Parcelable> sparseArray) {
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        if (!this.axc.isEmpty()) {
            Iterator<View.OnTouchListener> it = this.axc.iterator();
            while (it.hasNext()) {
                it.next().onTouch(this, motionEvent);
            }
        }
        int action = motionEvent.getAction();
        if (action == 0) {
            axd.x(getWidth(), getHeight());
            axd.f(motionEvent.getX(), motionEvent.getY());
        } else if (action == 1) {
            axd.g(motionEvent.getX(), motionEvent.getY());
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override // com.kwad.sdk.widget.e
    public ac.a getTouchCoords() {
        return axd;
    }

    @Override // android.view.View
    public void saveHierarchyState(SparseArray<Parcelable> sparseArray) {
    }
}
