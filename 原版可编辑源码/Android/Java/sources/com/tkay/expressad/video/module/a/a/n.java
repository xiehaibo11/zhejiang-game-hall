package com.tkay.expressad.video.module.a.a;

import com.tkay.expressad.video.module.TkayVideoView;
import com.tkay.expressad.video.signal.factory.IJSFactory;

public final class n extends o {
    private IJSFactory ag;
    private int ai;
    private boolean aj;
    private int ak;
    private boolean al;

    public n(IJSFactory iJSFactory, com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.c.c cVar2, com.tkay.expressad.videocommon.b.a aVar, String str, String str2, int i, int i2, com.tkay.expressad.video.module.a.a aVar2, int i3, boolean z, int i4) {
        super(cVar, cVar2, aVar, str, str2, aVar2, i3, z);
        this.aj = false;
        this.al = false;
        this.ag = iJSFactory;
        this.ai = i;
        this.aj = i2 == 0;
        this.ak = i4;
        if (iJSFactory == null) {
            this.W = false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x028a  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x021c  */
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
                    this.ag.getJSVideoModule().dismissAllAlert();
                    if (i == 2) {
                        this.ag.getJSNotifyProxy().a(2, "");
                    }
                    this.ag.getJSVideoModule().videoOperate(3);
                    if (this.ag.getJSCommon().m() != 2) {
                        if (this.X.F() != 3) {
                            this.ag.getJSVideoModule().setVisible(8);
                        } else {
                            this.ag.getJSVideoModule().setVisible(0);
                        }
                        if (this.ai == 2 && !this.ag.getJSContainerModule().endCardShowing() && this.X.f() != 2) {
                            this.ag.getJSContainerModule().showEndcard(this.X.F());
                        }
                        this.ag.getJSNotifyProxy().a(1);
                    } else {
                        i = 16;
                        this.ag.getJSNotifyProxy().a(1);
                    }
                } else if (i != 5) {
                    if (i != 6) {
                        if (i != 8) {
                            if (i != 114) {
                                if (i != 116) {
                                    switch (i) {
                                        case 10:
                                            this.al = true;
                                            this.ag.getJSNotifyProxy().a(0);
                                            break;
                                        case 11:
                                        case 12:
                                            this.ag.getJSVideoModule().videoOperate(3);
                                            if (this.X.F() != 3) {
                                                if (this.X.f() != 2) {
                                                    this.ag.getJSVideoModule().setVisible(8);
                                                }
                                            } else {
                                                this.ag.getJSVideoModule().setVisible(0);
                                            }
                                            if (i == 12) {
                                                f();
                                                i2 = 2;
                                            } else {
                                                i2 = 1;
                                            }
                                            this.ag.getJSNotifyProxy().a(i2);
                                            if (this.ag.getJSCommon().m() == 2) {
                                                this.ag.getJSVideoModule().setVisible(0);
                                                com.tkay.expressad.video.signal.j jSVideoModule = this.ag.getJSVideoModule();
                                                this.ag.getJSContainerModule().showMiniCard(jSVideoModule.getBorderViewTop(), jSVideoModule.getBorderViewLeft(), jSVideoModule.getBorderViewWidth(), jSVideoModule.getBorderViewHeight(), jSVideoModule.getBorderViewRadius());
                                            } else if (i == 12) {
                                                if (this.ak == 1) {
                                                    if (this.X.f() != 2) {
                                                        this.ag.getJSContainerModule().showEndcard(this.X.F());
                                                    } else {
                                                        this.ag.getJSContainerModule().showVideoEndCover();
                                                    }
                                                }
                                            } else if (this.X.f() != 2) {
                                                this.ag.getJSContainerModule().showEndcard(this.X.F());
                                            } else {
                                                this.ag.getJSContainerModule().showVideoEndCover();
                                            }
                                            this.ag.getJSVideoModule().dismissAllAlert();
                                            if (i == 12 && !this.al && this.ak == 1) {
                                                f();
                                                e();
                                                d();
                                                c();
                                            }
                                            break;
                                        case 13:
                                            if (!this.ag.getJSVideoModule().isH5Canvas()) {
                                                this.ag.getJSVideoModule().closeVideoOperate(0, 2);
                                            }
                                            this.ag.getJSNotifyProxy().a(-1);
                                            break;
                                        case 14:
                                            if (!this.aj) {
                                                this.ag.getJSVideoModule().closeVideoOperate(0, 1);
                                            }
                                            break;
                                        case 15:
                                            if (obj != null && (obj instanceof TkayVideoView.a)) {
                                                this.aj = true;
                                                this.ag.getJSNotifyProxy().a((TkayVideoView.a) obj);
                                            }
                                            break;
                                        default:
                                            switch (i) {
                                                case com.tkay.expressad.video.module.a.a.N:
                                                case com.tkay.expressad.video.module.a.a.O:
                                                    this.ag.getJSNotifyProxy().a(i == 123 ? 7 : 6, "");
                                                    break;
                                                case 125:
                                                    this.ag.getJSContainerModule().hideAlertWebview();
                                                    break;
                                            }
                                            break;
                                    }
                                } else {
                                    com.tkay.expressad.video.signal.j jSVideoModule2 = this.ag.getJSVideoModule();
                                    this.ag.getJSContainerModule().configurationChanged(jSVideoModule2.getBorderViewWidth(), jSVideoModule2.getBorderViewHeight(), jSVideoModule2.getBorderViewRadius());
                                }
                            } else if (this.ag.getJSCommon().m() == 2) {
                                com.tkay.expressad.video.signal.j jSVideoModule3 = this.ag.getJSVideoModule();
                                this.ag.getJSContainerModule().showMiniCard(jSVideoModule3.getBorderViewTop(), jSVideoModule3.getBorderViewLeft(), jSVideoModule3.getBorderViewWidth(), jSVideoModule3.getBorderViewHeight(), jSVideoModule3.getBorderViewRadius());
                            }
                        } else if (!this.ag.getJSContainerModule().showAlertWebView()) {
                            this.ag.getJSVideoModule().showAlertView();
                        } else {
                            this.ag.getJSVideoModule().alertWebViewShowed();
                        }
                    }
                } else if (obj != null && (obj instanceof Integer)) {
                    if (((Integer) obj).intValue() == 1) {
                        num = 2;
                    } else {
                        num = 1;
                    }
                    this.ag.getJSVideoModule().soundOperate(num.intValue(), -1);
                    this.ag.getJSNotifyProxy().a(5, String.valueOf(num));
                }
            } else if (!this.ag.getJSContainerModule().endCardShowing()) {
                this.ag.getJSNotifyProxy().a(1, "");
            }
        }
        super.a(i, obj);
    }
}
