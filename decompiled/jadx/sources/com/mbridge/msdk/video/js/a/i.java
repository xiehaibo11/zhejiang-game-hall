package com.mbridge.msdk.video.js.a;

import android.app.Activity;
import com.mbridge.msdk.video.bt.module.MBridgeBTContainer;

/* JADX INFO: compiled from: JSBTModule.java */
/* JADX INFO: loaded from: classes3.dex */
public final class i extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f4195a;
    private MBridgeBTContainer b;

    public i(Activity activity, MBridgeBTContainer mBridgeBTContainer) {
        this.f4195a = activity;
        this.b = mBridgeBTContainer;
    }

    @Override // com.mbridge.msdk.video.js.a.b, com.mbridge.msdk.video.js.b
    public final void reactDeveloper(Object obj, String str) {
        super.reactDeveloper(obj, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.reactDeveloper(obj, str);
        }
    }

    @Override // com.mbridge.msdk.video.js.a.b, com.mbridge.msdk.video.js.d
    public final void handlerH5Exception(int i, String str) {
        super.handlerH5Exception(i, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.handlerH5Exception(i, str);
        }
    }

    @Override // com.mbridge.msdk.video.js.a.b, com.mbridge.msdk.video.js.d
    public final void click(int i, String str) {
        super.click(i, str);
        MBridgeBTContainer mBridgeBTContainer = this.b;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.click(i, str);
        }
    }
}
