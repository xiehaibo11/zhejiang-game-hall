package com.mbridge.msdk.video.module.a.a;

import android.os.Handler;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.video.module.MBridgeContainerView;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import java.util.Timer;
import java.util.TimerTask;

public final class l extends n {
    private MBridgeVideoView l;
    private MBridgeContainerView m;
    private int n;
    private Timer o;
    private Handler p;
    private boolean q;
    private boolean r;
    private int s;
    private int t;

    public l(MBridgeVideoView mBridgeVideoView, MBridgeContainerView mBridgeContainerView, CampaignEx campaignEx, com.mbridge.msdk.videocommon.b.d dVar, com.mbridge.msdk.videocommon.download.a aVar, String str, String str2, int i, int i2, com.mbridge.msdk.video.module.a.a aVar2, int i3, boolean z, int i4) {
        super(campaignEx, dVar, aVar, str, str2, aVar2, i3, z);
        this.p = new Handler();
        this.q = false;
        this.r = false;
        this.s = 1;
        this.l = mBridgeVideoView;
        this.m = mBridgeContainerView;
        this.t = i;
        this.n = i2;
        this.s = i4;
        if (mBridgeVideoView != null) {
            this.q = mBridgeVideoView.getVideoSkipTime() == 0;
        }
        if (mBridgeVideoView == null || mBridgeContainerView == null) {
            this.a = false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:141:0x021e  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x028b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(int i, Object obj) {
        Integer num;
        if (this.a) {
            if (i != 1) {
                if (i == 2) {
                    this.l.dismissAllAlert();
                    this.l.videoOperate(3);
                    if (this.b != null && this.b.isDynamicView() && this.b.getDynamicTempCode() == 5) {
                        if (this.m != null && this.l.mCurrPlayNum == this.l.mCampaignSize) {
                            if (this.b.getAdSpaceT() != 2) {
                                this.m.setRewardStatus(true);
                                this.m.showOrderCampView();
                            }
                        } else {
                            com.mbridge.msdk.video.bt.module.b.f.a(this.b, this.g, this.l.mCurrentPlayProgressTime);
                            if (this.t == 2) {
                                i = 16;
                            }
                        }
                    } else if (this.t == 2 || this.m.endCardShowing() || this.b.getAdSpaceT() == 2) {
                        i = 16;
                    } else {
                        this.m.showEndcard(this.b.getVideo_end_type());
                    }
                } else if (i != 5) {
                    if (i != 6) {
                        if (i != 8) {
                            switch (i) {
                                case 10:
                                    this.r = true;
                                    this.l.soundOperate(0, 2);
                                    this.l.progressOperate(0, 2);
                                    break;
                                case 11:
                                    this.l.videoOperate(3);
                                    this.l.dismissAllAlert();
                                    if (this.b.getVideo_end_type() != 3) {
                                        if (this.b.getAdSpaceT() != 2) {
                                            this.l.setVisibility(8);
                                        }
                                    } else {
                                        this.l.setVisibility(0);
                                    }
                                    if (this.b != null && this.b.getDynamicTempCode() == 5 && this.l.mCurrPlayNum == this.l.mCampaignSize) {
                                        MBridgeContainerView mBridgeContainerView = this.m;
                                        if (mBridgeContainerView != null) {
                                            mBridgeContainerView.setRewardStatus(true);
                                            this.m.showOrderCampView();
                                        }
                                    } else if (this.b.getAdSpaceT() == 2) {
                                        this.m.showVideoEndCover();
                                    } else {
                                        this.m.showEndcard(this.b.getVideo_end_type());
                                    }
                                    break;
                                case 12:
                                    h();
                                    this.l.videoOperate(3);
                                    this.l.dismissAllAlert();
                                    if (this.b.getVideo_end_type() != 3) {
                                        this.l.setVisibility(8);
                                    } else {
                                        this.l.setVisibility(0);
                                    }
                                    if (this.r || this.s != 0) {
                                        if (this.b.isDynamicView() && this.b.getDynamicTempCode() == 5 && TextUtils.isEmpty(this.b.getendcard_url())) {
                                            j();
                                            this.s = 0;
                                        }
                                        if (!this.r && this.s == 1) {
                                            g();
                                            f();
                                            e();
                                        }
                                        if (this.b.getAdSpaceT() != 2) {
                                            this.m.showEndcard(this.b.getVideo_end_type());
                                        } else {
                                            this.m.showVideoEndCover();
                                        }
                                    }
                                    break;
                                case 13:
                                    this.l.closeVideoOperate(0, 2);
                                    break;
                                case 14:
                                    if (!this.q) {
                                        this.l.closeVideoOperate(0, 1);
                                    }
                                    break;
                                case 15:
                                    if (obj != null && (obj instanceof MBridgeVideoView.a)) {
                                        MBridgeVideoView.a aVar = (MBridgeVideoView.a) obj;
                                        int videoInteractiveType = this.m.getVideoInteractiveType();
                                        if (this.b.getAdSpaceT() == 2) {
                                            this.m.showVideoClickView(1);
                                        } else if (videoInteractiveType >= 0 && aVar.a >= videoInteractiveType) {
                                            this.m.showVideoClickView(1);
                                            this.l.soundOperate(0, 1);
                                        }
                                        this.q = aVar.c;
                                        if (this.b.getDynamicTempCode() == 5) {
                                            int i2 = aVar.a;
                                            int i3 = aVar.b;
                                            if (!this.q && this.l != null && this.b != null) {
                                                int i4 = this.n;
                                                int i5 = (i4 < 0 || i2 < i4) ? 1 : 2;
                                                if (i5 != 2 && (this.b.getVideoCompleteTime() != 0 ? i2 > this.b.getVideoCompleteTime() : this.l.mCurrPlayNum > 1)) {
                                                    i5 = 2;
                                                }
                                                if (i5 != 2 && this.l.mCurrPlayNum > 1 && i2 == i3) {
                                                    i5 = 2;
                                                }
                                                if (i5 == 2) {
                                                    this.l.closeVideoOperate(0, i5);
                                                    this.q = true;
                                                }
                                            }
                                        } else if (((this.n >= 0 && (aVar.a >= this.n || aVar.a == aVar.b)) || (this.b.getVideoCompleteTime() > 0 && (aVar.a > this.b.getVideoCompleteTime() || aVar.a == aVar.b))) && !this.q) {
                                            this.l.closeVideoOperate(0, 2);
                                            this.q = true;
                                        }
                                    }
                                    break;
                            }
                        } else {
                            MBridgeContainerView mBridgeContainerView2 = this.m;
                            if (mBridgeContainerView2 != null) {
                                if (!mBridgeContainerView2.showAlertWebView()) {
                                    MBridgeVideoView mBridgeVideoView = this.l;
                                    if (mBridgeVideoView != null) {
                                        mBridgeVideoView.showAlertView();
                                    }
                                } else {
                                    MBridgeVideoView mBridgeVideoView2 = this.l;
                                    if (mBridgeVideoView2 != null) {
                                        mBridgeVideoView2.alertWebViewShowed();
                                    }
                                }
                            } else {
                                MBridgeVideoView mBridgeVideoView3 = this.l;
                                if (mBridgeVideoView3 != null) {
                                    mBridgeVideoView3.showAlertView();
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
                    this.l.soundOperate(num.intValue(), -1);
                }
            } else if (!this.m.endCardShowing()) {
                int videoInteractiveType2 = this.m.getVideoInteractiveType();
                if (videoInteractiveType2 != -2) {
                    if (videoInteractiveType2 == -1) {
                        if (this.m.isLast()) {
                            this.m.showVideoClickView(1);
                            this.l.soundOperate(0, 1);
                            try {
                                i();
                                this.o = new Timer();
                                this.o.schedule(new TimerTask() {
                                    @Override
                                    public final void run() {
                                        try {
                                            l.this.p.post(new Runnable() {
                                                @Override
                                                public final void run() {
                                                    l.this.m.showVideoClickView(-1);
                                                    l.this.l.soundOperate(0, 2);
                                                }
                                            });
                                        } catch (Throwable th) {
                                            if (MBridgeConstans.DEBUG) {
                                                th.printStackTrace();
                                            }
                                        }
                                    }
                                }, 3000L);
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        } else {
                            this.m.showVideoClickView(-1);
                            this.l.soundOperate(0, 2);
                            i();
                        }
                    }
                } else if (this.m.miniCardLoaded()) {
                    this.m.showVideoClickView(2);
                }
            }
        }
        super.a(i, obj);
    }

    private void i() {
        try {
            if (this.o != null) {
                this.o.cancel();
                this.o = null;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void j() {
        if (this.b == null || this.b.getDynamicTempCode() != 5) {
            return;
        }
        CampaignEx campaignEx = null;
        MBridgeVideoView mBridgeVideoView = this.l;
        if (mBridgeVideoView != null && mBridgeVideoView.mCampOrderViewData != null) {
            int i = 0;
            int i2 = 0;
            while (true) {
                if (i2 < this.l.mCampOrderViewData.size()) {
                    if (this.l.mCampOrderViewData.get(i2) != null && this.l.mCampOrderViewData.get(i2).getId() == this.b.getId()) {
                        i = i2 - 1;
                        break;
                    }
                    i2++;
                } else {
                    break;
                }
            }
            if (i >= 0 && this.l.mCampOrderViewData.get(i) != null) {
                campaignEx = this.l.mCampOrderViewData.get(i);
            }
        }
        if (campaignEx != null) {
            MBridgeVideoView mBridgeVideoView2 = this.l;
            if (mBridgeVideoView2 != null) {
                mBridgeVideoView2.setCampaign(campaignEx);
            }
            MBridgeContainerView mBridgeContainerView = this.m;
            if (mBridgeContainerView != null) {
                mBridgeContainerView.setCampaign(campaignEx);
            }
            a(campaignEx);
        }
    }
}
