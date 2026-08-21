package com.kwad.sdk.core.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.RelativeLayout;
import com.kwad.sdk.utils.ac;

public class KsAdContainer extends RelativeLayout {
    protected ac.a axd;

    public KsAdContainer(Context context) {
        super(context);
        this.axd = new ac.a();
    }

    public KsAdContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.axd = new ac.a();
    }

    public KsAdContainer(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.axd = new ac.a();
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            ac.a aVar = new ac.a(getWidth(), getHeight());
            this.axd = aVar;
            aVar.f(motionEvent.getX(), motionEvent.getY());
        } else if (action == 1) {
            this.axd.g(motionEvent.getX(), motionEvent.getY());
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public ac.a getTouchCoords() {
        return this.axd;
    }
}
