package com.tkay.basead.mraid;

import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;

public abstract class b implements IMraidJSBridge {
    public void a() {
    }

    @Override
    public final void expand(String str, boolean z) {
    }

    @Override
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return null;
    }

    @Override
    public void useCustomClose(boolean z) {
    }

    @Override
    public final void unload() {
        close();
    }
}
