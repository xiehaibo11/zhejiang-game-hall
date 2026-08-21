package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import com.tkay.expressad.video.bt.module.TkayBTContainer;

public final class i extends b {
    private Activity a;
    private TkayBTContainer d;

    public i(Activity activity, TkayBTContainer tkayBTContainer) {
        this.a = activity;
        this.d = tkayBTContainer;
    }

    @Override
    public final void reactDeveloper(Object obj, String str) {
        super.reactDeveloper(obj, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.reactDeveloper(obj, str);
        }
    }

    @Override
    public final void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.handlerH5Exception(i, str);
        }
    }

    @Override
    public final void click(int i, String str) {
        super.click(i, str);
        TkayBTContainer tkayBTContainer = this.d;
        if (tkayBTContainer != null) {
            tkayBTContainer.click(i, str);
        }
    }
}
