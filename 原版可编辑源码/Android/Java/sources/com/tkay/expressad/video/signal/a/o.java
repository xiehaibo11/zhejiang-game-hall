package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import com.tkay.expressad.video.module.TkayContainerView;

public final class o extends e {
    private Activity n;
    private TkayContainerView o;

    private o(Activity activity, TkayContainerView tkayContainerView) {
        this.n = activity;
        this.o = tkayContainerView;
    }

    @Override
    public final void a(int i, String str) {
        Activity activity;
        super.a(i, str);
        int iIntValue = 1;
        if (i != 1) {
            if (i == 2 && (activity = this.n) != null) {
                activity.finish();
                return;
            }
            return;
        }
        if (this.o != null) {
            try {
                iIntValue = Integer.valueOf(str).intValue();
            } catch (Throwable th) {
                th.printStackTrace();
            }
            this.o.showVideoClickView(iIntValue);
        }
    }
}
