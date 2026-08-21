package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.FrameLayout;
import com.tkay.core.common.l.u;

public class CloseFrameLayout extends FrameLayout implements a {
    private static final String a = CloseFrameLayout.class.getSimpleName();
    private float b;
    private Rect c;

    public CloseFrameLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = 1.0f;
    }

    @Override
    public void setClickAreaScaleFactor(float f) {
        this.b = f;
        if (f <= 0.0f) {
            this.b = 1.0f;
        }
        new StringBuilder("setClickAreaScaleFactor: ").append(this.b);
        float f2 = this.b;
        if (f2 < 1.0f) {
            post(new Runnable() {
                @Override
                public final void run() {
                    CloseFrameLayout.this.c = new Rect();
                    CloseFrameLayout closeFrameLayout = CloseFrameLayout.this;
                    closeFrameLayout.getHitRect(closeFrameLayout.c);
                    int iWidth = ((int) (CloseFrameLayout.this.c.width() * (CloseFrameLayout.this.b - 1.0f))) / 2;
                    int iHeight = ((int) (CloseFrameLayout.this.c.height() * (CloseFrameLayout.this.b - 1.0f))) / 2;
                    CloseFrameLayout.this.c.top -= iHeight;
                    CloseFrameLayout.this.c.bottom += iHeight;
                    CloseFrameLayout.this.c.left -= iWidth;
                    CloseFrameLayout.this.c.right += iWidth;
                }
            });
        } else if (f2 > 1.0f) {
            u.a(this, f2);
        }
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        int action;
        if (this.b >= 1.0f || (!((action = motionEvent.getAction()) == 0 || action == 5) || this.c.contains(getLeft() + ((int) motionEvent.getX()), getTop() + ((int) motionEvent.getY())))) {
            return super.onTouchEvent(motionEvent);
        }
        return false;
    }
}
