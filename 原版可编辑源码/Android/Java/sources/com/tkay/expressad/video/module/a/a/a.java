package com.tkay.expressad.video.module.a.a;

import android.app.Activity;

public final class a extends f {
    private com.tkay.expressad.foundation.d.c V;
    private Activity a;

    private a(Activity activity, com.tkay.expressad.foundation.d.c cVar) {
        this.a = activity;
        this.V = cVar;
    }

    @Override
    public final void a(int i, Object obj) {
        Activity activity;
        super.a(i, obj);
        if (i != 106 || (activity = this.a) == null || this.V == null) {
            return;
        }
        activity.finish();
    }
}
