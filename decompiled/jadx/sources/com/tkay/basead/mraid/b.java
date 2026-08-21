package com.tkay.basead.mraid;

import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b implements IMraidJSBridge {
    public void a() {
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void expand(String str, boolean z) {
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return null;
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void useCustomClose(boolean z) {
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void unload() {
        close();
    }
}
