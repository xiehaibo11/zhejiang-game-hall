package com.kwad.sdk.utils;

import android.graphics.Point;
import android.graphics.Rect;
import android.view.View;

public final class bl {
    private View aKt;
    public Point aKs = new Point();
    public Rect aKq = new Rect();
    public Rect aKr = new Rect();

    public bl(View view) {
        this.aKt = view;
    }

    public final boolean Ke() {
        boolean globalVisibleRect = this.aKt.getGlobalVisibleRect(this.aKq, this.aKs);
        if (this.aKs.x == 0 && this.aKs.y == 0 && this.aKq.height() == this.aKt.getHeight() && this.aKr.height() != 0 && Math.abs(this.aKq.top - this.aKr.top) > this.aKt.getHeight() / 2) {
            this.aKq.set(this.aKr);
        }
        this.aKr.set(this.aKq);
        return globalVisibleRect;
    }
}
