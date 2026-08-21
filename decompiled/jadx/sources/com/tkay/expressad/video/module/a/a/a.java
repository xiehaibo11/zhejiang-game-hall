package com.tkay.expressad.video.module.a.a;

import android.app.Activity;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends f {
    private com.tkay.expressad.foundation.d.c V;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f7337a;

    private a(Activity activity, com.tkay.expressad.foundation.d.c cVar) {
        this.f7337a = activity;
        this.V = cVar;
    }

    @Override // com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
    public final void a(int i, Object obj) {
        Activity activity;
        super.a(i, obj);
        if (i != 106 || (activity = this.f7337a) == null || this.V == null) {
            return;
        }
        activity.finish();
    }
}
