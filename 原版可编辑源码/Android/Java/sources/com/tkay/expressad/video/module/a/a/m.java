package com.tkay.expressad.video.module.a.a;

import android.text.TextUtils;
import com.tkay.expressad.video.module.TkayContainerView;
import com.tkay.expressad.video.module.TkayVideoView;

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
        this.aq = new com.tkay.core.common.j.b() {
            @Override
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(int i, Object obj) {
        Integer num;
        int i2;
        if (this.W) {
            if (i != 1) {
                if (i == 2) {
                    this.ai.dismissAllAlert();
                    this.ai.videoOperate(3);
                    if (this.X != null && this.X.j() && this.X.k() == 5 && this.aj != null && this.ai.mCurrPlayNum == this.ai.mCampaignSize) {
                        if (this.X.f() != 2) {
                            this.aj.setRewardStatus(true);
                            this.aj.showOrderCampView();
                        }
                    } else if (this.ap != 2 || this.aj.endCardShowing() || this.X.f() == 2) {
                        i = 16;
                    } else {
                        this.aj.showEndcard(this.X.F());
                    }
                } else if (i != 5) {
                    if (i != 6) {
                        if (i != 8) {
                            switch (i) {
                                case 10:
                                    this.an = true;
                                    this.ai.soundOperate(0, 2);
                                    this.ai.progressOperate(0, 2);
                                    break;
                                case 11:
                                    this.ai.videoOperate(3);
                                    this.ai.dismissAllAlert();
                                    if (this.X.F() != 3) {
                                        if (this.X.f() != 2) {
                                            this.ai.setVisibility(8);
                                        }
                                    } else {
                                        this.ai.setVisibility(0);
                                    }
                                    if (this.X != null && this.X.k() == 5 && this.ai.mCurrPlayNum == this.ai.mCampaignSize) {
                                        TkayContainerView tkayContainerView = this.aj;
                                        if (tkayContainerView != null) {
                                            tkayContainerView.setRewardStatus(true);
                                            this.aj.showOrderCampView();
                                        }
                                    } else if (this.X.f() == 2) {
                                        this.aj.showVideoEndCover();
                                    } else {
                                        this.aj.showEndcard(this.X.F());
                                    }
                                    break;
                                case 12:
                                    f();
                                    this.ai.videoOperate(3);
                                    this.ai.dismissAllAlert();
                                    if (this.X.F() != 3) {
                                        this.ai.setVisibility(8);
                                    } else {
                                        this.ai.setVisibility(0);
                                    }
                                    if (this.an || this.ao != 0) {
                                        if (this.X.j() && this.X.k() == 5 && TextUtils.isEmpty(this.X.I())) {
                                            if (this.X != null && this.X.k() == 5) {
                                                com.tkay.expressad.foundation.d.c cVar = null;
                                                TkayVideoView tkayVideoView = this.ai;
                                                if (tkayVideoView != null && tkayVideoView.mCampOrderViewData != null) {
                                                    int i3 = 0;
                                                    while (true) {
                                                        if (i3 >= this.ai.mCampOrderViewData.size()) {
                                                            i2 = 0;
                                                        } else if (this.ai.mCampOrderViewData.get(i3) == null || this.ai.mCampOrderViewData.get(i3).aZ() != this.X.aZ()) {
                                                            i3++;
                                                        } else {
                                                            i2 = i3 - 1;
                                                        }
                                                    }
                                                    if (i2 >= 0 && this.ai.mCampOrderViewData.get(i2) != null) {
                                                        cVar = this.ai.mCampOrderViewData.get(i2);
                                                    }
                                                }
                                                if (cVar != null) {
                                                    TkayVideoView tkayVideoView2 = this.ai;
                                                    if (tkayVideoView2 != null) {
                                                        tkayVideoView2.setCampaign(cVar);
                                                    }
                                                    TkayContainerView tkayContainerView2 = this.aj;
                                                    if (tkayContainerView2 != null) {
                                                        tkayContainerView2.setCampaign(cVar);
                                                    }
                                                    a(cVar);
                                                }
                                            }
                                            this.ao = 0;
                                        }
                                        if (!this.an && this.ao == 1) {
                                            e();
                                            d();
                                            c();
                                        }
                                        if (this.X.f() != 2) {
                                            this.aj.showEndcard(this.X.F());
                                        } else {
                                            this.aj.showVideoEndCover();
                                        }
                                    }
                                    break;
                                case 13:
                                    this.ai.closeVideoOperate(0, 2);
                                    break;
                                case 14:
                                    if (!this.am) {
                                        this.ai.closeVideoOperate(0, 1);
                                    }
                                    break;
                                case 15:
                                    if (obj != null && (obj instanceof TkayVideoView.a)) {
                                        TkayVideoView.a aVar = (TkayVideoView.a) obj;
                                        int videoInteractiveType = this.aj.getVideoInteractiveType();
                                        if (this.X.f() == 2) {
                                            this.aj.showVideoClickView(1);
                                        } else if (videoInteractiveType >= 0 && aVar.a >= videoInteractiveType) {
                                            this.aj.showVideoClickView(1);
                                            this.ai.soundOperate(0, 1);
                                        }
                                        this.am = aVar.c;
                                        if (this.X.k() == 5) {
                                            int i4 = aVar.a;
                                            int i5 = aVar.b;
                                            if (!this.am && this.ai != null && this.X != null) {
                                                int i6 = this.ak;
                                                char c = (i6 < 0 || i4 < i6) ? (char) 1 : (char) 2;
                                                if (c != 2 && (this.X.i() != 0 ? i4 > this.X.i() : this.ai.mCurrPlayNum > 1)) {
                                                    c = 2;
                                                }
                                                if (c != 2 && this.ai.mCurrPlayNum > 1 && i4 == i5) {
                                                    c = 2;
                                                }
                                                if (c == 2) {
                                                    this.ai.closeVideoOperate(0, 2);
                                                    this.am = true;
                                                }
                                            }
                                        } else if (((this.ak >= 0 && (aVar.a >= this.ak || aVar.a == aVar.b)) || (this.X.i() > 0 && (aVar.a > this.X.i() || aVar.a == aVar.b))) && !this.am) {
                                            this.ai.closeVideoOperate(0, 2);
                                            this.am = true;
                                        }
                                    }
                                    break;
                            }
                        } else {
                            TkayContainerView tkayContainerView3 = this.aj;
                            if (tkayContainerView3 != null) {
                                if (!tkayContainerView3.showAlertWebView()) {
                                    TkayVideoView tkayVideoView3 = this.ai;
                                    if (tkayVideoView3 != null) {
                                        tkayVideoView3.showAlertView();
                                    }
                                } else {
                                    TkayVideoView tkayVideoView4 = this.ai;
                                    if (tkayVideoView4 != null) {
                                        tkayVideoView4.alertWebViewShowed();
                                    }
                                }
                            } else {
                                TkayVideoView tkayVideoView5 = this.ai;
                                if (tkayVideoView5 != null) {
                                    tkayVideoView5.showAlertView();
                                }
                            }
                        }
                    }
                } else if (obj != null && (obj instanceof Integer)) {
                    if (((Integer) obj).intValue() == 1) {
                        num = 2;
                    } else {
                        num = 1;
                    }
                    this.ai.soundOperate(num.intValue(), -1);
                }
            } else if (!this.aj.endCardShowing()) {
                int videoInteractiveType2 = this.aj.getVideoInteractiveType();
                if (videoInteractiveType2 != -2) {
                    if (videoInteractiveType2 == -1) {
                        if (this.aj.isLast()) {
                            this.aj.showVideoClickView(1);
                            this.ai.soundOperate(0, 1);
                            g();
                            this.al.a(this.aq, 3000L);
                        } else {
                            this.aj.showVideoClickView(-1);
                            this.ai.soundOperate(0, 2);
                            g();
                        }
                    }
                } else if (this.aj.miniCardLoaded()) {
                    this.aj.showVideoClickView(2);
                }
            }
        }
        super.a(i, obj);
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
