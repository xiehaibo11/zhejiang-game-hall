package com.tencent.open.c;

import android.app.Activity;
import android.content.Context;
import android.graphics.Rect;
import android.view.View;
import android.widget.RelativeLayout;

public class a extends RelativeLayout {
    private static final String a = a.class.getName();
    private Rect b;
    private boolean c;
    private a d;

    public interface a {
        void a();

        void a(int i);
    }

    public a(Context context) {
        super(context);
        this.b = null;
        this.c = false;
        this.d = null;
        if (0 == 0) {
            this.b = new Rect();
        }
    }

    public void a(a aVar) {
        this.d = aVar;
    }

    @Override
    protected void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i2);
        Activity activity = (Activity) getContext();
        activity.getWindow().getDecorView().getWindowVisibleDisplayFrame(this.b);
        int height = (activity.getWindowManager().getDefaultDisplay().getHeight() - this.b.top) - size;
        a aVar = this.d;
        if (aVar != null && size != 0) {
            if (height > 100) {
                aVar.a((Math.abs(this.b.height()) - getPaddingBottom()) - getPaddingTop());
            } else {
                aVar.a();
            }
        }
        super.onMeasure(i, i2);
    }
}
