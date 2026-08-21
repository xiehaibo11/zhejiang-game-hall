package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import com.mbridge.msdk.video.bt.module.MBridgeBTContainer;

public final class i extends b {
    private Activity a;
    private MBridgeBTContainer b;

    public i(Activity activity, MBridgeBTContainer mBridgeBTContainer) {
        this.a = activity;
        this.b = mBridgeBTContainer;
    }

    @Override
    public final void reactDeveloper(Object obj, String str) {
        super.reactDeveloper(obj, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.reactDeveloper(obj, str);
        }
    }

    @Override
    public final void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.handlerH5Exception(i, str);
        }
    }

    @Override
    public final void click(int i, String str) {
        super.click(i, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.click(i, str);
        }
    }
}
