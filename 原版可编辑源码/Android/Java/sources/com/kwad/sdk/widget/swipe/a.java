package com.kwad.sdk.widget.swipe;

import android.view.MotionEvent;
import android.view.View;

public abstract class a {
    private boolean aMv;

    protected abstract boolean KK();

    protected abstract boolean KL();

    public final boolean b(View view, MotionEvent motionEvent) {
        return !this.aMv && KK();
    }

    public final boolean c(View view, MotionEvent motionEvent) {
        return !this.aMv && KL();
    }
}
