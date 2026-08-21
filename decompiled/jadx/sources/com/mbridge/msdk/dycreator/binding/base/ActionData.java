package com.mbridge.msdk.dycreator.binding.base;

import com.mbridge.msdk.dycreator.f.a.a;
import com.mbridge.msdk.dycreator.listener.action.EAction;

/* JADX INFO: loaded from: classes2.dex */
public class ActionData {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f3278a;
    private EAction b;

    public a getBaseViewData() {
        return this.f3278a;
    }

    public void setBaseViewData(a aVar) {
        this.f3278a = aVar;
    }

    public EAction geteAction() {
        return this.b;
    }

    public void seteAction(EAction eAction) {
        this.b = eAction;
    }
}
