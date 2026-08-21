package com.mbridge.msdk.video.js.activity;

import android.content.res.Configuration;
import com.mbridge.msdk.activity.MBBaseActivity;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.js.c;
import com.mbridge.msdk.video.js.e;
import com.mbridge.msdk.video.js.f;
import com.mbridge.msdk.video.js.factory.IJSFactory;
import com.mbridge.msdk.video.js.factory.a;
import com.mbridge.msdk.video.js.h;
import com.mbridge.msdk.video.js.i;

public abstract class AbstractJSActivity extends MBBaseActivity implements IJSFactory {
    protected static final String TAG = "AbstractJSActivity";
    protected IJSFactory jsFactory = new a();

    public boolean canBackPress() {
        return false;
    }

    public void registerJsFactory(IJSFactory iJSFactory) {
        this.jsFactory = iJSFactory;
    }

    @Override
    public void onResume() {
        super.onResume();
        if (b.c) {
            return;
        }
        if (getJSCommon().c()) {
            getActivityProxy().b();
        }
        getActivityProxy().a(0);
    }

    @Override
    public void onPause() {
        super.onPause();
        if (getJSCommon().c()) {
            getActivityProxy().a();
        }
        getActivityProxy().a(1);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (getJSCommon().c()) {
            getActivityProxy().a(configuration);
        }
    }

    @Override
    public void onBackPressed() {
        if (getJSCommon().c()) {
            if (getJSContainerModule() == null || !getJSContainerModule().miniCardShowing()) {
                getActivityProxy().g();
                return;
            }
            return;
        }
        if (canBackPress()) {
            super.onBackPressed();
        } else {
            z.a(TAG, "onBackPressed can't excute");
        }
    }

    @Override
    public com.mbridge.msdk.video.js.a getActivityProxy() {
        return this.jsFactory.getActivityProxy();
    }

    @Override
    public c getJSCommon() {
        return this.jsFactory.getJSCommon();
    }

    @Override
    public i getJSVideoModule() {
        return this.jsFactory.getJSVideoModule();
    }

    @Override
    public f getJSNotifyProxy() {
        return this.jsFactory.getJSNotifyProxy();
    }

    @Override
    public e getJSContainerModule() {
        return this.jsFactory.getJSContainerModule();
    }

    @Override
    public h getIJSRewardVideoV1() {
        return this.jsFactory.getIJSRewardVideoV1();
    }

    @Override
    public com.mbridge.msdk.video.js.b getJSBTModule() {
        return this.jsFactory.getJSBTModule();
    }
}
