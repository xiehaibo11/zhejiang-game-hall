package com.kwad.sdk.widget;

import android.content.Context;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: loaded from: classes2.dex */
public final class f implements GestureDetector.OnGestureListener, View.OnTouchListener {
    private GestureDetector Gn;
    private MotionEvent aMj;
    private c fb;
    private View mView;

    public f(Context context, View view, c cVar) {
        this.mView = view;
        view.setOnTouchListener(this);
        this.Gn = new GestureDetector(context, this);
        this.fb = cVar;
    }

    public f(View view, c cVar) {
        if (view == null) {
            return;
        }
        this.mView = view;
        view.setOnTouchListener(this);
        this.Gn = new GestureDetector(view.getContext(), this);
        this.fb = cVar;
    }

    private static boolean a(MotionEvent motionEvent, MotionEvent motionEvent2) {
        return ((Math.abs(motionEvent.getX() - motionEvent2.getX()) > 20.0f ? 1 : (Math.abs(motionEvent.getX() - motionEvent2.getX()) == 20.0f ? 0 : -1)) > 0) || ((Math.abs(motionEvent.getY() - motionEvent2.getY()) > 20.0f ? 1 : (Math.abs(motionEvent.getY() - motionEvent2.getY()) == 20.0f ? 0 : -1)) > 0);
    }

    private boolean a(View view, MotionEvent motionEvent) {
        MotionEvent motionEventObtain;
        int action = motionEvent.getAction();
        boolean z = false;
        if (action != 0) {
            if (action == 1) {
                MotionEvent motionEvent2 = this.aMj;
                if (motionEvent2 != null && a(motionEvent2, motionEvent)) {
                    c cVar = this.fb;
                    if (cVar != null) {
                        cVar.b(view);
                    }
                    z = true;
                }
                motionEventObtain = null;
            }
            return z;
        }
        motionEventObtain = MotionEvent.obtain(motionEvent);
        this.aMj = motionEventObtain;
        return z;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent motionEvent) {
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onLongPress(MotionEvent motionEvent) {
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onShowPress(MotionEvent motionEvent) {
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onSingleTapUp(MotionEvent motionEvent) {
        c cVar = this.fb;
        if (cVar == null) {
            return false;
        }
        cVar.a(this.mView);
        return true;
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        boolean zOnTouchEvent = this.Gn.onTouchEvent(motionEvent);
        StringBuilder sb = new StringBuilder("onTouch, ");
        sb.append(motionEvent.getAction());
        sb.append("， handled： ");
        sb.append(zOnTouchEvent);
        if (zOnTouchEvent) {
            return true;
        }
        return a(view, motionEvent);
    }
}
