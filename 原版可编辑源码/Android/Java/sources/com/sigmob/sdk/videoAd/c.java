package com.sigmob.sdk.videoAd;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;

public abstract class c extends com.sigmob.sdk.base.common.i {
    protected c(Activity activity, String str, com.sigmob.sdk.base.common.j jVar) {
        super(activity, str, jVar);
    }

    protected void a(boolean z) {
        if (z) {
            this.d.a();
        }
    }

    @Override
    public void b() {
        this.d.onSetContentView(this.c);
    }

    protected void b(Context context, int i, Bundle bundle) {
        try {
            a(context.getApplicationContext(), i, bundle);
            boolean z = bundle.getBoolean(com.sigmob.sdk.base.h.s, false);
            boolean z2 = bundle.getBoolean(com.sigmob.sdk.base.h.r, false);
            if (Build.VERSION.SDK_INT < 27) {
                if (z2) {
                    k().getWindow().addFlags(2621440);
                }
                if (z) {
                    k().getWindow().addFlags(128);
                    return;
                }
                return;
            }
            if (z2) {
                k().setShowWhenLocked(true);
                k().setTurnScreenOn(true);
            }
            if (z) {
                k().setShowWhenLocked(true);
            }
        } catch (Throwable unused) {
        }
    }
}
