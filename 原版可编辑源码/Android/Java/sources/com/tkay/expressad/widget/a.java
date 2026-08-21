package com.tkay.expressad.widget;

import android.view.View;
import java.util.Calendar;

public abstract class a implements View.OnClickListener {
    public static final int d = 2000;
    private long a = 0;

    protected abstract void a(View view);

    @Override
    public void onClick(View view) {
        long timeInMillis = Calendar.getInstance().getTimeInMillis();
        if (timeInMillis - this.a > 2000) {
            this.a = timeInMillis;
            a(view);
        }
    }
}
