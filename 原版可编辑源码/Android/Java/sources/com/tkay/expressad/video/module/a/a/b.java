package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayContainerView;
import com.tkay.expressad.video.module.TkayVideoView;

public final class b extends d {
    private TkayVideoView ag;
    private TkayContainerView ah;

    public b(TkayVideoView tkayVideoView, TkayContainerView tkayContainerView, com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.c.c cVar2, com.tkay.expressad.videocommon.b.a aVar, String str, String str2, com.tkay.expressad.video.module.a.a aVar2, int i, boolean z) {
        super(cVar, aVar, cVar2, str, str2, aVar2, i, z);
        this.ag = tkayVideoView;
        this.ah = tkayContainerView;
        if (tkayVideoView == null || tkayContainerView == null) {
            this.W = false;
        }
    }

    @Override
    public final void a(int i, Object obj) {
        if (this.W) {
            if (i == 8) {
                TkayContainerView tkayContainerView = this.ah;
                if (tkayContainerView != null) {
                    if (!tkayContainerView.showAlertWebView()) {
                        TkayVideoView tkayVideoView = this.ag;
                        if (tkayVideoView != null) {
                            tkayVideoView.showAlertView();
                        }
                    } else {
                        TkayVideoView tkayVideoView2 = this.ag;
                        if (tkayVideoView2 != null) {
                            tkayVideoView2.alertWebViewShowed();
                        }
                    }
                } else {
                    TkayVideoView tkayVideoView3 = this.ag;
                    if (tkayVideoView3 != null) {
                        tkayVideoView3.showAlertView();
                    }
                }
            } else if (i == 107) {
                this.ah.showVideoClickView(-1);
                this.ag.setCover(false);
                this.ag.videoOperate(1);
            } else if (i == 112) {
                this.ag.setCover(true);
                this.ag.videoOperate(2);
            } else if (i == 115) {
                this.ah.resizeMiniCard(this.ag.getBorderViewWidth(), this.ag.getBorderViewHeight(), this.ag.getBorderViewRadius());
            }
        }
        super.a(i, obj);
    }
}
