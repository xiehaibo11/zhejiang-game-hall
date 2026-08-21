package com.igexin.push.core;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.igexin.sdk.PushConsts;

/* JADX INFO: loaded from: classes2.dex */
public class g implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f2572a;
    private int b;

    public g(Context context) {
    }

    private void a(Activity activity) {
        try {
            com.igexin.b.a.c.b.a("GALC|" + activity.getComponentName().getClassName() + " onAStart " + this.b, new Object[0]);
            if (this.b == 0) {
                com.igexin.b.a.c.b.a("GALC|>>>>>> FG", new Object[0]);
                Context applicationContext = activity.getApplicationContext();
                if (com.igexin.push.util.c.a(applicationContext) || System.currentTimeMillis() - this.f2572a <= 20000) {
                    return;
                }
                Intent intent = new Intent(applicationContext, (Class<?>) com.igexin.push.core.a.e.a().a(applicationContext));
                intent.putExtra("action", PushConsts.ACTION_SERVICE_ONRESUME);
                x.a().a(applicationContext, intent);
                com.igexin.b.a.c.b.a("GALC|on fg, start>>>>>>", new Object[0]);
                this.f2572a = System.currentTimeMillis();
            }
        } catch (Throwable unused) {
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
        if (activity == null) {
            return;
        }
        a(activity);
        this.b++;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
        if (activity == null) {
            return;
        }
        int i = this.b - 1;
        this.b = i;
        this.b = Math.max(i, 0);
        com.igexin.b.a.c.b.a("GALC|" + activity.getComponentName().getClassName() + " onAStopp " + this.b, new Object[0]);
        if (this.b == 0) {
            com.igexin.b.a.c.b.a("GALC|>>>>>> on bg", new Object[0]);
        }
    }
}
