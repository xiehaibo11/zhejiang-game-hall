package com.sigmob.sdk.mraid;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.StateListDrawable;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.ViewConfiguration;
import android.widget.FrameLayout;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.Preconditions;

public class a extends FrameLayout {
    static final float a = 30.0f;
    static final float b = 50.0f;
    static final float c = 8.0f;
    private final int d;
    private b e;
    private final StateListDrawable f;
    private a g;
    private final int h;
    private final int i;
    private final int j;
    private boolean k;
    private final Rect l;
    private final Rect m;
    private final Rect n;
    private final Rect o;
    private boolean p;
    private c q;

    public enum a {
        a(51),
        b(49),
        c(53),
        d(17),
        e(83),
        f(81),
        g(85);

        private final int h;

        a(int i2) {
            this.h = i2;
        }

        int a() {
            return this.h;
        }
    }

    public interface b {
        void a();
    }

    private final class c implements Runnable {
        private c() {
        }

        @Override
        public void run() {
            a.this.setClosePressed(false);
        }
    }

    public a(Context context) {
        this(context, null, 0);
    }

    public a(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public a(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.l = new Rect();
        this.m = new Rect();
        this.n = new Rect();
        this.o = new Rect();
        this.f = new StateListDrawable();
        this.g = a.c;
        this.f.setState(EMPTY_STATE_SET);
        this.f.setCallback(this);
        this.d = ViewConfiguration.get(context).getScaledTouchSlop();
        this.h = Dips.asIntPixels(50.0f, context);
        this.i = Dips.asIntPixels(a, context);
        this.j = Dips.asIntPixels(8.0f, context);
        setWillNotDraw(false);
        this.p = true;
    }

    private void a(a aVar, int i, Rect rect, Rect rect2) {
        Gravity.apply(aVar.a(), i, i, rect, rect2);
    }

    private void b(a aVar, Rect rect, Rect rect2) {
        a(aVar, this.i, rect, rect2);
    }

    private void c() {
        playSoundEffect(0);
        b bVar = this.e;
        if (bVar != null) {
            bVar.a();
        }
    }

    private void setClosePressed(boolean z) {
        if (z == b()) {
            return;
        }
        this.f.setState(z ? SELECTED_STATE_SET : EMPTY_STATE_SET);
        invalidate(this.m);
    }

    public void a(a aVar, Rect rect, Rect rect2) {
        a(aVar, this.h, rect, rect2);
    }

    boolean a() {
        return this.p || this.f.isVisible();
    }

    boolean a(int i, int i2, int i3) {
        return i >= this.m.left - i3 && i2 >= this.m.top - i3 && i < this.m.right + i3 && i2 < this.m.bottom + i3;
    }

    boolean b() {
        return this.f.getState() == SELECTED_STATE_SET;
    }

    @Override
    public void draw(Canvas canvas) {
        super.draw(canvas);
        if (this.k) {
            this.k = false;
            this.l.set(0, 0, getWidth(), getHeight());
            a(this.g, this.l, this.m);
            this.o.set(this.m);
            Rect rect = this.o;
            int i = this.j;
            rect.inset(i, i);
            b(this.g, this.o, this.n);
            this.f.setBounds(this.n);
        }
        if (this.f.isVisible()) {
            this.f.draw(canvas);
        }
    }

    Rect getCloseBounds() {
        return this.m;
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (motionEvent.getAction() != 0) {
            return false;
        }
        return a((int) motionEvent.getX(), (int) motionEvent.getY(), 0);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.k = true;
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (!a((int) motionEvent.getX(), (int) motionEvent.getY(), this.d) || !a()) {
            setClosePressed(false);
            super.onTouchEvent(motionEvent);
            return false;
        }
        int action = motionEvent.getAction();
        if (action == 0) {
            setClosePressed(true);
        } else if (action != 1) {
            if (action == 3) {
                setClosePressed(false);
            }
        } else if (b()) {
            if (this.q == null) {
                this.q = new c();
            }
            postDelayed(this.q, ViewConfiguration.getPressedStateDuration());
            c();
        }
        return true;
    }

    public void setCloseAlwaysInteractable(boolean z) {
        this.p = z;
    }

    void setCloseBoundChanged(boolean z) {
        this.k = z;
    }

    void setCloseBounds(Rect rect) {
        this.m.set(rect);
    }

    public void setClosePosition(a aVar) {
        Preconditions.checkNotNull(aVar);
        this.g = aVar;
        this.k = true;
        invalidate();
    }

    public void setCloseVisible(boolean z) {
        if (this.f.setVisible(z, false)) {
            invalidate(this.m);
        }
    }

    public void setOnCloseListener(b bVar) {
        this.e = bVar;
    }
}
