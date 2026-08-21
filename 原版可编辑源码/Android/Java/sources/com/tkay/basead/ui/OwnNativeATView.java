package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.FrameLayout;

public class OwnNativeATView extends FrameLayout {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    private a i;

    public interface a {
        void a();
    }

    public OwnNativeATView(Context context) {
        super(context);
    }

    public OwnNativeATView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public OwnNativeATView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.a = (int) motionEvent.getRawX();
            this.b = (int) motionEvent.getRawY();
            this.e = (int) motionEvent.getX();
            this.f = (int) motionEvent.getY();
        } else if (action == 1 || action == 3) {
            this.c = (int) motionEvent.getRawX();
            this.d = (int) motionEvent.getRawY();
            this.g = (int) motionEvent.getX();
            this.h = (int) motionEvent.getY();
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public com.tkay.basead.c.a getAdClickRecord() {
        com.tkay.basead.c.a aVar = new com.tkay.basead.c.a();
        aVar.a = this.a;
        aVar.b = this.b;
        aVar.c = this.c;
        aVar.d = this.d;
        aVar.e = this.e;
        aVar.f = this.f;
        aVar.g = this.g;
        aVar.h = this.h;
        return aVar;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    public void setWindowEventListener(a aVar) {
        this.i = aVar;
    }
}
