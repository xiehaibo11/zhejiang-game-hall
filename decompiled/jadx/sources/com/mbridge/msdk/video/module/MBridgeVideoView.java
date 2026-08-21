package com.mbridge.msdk.video.module;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.os.Handler;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AlphaAnimation;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose;
import com.iab.omid.library.mmadbridge.adsession.media.InteractionType;
import com.iab.omid.library.mmadbridge.adsession.media.MediaEvents;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar;
import com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView;
import com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener;
import com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewParameters;
import com.mbridge.msdk.dycreator.baseview.rewardpopview.MBAcquireRewardPopView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener;
import com.mbridge.msdk.playercommon.PlayerView;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor;
import com.mbridge.msdk.video.dynview.c;
import com.mbridge.msdk.video.dynview.e.g;
import com.mbridge.msdk.video.js.i;
import com.mbridge.msdk.video.module.a.a.h;
import com.mbridge.msdk.widget.FeedBackButton;
import com.mbridge.msdk.widget.dialog.MBAlertDialog;
import com.tkay.expressad.foundation.d.r;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeVideoView extends MBridgeBaseView implements i {
    public static final String TAG = "MBridgeVideoView";
    private static boolean al;
    private static int n;
    private static int o;
    private static int p;
    private static int q;
    private static int r;
    private boolean A;
    private MBridgeSegmentsProgressBar B;
    private com.mbridge.msdk.video.dynview.e.a C;
    private int D;
    private FrameLayout E;
    private MBridgeClickCTAView F;
    private com.mbridge.msdk.video.js.factory.b G;
    private int H;
    private RelativeLayout I;
    private boolean J;
    private com.mbridge.msdk.video.module.a.a K;
    private boolean L;
    private boolean M;
    private boolean N;
    private String O;
    private int P;
    private int Q;
    private int R;
    private MBAlertDialog S;
    private com.mbridge.msdk.widget.dialog.a T;
    private String U;
    private double V;
    private double W;
    private boolean aA;
    private AlphaAnimation aB;
    private MBridgeBaitClickView aC;
    private int aD;
    private int aE;
    private int aF;
    private int aG;
    private AcquireRewardPopViewParameters aH;
    private MBAcquireRewardPopView aI;
    private b aJ;
    private boolean aK;
    private Runnable aL;
    private Runnable aM;
    private boolean aa;
    private boolean ab;
    private boolean ac;
    private boolean ad;
    private boolean ae;
    private boolean af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private int aj;
    private boolean ak;
    private int am;
    private AdSession an;
    private MediaEvents ao;
    private String ap;
    private int aq;
    private int ar;
    private int as;
    private boolean at;
    private boolean au;
    private boolean av;
    private boolean aw;
    private boolean ax;
    private boolean ay;
    private boolean az;
    public List<CampaignEx> mCampOrderViewData;
    public int mCampaignSize;
    public int mCurrPlayNum;
    public int mCurrentPlayProgressTime;
    public int mMuteSwitch;
    private PlayerView s;
    private SoundImageView t;
    private TextView u;
    private View v;
    private RelativeLayout w;
    private ImageView x;
    private ProgressBar y;
    private FeedBackButton z;

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void init(Context context) {
    }

    static /* synthetic */ int L(MBridgeVideoView mBridgeVideoView) {
        int i = mBridgeVideoView.aE;
        mBridgeVideoView.aE = i - 1;
        return i;
    }

    public void setContainerViewOnNotifyListener(com.mbridge.msdk.video.module.a.a aVar) {
        this.K = aVar;
    }

    public void setCamPlayOrderCallback(com.mbridge.msdk.video.dynview.e.a aVar, List<CampaignEx> list, int i, int i2) {
        MBridgeSegmentsProgressBar mBridgeSegmentsProgressBar;
        this.C = aVar;
        this.mCampaignSize = list.size();
        this.mCurrPlayNum = i;
        this.D = i2;
        this.mCampOrderViewData = list;
        if (this.b == null || this.b.getDynamicTempCode() != 5 || (mBridgeSegmentsProgressBar = this.B) == null || this.mCampOrderViewData == null) {
            return;
        }
        if (this.mCampaignSize > 1) {
            mBridgeSegmentsProgressBar.setVisibility(0);
            this.B.init(this.mCampaignSize, 2);
            for (int i3 = 0; i3 < this.mCampOrderViewData.size(); i3++) {
                int videoPlayProgress = this.mCampOrderViewData.get(i3).getVideoPlayProgress();
                if (videoPlayProgress > 0) {
                    this.B.setProgress(videoPlayProgress, i3);
                }
                if (this.mCampOrderViewData.get(i3).isRewardPopViewShowed) {
                    this.J = true;
                }
            }
            return;
        }
        mBridgeSegmentsProgressBar.setVisibility(8);
    }

    public boolean isShowingAlertView() {
        return this.L;
    }

    public boolean isInstallDialogShowing() {
        return this.M;
    }

    public boolean isRewardPopViewShowing() {
        return this.N;
    }

    public void setUnitId(String str) {
        this.U = str;
        b bVar = this.aJ;
        if (bVar != null) {
            bVar.a(str);
        }
    }

    public String getUnitId() {
        return this.U;
    }

    public boolean isMiniCardShowing() {
        return this.ad;
    }

    public boolean isShowingTransparent() {
        return this.ai;
    }

    public void setShowingTransparent(boolean z) {
        this.ai = z;
    }

    public MBridgeVideoView(Context context) {
        super(context);
        this.mMuteSwitch = 0;
        this.D = 0;
        this.mCampaignSize = 1;
        this.mCurrPlayNum = 1;
        this.mCurrentPlayProgressTime = 0;
        this.J = false;
        this.L = false;
        this.M = false;
        this.N = false;
        this.U = "";
        this.aa = false;
        this.ab = false;
        this.ac = false;
        this.ad = false;
        this.ae = false;
        this.af = false;
        this.ag = false;
        this.ah = false;
        this.ai = false;
        this.ak = false;
        this.am = 2;
        this.at = false;
        this.au = false;
        this.av = false;
        this.aw = true;
        this.ax = false;
        this.ay = false;
        this.az = false;
        this.aA = false;
        this.aD = 0;
        this.aE = 5;
        this.aF = 5;
        this.aG = 5;
        this.aJ = new b(this);
        this.aK = false;
        this.aL = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.2
            @Override // java.lang.Runnable
            public final void run() {
                if (MBridgeVideoView.this.E != null) {
                    MBridgeVideoView.this.E.setVisibility(8);
                }
            }
        };
        this.aM = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.5
            @Override // java.lang.Runnable
            public final void run() {
                if (MBridgeVideoView.this.aE <= 0) {
                    MBridgeVideoView.this.showRewardPopView();
                    MBridgeVideoView mBridgeVideoView = MBridgeVideoView.this;
                    mBridgeVideoView.removeCallbacks(mBridgeVideoView.aM);
                } else {
                    MBridgeVideoView.L(MBridgeVideoView.this);
                    MBridgeVideoView mBridgeVideoView2 = MBridgeVideoView.this;
                    mBridgeVideoView2.postDelayed(mBridgeVideoView2.aM, 1000L);
                }
            }
        };
    }

    public MBridgeVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mMuteSwitch = 0;
        this.D = 0;
        this.mCampaignSize = 1;
        this.mCurrPlayNum = 1;
        this.mCurrentPlayProgressTime = 0;
        this.J = false;
        this.L = false;
        this.M = false;
        this.N = false;
        this.U = "";
        this.aa = false;
        this.ab = false;
        this.ac = false;
        this.ad = false;
        this.ae = false;
        this.af = false;
        this.ag = false;
        this.ah = false;
        this.ai = false;
        this.ak = false;
        this.am = 2;
        this.at = false;
        this.au = false;
        this.av = false;
        this.aw = true;
        this.ax = false;
        this.ay = false;
        this.az = false;
        this.aA = false;
        this.aD = 0;
        this.aE = 5;
        this.aF = 5;
        this.aG = 5;
        this.aJ = new b(this);
        this.aK = false;
        this.aL = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.2
            @Override // java.lang.Runnable
            public final void run() {
                if (MBridgeVideoView.this.E != null) {
                    MBridgeVideoView.this.E.setVisibility(8);
                }
            }
        };
        this.aM = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.5
            @Override // java.lang.Runnable
            public final void run() {
                if (MBridgeVideoView.this.aE <= 0) {
                    MBridgeVideoView.this.showRewardPopView();
                    MBridgeVideoView mBridgeVideoView = MBridgeVideoView.this;
                    mBridgeVideoView.removeCallbacks(mBridgeVideoView.aM);
                } else {
                    MBridgeVideoView.L(MBridgeVideoView.this);
                    MBridgeVideoView mBridgeVideoView2 = MBridgeVideoView.this;
                    mBridgeVideoView2.postDelayed(mBridgeVideoView2.aM, 1000L);
                }
            }
        };
    }

    public void setVideoLayout(CampaignEx campaignEx) {
        if (campaignEx != null) {
            this.b = campaignEx;
            this.i = campaignEx.isDynamicView();
        }
        if (this.i) {
            final c cVarA = new com.mbridge.msdk.video.dynview.j.c().a(this, campaignEx);
            com.mbridge.msdk.video.dynview.b.a().a(cVarA, new g() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.1
                @Override // com.mbridge.msdk.video.dynview.e.g
                public final void a(com.mbridge.msdk.video.dynview.a aVar) {
                    if (aVar != null) {
                        if (this != null && aVar.a() != null) {
                            aVar.a().setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                            this.addView(aVar.a());
                        }
                        if (aVar.b() != null) {
                            Iterator<View> it = aVar.b().iterator();
                            while (it.hasNext()) {
                                it.next().setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.1.1
                                    @Override // com.mbridge.msdk.widget.a
                                    protected final void a(View view) {
                                        MBridgeVideoView.a(MBridgeVideoView.this, "video_play_click");
                                    }
                                });
                            }
                        }
                        MBridgeVideoView.this.aA = aVar.c();
                        MBridgeVideoView.this.a();
                        boolean unused = MBridgeVideoView.al = false;
                        MBridgeVideoView.this.H = cVarA.j();
                    }
                }

                @Override // com.mbridge.msdk.video.dynview.e.g
                public final void a(com.mbridge.msdk.video.dynview.c.a aVar) {
                    z.d(MBridgeVideoView.TAG, "errorMsg：" + aVar.b());
                }
            });
            return;
        }
        int iFindLayout = findLayout("mbridge_reward_videoview_item");
        if (iFindLayout > 0) {
            this.c.inflate(iFindLayout, this);
            a();
        }
        al = false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        this.f = e();
        if (!this.f) {
            z.d(TAG, "MBridgeVideoView init fail");
        }
        c();
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
        this.aB = alphaAnimation;
        alphaAnimation.setDuration(200L);
    }

    public void setIsIV(boolean z) {
        this.ak = z;
        b bVar = this.aJ;
        if (bVar != null) {
            bVar.a(z);
        }
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void setCampaign(CampaignEx campaignEx) {
        int iR;
        super.setCampaign(campaignEx);
        b bVar = this.aJ;
        if (bVar != null) {
            bVar.a(campaignEx);
            b bVar2 = this.aJ;
            if (campaignEx != null && campaignEx.getReady_rate() != -1) {
                iR = campaignEx.getReady_rate();
            } else {
                iR = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.U, false).r();
            }
            bVar2.a(iR, com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.U, false).s());
        }
    }

    public void setSoundState(int i) {
        this.am = i;
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    protected final void c() {
        super.c();
        if (this.f) {
            if (this.i) {
                if (com.mbridge.msdk.video.dynview.i.b.a(this.b) == -1 || com.mbridge.msdk.video.dynview.i.b.a(this.b) == 100) {
                    this.s.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.6
                        @Override // android.view.View.OnClickListener
                        public final void onClick(View view) {
                            if (MBridgeVideoView.this.e != null) {
                                JSONObject jSONObject = new JSONObject();
                                try {
                                    jSONObject.put(com.mbridge.msdk.foundation.same.a.p, MBridgeVideoView.this.s.buildH5JsonObject(0));
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }
                                MBridgeVideoView.this.e.a(1, jSONObject);
                            }
                            if (MBridgeVideoView.this.ao != null) {
                                MBridgeVideoView.this.ao.adUserInteraction(InteractionType.CLICK);
                            }
                            MBridgeVideoView.this.setCTALayoutVisibleOrGone();
                        }
                    });
                }
            } else {
                this.s.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.7
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        if (MBridgeVideoView.this.e != null) {
                            JSONObject jSONObject = new JSONObject();
                            try {
                                jSONObject.put(com.mbridge.msdk.foundation.same.a.p, MBridgeVideoView.this.s.buildH5JsonObject(0));
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                            MBridgeVideoView.this.e.a(1, jSONObject);
                        }
                    }
                });
            }
            SoundImageView soundImageView = this.t;
            if (soundImageView != null) {
                soundImageView.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.8
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        Integer num = 2;
                        if (MBridgeVideoView.this.s != null && MBridgeVideoView.this.s.isSilent()) {
                            num = 1;
                        }
                        if (num.intValue() == 1) {
                            MBridgeVideoView.this.mMuteSwitch = 2;
                        } else {
                            MBridgeVideoView.this.mMuteSwitch = 1;
                        }
                        if (MBridgeVideoView.this.e != null) {
                            MBridgeVideoView.this.e.a(5, num);
                        }
                    }
                });
            }
            this.v.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.9
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (MBridgeVideoView.this.ak) {
                        MBridgeVideoView.this.az = true;
                        if (MBridgeVideoView.this.aw) {
                            MBridgeVideoView.this.b();
                            return;
                        } else {
                            if (MBridgeVideoView.this.e != null) {
                                MBridgeVideoView.this.e.a(com.tkay.expressad.video.module.a.a.N, "");
                                return;
                            }
                            return;
                        }
                    }
                    MBridgeVideoView.this.b();
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        try {
            if (this.ak && (this.aq == com.mbridge.msdk.foundation.same.a.w || this.aq == com.mbridge.msdk.foundation.same.a.x)) {
                if (this.at) {
                    if (this.aq != com.mbridge.msdk.foundation.same.a.x || this.e == null) {
                        return;
                    }
                    this.e.a(2, b(this.ax));
                    return;
                }
                if (this.aq == com.mbridge.msdk.foundation.same.a.x && this.az) {
                    if (this.e != null) {
                        this.e.a(2, b(this.ax));
                        return;
                    }
                    return;
                }
                if (this.aw) {
                    int curPosition = this.s.getCurPosition() / 1000;
                    int videoLength = (int) ((curPosition / (this.s.getDuration() == 0 ? this.b.getVideoLength() : this.s.getDuration())) * 100.0f);
                    if (this.aq == com.mbridge.msdk.foundation.same.a.w) {
                        f();
                        if (this.ar == com.mbridge.msdk.foundation.same.a.y && videoLength >= this.as) {
                            if (this.e != null) {
                                this.e.a(2, b(this.ax));
                                return;
                            }
                            return;
                        } else if (this.ar == com.mbridge.msdk.foundation.same.a.z && curPosition >= this.as) {
                            if (this.e != null) {
                                this.e.a(2, b(this.ax));
                                return;
                            }
                            return;
                        } else if (this.e != null) {
                            this.e.a(8, "");
                        }
                    }
                    if (this.aq == com.mbridge.msdk.foundation.same.a.x) {
                        if (this.ar == com.mbridge.msdk.foundation.same.a.y && videoLength >= this.as) {
                            f();
                            if (this.e != null) {
                                this.e.a(8, "");
                                return;
                            }
                            return;
                        }
                        if (this.ar != com.mbridge.msdk.foundation.same.a.z || curPosition < this.as) {
                            return;
                        }
                        f();
                        if (this.e != null) {
                            this.e.a(8, "");
                            return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            if (this.b != null && this.b.getAdSpaceT() != 2) {
                int iK = k();
                int curPosition2 = this.s.getCurPosition() / 1000;
                boolean z = false;
                if (this.b.getDynamicTempCode() != 5 || this.mCurrPlayNum <= 1 ? !((iK <= 0 || curPosition2 >= iK) && iK != 0) : !(iK == 0 || iK <= 0 || curPosition2 >= iK)) {
                    z = true;
                }
                if (z && this.R == 1 && !this.ai) {
                    f();
                    if (this.e != null) {
                        this.e.a(8, "");
                        return;
                    }
                    return;
                }
                if (this.e != null) {
                    this.e.a(2, "");
                    return;
                }
                return;
            }
            if (this.e != null) {
                this.e.a(2, "");
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void hideAlertView(int i) {
        if (this.L) {
            this.L = false;
            this.at = true;
            setShowingAlertViewCover(false);
            com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.U, false);
            e.a(this.f4304a, this.b, com.mbridge.msdk.videocommon.d.c.f4394a, this.U, 1, i, 1);
            if (i == 0) {
                g();
                if (this.ak) {
                    if (this.aq == com.mbridge.msdk.foundation.same.a.x || this.aq == com.mbridge.msdk.foundation.same.a.w) {
                        this.au = true;
                        if (this.e != null) {
                            this.e.a(com.tkay.expressad.video.module.a.a.O, "");
                        }
                        this.ay = true;
                        gonePlayingCloseView();
                        return;
                    }
                    return;
                }
                return;
            }
            this.av = true;
            if (this.ak && this.aq == com.mbridge.msdk.foundation.same.a.x) {
                g();
                return;
            }
            if (this.ak && this.aq == com.mbridge.msdk.foundation.same.a.w) {
                if (this.e != null) {
                    this.e.a(2, b(this.ax));
                }
            } else if (this.e != null) {
                this.e.a(2, "");
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void alertWebViewShowed() {
        this.L = true;
        setShowingAlertViewCover(true);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void dismissAllAlert() {
        MBAlertDialog mBAlertDialog = this.S;
        if (mBAlertDialog != null) {
            mBAlertDialog.dismiss();
        }
        if (this.e != null) {
            this.e.a(125, "");
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showAlertView() {
        if (this.ad) {
            return;
        }
        if (this.T == null) {
            this.T = new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.10
                @Override // com.mbridge.msdk.widget.dialog.a
                public final void c() {
                    a();
                }

                @Override // com.mbridge.msdk.widget.dialog.a
                public final void a() {
                    MBridgeVideoView.this.L = false;
                    MBridgeVideoView mBridgeVideoView = MBridgeVideoView.this;
                    mBridgeVideoView.setShowingAlertViewCover(mBridgeVideoView.L);
                    if (MBridgeVideoView.this.ak && (MBridgeVideoView.this.aq == com.mbridge.msdk.foundation.same.a.x || MBridgeVideoView.this.aq == com.mbridge.msdk.foundation.same.a.w)) {
                        MBridgeVideoView.this.au = true;
                        if (MBridgeVideoView.this.e != null) {
                            MBridgeVideoView.this.e.a(com.tkay.expressad.video.module.a.a.O, "");
                        }
                        MBridgeVideoView.this.ay = true;
                        MBridgeVideoView.this.gonePlayingCloseView();
                    }
                    MBridgeVideoView.this.g();
                    e.a(MBridgeVideoView.this.f4304a, MBridgeVideoView.this.b, MBridgeVideoView.this.ap, MBridgeVideoView.this.U, 1, 0, 1);
                }

                @Override // com.mbridge.msdk.widget.dialog.a
                public final void b() {
                    MBridgeVideoView.this.L = false;
                    MBridgeVideoView.this.av = true;
                    MBridgeVideoView mBridgeVideoView = MBridgeVideoView.this;
                    mBridgeVideoView.setShowingAlertViewCover(mBridgeVideoView.L);
                    e.a(MBridgeVideoView.this.f4304a, MBridgeVideoView.this.b, MBridgeVideoView.this.ap, MBridgeVideoView.this.U, 1, 1, 1);
                    if (!MBridgeVideoView.this.ak || MBridgeVideoView.this.aq != com.mbridge.msdk.foundation.same.a.w) {
                        if (MBridgeVideoView.this.ak && MBridgeVideoView.this.aq == com.mbridge.msdk.foundation.same.a.x) {
                            MBridgeVideoView.this.g();
                            return;
                        } else {
                            if (MBridgeVideoView.this.e != null) {
                                MBridgeVideoView.this.e.a(2, "");
                                return;
                            }
                            return;
                        }
                    }
                    if (MBridgeVideoView.this.e != null) {
                        com.mbridge.msdk.video.module.a.a aVar = MBridgeVideoView.this.e;
                        MBridgeVideoView mBridgeVideoView2 = MBridgeVideoView.this;
                        aVar.a(2, mBridgeVideoView2.b(mBridgeVideoView2.ax));
                    }
                }
            };
        }
        if (this.S == null) {
            MBAlertDialog mBAlertDialog = new MBAlertDialog(getContext(), this.T);
            this.S = mBAlertDialog;
            AdSession adSession = this.an;
            if (adSession != null) {
                adSession.addFriendlyObstruction(mBAlertDialog.getWindow().getDecorView(), FriendlyObstructionPurpose.NOT_VISIBLE, null);
            }
        }
        if (this.ak) {
            this.S.makeIVAlertView(this.aq, this.U);
        } else {
            this.S.makeRVAlertView(this.U);
        }
        PlayerView playerView = this.s;
        if (playerView == null || playerView.isComplete()) {
            return;
        }
        this.S.show();
        this.at = true;
        this.L = true;
        setShowingAlertViewCover(true);
        com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.U, false);
        this.ap = com.mbridge.msdk.videocommon.d.c.f4394a;
        e.a(this.f4304a, this.b, this.ap, this.U, 1, 1);
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b bVar) {
        this.G = bVar;
        if (this.f) {
            if (!TextUtils.isEmpty(this.O) && this.b != null) {
                AdSession adSession = this.an;
                if (adSession != null) {
                    adSession.registerAdView(this.s);
                    SoundImageView soundImageView = this.t;
                    if (soundImageView != null) {
                        this.an.addFriendlyObstruction(soundImageView, FriendlyObstructionPurpose.OTHER, null);
                    }
                    this.an.addFriendlyObstruction(this.u, FriendlyObstructionPurpose.OTHER, null);
                    this.an.addFriendlyObstruction(this.v, FriendlyObstructionPurpose.CLOSE_AD, null);
                    z.a("OMSDK", "RV registerView");
                }
                if (this.b != null && ai.b(this.b.getVideoResolution())) {
                    String videoResolution = this.b.getVideoResolution();
                    z.b(TAG, "MBridgeBaseView videoResolution:" + videoResolution);
                    String[] strArrSplit = videoResolution.split("x");
                    if (strArrSplit.length == 2) {
                        if (ae.b(strArrSplit[0]) > 0.0d) {
                            this.V = ae.b(strArrSplit[0]);
                        }
                        if (ae.b(strArrSplit[1]) > 0.0d) {
                            this.W = ae.b(strArrSplit[1]);
                        }
                        z.b(TAG, "MBridgeBaseView mVideoW:" + this.V + "  mVideoH:" + this.W);
                    }
                    if (this.V <= 0.0d) {
                        this.V = 1280.0d;
                    }
                    if (this.W <= 0.0d) {
                        this.W = 720.0d;
                    }
                }
                this.s.initBufferIngParam(this.Q);
                this.s.initVFPData(this.O, this.b.getVideoUrlEncode(), this.aJ);
                soundOperate(this.am, -1, null);
            }
        } else if (this.e != null) {
            this.e.a(12, "MBridgeVideoView initSuccess false");
        }
        al = false;
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void defaultShow() {
        super.defaultShow();
        this.aa = true;
        showVideoLocation(0, 0, ae.h(this.f4304a), ae.g(this.f4304a), 0, 0, 0, 0, 0);
        videoOperate(1);
        if (this.P == 0) {
            closeVideoOperate(-1, 2);
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        z.b(TAG, "showVideoLocation marginTop:" + i + " marginLeft:" + i2 + " width:" + i3 + "  height:" + i4 + " radius:" + i5 + " borderTop:" + i6 + " borderLeft:" + i7 + " borderWidth:" + i8 + " borderHeight:" + i9);
        if (this.f) {
            this.w.setPadding(0, 0, 0, 0);
            setVisibility(0);
            if (this.w.getVisibility() != 0) {
                this.w.setVisibility(0);
            }
            if (this.u.getVisibility() == 0) {
                j();
            }
            if ((i3 > 0 && i4 > 0 && ae.h(this.f4304a) >= i3 && ae.g(this.f4304a) >= i4) && !this.aa) {
                o = i6;
                p = i7;
                q = i8 + 4;
                r = i9 + 4;
                float f = i3 / i4;
                float f2 = 0.0f;
                try {
                    f2 = (float) (this.V / this.W);
                } catch (Throwable th) {
                    z.c(TAG, th.getMessage(), th);
                }
                if (i5 > 0) {
                    n = i5;
                    if (i5 > 0) {
                        GradientDrawable gradientDrawable = new GradientDrawable();
                        gradientDrawable.setCornerRadius(ae.b(getContext(), i5));
                        gradientDrawable.setColor(-1);
                        gradientDrawable.setStroke(1, 0);
                        if (Build.VERSION.SDK_INT >= 16) {
                            setBackground(gradientDrawable);
                            this.s.setBackground(gradientDrawable);
                        } else {
                            setBackgroundDrawable(gradientDrawable);
                            this.s.setBackgroundDrawable(gradientDrawable);
                        }
                        if (Build.VERSION.SDK_INT >= 21) {
                            setClipToOutline(true);
                            this.s.setClipToOutline(true);
                        }
                    }
                }
                if (Math.abs(f - f2) <= 0.1f || this.aj == 1) {
                    h();
                    if (this.ai) {
                        setLayoutCenter(i3, i4);
                        if (al) {
                            this.e.a(114, "");
                            return;
                        } else {
                            this.e.a(116, "");
                            return;
                        }
                    }
                    setLayoutParam(i2, i, i3, i4);
                    return;
                }
                h();
                videoOperate(1);
                return;
            }
            h();
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void soundOperate(int i, int i2) {
        soundOperate(i, i2, "2");
    }

    @Override // com.mbridge.msdk.video.js.i
    public void soundOperate(int i, int i2, String str) {
        SoundImageView soundImageView;
        if (this.f) {
            this.am = i;
            if (i == 1) {
                SoundImageView soundImageView2 = this.t;
                if (soundImageView2 != null) {
                    soundImageView2.setSoundStatus(false);
                }
                this.s.closeSound();
                try {
                    if (this.ao != null) {
                        this.ao.volumeChange(0.0f);
                    }
                } catch (IllegalArgumentException e) {
                    z.a("OMSDK", e.getMessage());
                }
            } else if (i == 2) {
                SoundImageView soundImageView3 = this.t;
                if (soundImageView3 != null) {
                    soundImageView3.setSoundStatus(true);
                }
                this.s.openSound();
                try {
                    if (this.ao != null) {
                        this.ao.volumeChange(1.0f);
                    }
                } catch (IllegalArgumentException e2) {
                    z.a("OMSDK", e2.getMessage());
                }
            }
            if (this.b != null && this.b.isDynamicView()) {
                SoundImageView soundImageView4 = this.t;
                if (soundImageView4 != null) {
                    soundImageView4.setVisibility(0);
                }
            } else if (i2 == 1) {
                SoundImageView soundImageView5 = this.t;
                if (soundImageView5 != null) {
                    soundImageView5.setVisibility(8);
                }
            } else if (i2 == 2 && (soundImageView = this.t) != null) {
                soundImageView.setVisibility(0);
            }
        }
        if (str == null || !str.equals("2") || this.e == null) {
            return;
        }
        this.e.a(7, Integer.valueOf(i));
    }

    @Override // com.mbridge.msdk.video.js.i
    public void videoOperate(int i) {
        z.a(TAG, "VideoView videoOperate:" + i);
        if (this.f) {
            if (i == 1) {
                if (getVisibility() == 0 && isfront()) {
                    z.a(TAG, "VideoView videoOperate:play");
                    if (this.L || this.ad || this.M || com.mbridge.msdk.foundation.b.b.c) {
                        return;
                    }
                    g();
                    return;
                }
                return;
            }
            if (i == 2) {
                if (getVisibility() == 0) {
                    z.a(TAG, "VideoView videoOperate:pause");
                    f();
                    return;
                }
                return;
            }
            if (i == 3) {
                if (this.ac) {
                    return;
                }
                this.s.release();
                this.ac = true;
                return;
            }
            if (i == 5) {
                this.M = true;
                if (this.ac) {
                    return;
                }
                f();
                return;
            }
            if (i == 4) {
                this.M = false;
                if (this.ac || isMiniCardShowing()) {
                    return;
                }
                g();
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void closeVideoOperate(int i, int i2) {
        if (i == 1) {
            this.az = true;
            if (getVisibility() == 0) {
                b();
            }
        }
        if (i2 == 1) {
            gonePlayingCloseView();
            return;
        }
        if (i2 == 2) {
            if ((this.ay && getVisibility() == 0) || !this.f || this.v.getVisibility() == 0) {
                return;
            }
            if (!this.i || this.A) {
                this.v.setVisibility(0);
            }
            this.ae = true;
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void progressBarOperate(int i) {
        ProgressBar progressBar;
        if (this.f) {
            if (i == 1) {
                ProgressBar progressBar2 = this.y;
                if (progressBar2 != null) {
                    progressBar2.setVisibility(8);
                    return;
                }
                return;
            }
            if (i != 2 || (progressBar = this.y) == null) {
                return;
            }
            progressBar.setVisibility(0);
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void progressOperate(int i, int i2) {
        if (this.f) {
            z.b(TAG, "progressOperate progress:" + i);
            int videoLength = this.b != null ? this.b.getVideoLength() : 0;
            if (i > 0 && i <= videoLength && this.s != null) {
                z.b(TAG, "progressOperate progress:" + i);
                this.s.seekTo(i * 1000);
            }
            if (i2 == 1) {
                this.u.setVisibility(8);
            } else if (i2 == 2) {
                this.u.setVisibility(0);
            }
            if (this.u.getVisibility() == 0) {
                j();
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public String getCurrentProgress() {
        try {
            int iA = this.aJ.a();
            int videoLength = this.b != null ? this.b.getVideoLength() : 0;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NotificationCompat.CATEGORY_PROGRESS, a(iA, videoLength));
            jSONObject.put("time", iA);
            jSONObject.put(r.ag, videoLength + "");
            return jSONObject.toString();
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
            return "{}";
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setScaleFitXY(int i) {
        this.aj = i;
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setVisible(int i) {
        setVisibility(i);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setInstallDialogState(boolean z) {
        this.M = z;
        this.s.setIsCovered(z);
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setCover(boolean z) {
        if (this.f) {
            this.s.setIsCovered(z);
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void setMiniEndCardState(boolean z) {
        this.ad = z;
    }

    public void setShowingAlertViewCover(boolean z) {
        MBAcquireRewardPopView mBAcquireRewardPopView;
        if (z && (mBAcquireRewardPopView = this.aI) != null && this.N && this.L) {
            mBAcquireRewardPopView.onPause();
        }
        this.s.setIsCovered(z);
    }

    @Override // com.mbridge.msdk.video.js.i
    public boolean isH5Canvas() {
        return getLayoutParams().height < ae.g(this.f4304a.getApplicationContext());
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewHeight() {
        return r;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewWidth() {
        return q;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewLeft() {
        return p;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewTop() {
        return o;
    }

    @Override // com.mbridge.msdk.video.js.i
    public int getBorderViewRadius() {
        return n;
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if ((this.b == null || !this.b.isDynamicView()) && this.f && this.aa) {
            h();
        }
    }

    private String a(int i, int i2) {
        if (i2 != 0) {
            try {
                return ae.a(Double.valueOf(i / i2)) + "";
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return i2 + "";
    }

    public int getCloseAlert() {
        return this.R;
    }

    public void setCloseAlert(int i) {
        this.R = i;
    }

    public int getVideoSkipTime() {
        return this.P;
    }

    public void setVideoSkipTime(int i) {
        this.P = i;
    }

    public void setPlayURL(String str) {
        this.O = str;
    }

    public void setBufferTimeout(int i) {
        this.Q = i;
    }

    private boolean e() {
        try {
            this.s = (PlayerView) findViewById(filterFindViewId(this.aA, "mbridge_vfpv"));
            this.t = (SoundImageView) findViewById(filterFindViewId(this.aA, "mbridge_sound_switch"));
            this.u = (TextView) findViewById(filterFindViewId(this.aA, "mbridge_tv_count"));
            View viewFindViewById = findViewById(filterFindViewId(this.aA, "mbridge_rl_playing_close"));
            this.v = viewFindViewById;
            if (viewFindViewById != null) {
                viewFindViewById.setVisibility(4);
            }
            this.w = (RelativeLayout) findViewById(filterFindViewId(this.aA, "mbridge_top_control"));
            this.x = (ImageView) findViewById(filterFindViewId(this.aA, "mbridge_videoview_bg"));
            this.y = (ProgressBar) findViewById(filterFindViewId(this.aA, "mbridge_video_progress_bar"));
            this.z = (FeedBackButton) findViewById(filterFindViewId(this.aA, "mbridge_native_endcard_feed_btn"));
            this.B = (MBridgeSegmentsProgressBar) findViewById(filterFindViewId(this.aA, "mbridge_reward_segment_progressbar"));
            this.E = (FrameLayout) findViewById(filterFindViewId(this.aA, "mbridge_reward_cta_layout"));
            this.aC = (MBridgeBaitClickView) findViewById(filterFindViewId(this.aA, "mbridge_animation_click_view"));
            this.I = (RelativeLayout) findViewById(filterFindViewId(this.aA, "mbridge_reward_moreoffer_layout"));
            this.aI = (MBAcquireRewardPopView) findViewById(filterFindViewId(this.aA, "mbridge_reward_popview"));
            return isNotNULL(this.s, this.t, this.u, this.v);
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
            return false;
        }
    }

    public boolean isfront() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (viewGroup == null) {
            return false;
        }
        int iIndexOfChild = viewGroup.indexOfChild(this);
        int childCount = viewGroup.getChildCount();
        int i = iIndexOfChild + 1;
        boolean z = false;
        while (i <= childCount - 1) {
            if (viewGroup.getChildAt(i).getVisibility() == 0 && this.ad) {
                return false;
            }
            i++;
            z = true;
        }
        return z;
    }

    private void f() {
        try {
            if (this.s != null) {
                if (this.b != null && !this.b.isRewardPopViewShowed) {
                    removeCallbacks(this.aM);
                }
                this.s.setIsCovered(this.M || this.L || this.N);
                this.s.onPause();
                if (this.b != null && this.b.getNativeVideoTracking() != null && !this.b.isHasReportAdTrackPause()) {
                    this.b.setHasReportAdTrackPause(true);
                    com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, this.U, this.b.getNativeVideoTracking().i(), false, false);
                }
                if (this.ao != null) {
                    this.ao.pause();
                    z.a("omsdk", "play:  videoEvents.pause()");
                }
            }
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        try {
            if (!this.ab) {
                try {
                    if (this.ao != null) {
                        float duration = this.s.getDuration();
                        if (duration == 0.0f && this.b != null) {
                            duration = this.b.getVideoLength();
                        }
                        this.ao.start(duration, getMute() == 2 ? 1.0f : 0.0f);
                        z.a("omsdk", "play: videoEvents.start()");
                    }
                } catch (IllegalArgumentException e) {
                    z.a(TAG, e.getMessage());
                }
                boolean zPlayVideo = this.s.playVideo();
                if (this.b != null && this.b.getPlayable_ads_without_video() != 2 && !zPlayVideo) {
                    z.d("MediaPlayer", "播放失败");
                    if (this.aJ != null) {
                        this.aJ.onPlayError("play video failed");
                    }
                }
                this.ab = true;
                return;
            }
            if (this.aI != null && this.N) {
                this.aI.onResume();
            }
            if (this.M || this.L || this.N) {
                return;
            }
            this.s.setIsCovered(false);
            this.s.onResume();
            if (this.b != null && !this.b.isRewardPopViewShowed) {
                post(this.aM);
            }
            try {
                if (this.ao != null) {
                    this.ao.resume();
                    z.a("omsdk", "play:  videoEvents.resume()");
                    return;
                }
                return;
            } catch (IllegalArgumentException e2) {
                z.a(TAG, e2.getMessage());
                return;
            }
        } catch (Exception e3) {
            z.c(TAG, e3.getMessage(), e3);
        }
        z.c(TAG, e3.getMessage(), e3);
    }

    public void gonePlayingCloseView() {
        if (this.f && this.v.getVisibility() != 8) {
            this.v.setVisibility(8);
            this.ae = false;
        }
        if (this.aK || this.ah || this.af) {
            return;
        }
        this.aK = true;
        int i = this.P;
        if (i < 0) {
            return;
        }
        if (i == 0) {
            this.ah = true;
        } else {
            new Handler().postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.11
                @Override // java.lang.Runnable
                public final void run() {
                    MBridgeVideoView.this.ah = true;
                }
            }, this.P * 1000);
        }
    }

    private void h() {
        float f;
        float fH = ae.h(this.f4304a);
        float fG = ae.g(this.f4304a);
        int iB = ae.b(getContext(), 58.0f);
        int iB2 = ae.b(getContext(), 104.0f);
        if (this.b != null && this.b.getAdSpaceT() == 2) {
            int iC = this.b.getRewardTemplateMode().c();
            if (iC == 1) {
                fH -= iB * 2;
                fG -= iB2 * 2;
            }
            if (iC == 2) {
                fH -= iB2 * 2;
                fG -= iB * 2;
            }
            if (iC == 0) {
                if (this.d == 1) {
                    fH -= iB * 2;
                    f = iB2 * 2;
                } else {
                    fH -= iB2 * 2;
                    f = iB * 2;
                }
                fG -= f;
            }
        }
        double d = this.V;
        if (d > 0.0d) {
            double d2 = this.W;
            if (d2 > 0.0d && fH > 0.0f && fG > 0.0f) {
                double d3 = d / d2;
                double d4 = fH / fG;
                z.b(TAG, "videoWHDivide:" + d3 + "  screenWHDivide:" + d4);
                double dA = ae.a(Double.valueOf(d3));
                double dA2 = ae.a(Double.valueOf(d4));
                z.b(TAG, "videoWHDivideFinal:" + dA + "  screenWHDivideFinal:" + dA2);
                FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.s.getLayoutParams();
                if (dA > dA2) {
                    double d5 = (((double) fH) * this.W) / this.V;
                    layoutParams.width = -1;
                    layoutParams.height = (int) d5;
                    layoutParams.gravity = 17;
                } else if (dA < dA2) {
                    layoutParams.width = (int) (((double) fG) * d3);
                    layoutParams.height = -1;
                    layoutParams.gravity = 17;
                } else {
                    layoutParams.width = -1;
                    layoutParams.height = -1;
                }
                try {
                    if (this.b != null && this.b.isDynamicView()) {
                        int iB3 = this.b.getRewardTemplateMode().b();
                        int iC2 = this.b.getRewardTemplateMode().c();
                        if (iB3 == 102 || iB3 == 202) {
                            if (iC2 == 1) {
                                layoutParams.width = -1;
                                layoutParams.gravity = 17;
                                layoutParams.height = (int) (this.W / (this.V / ((double) fH)));
                            } else {
                                layoutParams.height = -1;
                                layoutParams.gravity = 17;
                                layoutParams.width = (int) (((double) fG) * d3);
                            }
                        }
                        if (iB3 == 202 && !TextUtils.isEmpty(this.b.getImageUrl())) {
                            a(this.b.getImageUrl());
                        }
                        if (iB3 == 302 || iB3 == 802) {
                            if (this.V / this.W > 1.0d) {
                                layoutParams.width = -1;
                                layoutParams.height = (int) ((this.W * ((double) fH)) / this.V);
                            } else {
                                int iB4 = ae.b(getContext(), 220.0f);
                                layoutParams.width = (int) ((this.V * ((double) iB4)) / this.W);
                                layoutParams.height = iB4;
                            }
                        }
                    }
                } catch (Throwable th) {
                    z.d(TAG, th.getMessage());
                }
                this.s.setLayoutParams(layoutParams);
                setMatchParent();
                return;
            }
        }
        i();
    }

    private void i() {
        try {
            setLayoutParam(0, 0, -1, -1);
            if (isLandscape() || !this.f) {
                return;
            }
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.s.getLayoutParams();
            int iH = ae.h(this.f4304a);
            layoutParams.width = -1;
            layoutParams.height = (iH * 9) / 16;
            layoutParams.gravity = 17;
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static final class b extends DefaultVideoPlayerStatusListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private MBridgeVideoView f4366a;
        private int b;
        private int c;
        private int d;
        private boolean e;
        private MediaEvents f;
        private boolean k;
        private String l;
        private CampaignEx m;
        private int n;
        private int o;
        private a g = new a();
        private boolean h = false;
        private boolean i = false;
        private boolean j = false;
        private boolean p = false;

        public final void a(CampaignEx campaignEx) {
            this.m = campaignEx;
        }

        public final void a(boolean z) {
            this.k = z;
        }

        public final void a(String str) {
            this.l = str;
        }

        public final int a() {
            return this.b;
        }

        public final int b() {
            return this.d;
        }

        public final void a(int i, int i2) {
            int i3;
            CampaignEx campaignEx;
            String str;
            this.n = i;
            this.o = i2;
            if (!ab.a().a("h_c_r_w_p_c", false) || (i3 = this.n) == 100 || this.o != 0 || this.p || i3 == 0 || (campaignEx = this.m) == null) {
                return;
            }
            try {
                if (campaignEx.getAdType() == 94 || this.m.getAdType() == 287) {
                    str = this.m.getRequestId() + this.m.getId() + this.m.getVideoUrlEncode();
                } else {
                    str = this.m.getId() + this.m.getVideoUrlEncode() + this.m.getBidToken();
                }
                com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.l, str);
                if (aVarA != null) {
                    aVarA.j();
                    this.p = true;
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultVideoPlayerStatusListener", "CDRate is : 0  and start download when player create!");
                    }
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("DefaultVideoPlayerStatusListener", e.getMessage());
                }
            }
        }

        public b(MBridgeVideoView mBridgeVideoView) {
            this.f4366a = mBridgeVideoView;
            if (mBridgeVideoView != null) {
                this.l = mBridgeVideoView.getUnitId();
                this.m = mBridgeVideoView.getCampaign();
            }
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onPlayStarted(int i) {
            super.onPlayStarted(i);
            if (!this.e) {
                MBridgeVideoView mBridgeVideoView = this.f4366a;
                if (mBridgeVideoView != null) {
                    mBridgeVideoView.A = true;
                }
                this.f4366a.e.a(10, this.g);
                this.e = true;
            }
            this.d = i;
            CampaignEx campaignEx = this.m;
            if (campaignEx != null) {
                int videoCompleteTime = campaignEx.getVideoCompleteTime();
                if (videoCompleteTime <= 0) {
                    videoCompleteTime = i;
                }
                String str = "mbridge_reward_shape_progress";
                if (this.m.isDynamicView()) {
                    MBridgeVideoView mBridgeVideoView2 = this.f4366a;
                    if (mBridgeVideoView2 != null && mBridgeVideoView2.u != null) {
                        if (this.m.getDynamicTempCode() != 5 || this.f4366a.mCurrPlayNum <= 1 || videoCompleteTime > 0) {
                            if (videoCompleteTime > 0) {
                                if (!this.k || this.m.getDynamicTempCode() == 5) {
                                    d();
                                }
                                str = "mbridge_reward_video_time_count_num_bg";
                            }
                            this.f4366a.u.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, com.tkay.expressad.foundation.h.i.c));
                        } else {
                            this.f4366a.u.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_time_count_num_bg", com.tkay.expressad.foundation.h.i.c));
                            d();
                        }
                    }
                } else if (videoCompleteTime > 0) {
                    this.f4366a.u.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_time_count_num_bg", com.tkay.expressad.foundation.h.i.c));
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 30.0f));
                    int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 5.0f);
                    layoutParams.addRule(1, s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_native_endcard_feed_btn", "id"));
                    layoutParams.setMargins(iB, 0, 0, 0);
                    this.f4366a.u.setPadding(iB, 0, iB, 0);
                    this.f4366a.u.setLayoutParams(layoutParams);
                } else {
                    this.f4366a.u.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_shape_progress", com.tkay.expressad.foundation.h.i.c));
                }
            }
            if (this.f4366a.y != null) {
                this.f4366a.y.setMax(i);
            }
            CampaignEx campaignEx2 = this.m;
            if (campaignEx2 != null && campaignEx2.getAdSpaceT() == 2) {
                this.f4366a.w.setVisibility(0);
            }
            if (this.f4366a.u.getVisibility() == 0) {
                this.f4366a.j();
            }
            boolean unused = MBridgeVideoView.al = false;
            if (this.f4366a.H == 0) {
                this.f4366a.setCTALayoutVisibleOrGone();
            }
            this.f4366a.showMoreOfferInPlayTemplate();
            this.f4366a.showBaitClickView();
            MBridgeVideoView.r(this.f4366a);
        }

        private void d() {
            MBridgeVideoView mBridgeVideoView = this.f4366a;
            if (mBridgeVideoView == null) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) mBridgeVideoView.u.getLayoutParams();
            if (layoutParams != null) {
                layoutParams.width = -2;
                layoutParams.height = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 25.0f);
                this.f4366a.u.setLayoutParams(layoutParams);
            }
            int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 5.0f);
            this.f4366a.u.setPadding(iB, 0, iB, 0);
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onPlayCompleted() {
            MBridgeVideoView mBridgeVideoView;
            super.onPlayCompleted();
            this.f4366a.ax = true;
            if (this.m != null) {
                this.f4366a.u.setText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_complete", com.tkay.expressad.foundation.h.i.g));
                this.m.setVideoPlayProgress(100);
                if (this.m.getAdSpaceT() == 2) {
                    this.f4366a.v.setVisibility(4);
                    if (this.f4366a.z != null) {
                        this.f4366a.z.setClickable(false);
                    }
                    if (this.f4366a.t != null) {
                        this.f4366a.t.setClickable(false);
                    }
                }
            } else {
                this.f4366a.u.setText("0");
            }
            MediaEvents mediaEvents = this.f;
            if (mediaEvents != null) {
                mediaEvents.complete();
                z.a("omsdk", "play:  videoEvents.complete()");
            }
            this.f4366a.s.setClickable(false);
            String strB = this.f4366a.b(true);
            CampaignEx campaignEx = this.m;
            if (campaignEx != null && campaignEx.getDynamicTempCode() == 5 && (mBridgeVideoView = this.f4366a) != null && mBridgeVideoView.C != null && this.f4366a.mCampaignSize > this.f4366a.mCurrPlayNum) {
                HashMap map = new HashMap();
                map.put(RequestParameters.POSITION, Integer.valueOf(this.f4366a.mCurrPlayNum));
                if (this.f4366a.mMuteSwitch != 0) {
                    map.put("mute", Integer.valueOf(this.f4366a.mMuteSwitch));
                }
                this.f4366a.C.a(map);
                return;
            }
            this.f4366a.e.a(com.tkay.expressad.video.module.a.a.L, "");
            this.f4366a.e.a(11, strB);
            int i = this.c;
            this.b = i;
            this.f4366a.mCurrentPlayProgressTime = i;
            boolean unused = MBridgeVideoView.al = true;
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onPlayError(String str) {
            z.d("DefaultVideoPlayerStatusListener", "errorStr" + str);
            super.onPlayError(str);
            MBridgeVideoView mBridgeVideoView = this.f4366a;
            if (mBridgeVideoView != null) {
                mBridgeVideoView.e.a(12, str);
            }
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onPlayProgress(int i, int i2) {
            int i3;
            String str;
            int videoCompleteTime;
            String str2;
            StringBuilder sb;
            String string;
            int i4;
            StringBuilder sb2;
            int i5;
            super.onPlayProgress(i, i2);
            if (this.f4366a.f) {
                CampaignEx campaignEx = this.m;
                int i6 = 0;
                if (campaignEx != null) {
                    videoCompleteTime = campaignEx.getVideoCompleteTime();
                    if (videoCompleteTime <= 0) {
                        videoCompleteTime = i2;
                    }
                    com.mbridge.msdk.foundation.b.b.a().b(this.m.getCampaignUnitId() + "_1", i);
                } else {
                    videoCompleteTime = 0;
                }
                str2 = "0";
                if (this.m.isDynamicView() && this.m.getDynamicTempCode() == 5) {
                    try {
                        int i7 = this.f4366a.D;
                        if (this.f4366a != null) {
                            String string2 = (String) this.f4366a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_complete", com.tkay.expressad.foundation.h.i.g));
                            String str3 = (String) this.f4366a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_left", com.tkay.expressad.foundation.h.i.g));
                            if (videoCompleteTime >= 0) {
                                i5 = videoCompleteTime - i;
                                if (i5 > 0) {
                                    string2 = i5 + str3;
                                }
                            } else {
                                i4 = i7 - i;
                                if (i4 <= 0) {
                                    if (videoCompleteTime > 0) {
                                        str2 = string2;
                                    }
                                    this.g.f4365a = i;
                                    this.f4366a.u.setText(str2);
                                    if (this.f4366a.y != null && this.f4366a.y.getVisibility() == 0) {
                                        this.f4366a.y.setProgress(i);
                                    }
                                    if (i4 < this.f4366a.aG && this.f4366a.aI != null && this.f4366a.N) {
                                        this.f4366a.aI.onTimeLessThanReduce(i4);
                                    }
                                } else {
                                    if (videoCompleteTime <= 0) {
                                        sb2 = new StringBuilder();
                                        sb2.append(i4);
                                        sb2.append("");
                                    } else {
                                        sb2 = new StringBuilder();
                                        sb2.append(i4);
                                        sb2.append(str3);
                                    }
                                    string2 = sb2.toString();
                                    i5 = i4;
                                }
                            }
                            i4 = i5;
                            str2 = string2;
                            this.g.f4365a = i;
                            this.f4366a.u.setText(str2);
                            if (this.f4366a.y != null) {
                                this.f4366a.y.setProgress(i);
                            }
                            if (i4 < this.f4366a.aG) {
                                this.f4366a.aI.onTimeLessThanReduce(i4);
                            }
                        }
                    } catch (Exception e) {
                        z.d("DefaultVideoPlayerStatusListener", e.getMessage());
                    }
                } else {
                    if (this.f4366a != null) {
                        if (this.k) {
                            string = String.format("%s", Integer.valueOf(i2 - i));
                        } else {
                            if (videoCompleteTime > i2) {
                                videoCompleteTime = i2;
                            }
                            int i8 = videoCompleteTime <= 0 ? i2 - i : videoCompleteTime - i;
                            if (i8 <= 0) {
                                string = videoCompleteTime > 0 ? (String) this.f4366a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_complete", com.tkay.expressad.foundation.h.i.g)) : "0";
                            } else {
                                if (videoCompleteTime <= 0) {
                                    sb = new StringBuilder();
                                    sb.append(i8);
                                    sb.append("");
                                } else {
                                    sb = new StringBuilder();
                                    sb.append(i8);
                                    sb.append((String) this.f4366a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_left", com.tkay.expressad.foundation.h.i.g)));
                                }
                                string = sb.toString();
                                i6 = i8;
                            }
                            if (i6 < this.f4366a.aG && this.f4366a.aI != null && this.f4366a.N) {
                                this.f4366a.aI.onTimeLessThanReduce(i6);
                            }
                        }
                        this.f4366a.u.setText(string);
                        if (this.f4366a.y != null && this.f4366a.y.getVisibility() == 0) {
                            this.f4366a.y.setProgress(i);
                        }
                    }
                    this.g.f4365a = i;
                }
            }
            this.c = i2;
            this.g.b = i2;
            this.g.c = this.f4366a.ay;
            this.b = i;
            this.f4366a.mCurrentPlayProgressTime = i;
            this.f4366a.e.a(15, this.g);
            MediaEvents mediaEvents = this.f;
            if (mediaEvents != null) {
                int i9 = (i * 100) / i2;
                int i10 = ((i + 1) * 100) / i2;
                if (i9 <= 25 && 25 < i10 && !this.h) {
                    this.h = true;
                    mediaEvents.firstQuartile();
                    z.a("omsdk", "play:  videoEvents.firstQuartile()");
                } else if (i9 <= 50 && 50 < i10 && !this.i) {
                    this.i = true;
                    this.f.midpoint();
                    z.a("omsdk", "play:  videoEvents.midpoint()");
                } else if (i9 <= 75 && 75 < i10 && !this.j) {
                    this.j = true;
                    this.f.thirdQuartile();
                    z.a("omsdk", "play:  videoEvents.thirdQuartile()");
                }
            }
            if (this.f4366a.ak && !this.f4366a.at && this.f4366a.aq == com.mbridge.msdk.foundation.same.a.x) {
                this.f4366a.b();
            }
            try {
                if (this.f4366a != null && this.f4366a.B != null) {
                    int i11 = (i * 100) / i2;
                    this.f4366a.B.setProgress(i11, this.f4366a.mCurrPlayNum - 1);
                    this.m.setVideoPlayProgress(i11);
                }
                if (this.f4366a != null && this.f4366a.H != -1 && i == this.f4366a.H && this.f4366a.b != null && this.f4366a.b.isDynamicView()) {
                    this.f4366a.setCTALayoutVisibleOrGone();
                }
            } catch (Throwable th) {
                z.d("DefaultVideoPlayerStatusListener", th.getMessage());
            }
            int i12 = this.n;
            if (i12 == 100 || this.p || i12 == 0) {
                return;
            }
            if (this.o > i12) {
                this.o = i12 / 2;
            }
            int i13 = this.o;
            if (i13 < 0 || i < (i3 = (i2 * i13) / 100)) {
                return;
            }
            if (this.m.getAdType() == 94 || this.m.getAdType() == 287) {
                str = this.m.getRequestId() + this.m.getId() + this.m.getVideoUrlEncode();
            } else {
                str = this.m.getId() + this.m.getVideoUrlEncode() + this.m.getBidToken();
            }
            com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.l, str);
            if (aVarA != null) {
                aVarA.j();
                this.p = true;
                z.d("DefaultVideoPlayerStatusListener", "CDRate is : " + i3 + " and start download !");
            }
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onBufferingStart(String str) {
            try {
                super.onBufferingStart(str);
                if (this.f != null) {
                    this.f.bufferStart();
                }
                this.f4366a.e.a(13, "");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onBufferingEnd() {
            try {
                super.onBufferingEnd();
                if (this.f != null) {
                    this.f.bufferFinish();
                    z.a("omsdk", "play:  videoEvents.bufferFinish()");
                }
                this.f4366a.e.a(14, "");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override // com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener, com.mbridge.msdk.playercommon.VideoPlayerStatusListener
        public final void onPlaySetDataSourceError(String str) {
            super.onPlaySetDataSourceError(str);
        }

        public final void c() {
            this.f4366a = null;
            boolean unused = MBridgeVideoView.al = false;
        }
    }

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f4365a;
        public int b;
        public boolean c;

        public final String toString() {
            return "ProgressData{curPlayPosition=" + this.f4365a + ", allDuration=" + this.b + '}';
        }
    }

    public void onBackPress() {
        if (this.ad || this.L || this.au) {
            return;
        }
        if (this.ae) {
            b();
            return;
        }
        if (this.af && this.ag) {
            b();
        } else {
            if (this.af || !this.ah) {
                return;
            }
            b();
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void notifyCloseBtn(int i) {
        if (i == 0) {
            this.af = true;
            this.ah = false;
        } else if (i == 1) {
            this.ag = true;
        }
    }

    @Override // com.mbridge.msdk.video.js.i
    public void showIVRewardAlertView(String str) {
        this.e.a(8, "");
    }

    public void notifyVideoClose() {
        this.e.a(2, "");
    }

    public void setAdSession(AdSession adSession) {
        this.an = adSession;
    }

    public void setVideoEvents(MediaEvents mediaEvents) {
        this.ao = mediaEvents;
        b bVar = this.aJ;
        if (bVar != null) {
            bVar.f = mediaEvents;
        }
    }

    public int getMute() {
        return this.am;
    }

    public void setIVRewardEnable(int i, int i2, int i3) {
        this.aq = i;
        this.ar = i2;
        this.as = i3;
    }

    public void setDialogRole(int i) {
        this.aw = i == 1;
        z.d(TAG, i + " " + this.aw);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String b(boolean z) {
        if (!this.ak) {
            return "";
        }
        try {
            JSONObject jSONObject = new JSONObject();
            if (!this.at) {
                jSONObject.put("Alert_window_status", com.mbridge.msdk.foundation.same.a.A);
            }
            if (this.av) {
                jSONObject.put("Alert_window_status", com.mbridge.msdk.foundation.same.a.C);
            }
            if (this.au) {
                jSONObject.put("Alert_window_status", com.mbridge.msdk.foundation.same.a.B);
            }
            jSONObject.put("complete_info", z ? 1 : 2);
            return jSONObject.toString();
        } catch (Exception unused) {
            z.d(TAG, "getIVRewardStatusString ERROR");
            return "";
        }
    }

    public void setNotchPadding(final int i, final int i2, final int i3, final int i4) {
        try {
            z.d(TAG, "NOTCH VideoView " + String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) getLayoutParams();
            if (!(Math.max(Math.max(layoutParams.leftMargin, layoutParams.rightMargin), Math.max(layoutParams.topMargin, layoutParams.bottomMargin)) > Math.max(Math.max(i, i2), Math.max(i3, i4))) && this.w != null) {
                this.w.postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.12
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (MBridgeVideoView.this.w == null) {
                            return;
                        }
                        MBridgeVideoView.this.w.setVisibility(0);
                        if (MBridgeVideoView.this.b == null || MBridgeVideoView.this.b.getAdSpaceT() == 2) {
                            return;
                        }
                        MBridgeVideoView.this.w.setPadding(i, i3, i2, i4);
                        MBridgeVideoView.this.w.startAnimation(MBridgeVideoView.this.aB);
                    }
                }, 200L);
            }
            if (this.u.getVisibility() == 0) {
                j();
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void j() {
        if (com.mbridge.msdk.foundation.b.b.a().b()) {
            this.b.setCampaignUnitId(this.U);
            com.mbridge.msdk.foundation.b.b.a().a(this.U + "_1", this.b);
            if (this.z != null) {
                com.mbridge.msdk.foundation.b.b.a().a(this.U + "_1", this.z);
                return;
            }
            return;
        }
        FeedBackButton feedBackButton = this.z;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }

    private void a(String str) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.13
            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                if (bitmap != null) {
                    try {
                        if (bitmap.isRecycled() || MBridgeVideoView.this.x == null) {
                            return;
                        }
                        MBridgeVideoView.this.x.setVisibility(0);
                        MBridgeVideoView.this.x.setImageBitmap(com.mbridge.msdk.video.dynview.i.a.a().a(bitmap, 20));
                    } catch (Throwable th) {
                        z.d(MBridgeVideoView.TAG, th.getMessage());
                    }
                }
            }

            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onFailedLoad(String str2, String str3) {
                z.d(MBridgeVideoView.TAG, str2);
            }
        });
    }

    public void setCTALayoutVisibleOrGone() {
        FrameLayout frameLayout;
        if (this.b != null && this.b.isDynamicView() && (frameLayout = this.E) != null && this.H >= -1) {
            MBridgeClickCTAView mBridgeClickCTAView = this.F;
            if (mBridgeClickCTAView == null && frameLayout != null) {
                if (mBridgeClickCTAView == null) {
                    MBridgeClickCTAView mBridgeClickCTAView2 = new MBridgeClickCTAView(getContext());
                    this.F = mBridgeClickCTAView2;
                    mBridgeClickCTAView2.setCampaign(this.b);
                    this.F.setUnitId(this.U);
                    com.mbridge.msdk.video.module.a.a aVar = this.K;
                    if (aVar != null) {
                        this.F.setNotifyListener(new h(aVar));
                    }
                    this.F.preLoadData(this.G);
                }
                this.E.addView(this.F);
            }
            int i = this.H;
            if (i >= 0) {
                this.E.setVisibility(0);
                return;
            }
            if (i == -1) {
                if (this.E.getVisibility() != 0) {
                    this.E.setVisibility(0);
                    postDelayed(this.aL, 3000L);
                } else {
                    this.E.setVisibility(8);
                    getHandler().removeCallbacks(this.aL);
                }
            }
        }
    }

    public void showMoreOfferInPlayTemplate() {
        if (this.b == null || this.I == null || !this.b.isDynamicView() || this.b.getRewardTemplateMode() == null) {
            return;
        }
        String strE = this.b.getRewardTemplateMode().e();
        if (TextUtils.isEmpty(strE)) {
            return;
        }
        try {
            String strA = ak.a(strE, "mof");
            if (TextUtils.isEmpty(strA) || Integer.parseInt(strA) != 1) {
                return;
            }
            com.mbridge.msdk.video.dynview.moffer.a.a().a(this.b, this, new h(this.K), 1);
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    public void showBaitClickView() {
        int i;
        if (this.b == null || !this.b.isDynamicView() || this.b.getRewardTemplateMode() == null) {
            return;
        }
        String strE = this.b.getRewardTemplateMode().e();
        if (TextUtils.isEmpty(strE)) {
            return;
        }
        try {
            String strA = ak.a(strE, "bait_click");
            if (TextUtils.isEmpty(strA) || (i = Integer.parseInt(strA)) == 0 || this.aC == null) {
                return;
            }
            this.aC.setVisibility(0);
            this.aC.init(i);
            this.aC.startAnimation();
            this.aC.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.3
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    MBridgeVideoView.a(MBridgeVideoView.this, "bait_click_clicked");
                }
            });
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    public void showRewardPopView() {
        AcquireRewardPopViewParameters acquireRewardPopViewParameters;
        MBAcquireRewardPopView mBAcquireRewardPopView = this.aI;
        if (mBAcquireRewardPopView == null || (acquireRewardPopViewParameters = this.aH) == null) {
            return;
        }
        try {
            mBAcquireRewardPopView.init(acquireRewardPopViewParameters);
            this.aI.setVisibility(0);
            setCover(true);
            f();
            this.N = true;
            if (this.b != null) {
                this.b.isRewardPopViewShowed = true;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    public void onActivityResume() {
        try {
            if (this.aI != null) {
                this.aI.onResume();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void onActivityPause() {
        try {
            if (this.aI != null) {
                this.aI.onPause();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void onActivityStop() {
        try {
            if (this.aI != null) {
                this.aI.onStop();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int k() {
        int videoCompleteTime = 0;
        try {
            int iL = l();
            if (this.b == null) {
                return iL;
            }
            videoCompleteTime = this.b.getVideoCompleteTime();
            if (this.b.getDynamicTempCode() != 5 && videoCompleteTime > iL) {
                videoCompleteTime = iL;
            }
            if (videoCompleteTime <= 0) {
                return iL;
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
        return videoCompleteTime;
    }

    private int l() {
        try {
            int iB = this.aJ != null ? this.aJ.b() : 0;
            return iB == 0 ? this.b.getVideoLength() : iB;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return 0;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        try {
            if (this.aL != null) {
                getHandler().removeCallbacks(this.aL);
            }
            if (this.aD != 0) {
                removeCallbacks(this.aM);
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void releasePlayer() {
        try {
            if (this.s != null && !this.ac) {
                this.s.release();
            }
            if (this.aJ != null) {
                this.aJ.c();
            }
            if (this.K != null) {
                this.K = null;
            }
        } catch (Exception e) {
            z.d(TAG, e.getMessage());
        }
    }

    static /* synthetic */ void a(MBridgeVideoView mBridgeVideoView, String str) {
        JSONObject jSONObject;
        JSONException e;
        if (mBridgeVideoView.K != null) {
            if (mBridgeVideoView.b != null) {
                try {
                    CampaignEx.c rewardTemplateMode = mBridgeVideoView.b.getRewardTemplateMode();
                    String str2 = "";
                    if (rewardTemplateMode != null) {
                        str2 = rewardTemplateMode.b() + "";
                    }
                    e.a(mBridgeVideoView.f4304a, str, mBridgeVideoView.b.getCampaignUnitId(), mBridgeVideoView.b.isBidCampaign(), mBridgeVideoView.b.getRequestId(), mBridgeVideoView.b.getRequestIdNotice(), mBridgeVideoView.b.getId(), str2);
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            try {
                jSONObject = new JSONObject();
            } catch (JSONException e3) {
                jSONObject = null;
                e = e3;
            }
            try {
                jSONObject.put(com.mbridge.msdk.foundation.same.a.p, mBridgeVideoView.a(0));
            } catch (JSONException e4) {
                e = e4;
                e.printStackTrace();
            }
            mBridgeVideoView.K.a(105, jSONObject);
            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                try {
                    com.mbridge.msdk.video.module.b.b.d(com.mbridge.msdk.foundation.controller.a.f().j().getApplicationContext(), mBridgeVideoView.b);
                } catch (Exception e5) {
                    z.d(TAG, e5.getMessage());
                }
            }
        }
    }

    static /* synthetic */ void r(MBridgeVideoView mBridgeVideoView) {
        String strE;
        if (mBridgeVideoView.b == null || !mBridgeVideoView.b.isDynamicView() || mBridgeVideoView.J) {
            return;
        }
        if (!TextUtils.isEmpty(mBridgeVideoView.b.getMof_template_url())) {
            strE = mBridgeVideoView.b.getMof_template_url();
        } else if (mBridgeVideoView.b.getRewardTemplateMode() == null) {
            return;
        } else {
            strE = mBridgeVideoView.b.getRewardTemplateMode().e();
        }
        if (TextUtils.isEmpty(strE)) {
            return;
        }
        try {
            String strA = ak.a(strE, "guideShow");
            String strA2 = ak.a(strE, "guideDelay");
            String strA3 = ak.a(strE, "guideTime");
            String strA4 = ak.a(strE, "guideRewardTime");
            if (!TextUtils.isEmpty(strA)) {
                mBridgeVideoView.aD = Integer.parseInt(strA);
            }
            if (!TextUtils.isEmpty(strA2)) {
                int i = Integer.parseInt(strA2);
                mBridgeVideoView.aE = i;
                if (i > 10 || i < 3) {
                    mBridgeVideoView.aE = 5;
                }
            }
            if (!TextUtils.isEmpty(strA3)) {
                int i2 = Integer.parseInt(strA3);
                mBridgeVideoView.aF = i2;
                if (i2 > 10 || i2 < 3) {
                    mBridgeVideoView.aF = 5;
                }
            }
            if (!TextUtils.isEmpty(strA4)) {
                int i3 = Integer.parseInt(strA4);
                mBridgeVideoView.aG = i3;
                if (i3 > 10 || i3 < 5) {
                    mBridgeVideoView.aG = 5;
                }
            }
            if (mBridgeVideoView.aD > 0 && mBridgeVideoView.aD <= 2) {
                int iK = mBridgeVideoView.k();
                if (iK == 0 || iK > mBridgeVideoView.aE) {
                    int i4 = iK - mBridgeVideoView.aE;
                    if (i4 >= 0 && mBridgeVideoView.aG > i4) {
                        mBridgeVideoView.aG = i4;
                    }
                    int iL = mBridgeVideoView.l();
                    if (mBridgeVideoView.aG >= iL) {
                        mBridgeVideoView.aG = iL - mBridgeVideoView.aE;
                    }
                    if (mBridgeVideoView.aE >= iL) {
                        return;
                    }
                    ArrayList<String> arrayList = new ArrayList<>();
                    arrayList.add(mBridgeVideoView.b.getAppName());
                    com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
                    mBridgeVideoView.aH = new AcquireRewardPopViewParameters.Builder("", mBridgeVideoView.U, mBridgeVideoView.aD, aVarG != null ? aVarG.ah() : "US").setAutoDismissTime(mBridgeVideoView.aF).setReduceTime(mBridgeVideoView.aG).setBehaviourListener(new AcquireRewardPopViewBehaviourListener() { // from class: com.mbridge.msdk.video.module.MBridgeVideoView.4
                        @Override // com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener
                        public final void onReceivedSuccess(int i5) {
                            MBridgeVideoView.this.N = false;
                            int iK2 = MBridgeVideoView.this.k() - i5;
                            MBridgeVideoView.this.b.setVideoCompleteTime(iK2);
                            MBridgeVideoView.this.g();
                            if (MBridgeVideoView.this.e != null) {
                                MBridgeVideoView.this.e.a(TsExtractor.TS_STREAM_TYPE_HDMV_DTS, Integer.valueOf(iK2));
                            }
                            e.a(MBridgeVideoView.this.b, MBridgeVideoView.this.U, MBridgeVideoView.this.aD, 1, "");
                        }

                        @Override // com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener
                        public final void onReceivedFail(String str) {
                            MBridgeVideoView.this.N = false;
                            MBridgeVideoView.this.g();
                            e.a(MBridgeVideoView.this.b, MBridgeVideoView.this.U, MBridgeVideoView.this.aD, 2, str);
                        }

                        @Override // com.mbridge.msdk.dycreator.baseview.rewardpopview.AcquireRewardPopViewBehaviourListener
                        public final void onOutOfContentClicked(float f, float f2) {
                            if (MBridgeVideoView.this.K != null) {
                                MBridgeVideoView.this.K.a(105, "");
                            }
                        }
                    }).setRightAnswerList(arrayList).build();
                    mBridgeVideoView.postDelayed(mBridgeVideoView.aM, 1000L);
                }
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }
}
