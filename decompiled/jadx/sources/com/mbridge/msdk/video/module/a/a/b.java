package com.mbridge.msdk.video.module.a.a;

import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.js.factory.IJSFactory;

/* JADX INFO: compiled from: ContainerViewJSListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b extends c {
    private IJSFactory k;

    public b(IJSFactory iJSFactory, CampaignEx campaignEx, com.mbridge.msdk.videocommon.b.d dVar, com.mbridge.msdk.videocommon.download.a aVar, String str, String str2, com.mbridge.msdk.video.module.a.a aVar2, int i, boolean z) {
        super(campaignEx, aVar, dVar, str, str2, aVar2, i, z);
        this.k = iJSFactory;
        if (iJSFactory == null) {
            this.f4371a = false;
        }
    }

    @Override // com.mbridge.msdk.video.module.a.a.c, com.mbridge.msdk.video.module.a.a.j, com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
    public final void a(int i, Object obj) {
        if (this.f4371a) {
            if (i != 8) {
                if (i == 105) {
                    String string = obj.toString();
                    z.d("=======", "pt:" + string);
                    this.k.getJSNotifyProxy().a(3, string);
                    i = -1;
                } else if (i == 107) {
                    this.k.getJSContainerModule().showVideoClickView(-1);
                    this.k.getJSVideoModule().setCover(false);
                    this.k.getJSVideoModule().setMiniEndCardState(false);
                    this.k.getJSVideoModule().videoOperate(1);
                } else if (i == 112) {
                    this.k.getJSVideoModule().setCover(true);
                    this.k.getJSVideoModule().setMiniEndCardState(true);
                    this.k.getJSVideoModule().videoOperate(2);
                } else if (i == 115) {
                    com.mbridge.msdk.video.js.i jSVideoModule = this.k.getJSVideoModule();
                    this.k.getJSContainerModule().resizeMiniCard(jSVideoModule.getBorderViewWidth(), jSVideoModule.getBorderViewHeight(), jSVideoModule.getBorderViewRadius());
                }
            } else if (!this.k.getJSContainerModule().showAlertWebView()) {
                this.k.getJSVideoModule().showAlertView();
            } else {
                this.k.getJSVideoModule().alertWebViewShowed();
            }
        }
        super.a(i, obj);
    }
}
