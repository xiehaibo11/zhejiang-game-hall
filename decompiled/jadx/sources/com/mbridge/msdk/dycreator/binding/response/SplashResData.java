package com.mbridge.msdk.dycreator.binding.response;

import com.mbridge.msdk.dycreator.binding.response.base.BaseRespData;
import com.mbridge.msdk.dycreator.f.a.a;
import com.mbridge.msdk.dycreator.listener.action.EAction;

/* JADX INFO: loaded from: classes2.dex */
public class SplashResData extends BaseRespData {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f3280a;
    private EAction b;

    public a getBaseViewData() {
        return this.f3280a;
    }

    public void setBaseViewData(a aVar) {
        this.f3280a = aVar;
    }

    public EAction geteAction() {
        return this.b;
    }

    public void seteAction(EAction eAction) {
        this.b = eAction;
    }
}
