package com.mbridge.msdk.dycreator.viewmodel;

import com.mbridge.msdk.dycreator.binding.response.SplashResData;
import com.mbridge.msdk.dycreator.bus.EventBus;
import com.mbridge.msdk.dycreator.g.c;
import com.mbridge.msdk.dycreator.g.d;
import com.mbridge.msdk.dycreator.g.f;
import com.mbridge.msdk.dycreator.g.h;
import com.mbridge.msdk.dycreator.wrapper.DynamicViewBackListener;

/* JADX INFO: loaded from: classes2.dex */
public class MBCommonViewVModel implements BaseViewModel {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private d f3307a;
    private c b;
    private f c;
    private h d;
    private DynamicViewBackListener e;

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setModelDataAndBind() {
    }

    public MBCommonViewVModel() {
        EventBus.getDefault().register(this);
    }

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setDynamicViewBackListener(DynamicViewBackListener dynamicViewBackListener) {
        if (dynamicViewBackListener != null) {
            this.e = dynamicViewBackListener;
        }
    }

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setClickSubject(c cVar) {
        if (cVar != null) {
            this.b = cVar;
        }
    }

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setConcreteSubject(d dVar) {
        if (dVar != null) {
            this.f3307a = dVar;
        }
    }

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setEffectSubject(f fVar) {
        if (fVar != null) {
            this.c = fVar;
        }
    }

    @Override // com.mbridge.msdk.dycreator.viewmodel.BaseViewModel
    public void setReportSubject(h hVar) {
        if (hVar != null) {
            this.d = hVar;
        }
    }

    public void onEventMainThread(SplashResData splashResData) {
        DynamicViewBackListener dynamicViewBackListener = this.e;
        if (dynamicViewBackListener != null) {
            dynamicViewBackListener.viewClicked(splashResData);
        }
    }
}
