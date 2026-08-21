package com.tkay.expressad.video.module;

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
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener;
import com.tkay.expressad.playercommon.PlayerView;
import com.tkay.expressad.video.dynview.f.h;
import com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar;
import com.tkay.expressad.video.dynview.widget.TkayBaitClickView;
import com.tkay.expressad.video.signal.f;
import com.tkay.expressad.video.signal.j;
import com.tkay.expressad.video.widget.SoundImageView;
import com.tkay.expressad.videocommon.e.d;
import com.tkay.expressad.widget.FeedBackButton;
import com.tkay.expressad.widget.a.c;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class TkayVideoView extends TkayBaseView implements f, j {
    private static int A = 0;
    private static int B = 0;
    private static final String C = "2";
    public static final String TAG = "TkayVideoView";
    private static boolean av = false;
    private static final String s = "tkay_reward_videoview_item";
    private static final int t = 1;
    private static final float u = 1280.0f;
    private static final float v = 720.0f;
    private static final float w = 0.1f;
    private static int x;
    private static int y;
    private static int z;
    private PlayerView D;
    private SoundImageView E;
    private TextView F;
    private View G;
    private RelativeLayout H;
    private ImageView I;
    private ProgressBar J;
    private FeedBackButton K;
    private boolean L;
    private TYSegmentsProgressBar M;
    private com.tkay.expressad.video.dynview.f.a N;
    private int O;
    private FrameLayout P;
    private TkayClickCTAView Q;
    private com.tkay.expressad.video.signal.factory.b R;
    private int S;
    private RelativeLayout T;
    private com.tkay.expressad.video.module.a.a U;
    private boolean V;
    private boolean W;
    private int aA;
    private boolean aB;
    private boolean aC;
    private boolean aD;
    private boolean aE;
    private boolean aF;
    private boolean aG;
    private boolean aH;
    private boolean aI;
    private AlphaAnimation aJ;
    private TkayBaitClickView aK;
    private b aL;
    private boolean aM;
    private Runnable aN;
    private String aa;
    private int ab;
    private int ac;
    private int ad;
    private int ae;
    private com.tkay.expressad.widget.a.b af;
    private c ag;
    private String ah;
    private double ai;
    private double aj;
    private boolean ak;
    private boolean al;
    private boolean am;
    private boolean an;
    private boolean ao;
    private boolean ap;
    private boolean aq;
    private boolean ar;
    private boolean as;
    private int at;
    private boolean au;
    private int aw;
    private String ax;
    private int ay;
    private int az;
    public List<com.tkay.expressad.foundation.d.c> mCampOrderViewData;
    public int mCampaignSize;
    public int mCurrPlayNum;
    public int mCurrentPlayProgressTime;
    public int mMuteSwitch;

    @Override
    public void init(Context context) {
    }

    static boolean e(TkayVideoView tkayVideoView) {
        tkayVideoView.aH = true;
        return true;
    }

    static boolean h(TkayVideoView tkayVideoView) {
        tkayVideoView.V = false;
        return false;
    }

    static boolean k(TkayVideoView tkayVideoView) {
        tkayVideoView.aC = true;
        return true;
    }

    static boolean l(TkayVideoView tkayVideoView) {
        tkayVideoView.aG = true;
        return true;
    }

    static boolean n(TkayVideoView tkayVideoView) {
        tkayVideoView.aD = true;
        return true;
    }

    static boolean p(TkayVideoView tkayVideoView) {
        tkayVideoView.ar = true;
        return true;
    }

    static boolean q(TkayVideoView tkayVideoView) {
        tkayVideoView.L = true;
        return true;
    }

    static boolean w(TkayVideoView tkayVideoView) {
        tkayVideoView.aF = true;
        return true;
    }

    public void setContainerViewOnNotifyListener(com.tkay.expressad.video.module.a.a aVar) {
        this.U = aVar;
    }

    public void setCamPlayOrderCallback(com.tkay.expressad.video.dynview.f.a aVar, List<com.tkay.expressad.foundation.d.c> list, int i, int i2) {
        TYSegmentsProgressBar tYSegmentsProgressBar;
        this.N = aVar;
        this.mCampaignSize = list.size();
        this.mCurrPlayNum = i;
        this.O = i2;
        this.mCampOrderViewData = list;
        if (this.b == null || this.b.k() != 5 || (tYSegmentsProgressBar = this.M) == null || this.mCampOrderViewData == null) {
            return;
        }
        if (this.mCampaignSize > 1) {
            tYSegmentsProgressBar.setVisibility(0);
            this.M.init(this.mCampaignSize, 2);
            for (int i3 = 0; i3 < this.mCampOrderViewData.size(); i3++) {
                int iAF = this.mCampOrderViewData.get(i3).aF();
                if (iAF > 0) {
                    this.M.setProgress(iAF, i3);
                }
            }
            return;
        }
        tYSegmentsProgressBar.setVisibility(8);
    }

    public boolean isShowingAlertView() {
        return this.V;
    }

    public boolean isInstallDialogShowing() {
        return this.W;
    }

    public void setUnitId(String str) {
        this.ah = str;
        b bVar = this.aL;
        if (bVar != null) {
            bVar.a(str);
        }
    }

    public String getUnitId() {
        return this.ah;
    }

    public boolean isMiniCardShowing() {
        return this.an;
    }

    public boolean isShowingTransparent() {
        return this.as;
    }

    public void setShowingTransparent(boolean z2) {
        this.as = z2;
    }

    public TkayVideoView(Context context) {
        super(context);
        this.mMuteSwitch = 0;
        this.O = 0;
        this.mCampaignSize = 1;
        this.mCurrPlayNum = 1;
        this.mCurrentPlayProgressTime = 0;
        this.V = false;
        this.W = false;
        this.ah = "";
        this.ak = false;
        this.al = false;
        this.am = false;
        this.an = false;
        this.ao = false;
        this.ap = false;
        this.aq = false;
        this.ar = false;
        this.as = false;
        this.au = false;
        this.aw = 2;
        this.aB = false;
        this.aC = false;
        this.aD = false;
        this.aE = true;
        this.aF = false;
        this.aG = false;
        this.aH = false;
        this.aI = false;
        this.aL = new b(this);
        this.aM = false;
        this.aN = new Runnable() {
            @Override
            public final void run() {
                if (TkayVideoView.this.P != null) {
                    TkayVideoView.this.P.setVisibility(8);
                }
            }
        };
    }

    public TkayVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mMuteSwitch = 0;
        this.O = 0;
        this.mCampaignSize = 1;
        this.mCurrPlayNum = 1;
        this.mCurrentPlayProgressTime = 0;
        this.V = false;
        this.W = false;
        this.ah = "";
        this.ak = false;
        this.al = false;
        this.am = false;
        this.an = false;
        this.ao = false;
        this.ap = false;
        this.aq = false;
        this.ar = false;
        this.as = false;
        this.au = false;
        this.aw = 2;
        this.aB = false;
        this.aC = false;
        this.aD = false;
        this.aE = true;
        this.aF = false;
        this.aG = false;
        this.aH = false;
        this.aI = false;
        this.aL = new b(this);
        this.aM = false;
        this.aN = new Runnable() {
            @Override
            public final void run() {
                if (TkayVideoView.this.P != null) {
                    TkayVideoView.this.P.setVisibility(8);
                }
            }
        };
    }

    public void setVideoLayout(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null) {
            this.b = cVar;
            this.i = cVar.j();
        }
        if (this.i) {
            new com.tkay.expressad.video.dynview.j.c();
            com.tkay.expressad.video.dynview.c cVarA = com.tkay.expressad.video.dynview.j.c.a(this, cVar);
            com.tkay.expressad.video.dynview.b.a();
            com.tkay.expressad.video.dynview.b.a(cVarA, new 1(this, cVarA));
            return;
        }
        int iFindLayout = findLayout(s);
        if (iFindLayout > 0) {
            this.c.inflate(iFindLayout, this);
            b();
        }
        av = false;
    }

    private void a() {
        int iFindLayout = findLayout(s);
        if (iFindLayout > 0) {
            this.c.inflate(iFindLayout, this);
            b();
        }
        av = false;
    }

    final class 1 implements h {
        final ViewGroup a;
        final com.tkay.expressad.video.dynview.c b;

        1(ViewGroup viewGroup, com.tkay.expressad.video.dynview.c cVar) {
            this.a = viewGroup;
            this.b = cVar;
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.a aVar) {
            if (this.a != null && aVar.a() != null) {
                aVar.a().setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                this.a.addView(aVar.a());
            }
            if (aVar.b() != null) {
                Iterator<View> it = aVar.b().iterator();
                while (it.hasNext()) {
                    it.next().setOnClickListener(new com.tkay.expressad.widget.a() {
                        @Override
                        protected final void a(View view) {
                            JSONObject jSONObject;
                            JSONException e;
                            if (TkayVideoView.this.U != null) {
                                try {
                                    jSONObject = new JSONObject();
                                } catch (JSONException e2) {
                                    jSONObject = null;
                                    e = e2;
                                }
                                try {
                                    jSONObject.put(com.tkay.expressad.foundation.g.a.ce, TkayVideoView.this.a(0));
                                } catch (JSONException e3) {
                                    e = e3;
                                    e.printStackTrace();
                                }
                                TkayVideoView.this.U.a(105, jSONObject);
                                m.a().f();
                            }
                        }
                    });
                }
            }
            TkayVideoView.this.aI = aVar.c();
            TkayVideoView.this.b();
            boolean unused = TkayVideoView.av = false;
            TkayVideoView.this.S = this.b.j();
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.c.b bVar) {
            new StringBuilder("errorMsg:").append(bVar.b());
        }
    }

    private void a(ViewGroup viewGroup, com.tkay.expressad.foundation.d.c cVar) {
        new com.tkay.expressad.video.dynview.j.c();
        com.tkay.expressad.video.dynview.c cVarA = com.tkay.expressad.video.dynview.j.c.a(viewGroup, cVar);
        com.tkay.expressad.video.dynview.b.a();
        com.tkay.expressad.video.dynview.b.a(cVarA, new 1(viewGroup, cVarA));
    }

    private void b() {
        this.f = f();
        c();
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
        this.aJ = alphaAnimation;
        alphaAnimation.setDuration(200L);
    }

    public void setIsIV(boolean z2) {
        this.au = z2;
        b bVar = this.aL;
        if (bVar != null) {
            bVar.a(z2);
        }
    }

    @Override
    public void setCampaign(com.tkay.expressad.foundation.d.c cVar) {
        int iV;
        super.setCampaign(cVar);
        b bVar = this.aL;
        if (bVar != null) {
            bVar.a(cVar);
            b bVar2 = this.aL;
            if (cVar != null && cVar.ao() != -1) {
                iV = cVar.ao();
            } else {
                iV = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false).v();
            }
            bVar2.a(iV, com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false).x());
        }
    }

    public void setSoundState(int i) {
        this.aw = i;
    }

    @Override
    protected final void c() {
        super.c();
        if (this.f) {
            if (this.i) {
                if (com.tkay.expressad.video.dynview.i.c.a(this.b) == -1 || com.tkay.expressad.video.dynview.i.c.a(this.b) == 100) {
                    this.D.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            if (TkayVideoView.this.e != null) {
                                TkayVideoView.this.e.a(1, "");
                            }
                            TkayVideoView.this.setCTALayoutVisibleOrGone();
                        }
                    });
                }
            } else {
                this.D.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        if (TkayVideoView.this.e != null) {
                            TkayVideoView.this.e.a(1, "");
                        }
                    }
                });
            }
            SoundImageView soundImageView = this.E;
            if (soundImageView != null) {
                soundImageView.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        Integer num = 2;
                        if (TkayVideoView.this.D != null && TkayVideoView.this.D.isSilent()) {
                            num = 1;
                        }
                        if (num.intValue() == 1) {
                            TkayVideoView.this.mMuteSwitch = 2;
                        } else {
                            TkayVideoView.this.mMuteSwitch = 1;
                        }
                        if (TkayVideoView.this.e != null) {
                            TkayVideoView.this.e.a(5, num);
                        }
                    }
                });
            }
            this.G.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (!TkayVideoView.this.au) {
                        TkayVideoView.this.e();
                        return;
                    }
                    TkayVideoView.e(TkayVideoView.this);
                    if (TkayVideoView.this.aE) {
                        TkayVideoView.this.e();
                    } else if (TkayVideoView.this.e != null) {
                        TkayVideoView.this.e.a(com.tkay.expressad.video.module.a.a.N, "");
                    }
                }
            });
        }
    }

    private void e() {
        try {
            if (this.au && (this.ay == com.tkay.expressad.foundation.g.a.cr || this.ay == com.tkay.expressad.foundation.g.a.cs)) {
                if (this.aB) {
                    if (this.ay != com.tkay.expressad.foundation.g.a.cs || this.e == null) {
                        return;
                    }
                    this.e.a(2, b(this.aF));
                    return;
                }
                if (this.ay == com.tkay.expressad.foundation.g.a.cs && this.aH) {
                    if (this.e != null) {
                        this.e.a(2, b(this.aF));
                        return;
                    }
                    return;
                }
                if (this.aE) {
                    int curPosition = this.D.getCurPosition() / 1000;
                    int iBi = (int) ((curPosition / (this.D.getDuration() == 0 ? this.b.bi() : this.D.getDuration())) * 100.0f);
                    if (this.ay == com.tkay.expressad.foundation.g.a.cr) {
                        h();
                        if (this.az == com.tkay.expressad.foundation.g.a.ct && iBi >= this.aA) {
                            if (this.e != null) {
                                this.e.a(2, b(this.aF));
                                return;
                            }
                            return;
                        } else if (this.az == com.tkay.expressad.foundation.g.a.cu && curPosition >= this.aA) {
                            if (this.e != null) {
                                this.e.a(2, b(this.aF));
                                return;
                            }
                            return;
                        } else if (this.e != null) {
                            this.e.a(8, "");
                        }
                    }
                    if (this.ay == com.tkay.expressad.foundation.g.a.cs) {
                        if (this.az == com.tkay.expressad.foundation.g.a.ct && iBi >= this.aA) {
                            h();
                            if (this.e != null) {
                                this.e.a(8, "");
                                return;
                            }
                            return;
                        }
                        if (this.az != com.tkay.expressad.foundation.g.a.cu || curPosition < this.aA) {
                            return;
                        }
                        h();
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
            if (this.b != null && this.b.f() != 2) {
                int i = this.b.i();
                int curPosition2 = this.D.getCurPosition() / 1000;
                boolean z2 = false;
                if (this.b.k() != 5 || this.mCurrPlayNum <= 1 ? !((i <= 0 || curPosition2 >= i) && i != 0) : !(i == 0 || i <= 0 || curPosition2 >= i)) {
                    z2 = true;
                }
                if (z2 && this.ad == 1 && !this.as) {
                    h();
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
            e.getMessage();
        }
    }

    @Override
    public void hideAlertView(int i) {
        if (this.V) {
            this.V = false;
            this.aB = true;
            setShowingAlertViewCover(false);
            com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false);
            if (i == 0) {
                i();
                if (this.au) {
                    if (this.ay == com.tkay.expressad.foundation.g.a.cs || this.ay == com.tkay.expressad.foundation.g.a.cr) {
                        this.aC = true;
                        if (this.e != null) {
                            this.e.a(com.tkay.expressad.video.module.a.a.O, "");
                        }
                        this.aG = true;
                        gonePlayingCloseView();
                        return;
                    }
                    return;
                }
                return;
            }
            this.aD = true;
            if (this.au && this.ay == com.tkay.expressad.foundation.g.a.cs) {
                i();
                return;
            }
            if (this.au && this.ay == com.tkay.expressad.foundation.g.a.cr) {
                if (this.e != null) {
                    this.e.a(2, b(this.aF));
                }
            } else if (this.e != null) {
                this.e.a(2, "");
            }
        }
    }

    @Override
    public void alertWebViewShowed() {
        this.V = true;
        setShowingAlertViewCover(true);
    }

    @Override
    public void dismissAllAlert() {
        com.tkay.expressad.widget.a.b bVar = this.af;
        if (bVar != null) {
            bVar.dismiss();
        }
        if (this.e != null) {
            this.e.a(125, "");
        }
    }

    @Override
    public void showAlertView() {
        if (this.an) {
            return;
        }
        if (this.ag == null) {
            this.ag = new c() {
                @Override
                public final void c() {
                    a();
                }

                @Override
                public final void a() {
                    TkayVideoView.h(TkayVideoView.this);
                    TkayVideoView tkayVideoView = TkayVideoView.this;
                    tkayVideoView.setShowingAlertViewCover(tkayVideoView.V);
                    if (TkayVideoView.this.au && (TkayVideoView.this.ay == com.tkay.expressad.foundation.g.a.cs || TkayVideoView.this.ay == com.tkay.expressad.foundation.g.a.cr)) {
                        TkayVideoView.k(TkayVideoView.this);
                        if (TkayVideoView.this.e != null) {
                            TkayVideoView.this.e.a(com.tkay.expressad.video.module.a.a.O, "");
                        }
                        TkayVideoView.l(TkayVideoView.this);
                        TkayVideoView.this.gonePlayingCloseView();
                    }
                    TkayVideoView.this.i();
                }

                @Override
                public final void b() {
                    TkayVideoView.h(TkayVideoView.this);
                    TkayVideoView.n(TkayVideoView.this);
                    TkayVideoView tkayVideoView = TkayVideoView.this;
                    tkayVideoView.setShowingAlertViewCover(tkayVideoView.V);
                    if (!TkayVideoView.this.au || TkayVideoView.this.ay != com.tkay.expressad.foundation.g.a.cr) {
                        if (TkayVideoView.this.au && TkayVideoView.this.ay == com.tkay.expressad.foundation.g.a.cs) {
                            TkayVideoView.this.i();
                            return;
                        } else {
                            if (TkayVideoView.this.e != null) {
                                TkayVideoView.this.e.a(2, "");
                                return;
                            }
                            return;
                        }
                    }
                    if (TkayVideoView.this.e != null) {
                        com.tkay.expressad.video.module.a.a aVar = TkayVideoView.this.e;
                        TkayVideoView tkayVideoView2 = TkayVideoView.this;
                        aVar.a(2, tkayVideoView2.b(tkayVideoView2.aF));
                    }
                }
            };
        }
        if (this.af == null) {
            this.af = new com.tkay.expressad.widget.a.b(getContext(), this.ag);
        }
        if (this.au) {
            this.af.a(this.ay, this.ah);
        } else {
            this.af.b();
        }
        PlayerView playerView = this.D;
        if (playerView == null || playerView.isComplete()) {
            return;
        }
        this.af.show();
        this.aB = true;
        this.V = true;
        setShowingAlertViewCover(true);
        com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false);
        this.ax = d.J();
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
        this.R = bVar;
        if (this.f) {
            if (!TextUtils.isEmpty(this.aa) && this.b != null) {
                if (this.b != null && w.b(this.b.U())) {
                    String[] strArrSplit = this.b.U().split("x");
                    if (strArrSplit.length == 2) {
                        if (t.b(strArrSplit[0]) > 0.0d) {
                            this.ai = t.b(strArrSplit[0]);
                        }
                        if (t.b(strArrSplit[1]) > 0.0d) {
                            this.aj = t.b(strArrSplit[1]);
                        }
                        StringBuilder sb = new StringBuilder("TkayBaseView mVideoW:");
                        sb.append(this.ai);
                        sb.append("  mVideoH:");
                        sb.append(this.aj);
                    }
                    if (this.ai <= 0.0d) {
                        this.ai = 1280.0d;
                    }
                    if (this.aj <= 0.0d) {
                        this.aj = 720.0d;
                    }
                }
                this.D.initBufferIngParam(this.ac);
                this.D.initVFPData(this.aa, this.b.S(), this.b.ao(), this.aL);
                soundOperate(this.aw, -1, null);
            }
        } else if (this.e != null) {
            this.e.a(12, "TYVideoView initSuccess false");
        }
        av = false;
    }

    @Override
    public void defaultShow() {
        super.defaultShow();
        this.ak = true;
        showVideoLocation(0, 0, t.f(this.a), t.e(this.a), 0, 0, 0, 0, 0);
        videoOperate(1);
        if (this.ab == 0) {
            closeVideoOperate(-1, 2);
        }
    }

    @Override
    public void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        StringBuilder sb = new StringBuilder("showVideoLocation marginTop:");
        sb.append(i);
        sb.append(" marginLeft:");
        sb.append(i2);
        sb.append(" width:");
        sb.append(i3);
        sb.append("  height:");
        sb.append(i4);
        sb.append(" radius:");
        sb.append(i5);
        sb.append(" borderTop:");
        sb.append(i6);
        sb.append(" borderLeft:");
        sb.append(i7);
        sb.append(" borderWidth:");
        sb.append(i8);
        sb.append(" borderHeight:");
        sb.append(i9);
        if (this.f) {
            this.H.setPadding(0, 0, 0, 0);
            setVisibility(0);
            if (this.H.getVisibility() != 0) {
                this.H.setVisibility(0);
            }
            if (this.F.getVisibility() == 0) {
                n();
            }
            if ((i3 > 0 && i4 > 0 && t.f(this.a) >= i3 && t.e(this.a) >= i4) && !this.ak) {
                y = i6;
                z = i7;
                A = i8 + 4;
                B = i9 + 4;
                float f = i3 / i4;
                float f2 = 0.0f;
                try {
                    f2 = (float) (this.ai / this.aj);
                } catch (Throwable th) {
                    th.getMessage();
                }
                if (i5 > 0) {
                    x = i5;
                    if (i5 > 0) {
                        GradientDrawable gradientDrawable = new GradientDrawable();
                        gradientDrawable.setCornerRadius(t.b(getContext(), i5));
                        gradientDrawable.setColor(-1);
                        gradientDrawable.setStroke(1, 0);
                        if (Build.VERSION.SDK_INT >= 16) {
                            setBackground(gradientDrawable);
                            this.D.setBackground(gradientDrawable);
                        } else {
                            setBackgroundDrawable(gradientDrawable);
                            this.D.setBackgroundDrawable(gradientDrawable);
                        }
                        if (Build.VERSION.SDK_INT >= 21) {
                            setClipToOutline(true);
                            this.D.setClipToOutline(true);
                        }
                    }
                }
                if (Math.abs(f - f2) <= 0.1f || this.at == 1) {
                    l();
                    if (this.as) {
                        setLayoutCenter(i3, i4);
                        if (av) {
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
                l();
                videoOperate(1);
                return;
            }
            l();
        }
    }

    private void b(int i) {
        if (i > 0) {
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setCornerRadius(t.b(getContext(), i));
            gradientDrawable.setColor(-1);
            gradientDrawable.setStroke(1, 0);
            if (Build.VERSION.SDK_INT >= 16) {
                setBackground(gradientDrawable);
                this.D.setBackground(gradientDrawable);
            } else {
                setBackgroundDrawable(gradientDrawable);
                this.D.setBackgroundDrawable(gradientDrawable);
            }
            if (Build.VERSION.SDK_INT >= 21) {
                setClipToOutline(true);
                this.D.setClipToOutline(true);
            }
        }
    }

    @Override
    public void soundOperate(int i, int i2) {
        soundOperate(i, i2, "2");
    }

    @Override
    public void soundOperate(int i, int i2, String str) {
        SoundImageView soundImageView;
        if (this.f) {
            this.aw = i;
            if (i == 1) {
                SoundImageView soundImageView2 = this.E;
                if (soundImageView2 != null) {
                    soundImageView2.setSoundStatus(false);
                }
                this.D.closeSound();
            } else if (i == 2) {
                SoundImageView soundImageView3 = this.E;
                if (soundImageView3 != null) {
                    soundImageView3.setSoundStatus(true);
                }
                this.D.openSound();
            }
            if (this.b != null && this.b.j()) {
                SoundImageView soundImageView4 = this.E;
                if (soundImageView4 != null) {
                    soundImageView4.setVisibility(0);
                }
            } else if (i2 == 1) {
                SoundImageView soundImageView5 = this.E;
                if (soundImageView5 != null) {
                    soundImageView5.setVisibility(8);
                }
            } else if (i2 == 2 && (soundImageView = this.E) != null) {
                soundImageView.setVisibility(0);
            }
        }
        if (str == null || !str.equals("2") || this.e == null) {
            return;
        }
        this.e.a(7, Integer.valueOf(i));
    }

    @Override
    public void videoOperate(int i) {
        if (this.f) {
            if (i == 1) {
                if (getVisibility() != 0 || !isfront() || this.V || this.an || this.W || com.tkay.expressad.foundation.f.b.c) {
                    return;
                }
                i();
                return;
            }
            if (i == 2) {
                if (getVisibility() == 0) {
                    h();
                    return;
                }
                return;
            }
            if (i == 3) {
                if (this.am) {
                    return;
                }
                this.D.release();
                this.am = true;
                return;
            }
            if (i == 5) {
                this.W = true;
                if (this.am) {
                    return;
                }
                h();
                return;
            }
            if (i == 4) {
                this.W = false;
                if (this.am || isMiniCardShowing()) {
                    return;
                }
                i();
            }
        }
    }

    @Override
    public void closeVideoOperate(int i, int i2) {
        if (i == 1) {
            this.aH = true;
            if (getVisibility() == 0) {
                e();
            }
        }
        if (i2 == 1) {
            gonePlayingCloseView();
            return;
        }
        if (i2 == 2) {
            if ((this.aG && getVisibility() == 0) || !this.f || this.G.getVisibility() == 0) {
                return;
            }
            if (!this.i || this.L) {
                this.G.setVisibility(0);
            }
            this.ao = true;
        }
    }

    @Override
    public void progressBarOperate(int i) {
        ProgressBar progressBar;
        if (this.f) {
            if (i == 1) {
                ProgressBar progressBar2 = this.J;
                if (progressBar2 != null) {
                    progressBar2.setVisibility(8);
                    return;
                }
                return;
            }
            if (i != 2 || (progressBar = this.J) == null) {
                return;
            }
            progressBar.setVisibility(0);
        }
    }

    @Override
    public void progressOperate(int i, int i2) {
        PlayerView playerView;
        if (this.f) {
            int iBi = this.b != null ? this.b.bi() : 0;
            if (i > 0 && i <= iBi && (playerView = this.D) != null) {
                playerView.seekTo(i * 1000);
            }
            if (i2 == 1) {
                this.F.setVisibility(8);
            } else if (i2 == 2) {
                this.F.setVisibility(0);
            }
            if (this.F.getVisibility() == 0) {
                n();
            }
        }
    }

    @Override
    public String getCurrentProgress() {
        try {
            int iA = this.aL.a();
            int iBi = this.b != null ? this.b.bi() : 0;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NotificationCompat.CATEGORY_PROGRESS, a(iA, iBi));
            jSONObject.put("time", iA);
            jSONObject.put(r.ag, String.valueOf(iBi));
            return jSONObject.toString();
        } catch (Throwable th) {
            th.getMessage();
            return "{}";
        }
    }

    @Override
    public void setScaleFitXY(int i) {
        this.at = i;
    }

    @Override
    public void setVisible(int i) {
        setVisibility(i);
    }

    @Override
    public void setInstallDialogState(boolean z2) {
        this.W = z2;
        this.D.setIsCovered(z2);
    }

    @Override
    public void setCover(boolean z2) {
        if (this.f) {
            this.D.setIsCovered(z2);
        }
    }

    @Override
    public void setMiniEndCardState(boolean z2) {
        this.an = z2;
    }

    public void setShowingAlertViewCover(boolean z2) {
        this.D.setIsCovered(z2);
    }

    @Override
    public boolean isH5Canvas() {
        return getLayoutParams().height < t.e(this.a.getApplicationContext());
    }

    @Override
    public int getBorderViewHeight() {
        return B;
    }

    @Override
    public int getBorderViewWidth() {
        return A;
    }

    @Override
    public int getBorderViewLeft() {
        return z;
    }

    @Override
    public int getBorderViewTop() {
        return y;
    }

    @Override
    public int getBorderViewRadius() {
        return x;
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if ((this.b == null || !this.b.j()) && this.f && this.ak) {
            l();
        }
    }

    private static String a(int i, int i2) {
        if (i2 != 0) {
            double d = i / i2;
            try {
                StringBuilder sb = new StringBuilder();
                sb.append(t.a(Double.valueOf(d)));
                return sb.toString();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return String.valueOf(i2);
    }

    private boolean b(int i, int i2) {
        return i > 0 && i2 > 0 && t.f(this.a) >= i && t.e(this.a) >= i2;
    }

    public int getCloseAlert() {
        return this.ad;
    }

    public void setCloseAlert(int i) {
        this.ad = i;
    }

    public int getVideoSkipTime() {
        return this.ab;
    }

    public void setVideoSkipTime(int i) {
        this.ab = i;
    }

    public void setPlayURL(String str) {
        this.aa = str;
    }

    public void setBufferTimeout(int i) {
        this.ac = i;
    }

    private boolean f() {
        try {
            this.D = (PlayerView) findViewById(filterFindViewId(this.aI, "tkay_vfpv"));
            this.E = (SoundImageView) findViewById(filterFindViewId(this.aI, "tkay_sound_switch"));
            this.F = (TextView) findViewById(filterFindViewId(this.aI, "tkay_tv_count"));
            View viewFindViewById = findViewById(filterFindViewId(this.aI, "tkay_rl_playing_close"));
            this.G = viewFindViewById;
            viewFindViewById.setVisibility(4);
            this.H = (RelativeLayout) findViewById(filterFindViewId(this.aI, "tkay_top_control"));
            this.I = (ImageView) findViewById(filterFindViewId(this.aI, "tkay_videoview_bg"));
            this.J = (ProgressBar) findViewById(filterFindViewId(this.aI, "tkay_video_progress_bar"));
            this.K = (FeedBackButton) findViewById(filterFindViewId(this.aI, "tkay_native_endcard_feed_btn"));
            this.M = (TYSegmentsProgressBar) findViewById(filterFindViewId(this.aI, "tkay_reward_segment_progressbar"));
            this.P = (FrameLayout) findViewById(filterFindViewId(this.aI, "tkay_reward_cta_layout"));
            this.aK = (TkayBaitClickView) findViewById(filterFindViewId(this.aI, "tkay_animation_click_view"));
            this.T = (RelativeLayout) findViewById(filterFindViewId(this.aI, "tkay_reward_moreoffer_layout"));
            try {
                String strAE = this.b.aE();
                if (TextUtils.isEmpty(strAE)) {
                    strAE = com.tkay.expressad.b.ab;
                }
                if (!TextUtils.isEmpty(strAE)) {
                    com.tkay.expressad.foundation.g.d.b.a(this.a).a(strAE, new com.tkay.expressad.foundation.g.d.c() {
                        @Override
                        public final void a(String str, String str2) {
                        }

                        @Override
                        public final void a(Bitmap bitmap, String str) {
                            int iB = t.b(TkayVideoView.this.a, 12.0f);
                            ImageView imageView = new ImageView(TkayVideoView.this.a);
                            imageView.setScaleType(ImageView.ScaleType.FIT_XY);
                            imageView.setImageBitmap(bitmap);
                            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams((int) (iB * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight())), iB);
                            layoutParams.addRule(11);
                            layoutParams.addRule(12);
                            layoutParams.bottomMargin = t.b(TkayVideoView.this.a, 5.0f);
                            layoutParams.rightMargin = t.b(TkayVideoView.this.a, 12.0f);
                            TkayVideoView.this.addView(imageView, layoutParams);
                        }
                    });
                }
            } catch (Exception e) {
                if (com.tkay.expressad.b.a) {
                    e.getLocalizedMessage();
                }
            }
            return isNotNULL(this.D, this.E, this.F, this.G);
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    private void g() {
        if (this.b == null || !w.b(this.b.U())) {
            return;
        }
        String[] strArrSplit = this.b.U().split("x");
        if (strArrSplit.length == 2) {
            if (t.b(strArrSplit[0]) > 0.0d) {
                this.ai = t.b(strArrSplit[0]);
            }
            if (t.b(strArrSplit[1]) > 0.0d) {
                this.aj = t.b(strArrSplit[1]);
            }
            StringBuilder sb = new StringBuilder("TkayBaseView mVideoW:");
            sb.append(this.ai);
            sb.append("  mVideoH:");
            sb.append(this.aj);
        }
        if (this.ai <= 0.0d) {
            this.ai = 1280.0d;
        }
        if (this.aj <= 0.0d) {
            this.aj = 720.0d;
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
        boolean z2 = false;
        while (i <= childCount - 1) {
            if (viewGroup.getChildAt(i).getVisibility() == 0 && this.an) {
                return false;
            }
            i++;
            z2 = true;
        }
        return z2;
    }

    private void h() {
        try {
            if (this.D != null) {
                this.D.setIsCovered(this.W || this.V);
                this.D.onPause();
                if (this.b == null || this.b.L() == null || this.b.aw()) {
                    return;
                }
                this.b.ax();
                com.tkay.expressad.a.a.a(m.a().f(), this.b, this.ah, this.b.L().m(), false);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void i() {
        try {
            if (!this.al) {
                boolean zPlayVideo = this.D.playVideo();
                if (this.b != null && this.b.J() != 2 && !zPlayVideo && this.aL != null) {
                    this.aL.onPlayError("play video failed");
                }
                this.al = true;
                return;
            }
            if (this.W || this.V) {
                return;
            }
            this.D.setIsCovered(false);
            this.D.onResume();
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void j() {
        if (!this.f || this.G.getVisibility() == 0) {
            return;
        }
        if (!this.i || this.L) {
            this.G.setVisibility(0);
        }
        this.ao = true;
    }

    public void gonePlayingCloseView() {
        if (this.f && this.G.getVisibility() != 8) {
            this.G.setVisibility(8);
            this.ao = false;
        }
        if (this.aM || this.ar || this.ap) {
            return;
        }
        this.aM = true;
        int i = this.ab;
        if (i >= 0) {
            if (i == 0) {
                this.ar = true;
            } else {
                new Handler().postDelayed(new 11(), this.ab * 1000);
            }
        }
    }

    private void k() {
        if (this.aM || this.ar || this.ap) {
            return;
        }
        this.aM = true;
        int i = this.ab;
        if (i >= 0) {
            if (i == 0) {
                this.ar = true;
            } else {
                new Handler().postDelayed(new 11(), this.ab * 1000);
            }
        }
    }

    final class 11 implements Runnable {
        11() {
        }

        @Override
        public final void run() {
            TkayVideoView.p(TkayVideoView.this);
        }
    }

    private void l() {
        float f;
        float f2 = t.f(this.a);
        float fE = t.e(this.a);
        c.c cVarM = this.b.M();
        if (cVarM != null && ((cVarM.c() == 1 && f2 > fE) || (cVarM.c() == 2 && fE > f2))) {
            float f3 = f2 + fE;
            fE = f3 - fE;
            f2 = f3 - fE;
        }
        int iB = t.b(getContext(), 58.0f);
        int iB2 = t.b(getContext(), 104.0f);
        if (this.b != null && this.b.f() == 2) {
            int iC = this.b.M().c();
            if (iC == 1) {
                f2 -= iB * 2;
                fE -= iB2 * 2;
            }
            if (iC == 2) {
                f2 -= iB2 * 2;
                fE -= iB * 2;
            }
            if (iC == 0) {
                if (this.d == 1) {
                    f2 -= iB * 2;
                    f = iB2 * 2;
                } else {
                    f2 -= iB2 * 2;
                    f = iB * 2;
                }
                fE -= f;
            }
        }
        double d = this.ai;
        if (d > 0.0d) {
            double d2 = this.aj;
            if (d2 > 0.0d && f2 > 0.0f && fE > 0.0f) {
                double d3 = d / d2;
                double d4 = f2 / fE;
                StringBuilder sb = new StringBuilder("videoWHDivide:");
                sb.append(d3);
                sb.append("  screenWHDivide:");
                sb.append(d4);
                double dA = t.a(Double.valueOf(d3));
                double dA2 = t.a(Double.valueOf(d4));
                StringBuilder sb2 = new StringBuilder("videoWHDivideFinal:");
                sb2.append(dA);
                sb2.append("  screenWHDivideFinal:");
                sb2.append(dA2);
                FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.D.getLayoutParams();
                if (dA > dA2) {
                    double d5 = (((double) f2) * this.aj) / this.ai;
                    layoutParams.width = -1;
                    layoutParams.height = (int) d5;
                    layoutParams.gravity = 17;
                } else if (dA < dA2) {
                    layoutParams.width = (int) (((double) fE) * d3);
                    layoutParams.height = -1;
                    layoutParams.gravity = 17;
                } else {
                    layoutParams.width = -1;
                    layoutParams.height = -1;
                }
                try {
                    if (this.b != null && this.b.j()) {
                        int iB3 = this.b.M().b();
                        int iC2 = this.b.M().c();
                        if (iB3 == 102 || iB3 == 202) {
                            if (iC2 == 1) {
                                layoutParams.width = -1;
                                layoutParams.gravity = 17;
                                layoutParams.height = (int) (this.aj / (this.ai / ((double) f2)));
                            } else {
                                layoutParams.height = -1;
                                layoutParams.gravity = 17;
                                layoutParams.width = (int) (((double) fE) * d3);
                            }
                        }
                        if (iB3 == 202 && !TextUtils.isEmpty(this.b.be())) {
                            a(this.b.be());
                        }
                        if (iB3 == 302 || iB3 == 802) {
                            if (this.ai / this.aj > 1.0d) {
                                layoutParams.width = -1;
                                layoutParams.height = (int) ((this.aj * ((double) f2)) / this.ai);
                            } else {
                                int iB4 = t.b(getContext(), 220.0f);
                                layoutParams.width = (int) ((this.ai * ((double) iB4)) / this.aj);
                                layoutParams.height = iB4;
                            }
                        }
                    }
                } catch (Throwable th) {
                    th.getMessage();
                }
                this.D.setLayoutParams(layoutParams);
                setMatchParent();
                return;
            }
        }
        m();
    }

    private void m() {
        try {
            setLayoutParam(0, 0, -1, -1);
            if (isLandscape() || !this.f) {
                return;
            }
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.D.getLayoutParams();
            int iF = t.f(this.a);
            layoutParams.width = -1;
            layoutParams.height = (iF * 9) / 16;
            layoutParams.gravity = 17;
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private static final class b extends DefaultVideoPlayerStatusListener {
        private TkayVideoView a;
        private int b;
        private int c;
        private boolean d;
        private boolean i;
        private String j;
        private com.tkay.expressad.foundation.d.c k;
        private int l;
        private int m;
        private a e = new a();
        private boolean f = false;
        private boolean g = false;
        private boolean h = false;
        private boolean n = false;

        private com.tkay.expressad.foundation.d.c c() {
            return this.k;
        }

        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            this.k = cVar;
        }

        public final void a(boolean z) {
            this.i = z;
        }

        public final void a(String str) {
            this.j = str;
        }

        public final int a() {
            return this.b;
        }

        public final void a(int i, int i2) {
            this.l = i;
            this.m = i2;
        }

        public b(TkayVideoView tkayVideoView) {
            this.a = tkayVideoView;
        }

        @Override
        public final void onPlayStarted(int i) {
            super.onPlayStarted(i);
            if (!this.d) {
                TkayVideoView tkayVideoView = this.a;
                if (tkayVideoView != null) {
                    TkayVideoView.q(tkayVideoView);
                }
                this.a.e.a(10, this.e);
                this.d = true;
            }
            com.tkay.expressad.foundation.d.c cVar = this.k;
            if (cVar != null) {
                int i2 = cVar.i();
                String str = "tkay_reward_shape_progress";
                if (this.k.j()) {
                    TkayVideoView tkayVideoView2 = this.a;
                    if (tkayVideoView2 != null && tkayVideoView2.F != null) {
                        if (this.k.k() != 5 || this.a.mCurrPlayNum <= 1 || i2 > 0) {
                            if (i2 > 0) {
                                d();
                                str = "tkay_reward_video_time_count_num_bg";
                            }
                            this.a.F.setBackgroundResource(i.a(m.a().f(), str, i.c));
                        } else {
                            this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_video_time_count_num_bg", i.c));
                            d();
                        }
                    }
                } else if (i2 > 0) {
                    this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_video_time_count_num_bg", i.c));
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, t.b(m.a().f(), 30.0f));
                    int iB = t.b(m.a().f(), 5.0f);
                    layoutParams.addRule(1, i.a(m.a().f(), "tkay_native_endcard_feed_btn", "id"));
                    layoutParams.setMargins(iB, 0, 0, 0);
                    this.a.F.setPadding(iB, 0, iB, 0);
                    this.a.F.setLayoutParams(layoutParams);
                } else {
                    this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_shape_progress", i.c));
                }
            }
            if (this.a.J != null) {
                this.a.J.setMax(i);
            }
            com.tkay.expressad.foundation.d.c cVar2 = this.k;
            if (cVar2 != null && cVar2.f() == 2) {
                this.a.H.setVisibility(0);
            }
            if (this.a.F.getVisibility() == 0) {
                this.a.n();
            }
            boolean unused = TkayVideoView.av = false;
            if (this.a.S == 0) {
                this.a.setCTALayoutVisibleOrGone();
            }
            this.a.showMoreOfferInPlayTemplate();
            this.a.showBaitClickView();
        }

        private void a(int i) {
            if (i > 0) {
                this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_video_time_count_num_bg", i.c));
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, t.b(m.a().f(), 30.0f));
                int iB = t.b(m.a().f(), 5.0f);
                layoutParams.addRule(1, i.a(m.a().f(), "tkay_native_endcard_feed_btn", "id"));
                layoutParams.setMargins(iB, 0, 0, 0);
                this.a.F.setPadding(iB, 0, iB, 0);
                this.a.F.setLayoutParams(layoutParams);
                return;
            }
            this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_shape_progress", i.c));
        }

        private void b(int i) {
            TkayVideoView tkayVideoView = this.a;
            if (tkayVideoView == null || tkayVideoView.F == null) {
                return;
            }
            String str = "tkay_reward_video_time_count_num_bg";
            if (this.k.k() != 5 || this.a.mCurrPlayNum <= 1 || i > 0) {
                if (i > 0) {
                    d();
                } else {
                    str = "tkay_reward_shape_progress";
                }
                this.a.F.setBackgroundResource(i.a(m.a().f(), str, i.c));
                return;
            }
            this.a.F.setBackgroundResource(i.a(m.a().f(), "tkay_reward_video_time_count_num_bg", i.c));
            d();
        }

        private void d() {
            TkayVideoView tkayVideoView = this.a;
            if (tkayVideoView == null) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) tkayVideoView.F.getLayoutParams();
            if (layoutParams != null) {
                layoutParams.width = -2;
                layoutParams.height = t.b(m.a().f(), 25.0f);
                this.a.F.setLayoutParams(layoutParams);
            }
            int iB = t.b(m.a().f(), 5.0f);
            this.a.F.setPadding(iB, 0, iB, 0);
        }

        @Override
        public final void onPlayCompleted() {
            TkayVideoView tkayVideoView;
            super.onPlayCompleted();
            TkayVideoView.w(this.a);
            com.tkay.expressad.foundation.d.c cVar = this.k;
            if (cVar == null) {
                this.a.F.setText("0");
            } else {
                if (cVar.i() > 0) {
                    this.a.F.setText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
                } else {
                    this.a.F.setText("0");
                }
                this.k.n(100);
                if (this.k.f() == 2) {
                    this.a.G.setVisibility(4);
                    if (this.a.K != null) {
                        this.a.K.setClickable(false);
                    }
                    if (this.a.E != null) {
                        this.a.E.setClickable(false);
                    }
                }
            }
            this.a.D.setClickable(false);
            String strB = this.a.b(true);
            com.tkay.expressad.foundation.d.c cVar2 = this.k;
            if (cVar2 != null && cVar2.k() == 5 && (tkayVideoView = this.a) != null && tkayVideoView.N != null && this.a.mCampaignSize > this.a.mCurrPlayNum) {
                HashMap map = new HashMap();
                map.put(RequestParameters.POSITION, Integer.valueOf(this.a.mCurrPlayNum));
                if (this.a.mMuteSwitch != 0) {
                    map.put("mute", Integer.valueOf(this.a.mMuteSwitch));
                }
                this.a.N.a(map);
                return;
            }
            this.a.e.a(com.tkay.expressad.video.module.a.a.L, "");
            this.a.e.a(11, strB);
            int i = this.c;
            this.b = i;
            this.a.mCurrentPlayProgressTime = i;
            boolean unused = TkayVideoView.av = true;
        }

        @Override
        public final void onPlayError(String str) {
            super.onPlayError(str);
            TkayVideoView tkayVideoView = this.a;
            if (tkayVideoView != null) {
                tkayVideoView.e.a(12, str);
            }
        }

        @Override
        public final void onPlayProgress(int i, int i2) {
            int i3;
            String str;
            String strValueOf;
            super.onPlayProgress(i, i2);
            if (this.a.f) {
                int i4 = 0;
                com.tkay.expressad.foundation.d.c cVar = this.k;
                if (cVar != null) {
                    i4 = cVar.i();
                    com.tkay.expressad.foundation.f.b.a().a(this.k.K() + "_1", i);
                }
                String str2 = "0";
                if (this.k.j() && this.k.k() == 5) {
                    try {
                        int i5 = this.a.O;
                        if (this.a != null) {
                            String strValueOf2 = (String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
                            String str3 = (String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_left", i.g));
                            if (i4 >= 0) {
                                int i6 = i4 - i;
                                if (i6 > 0) {
                                    strValueOf2 = i6 + str3;
                                }
                            } else {
                                int i7 = i5 - i;
                                if (i7 <= 0) {
                                    if (i4 <= 0) {
                                    }
                                    this.e.a = i;
                                    this.a.F.setText(str2);
                                    if (this.a.J != null && this.a.J.getVisibility() == 0) {
                                        this.a.J.setProgress(i);
                                    }
                                } else if (i4 <= 0) {
                                    strValueOf2 = String.valueOf(i7);
                                } else {
                                    strValueOf2 = i7 + str3;
                                }
                            }
                            str2 = strValueOf2;
                            this.e.a = i;
                            this.a.F.setText(str2);
                            if (this.a.J != null) {
                                this.a.J.setProgress(i);
                            }
                        }
                    } catch (Exception e) {
                        e.getMessage();
                    }
                } else {
                    if (this.a != null) {
                        if (i4 > i2) {
                            i4 = i2;
                        }
                        int i8 = i4 <= 0 ? i2 - i : i4 - i;
                        if (i8 > 0) {
                            if (i4 <= 0) {
                                strValueOf = String.valueOf(i8);
                            } else {
                                strValueOf = i8 + ((String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_left", i.g)));
                            }
                            str2 = strValueOf;
                        } else if (i4 > 0) {
                            str2 = (String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
                        }
                        this.a.F.setText(str2);
                        if (this.a.J != null && this.a.J.getVisibility() == 0) {
                            this.a.J.setProgress(i);
                        }
                    }
                    this.e.a = i;
                }
            }
            this.c = i2;
            this.a.mCurrentPlayProgressTime = i;
            this.e.a = i;
            this.e.b = i2;
            this.e.c = this.a.aG;
            this.b = i;
            this.a.e.a(15, this.e);
            if (this.a.au && !this.a.aB && this.a.ay == com.tkay.expressad.foundation.g.a.cs) {
                this.a.e();
            }
            try {
                if (this.a != null && this.a.M != null) {
                    int i9 = (i * 100) / i2;
                    this.a.M.setProgress(i9, this.a.mCurrPlayNum - 1);
                    this.k.n(i9);
                }
                if (this.a != null && this.a.S != -1 && i == this.a.S && this.a.b != null && this.a.b.j()) {
                    this.a.setCTALayoutVisibleOrGone();
                }
            } catch (Throwable th) {
                th.getMessage();
            }
            int i10 = this.l;
            if (i10 == 100 || this.n || i10 == 0) {
                return;
            }
            if (this.m > i10) {
                this.m = i10 / 2;
            }
            int i11 = this.m;
            if (i11 < 0 || i < (i3 = (i2 * i11) / 100)) {
                return;
            }
            if (this.k.w() == 94 || this.k.w() == 287) {
                str = this.k.Z() + this.k.aZ() + this.k.S();
            } else {
                str = this.k.aZ() + this.k.S() + this.k.B();
            }
            com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.j, str);
            if (aVarA != null) {
                aVarA.i();
                this.n = true;
                StringBuilder sb = new StringBuilder("CDRate is : ");
                sb.append(i3);
                sb.append(" and start download !");
            }
        }

        @Override
        public final void onVideoDownloadResume() {
            String str;
            if (this.k.w() == 94 || this.k.w() == 287) {
                str = this.k.Z() + this.k.aZ() + this.k.S();
            } else {
                str = this.k.aZ() + this.k.S() + this.k.B();
            }
            com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.j, str);
            if (aVarA != null) {
                aVarA.i();
                this.n = true;
            }
        }

        @Override
        public final void onBufferingStart(String str) {
            try {
                super.onBufferingStart(str);
                this.a.e.a(13, "");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override
        public final void onBufferingEnd() {
            try {
                super.onBufferingEnd();
                this.a.e.a(14, "");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override
        public final void onPlaySetDataSourceError(String str) {
            super.onPlaySetDataSourceError(str);
        }

        private void a(int i, int i2, int i3) {
            TkayVideoView tkayVideoView = this.a;
            if (tkayVideoView == null) {
                return;
            }
            String strValueOf = (String) tkayVideoView.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
            String str = (String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_left", i.g));
            if (i >= 0) {
                int i4 = i - i3;
                if (i4 > 0) {
                    strValueOf = i4 + str;
                }
            } else {
                int i5 = i2 - i3;
                if (i5 <= 0) {
                    if (i <= 0) {
                        strValueOf = "0";
                    }
                } else if (i <= 0) {
                    strValueOf = String.valueOf(i5);
                } else {
                    strValueOf = i5 + str;
                }
            }
            this.e.a = i3;
            this.a.F.setText(strValueOf);
            if (this.a.J == null || this.a.J.getVisibility() != 0) {
                return;
            }
            this.a.J.setProgress(i3);
        }

        private void b(int i, int i2, int i3) {
            String strValueOf;
            if (this.a == null) {
                return;
            }
            if (i > i2) {
                i = i2;
            }
            int i4 = i <= 0 ? i2 - i3 : i - i3;
            if (i4 <= 0) {
                strValueOf = i <= 0 ? "0" : (String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
            } else if (i <= 0) {
                strValueOf = String.valueOf(i4);
            } else {
                strValueOf = i4 + ((String) this.a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_left", i.g)));
            }
            this.a.F.setText(strValueOf);
            if (this.a.J == null || this.a.J.getVisibility() != 0) {
                return;
            }
            this.a.J.setProgress(i3);
        }

        public final void b() {
            this.a = null;
            boolean unused = TkayVideoView.av = false;
        }
    }

    public static class a {
        public int a;
        public int b;
        public boolean c;

        public final String toString() {
            return "ProgressData{curPlayPosition=" + this.a + ", allDuration=" + this.b + '}';
        }
    }

    public void onBackPress() {
        if (this.an || this.V || this.aC) {
            return;
        }
        if (this.ao) {
            e();
            return;
        }
        if (this.ap && this.aq) {
            e();
        } else {
            if (this.ap || !this.ar) {
                return;
            }
            e();
        }
    }

    @Override
    public void notifyCloseBtn(int i) {
        if (i == 0) {
            this.ap = true;
            this.ar = false;
        } else if (i == 1) {
            this.aq = true;
        }
    }

    @Override
    public void showIVRewardAlertView(String str) {
        this.e.a(8, "");
    }

    public void notifyVideoClose() {
        this.e.a(2, "");
    }

    public int getMute() {
        return this.aw;
    }

    public void setIVRewardEnable(int i, int i2, int i3) {
        this.ay = i;
        this.az = i2;
        this.aA = i3;
    }

    public void setDialogRole(int i) {
        this.aE = i == 1;
        StringBuilder sb = new StringBuilder();
        sb.append(i);
        sb.append(" ");
        sb.append(this.aE);
    }

    private String b(boolean z2) {
        if (!this.au) {
            return "";
        }
        try {
            JSONObject jSONObject = new JSONObject();
            if (!this.aB) {
                jSONObject.put("Alert_window_status", com.tkay.expressad.foundation.g.a.cv);
            }
            if (this.aD) {
                jSONObject.put("Alert_window_status", com.tkay.expressad.foundation.g.a.cx);
            }
            if (this.aC) {
                jSONObject.put("Alert_window_status", com.tkay.expressad.foundation.g.a.cw);
            }
            jSONObject.put("complete_info", z2 ? 1 : 2);
            return jSONObject.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    public void setNotchPadding(final int i, final int i2, final int i3, final int i4) {
        try {
            new StringBuilder("NOTCH VideoView ").append(String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) getLayoutParams();
            if (!(Math.max(Math.max(layoutParams.leftMargin, layoutParams.rightMargin), Math.max(layoutParams.topMargin, layoutParams.bottomMargin)) > Math.max(Math.max(i, i2), Math.max(i3, i4))) && this.H != null) {
                this.H.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        if (TkayVideoView.this.H == null) {
                            return;
                        }
                        TkayVideoView.this.H.setVisibility(0);
                        if (TkayVideoView.this.b != null && !TkayVideoView.this.b.j() && TkayVideoView.this.b.f() != 2) {
                            TkayVideoView.this.H.setPadding(i, i3, i2, i4);
                            TkayVideoView.this.H.startAnimation(TkayVideoView.this.aJ);
                        }
                        TkayVideoView.this.H.setVisibility(0);
                    }
                }, 200L);
            }
            if (this.F.getVisibility() == 0) {
                n();
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void n() {
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.b.l(this.ah);
            com.tkay.expressad.foundation.f.b.a().a(this.ah + "_1", this.b);
            com.tkay.expressad.foundation.f.b.a().a(this.ah + "_1", this.K);
            return;
        }
        FeedBackButton feedBackButton = this.K;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }

    private int a(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null) {
            if (cVar.ao() != -1) {
                return cVar.ao();
            }
            return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false).v();
        }
        return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false).v();
    }

    private int o() {
        return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.ah, false).x();
    }

    private void a(String str) {
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(str, new com.tkay.expressad.foundation.g.d.c() {
            @Override
            public final void a(String str2, String str3) {
            }

            @Override
            public final void a(Bitmap bitmap, String str2) {
                if (bitmap != null) {
                    try {
                        if (bitmap.isRecycled() || TkayVideoView.this.I == null) {
                            return;
                        }
                        TkayVideoView.this.I.setVisibility(0);
                        ImageView imageView = TkayVideoView.this.I;
                        com.tkay.expressad.video.dynview.i.b.a();
                        imageView.setImageBitmap(com.tkay.expressad.video.dynview.i.b.a(bitmap, 20));
                    } catch (Throwable th) {
                        th.getMessage();
                    }
                }
            }
        });
    }

    private void p() {
        if (this.P == null) {
            return;
        }
        if (this.Q == null) {
            TkayClickCTAView tkayClickCTAView = new TkayClickCTAView(getContext());
            this.Q = tkayClickCTAView;
            tkayClickCTAView.setCampaign(this.b);
            this.Q.setUnitId(this.ah);
            com.tkay.expressad.video.module.a.a aVar = this.U;
            if (aVar != null) {
                this.Q.setNotifyListener(new com.tkay.expressad.video.module.a.a.i(aVar));
            }
            this.Q.preLoadData(this.R);
        }
        this.P.addView(this.Q);
    }

    public void setCTALayoutVisibleOrGone() {
        FrameLayout frameLayout;
        if (this.b != null && this.b.j() && (frameLayout = this.P) != null && this.S >= -1) {
            TkayClickCTAView tkayClickCTAView = this.Q;
            if (tkayClickCTAView == null && frameLayout != null) {
                if (tkayClickCTAView == null) {
                    TkayClickCTAView tkayClickCTAView2 = new TkayClickCTAView(getContext());
                    this.Q = tkayClickCTAView2;
                    tkayClickCTAView2.setCampaign(this.b);
                    this.Q.setUnitId(this.ah);
                    com.tkay.expressad.video.module.a.a aVar = this.U;
                    if (aVar != null) {
                        this.Q.setNotifyListener(new com.tkay.expressad.video.module.a.a.i(aVar));
                    }
                    this.Q.preLoadData(this.R);
                }
                this.P.addView(this.Q);
            }
            int i = this.S;
            if (i >= 0) {
                this.P.setVisibility(0);
                return;
            }
            if (i == -1) {
                if (this.P.getVisibility() != 0) {
                    this.P.setVisibility(0);
                    postDelayed(this.aN, 3000L);
                } else {
                    this.P.setVisibility(8);
                    getHandler().removeCallbacks(this.aN);
                }
            }
        }
    }

    public void showMoreOfferInPlayTemplate() {
        if (this.b == null || this.T == null || !this.b.j() || this.b.M() == null || TextUtils.isEmpty(this.b.M().e())) {
        }
    }

    public void showBaitClickView() {
        int i;
        if (this.b == null || !this.b.j() || this.b.M() == null) {
            return;
        }
        String strE = this.b.M().e();
        if (TextUtils.isEmpty(strE)) {
            return;
        }
        try {
            String strA = x.a(strE, "bait_click");
            if (TextUtils.isEmpty(strA) || (i = Integer.parseInt(strA)) == 0 || this.aK == null) {
                return;
            }
            this.aK.setVisibility(0);
            this.aK.init(i);
            this.aK.startAnimation();
            this.aK.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (TkayVideoView.this.e != null) {
                        TkayVideoView.this.e.a(1, "");
                    }
                }
            });
        } catch (Exception e) {
            e.getMessage();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        try {
            if (this.aN != null) {
                getHandler().removeCallbacks(this.aN);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void releasePlayer() {
        try {
            if (this.D != null && !this.am) {
                this.D.release();
            }
            if (this.aL != null) {
                this.aL.b();
            }
            if (this.U != null) {
                this.U = null;
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }
}
