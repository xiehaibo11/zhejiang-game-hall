package com.igexin.push.core;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.igexin.sdk.PushConsts;

public class g implements Application.ActivityLifecycleCallbacks {
    private long a;
    private int b;

    public g(Context context) {
    }

    private void a(Activity activity) {
        try {
            com.igexin.b.a.c.b.a("GALC|" + activity.getComponentName().getClassName() + " onAStart " + this.b, new Object[0]);
            if (this.b == 0) {
                com.igexin.b.a.c.b.a("GALC|>>>>>> FG", new Object[0]);
                Context applicationContext = activity.getApplicationContext();
                if (com.igexin.push.util.c.a(applicationContext) || System.currentTimeMillis() - this.a <= 20000) {
                    return;
                }
                Intent intent = new Intent(applicationContext, (Class<?>) com.igexin.push.core.a.e.a().a(applicationContext));
                intent.putExtra("action", PushConsts.ACTION_SERVICE_ONRESUME);
                x.a().a(applicationContext, intent);
                com.igexin.b.a.c.b.a("GALC|on fg, start>>>>>>", new Object[0]);
                this.a = System.currentTimeMillis();
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityDestroyed(Activity activity) {
    }

    @Override
    public void onActivityPaused(Activity activity) {
    }

    @Override
    public void onActivityResumed(Activity activity) {
    }

    @Override
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityStarted(Activity activity) {
        if (activity == null) {
            return;
        }
        a(activity);
        this.b++;
    }

    @Override
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
