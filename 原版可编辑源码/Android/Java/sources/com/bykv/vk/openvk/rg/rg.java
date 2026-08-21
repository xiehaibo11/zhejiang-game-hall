package com.bykv.vk.openvk.rg;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;

class rg implements Application.ActivityLifecycleCallbacks {
    private static volatile boolean rg;
    private int df = 0;
    private rg q;

    public interface rg {
        void df();

        void rg();
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

    rg() {
    }

    public Boolean rg() {
        return Boolean.valueOf(rg);
    }

    @Override
    public void onActivityStarted(Activity activity) {
        this.df++;
        rg = false;
        rg rgVar = this.q;
        if (rgVar != null) {
            rgVar.df();
        }
    }

    @Override
    public void onActivityStopped(Activity activity) {
        int i = this.df - 1;
        this.df = i;
        if (i == 0) {
            rg = true;
            rg rgVar = this.q;
            if (rgVar != null) {
                rgVar.rg();
            }
        }
    }

    public void rg(rg rgVar) {
        this.q = rgVar;
    }
}
