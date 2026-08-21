package com.tkay.core.common.b;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class e implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f6048a;
    boolean d;
    boolean c = false;
    ConcurrentHashMap<String, Boolean> b = new ConcurrentHashMap<>(3);

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    public e(boolean z) {
        this.d = false;
        if (z) {
            this.d = true;
            a();
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        m.a().a(activity);
        this.f6048a++;
        this.b.put(activity.toString(), Boolean.TRUE);
        if (this.f6048a != 1 || this.d) {
            return;
        }
        this.d = true;
        a();
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        if (this.d) {
            return;
        }
        this.d = true;
        a();
    }

    private static void a() {
        com.tkay.core.common.k.c.a();
        com.tkay.core.common.k.a.a(m.a().f()).a(21, new com.tkay.core.common.f.d());
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        this.f6048a--;
        boolean zContainsKey = this.b.containsKey(activity.toString());
        if (!this.c && !zContainsKey) {
            this.c = true;
            this.f6048a++;
        }
        if (zContainsKey) {
            try {
                this.b.remove(activity.toString());
            } catch (Throwable unused) {
            }
        }
        if (this.f6048a == 0) {
            this.d = false;
        }
    }
}
