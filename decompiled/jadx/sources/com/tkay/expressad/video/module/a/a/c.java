package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.signal.factory.IJSFactory;

/* JADX INFO: loaded from: classes3.dex */
public final class c extends d {
    private IJSFactory ag;

    public c(IJSFactory iJSFactory, com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.c.c cVar2, com.tkay.expressad.videocommon.b.a aVar, String str, String str2, com.tkay.expressad.video.module.a.a aVar2, int i, boolean z) {
        super(cVar, aVar, cVar2, str, str2, aVar2, i, z);
        this.ag = iJSFactory;
        if (iJSFactory == null) {
            this.W = false;
        }
    }

    @Override // com.tkay.expressad.video.module.a.a.d, com.tkay.expressad.video.module.a.a.k, com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
    public final void a(int i, Object obj) {
        if (this.W) {
            if (i != 8) {
                if (i == 105) {
                    this.ag.getJSNotifyProxy().a(3, obj.toString());
                    i = -1;
                } else if (i == 107) {
                    this.ag.getJSContainerModule().showVideoClickView(-1);
                    this.ag.getJSVideoModule().setCover(false);
                    this.ag.getJSVideoModule().videoOperate(1);
                } else if (i == 112) {
                    this.ag.getJSVideoModule().setCover(true);
                    this.ag.getJSVideoModule().videoOperate(2);
                } else if (i == 115) {
                    com.tkay.expressad.video.signal.j jSVideoModule = this.ag.getJSVideoModule();
                    this.ag.getJSContainerModule().resizeMiniCard(jSVideoModule.getBorderViewWidth(), jSVideoModule.getBorderViewHeight(), jSVideoModule.getBorderViewRadius());
                }
            } else if (!this.ag.getJSContainerModule().showAlertWebView()) {
                this.ag.getJSVideoModule().showAlertView();
            } else {
                this.ag.getJSVideoModule().alertWebViewShowed();
            }
        }
        super.a(i, obj);
    }
}
