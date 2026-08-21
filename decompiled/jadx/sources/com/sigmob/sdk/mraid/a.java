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

/* JADX INFO: loaded from: classes3.dex */
public class a extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final float f4994a = 30.0f;
    static final float b = 50.0f;
    static final float c = 8.0f;
    private final int d;
    private b e;
    private final StateListDrawable f;
    private EnumC0334a g;
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

    /* JADX INFO: renamed from: com.sigmob.sdk.mraid.a$a, reason: collision with other inner class name */
    public enum EnumC0334a {
        TOP_LEFT(51),
        TOP_CENTER(49),
        TOP_RIGHT(53),
        CENTER(17),
        BOTTOM_LEFT(83),
        BOTTOM_CENTER(81),
        BOTTOM_RIGHT(85);

        private final int h;

        EnumC0334a(int i2) {
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

        @Override // java.lang.Runnable
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
        this.g = EnumC0334a.TOP_RIGHT;
        this.f.setState(EMPTY_STATE_SET);
        this.f.setCallback(this);
        this.d = ViewConfiguration.get(context).getScaledTouchSlop();
        this.h = Dips.asIntPixels(50.0f, context);
        this.i = Dips.asIntPixels(f4994a, context);
        this.j = Dips.asIntPixels(8.0f, context);
        setWillNotDraw(false);
        this.p = true;
    }

    private void a(EnumC0334a enumC0334a, int i, Rect rect, Rect rect2) {
        Gravity.apply(enumC0334a.a(), i, i, rect, rect2);
    }

    private void b(EnumC0334a enumC0334a, Rect rect, Rect rect2) {
        a(enumC0334a, this.i, rect, rect2);
    }

    private void c() {
        playSoundEffect(0);
        b bVar = this.e;
        if (bVar != null) {
            bVar.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setClosePressed(boolean z) {
        if (z == b()) {
            return;
        }
        this.f.setState(z ? SELECTED_STATE_SET : EMPTY_STATE_SET);
        invalidate(this.m);
    }

    public void a(EnumC0334a enumC0334a, Rect rect, Rect rect2) {
        a(enumC0334a, this.h, rect, rect2);
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

    @Override // android.view.View
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

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (motionEvent.getAction() != 0) {
            return false;
        }
        return a((int) motionEvent.getX(), (int) motionEvent.getY(), 0);
    }

    @Override // android.view.View
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.k = true;
    }

    @Override // android.view.View
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

    public void setClosePosition(EnumC0334a enumC0334a) {
        Preconditions.checkNotNull(enumC0334a);
        this.g = enumC0334a;
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
