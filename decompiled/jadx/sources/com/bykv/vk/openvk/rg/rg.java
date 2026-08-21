package com.bykv.vk.openvk.rg;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;

/* JADX INFO: loaded from: classes.dex */
class rg implements Application.ActivityLifecycleCallbacks {
    private static volatile boolean rg;
    private int df = 0;
    private InterfaceC0050rg q;

    /* JADX INFO: renamed from: com.bykv.vk.openvk.rg.rg$rg, reason: collision with other inner class name */
    public interface InterfaceC0050rg {
        void df();

        void rg();
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

    rg() {
    }

    public Boolean rg() {
        return Boolean.valueOf(rg);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
        this.df++;
        rg = false;
        InterfaceC0050rg interfaceC0050rg = this.q;
        if (interfaceC0050rg != null) {
            interfaceC0050rg.df();
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
        int i = this.df - 1;
        this.df = i;
        if (i == 0) {
            rg = true;
            InterfaceC0050rg interfaceC0050rg = this.q;
            if (interfaceC0050rg != null) {
                interfaceC0050rg.rg();
            }
        }
    }

    public void rg(InterfaceC0050rg interfaceC0050rg) {
        this.q = interfaceC0050rg;
    }
}
