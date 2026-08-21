package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayContainerView;
import com.tkay.expressad.video.module.TkayVideoView;

/* JADX INFO: loaded from: classes3.dex */
public final class m extends o {
    public static final long ag = 3000;
    private TkayVideoView ai;
    private TkayContainerView aj;
    private int ak;
    private final com.tkay.core.common.j.a al;
    private boolean am;
    private boolean an;
    private int ao;
    private int ap;
    private final com.tkay.core.common.j.b aq;

    public m(TkayVideoView tkayVideoView, TkayContainerView tkayContainerView, com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.c.c cVar2, com.tkay.expressad.videocommon.b.a aVar, String str, String str2, int i, int i2, com.tkay.expressad.video.module.a.a aVar2, int i3, boolean z, int i4) {
        super(cVar, cVar2, aVar, str, str2, aVar2, i3, z);
        this.al = com.tkay.core.common.j.c.a();
        this.am = false;
        this.an = false;
        this.ao = 1;
        this.aq = new com.tkay.core.common.j.b() { // from class: com.tkay.expressad.video.module.a.a.m.1
            @Override // java.lang.Runnable
            public final void run() {
                m.this.aj.showVideoClickView(-1);
                m.this.ai.soundOperate(0, 2);
            }
        };
        this.ai = tkayVideoView;
        this.aj = tkayContainerView;
        this.ap = i;
        this.ak = i2;
        this.ao = i4;
        if (tkayVideoView != null) {
            this.am = tkayVideoView.getVideoSkipTime() == 0;
        }
        if (tkayVideoView == null || tkayContainerView == null) {
            this.W = false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:169:0x0286  */
    /* JADX WARN: Removed duplicated region for block: B:191:0x02e8  */
    @Override // com.tkay.expressad.video.module.a.a.o, com.tkay.expressad.video.module.a.a.k, com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(int r8, java.lang.Object r9) {
        /*
            Method dump skipped, instruction units count: 844
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.a.a.m.a(int, java.lang.Object):void");
    }

    private void a(int i, int i2) {
        if (this.am || this.ai == null || this.X == null) {
            return;
        }
        int i3 = this.ak;
        char c = (i3 < 0 || i < i3) ? (char) 1 : (char) 2;
        if (c != 2 && (this.X.i() != 0 ? i > this.X.i() : this.ai.mCurrPlayNum > 1)) {
            c = 2;
        }
        if (c != 2 && this.ai.mCurrPlayNum > 1 && i == i2) {
            c = 2;
        }
        if (c == 2) {
            this.ai.closeVideoOperate(0, 2);
            this.am = true;
        }
    }

    private void g() {
        this.al.a(this.aq);
    }

    private void h() {
        g();
        this.al.a(this.aq, 3000L);
    }

    private void i() {
        if (this.X == null || this.X.k() != 5) {
            return;
        }
        com.tkay.expressad.foundation.d.c cVar = null;
        TkayVideoView tkayVideoView = this.ai;
        if (tkayVideoView != null && tkayVideoView.mCampOrderViewData != null) {
            int i = 0;
            int i2 = 0;
            while (true) {
                if (i2 < this.ai.mCampOrderViewData.size()) {
                    if (this.ai.mCampOrderViewData.get(i2) != null && this.ai.mCampOrderViewData.get(i2).aZ() == this.X.aZ()) {
                        i = i2 - 1;
                        break;
                    }
                    i2++;
                } else {
                    break;
                }
            }
            if (i >= 0 && this.ai.mCampOrderViewData.get(i) != null) {
                cVar = this.ai.mCampOrderViewData.get(i);
            }
        }
        if (cVar != null) {
            TkayVideoView tkayVideoView2 = this.ai;
            if (tkayVideoView2 != null) {
                tkayVideoView2.setCampaign(cVar);
            }
            TkayContainerView tkayContainerView = this.aj;
            if (tkayContainerView != null) {
                tkayContainerView.setCampaign(cVar);
            }
            a(cVar);
        }
    }
}
