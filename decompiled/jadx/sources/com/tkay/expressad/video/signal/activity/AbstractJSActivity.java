package com.tkay.expressad.video.signal.activity;

import android.content.res.Configuration;
import com.tkay.expressad.activity.TYBaseActivity;
import com.tkay.expressad.foundation.f.b;
import com.tkay.expressad.video.signal.c;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.factory.IJSFactory;
import com.tkay.expressad.video.signal.factory.a;
import com.tkay.expressad.video.signal.g;
import com.tkay.expressad.video.signal.i;
import com.tkay.expressad.video.signal.j;

/* JADX INFO: loaded from: classes3.dex */
public abstract class AbstractJSActivity extends TYBaseActivity implements IJSFactory {
    protected static final String n = "AbstractJSActivity";
    protected IJSFactory o = new a();

    private static boolean b() {
        return false;
    }

    public final void a(IJSFactory iJSFactory) {
        this.o = iJSFactory;
    }

    @Override // com.tkay.expressad.activity.TYBaseActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        if (b.c) {
            return;
        }
        if (getJSCommon().g()) {
            getActivityProxy().b();
        }
        getActivityProxy().a(0);
    }

    @Override // android.app.Activity
    public void onPause() {
        super.onPause();
        if (getJSCommon().g()) {
            getActivityProxy().a();
        }
        getActivityProxy().a(1);
    }

    @Override // com.tkay.expressad.activity.TYBaseActivity, android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (getJSCommon().g()) {
            getActivityProxy().a(configuration);
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (getJSCommon().g()) {
            if (getJSContainerModule() == null || !getJSContainerModule().miniCardShowing()) {
                getActivityProxy().g();
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.a getActivityProxy() {
        return this.o.getActivityProxy();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public c getJSCommon() {
        return this.o.getJSCommon();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public j getJSVideoModule() {
        return this.o.getJSVideoModule();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public g getJSNotifyProxy() {
        return this.o.getJSNotifyProxy();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public e getJSContainerModule() {
        return this.o.getJSContainerModule();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public i getIJSRewardVideoV1() {
        return this.o.getIJSRewardVideoV1();
    }

    @Override // com.tkay.expressad.video.signal.factory.IJSFactory
    public com.tkay.expressad.video.signal.b getJSBTModule() {
        return this.o.getJSBTModule();
    }
}
