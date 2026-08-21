package com.mbridge.msdk.dycreator.binding.a;

import android.view.View;

public final class d<T extends android.view.View, K> implements com.mbridge.msdk.dycreator.binding.base.BaseStrategy {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void bindClickData(android.view.View r1, com.mbridge.msdk.dycreator.f.a.a r2) {
            r0 = this;
            com.mbridge.msdk.dycreator.binding.response.SplashResData r1 = new com.mbridge.msdk.dycreator.binding.response.SplashResData
            r1.<init>()
            r1.setBaseViewData(r2)
            com.mbridge.msdk.dycreator.listener.action.EAction r2 = com.mbridge.msdk.dycreator.listener.action.EAction.FEEDBACK
            r1.seteAction(r2)
            com.mbridge.msdk.dycreator.bus.EventBus r2 = com.mbridge.msdk.dycreator.bus.EventBus.getDefault()
            r2.post(r1)
            return
    }
}
