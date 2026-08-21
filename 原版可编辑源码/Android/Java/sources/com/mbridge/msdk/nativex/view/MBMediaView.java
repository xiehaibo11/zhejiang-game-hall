package com.mbridge.msdk.nativex.view;

import android.R;
import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Rect;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import android.webkit.URLUtil;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.bianfeng.ymnsdk.sysfunc.SysfuncInterface;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.media.InteractionType;
import com.iab.omid.library.mmadbridge.adsession.media.MediaEvents;
import com.iab.omid.library.mmadbridge.adsession.media.PlayerState;
import com.iab.omid.library.mmadbridge.adsession.media.Position;
import com.iab.omid.library.mmadbridge.adsession.media.VastProperties;
import com.mbridge.msdk.foundation.db.t;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.mbnative.controller.NativeController;
import com.mbridge.msdk.nativex.view.MediaViewPlayerView;
import com.mbridge.msdk.nativex.view.mbfullview.BaseView;
import com.mbridge.msdk.nativex.view.mbfullview.MBridgeFullView;
import com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.out.OnMBMediaViewListener;
import com.mbridge.msdk.out.OnMBMediaViewListenerPlus;
import com.mbridge.msdk.playercommon.VideoPlayerStatusListener;
import com.mbridge.msdk.video.js.bridge.IRewardBridge;
import com.mbridge.msdk.videocommon.view.MyImageView;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.i;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class MBMediaView extends LinearLayout implements VideoPlayerStatusListener, IRewardBridge {
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_1_LANDING_PAGE = 1;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_2_NORMAL_FULLSCREEN = 2;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_3_NORMAL_FULLSCREEN_ENDCARD = 3;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_4_NORMAL_FULLSCREEN_LP = 4;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_6_SMALLVIDEO = 6;
    public static final String TAG = "MBMediaView";
    public static final int WHAT_VIEW_FULL_SCREEN = 2;
    public static final int WHAT_VIEW_SMALL_SCREEN = 1;
    private static int o = 2;
    private static int p = 1;
    private WindVaneWebViewForNV A;
    private WindVaneWebViewForNV B;
    private MyImageView C;
    private ProgressBar D;
    private View E;
    private BaseView F;
    private RelativeLayout G;
    private RelativeLayout H;
    private TextView I;
    private ProgressBar J;
    private RelativeLayout K;
    private int L;
    private Handler M;
    private CampaignEx N;
    private int O;
    private int P;
    private double Q;
    private double R;
    private int S;
    private int T;
    private e U;
    private SensorManager V;
    private Sensor W;
    private boolean a;
    private com.mbridge.msdk.videocommon.download.a aa;
    private a ab;
    private OnMBMediaViewListener ac;
    private OnMBMediaViewListenerPlus ad;
    private int ae;
    private boolean af;
    private boolean ag;
    private RelativeLayout ah;
    private ImageView ai;
    private int aj;
    private boolean ak;
    private Context al;
    private boolean am;
    private Runnable an;
    private boolean b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private boolean g;
    private boolean h;
    private volatile boolean i;
    private volatile boolean j;
    private boolean k;
    private boolean l;
    private ArrayList<String> m;
    private ArrayList<String> n;
    private boolean q;
    private boolean r;
    private AdSession s;
    private AdEvents t;
    private MediaEvents u;
    private int v;
    private MediaViewPlayerView w;
    private RelativeLayout x;
    private RelativeLayout y;
    private RelativeLayout z;

    private enum a {
        a,
        b,
        c
    }

    @Override
    public void handlerPlayableException(Object obj, String str) {
    }

    @Override
    public void notifyCloseBtn(Object obj, String str) {
    }

    @Override
    public void onPlayProgressMS(int i, int i2) {
    }

    @Override
    public void setOrientation(Object obj, String str) {
    }

    public MBMediaView(Context context) {
        super(context);
        this.a = true;
        this.b = true;
        this.c = true;
        this.d = true;
        this.e = true;
        this.f = false;
        this.g = true;
        this.h = false;
        this.i = false;
        this.j = false;
        this.k = true;
        this.l = true;
        this.m = new ArrayList<>();
        this.n = new ArrayList<>();
        this.q = false;
        this.r = false;
        this.s = null;
        this.t = null;
        this.u = null;
        this.v = 0;
        this.aa = null;
        this.ab = null;
        this.af = false;
        this.ag = false;
        this.ak = false;
        this.am = false;
        this.an = new Runnable() {
            @Override
            public final void run() {
                try {
                    if (!MBMediaView.this.h) {
                        if (!MBMediaView.this.a((View) MBMediaView.this)) {
                            MBMediaView.S(MBMediaView.this);
                        } else {
                            MBMediaView.T(MBMediaView.this);
                        }
                    }
                    MBMediaView.this.M.postDelayed(this, 300L);
                } catch (Exception e2) {
                    z.d(MBMediaView.TAG, e2.getMessage());
                }
            }
        };
        a(context);
    }

    public MBMediaView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = true;
        this.b = true;
        this.c = true;
        this.d = true;
        this.e = true;
        this.f = false;
        this.g = true;
        this.h = false;
        this.i = false;
        this.j = false;
        this.k = true;
        this.l = true;
        this.m = new ArrayList<>();
        this.n = new ArrayList<>();
        this.q = false;
        this.r = false;
        this.s = null;
        this.t = null;
        this.u = null;
        this.v = 0;
        this.aa = null;
        this.ab = null;
        this.af = false;
        this.ag = false;
        this.ak = false;
        this.am = false;
        this.an = new Runnable() {
            @Override
            public final void run() {
                try {
                    if (!MBMediaView.this.h) {
                        if (!MBMediaView.this.a((View) MBMediaView.this)) {
                            MBMediaView.S(MBMediaView.this);
                        } else {
                            MBMediaView.T(MBMediaView.this);
                        }
                    }
                    MBMediaView.this.M.postDelayed(this, 300L);
                } catch (Exception e2) {
                    z.d(MBMediaView.TAG, e2.getMessage());
                }
            }
        };
        a(context);
    }

    private void a(Context context) {
        try {
            c();
            b();
            this.al = context;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void a() {
        com.mbridge.msdk.videocommon.download.a aVar = this.aa;
        if (aVar != null) {
            aVar.b((com.mbridge.msdk.videocommon.listener.a) null);
        }
    }

    private void b() {
        z.d(TAG, "initView");
        int iA = s.a(getContext(), "mbridge_nativex_mbmediaview", "layout");
        if (iA == -1) {
            z.d(TAG, "can not find mediaview resource");
            return;
        }
        View viewInflate = LayoutInflater.from(getContext()).inflate(iA, (ViewGroup) null);
        this.y = (RelativeLayout) viewInflate.findViewById(s.a(getContext(), "mbridge_rl_mediaview_root", "id"));
        this.x = (RelativeLayout) viewInflate.findViewById(s.a(getContext(), "mbridge_ll_playerview_container", "id"));
        this.C = (MyImageView) viewInflate.findViewById(s.a(getContext(), "mbridge_my_big_img", "id"));
        this.D = (ProgressBar) viewInflate.findViewById(s.a(getContext(), "mbridge_native_pb", "id"));
        this.z = (RelativeLayout) viewInflate.findViewById(s.a(getContext(), "mbridge_nativex_webview_layout", "id"));
        this.A = (WindVaneWebViewForNV) viewInflate.findViewById(s.a(getContext(), "mbridge_nativex_webview_layout_webview", "id"));
        this.y.setClickable(true);
        addView(viewInflate, -1, -1);
    }

    private void c() {
        this.M = new Handler() {
            @Override
            public final void handleMessage(Message message) {
                Object obj;
                if (message != null) {
                    try {
                        int i = message.what;
                        if (i == 1) {
                            MBMediaView.this.r();
                        } else if (i == 3 && (obj = message.obj) != null && (obj instanceof View)) {
                            if (MBMediaView.this.a((View) obj)) {
                                MBMediaView.b(MBMediaView.this);
                            }
                        }
                    } catch (Exception e2) {
                        z.d(MBMediaView.TAG, e2.getMessage());
                    }
                }
            }
        };
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("onAttachedToWindow start:");
            sb.append(this.N == null ? "" : this.N.getAppName());
            z.b(TAG, sb.toString());
            if (this.c) {
                try {
                    SensorManager sensorManager = (SensorManager) getContext().getSystemService("sensor");
                    this.V = sensorManager;
                    this.W = sensorManager.getDefaultSensor(1);
                    e eVar = new e();
                    this.U = eVar;
                    this.V.registerListener(eVar, this.W, 2);
                    z.b(TAG, "register sensorlistener");
                } catch (Throwable th) {
                    z.d(TAG, th.getMessage());
                }
            }
            if (Build.VERSION.SDK_INT >= 11) {
                this.g = isHardwareAccelerated();
            }
            this.aj = getOrientation();
            d();
            this.M.postDelayed(this.an, 300L);
            z.b(TAG, "onAttachedToWindow setDisplay finalmCurDisplayMode:" + this.ab);
        } catch (Throwable th2) {
            z.d(TAG, th2.getMessage());
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        try {
            if (this.s != null) {
                if (this.w != null) {
                    this.w.unregisterView();
                }
                this.s.finish();
                this.s = null;
                z.a("omsdk", "adSession finish");
            }
            if (this.u != null) {
                this.u = null;
            }
            if (this.t != null) {
                this.t = null;
            }
            this.M.removeCallbacks(this.an);
            if (this.M != null) {
                this.M.removeCallbacksAndMessages(null);
            }
            try {
                if (this.V != null && this.U != null) {
                    this.V.unregisterListener(this.U);
                    z.b(TAG, "unRegister sensorlistener");
                }
            } catch (Throwable th) {
                z.d(TAG, th.getMessage());
            }
            a();
        } catch (Throwable th2) {
            z.d(TAG, th2.getMessage());
        }
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        try {
            z.d(TAG, "hasWindowFocus:" + z);
            this.e = z;
            if (this.ab == a.b && this.w != null) {
                this.w.setIsFrontDesk(z);
            }
            try {
                if (!this.h) {
                    z.b(TAG, "initFullPlayerOnWindowFocus 在半屏 return");
                } else if (this.w != null) {
                    if (this.e) {
                        if (this.w.isPlaying()) {
                            z.b(TAG, "fullscreen windowfocuse true isPlaying do nothing return");
                        } else if (this.w != null && !this.w.isComplete() && !this.w.getIsActiviePause()) {
                            z.d(TAG, "fullscreen windowfocuse true startOrPlayVideo");
                            this.w.onClickPlayButton();
                        }
                    } else {
                        z.b(TAG, "fullscreen windowfocuse false pasue======");
                        this.w.pause();
                    }
                } else {
                    z.d(TAG, "fullscreen playerview is null return");
                }
            } catch (Throwable th) {
                z.d(TAG, th.getMessage());
            }
            requestLayout();
            z.b(TAG, "onWindowFocusChanged reqeusetlaytout");
        } catch (Throwable th2) {
            z.d(TAG, th2.getMessage());
        }
    }

    @Override
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        try {
            this.O = getHeight();
            int width = getWidth();
            this.P = width;
            if (width == 0) {
                this.P = getMeasuredWidth();
                z.c(TAG, "onMeasure 宽度为0 调用getMeasuredWidth mDevWidth:" + this.P);
            }
            if (this.O == 0) {
                this.O = getMeasuredHeight();
                z.c(TAG, "onMeasure 高度为0 调用getMeasuredHeight mDevWidth:" + this.O);
            }
            z.b(TAG, "onMeasure pre mDevWidth " + this.P + " mDevHeight:" + this.O + " mCurDisplayMode:" + this.ab + " mCurIsLandScape:" + this.i);
            if (this.P == 0 && this.O == 0) {
                this.P = (int) B();
                z.d(TAG, "onMeasure 宽度和高度都为0 宽度取屏幕宽度mDevWidth:" + this.P);
            }
            if (this.ab == a.b && !this.h) {
                ViewGroup.LayoutParams layoutParams = getLayoutParams();
                if (this.O == 0 || ((layoutParams != null && layoutParams.height == -2) || (layoutParams != null && layoutParams.height == -1))) {
                    this.O = (int) ((((double) this.P) * this.R) / this.Q);
                    z.b(TAG, "onMeasure mDevHeight为0并且设置WRAP_CONTENT 拿视频宽高算高度mDevHeight:" + this.O);
                }
                z.b(TAG, "onMeasure after mDevWidth " + this.P + " * mDevHeight *****" + this.O);
                h();
                return;
            }
            if (this.ab == a.a && !this.h) {
                f();
            } else {
                if (this.ab != a.c || this.h) {
                    return;
                }
                g();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void setNativeAd(Campaign campaign) {
        String str;
        try {
            if (campaign == null) {
                z.d(TAG, "setNativeAd campaign is null return");
                return;
            }
            if (this.N != null && this.N == campaign) {
                z.b(TAG, "setNativeAd has init return");
                return;
            }
            this.e = true;
            this.g = true;
            this.h = false;
            this.i = false;
            this.j = false;
            this.r = false;
            z();
            CampaignEx campaignEx = (CampaignEx) campaign;
            this.N = campaignEx;
            if (campaignEx.getMediaViewHolder() == null) {
                CampaignEx.b bVar = new CampaignEx.b();
                bVar.l = this.N.getAdvImpList();
                this.N.setMediaViewHolder(bVar);
                z.b(TAG, "setNativeAd mediaViewHolder appname:" + this.N.getAppName());
            }
            if (this.N.getAdType() == 94 || this.N.getAdType() == 287) {
                str = this.N.getRequestId() + this.N.getId() + this.N.getVideoUrlEncode();
            } else {
                str = this.N.getId() + this.N.getVideoUrlEncode() + this.N.getBidToken();
            }
            this.aa = com.mbridge.msdk.videocommon.download.b.getInstance().a(p(), str);
            z.d(TAG, "setNativeAd cid" + this.N.getId() + " appname:" + this.N.getAppName());
            if (this.q) {
                if (this.s != null) {
                    if (this.w != null) {
                        this.w.unregisterView();
                    }
                    this.s.finish();
                    this.s = null;
                    z.a("omsdk", "adSession finish");
                }
                if (this.u != null) {
                    this.u = null;
                }
                if (this.t != null) {
                    this.t = null;
                }
            }
            if (this.N != null && this.N.isActiveOm()) {
                this.s = com.mbridge.msdk.a.b.a(getContext(), TextUtils.isEmpty(this.N.getVideoUrlEncode()), this.N.getOmid(), this.N.getRequestId(), this.N.getId(), p(), "", ((CampaignEx) campaign).getRequestIdNotice());
                z.a("omsdk", "adSession.Create " + this.s);
            }
            if (this.q) {
                z.b(TAG, "setNativeAd setDisplay appname:" + this.N.getAppName());
                d();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void setOnMediaViewListener(OnMBMediaViewListener onMBMediaViewListener) {
        this.ac = onMBMediaViewListener;
    }

    public void setOnMediaViewListener(OnMBMediaViewListenerPlus onMBMediaViewListenerPlus) {
        this.ad = onMBMediaViewListenerPlus;
    }

    public void setIsAllowFullScreen(boolean z) {
        this.d = z;
    }

    public void setAllowVideoRefresh(boolean z) {
        this.a = z;
    }

    public void setAllowLoopPlay(boolean z) {
        this.b = z;
    }

    public void setAllowScreenChange(boolean z) {
        this.c = z;
    }

    public void destory() {
        try {
            if (this.w != null) {
                this.w.release();
            }
            a();
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void d() {
        try {
            this.ab = a(true);
            z.d(TAG, "setDisplay mCurDisplayMode:" + this.ab);
            changeNoticeURL();
            if (this.ab == a.a) {
                if (this.N != null && TextUtils.isEmpty(this.N.getVideoUrlEncode()) && this.s != null) {
                    try {
                        this.s.registerAdView(this.C);
                        this.t = AdEvents.createAdEvents(this.s);
                        this.s.start();
                        if (this.t != null) {
                            this.t.impressionOccurred();
                        }
                    } catch (Exception e2) {
                        z.a("omsdk", e2.getMessage());
                    }
                    z.a("omsdk", "native adSession start, impressionOccurred");
                }
                k();
                n();
            } else if (this.ab == a.b) {
                e();
            } else if (this.ab == a.c) {
                o();
                m();
            }
            this.q = true;
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
        }
    }

    private void e() {
        A();
        l();
    }

    private void f() {
        try {
            if (this.ab != a.a || this.P == 0 || this.T == 0 || this.S == 0) {
                return;
            }
            int i = (this.P * this.T) / this.S;
            if (this.C == null || i == 0) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.C.getLayoutParams();
            layoutParams.width = this.P;
            layoutParams.height = i;
            this.C.setLayoutParams(layoutParams);
            z.d(TAG, "initBitImageViewWHByDevWh onMeasure mdevWidth:" + this.P + " mDevHeight:" + this.O + " finalHeigt:" + i);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void g() {
        try {
            if (this.ab == a.c) {
                if (this.P != 0 && this.T != 0 && this.S != 0) {
                    int i = (this.P * this.T) / this.S;
                    if (this.z != null && i != 0) {
                        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.z.getLayoutParams();
                        layoutParams.width = this.P;
                        layoutParams.height = i;
                        layoutParams.addRule(13);
                        this.z.setLayoutParams(layoutParams);
                        z.d(TAG, "initGifImageViewWHByDevWh onMeasure mdevWidth:" + this.P + " mDevHeight:" + this.O + " finalHeigt:" + i + this.N.getAppName());
                    }
                } else if (this.P != 0 && this.z != null) {
                    RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.z.getLayoutParams();
                    layoutParams2.width = this.P;
                    layoutParams2.height = (this.P * 627) / SysfuncInterface.SYSFUNC_GET_PACKAGE_ID_SUCCESS;
                    layoutParams2.addRule(13);
                    this.z.setLayoutParams(layoutParams2);
                    z.d(TAG, "initGifImageViewWHByDevWh onMeasure mdevWidth:" + this.P + " mDevHeight:" + this.O + this.N.getAppName());
                }
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void h() {
        try {
            if (this.ab != a.b || this.x == null) {
                return;
            }
            int iB = (int) B();
            int iJ = ae.j(getContext());
            if (!this.h) {
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.x.getLayoutParams();
                layoutParams.width = this.P;
                layoutParams.height = this.O;
                layoutParams.addRule(13);
                this.x.setLayoutParams(layoutParams);
            } else {
                RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.G.getLayoutParams();
                layoutParams2.width = iB;
                layoutParams2.height = iJ;
                layoutParams2.addRule(13);
                this.G.setLayoutParams(layoutParams2);
            }
            r();
            if (!this.h) {
                a(this.w, this.P, this.O);
            } else {
                a(this.w, iB, iJ);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private void i() {
        try {
            this.w.showSoundIndicator(this.l);
            this.w.showProgressView(this.k);
            if (this.ac != null) {
                this.ac.onExitFullscreen();
            }
            if (this.ad != null) {
                this.ad.onExitFullscreen();
            }
            if (this.u != null) {
                this.u.playerStateChange(PlayerState.NORMAL);
                z.a("omsdk", "NV playerStateChange, NORMAL");
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private void j() {
        try {
            if (this.ac != null) {
                this.ac.onVideoAdClicked(this.N);
            }
            if (this.ad != null) {
                this.ad.onVideoAdClicked(this.N);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    protected final void a(String str) {
        try {
            if (TextUtils.isEmpty(str) || this.m.contains(str)) {
                return;
            }
            this.m.add(str);
            if (this.ac != null) {
                this.ac.onVideoStart();
            }
            if (this.ad != null) {
                this.ad.onVideoStart();
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    protected final void b(String str) {
        try {
            if (TextUtils.isEmpty(str) || this.n.contains(str)) {
                return;
            }
            this.n.add(str);
            if (this.ad != null) {
                this.ad.onVideoComplete();
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private void k() {
        try {
            ae.a((ImageView) this.C);
            this.C.setVisibility(0);
            this.x.setVisibility(8);
            this.z.setVisibility(8);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void l() {
        try {
            this.x.setVisibility(0);
            this.C.setVisibility(8);
            this.z.setVisibility(8);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void m() {
        try {
            this.x.setVisibility(8);
            this.C.setVisibility(8);
            this.z.setVisibility(0);
            this.A.setVisibility(0);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void n() {
        try {
            if (this.N == null) {
                return;
            }
            String imageUrl = this.N.getImageUrl();
            if (ai.a(imageUrl) || getContext() == null) {
                return;
            }
            z.b(TAG, "fillBigimage startOrPlayVideo");
            com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(imageUrl, new com.mbridge.msdk.foundation.same.c.c() {
                @Override
                public final void onFailedLoad(String str, String str2) {
                    z.c(MBMediaView.TAG, "load image fail in mbmediaview");
                }

                @Override
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    z.b(MBMediaView.TAG, "fillBigimage onSuccessLoad mCurDisplayMode:" + MBMediaView.this.ab);
                    if (MBMediaView.this.C == null || MBMediaView.this.ab != a.a) {
                        return;
                    }
                    if (bitmap != null) {
                        z.b(MBMediaView.TAG, "setimgeBitmap=======");
                        MBMediaView.this.S = bitmap.getWidth();
                        MBMediaView.this.T = bitmap.getHeight();
                        MBMediaView.this.C.setImageUrl(str);
                        MBMediaView.this.C.setImageBitmap(bitmap);
                    }
                    MBMediaView.this.C.setOnClickListener(new com.mbridge.msdk.widget.a() {
                        @Override
                        protected final void a(View view) {
                            if (MBMediaView.this.al != null) {
                                MBMediaView.this.b(MBMediaView.this.al);
                            } else {
                                MBMediaView.this.b(view.getContext());
                            }
                        }
                    });
                }
            });
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void o() {
        try {
            if (this.N == null) {
                return;
            }
            String gifUrl = this.N.getGifUrl();
            if (ai.a(gifUrl) || getContext() == null) {
                return;
            }
            z.b(TAG, "fillGifimage");
            this.A.loadDataWithBaseURL(null, "<!DOCTYPE html><html lang=\"en\"><head>  <meta charset=\"UTF-8\">  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">  <title>Document</title>  <style>  *{    margin: 0;    padding: 0;  }  html, body{    width: 100%;    height: 100%;  }  body{    background-image: url('gifUrl');    background-position: center;    background-size: contain;    background-repeat: no-repeat;  }  </style></head><body></body></html>".replace("gifUrl", gifUrl), "text/html", "utf-8", null);
            this.A.setInterceptTouch(true);
            this.z.setOnClickListener(new com.mbridge.msdk.widget.a() {
                @Override
                protected final void a(View view) {
                    if (MBMediaView.this.al == null) {
                        MBMediaView.this.b(view.getContext());
                    } else {
                        MBMediaView mBMediaView = MBMediaView.this;
                        mBMediaView.b(mBMediaView.al);
                    }
                    z.b(MBMediaView.TAG, "CLICK WEBVIEW LAYOUT ");
                }
            });
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void b(Context context) {
        final com.mbridge.msdk.click.b bVar = new com.mbridge.msdk.click.b(getContext(), p());
        try {
            if (this.N != null && this.N.needShowIDialog()) {
                com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() {
                    @Override
                    public final void b() {
                    }

                    @Override
                    public final void a() {
                        MBMediaView.this.a(bVar);
                    }

                    @Override
                    public final void c() {
                        a();
                    }
                };
                if (com.mbridge.msdk.click.c.a(this.N) && this.N.needShowIDialog()) {
                    if (!bVar.b(this.N)) {
                        com.mbridge.msdk.mbjscommon.confirmation.e.a().a("", this.N, context, p(), aVar);
                        return;
                    } else {
                        F();
                        j();
                        return;
                    }
                }
            }
        } catch (Throwable th) {
            z.a(TAG, th.getMessage());
        }
        a(bVar);
    }

    private void a(com.mbridge.msdk.click.b bVar) {
        try {
            j();
            if (this.N != null && !ai.a(p())) {
                F();
                bVar.a(new NativeListener.NativeTrackingListener() {
                    @Override
                    public final void onDismissLoading(Campaign campaign) {
                    }

                    @Override
                    public final void onDownloadFinish(Campaign campaign) {
                    }

                    @Override
                    public final void onDownloadProgress(int i) {
                    }

                    @Override
                    public final void onDownloadStart(Campaign campaign) {
                    }

                    @Override
                    public final boolean onInterceptDefaultLoadingDialog() {
                        return true;
                    }

                    @Override
                    public final void onShowLoading(Campaign campaign) {
                    }

                    @Override
                    public final void onStartRedirection(Campaign campaign, String str) {
                        try {
                            MBMediaView.n(MBMediaView.this);
                            MBMediaView.o(MBMediaView.this);
                            MBMediaView.a(MBMediaView.this, campaign, str);
                            z.d(MBMediaView.TAG, "=====showloading");
                        } catch (Exception e2) {
                            z.d(MBMediaView.TAG, e2.getMessage());
                        }
                    }

                    @Override
                    public final void onRedirectionFailed(Campaign campaign, String str) {
                        try {
                            MBMediaView.p(MBMediaView.this);
                            MBMediaView.q(MBMediaView.this);
                            MBMediaView.b(MBMediaView.this, campaign, str);
                            z.d(MBMediaView.TAG, "=====hideloading");
                        } catch (Exception e2) {
                            z.d(MBMediaView.TAG, e2.getMessage());
                        }
                    }

                    @Override
                    public final void onFinishRedirection(Campaign campaign, String str) {
                        try {
                            MBMediaView.p(MBMediaView.this);
                            MBMediaView.q(MBMediaView.this);
                            MBMediaView.c(MBMediaView.this, campaign, str);
                            z.d(MBMediaView.TAG, "=====hideloading");
                        } catch (Exception e2) {
                            z.d(MBMediaView.TAG, e2.getMessage());
                        }
                    }
                });
                bVar.c(this.N);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private String p() {
        try {
            if (this.N == null || !ai.b(this.N.getCampaignUnitId())) {
                return null;
            }
            return this.N.getCampaignUnitId();
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            return null;
        }
    }

    private a a(boolean z) {
        a aVar = null;
        try {
            if (this.N == null) {
                return null;
            }
            z.b(TAG, "initCurDisplayMode appname:" + this.N.getAppName());
            if (ai.a(this.N.getVideoUrlEncode())) {
                if (ai.b(this.N.getImageUrl())) {
                    aVar = a.a;
                    z.b(TAG, "没有视频 只有大图 显示大图");
                }
                if (!ai.b(this.N.getGifUrl())) {
                    return aVar;
                }
                z.b(TAG, "没有视频 有gif图 显示gif图");
                if (ai.a(this.N.getImageUrl())) {
                    z.b(TAG, "没有视频 没有大图 有gif图 显示gif图");
                    aVar = a.c;
                }
                this.A.setWebViewClient(new g(this));
                o();
                return aVar;
            }
            if (Build.VERSION.SDK_INT >= 14 && this.g && this.aa != null) {
                if (ai.b(this.N.getVideoUrlEncode()) && ai.a(this.N.getImageUrl())) {
                    a aVar2 = a.b;
                    z.b(TAG, "只有视频 没有大图 显示视频");
                    return aVar2;
                }
                if (!ai.b(this.N.getVideoUrlEncode()) || !ai.b(this.N.getImageUrl())) {
                    return null;
                }
                z.b(TAG, "有视频 又有大图 进入判断逻辑");
                int iT = t();
                z.b(TAG, "readyRate:" + iT);
                if (com.mbridge.msdk.videocommon.download.d.a(this.aa, iT)) {
                    a aVar3 = a.b;
                    z.b(TAG, "满足readyrate 显示视频");
                    return aVar3;
                }
                a aVar4 = a.a;
                z.b(TAG, "没有满足readyrate 暂时显示大图 判断是否监听下载");
                if (!z) {
                    return aVar4;
                }
                if (this.a) {
                    z.b(TAG, "可以监听下载 下载满足readyrate之后 显示大图");
                    this.aa.b(new f(this));
                    return aVar4;
                }
                z.b(TAG, "开发者禁止监听下载 一直显示大图");
                return aVar4;
            }
            StringBuilder sb = new StringBuilder();
            sb.append("版本小于4.0或者没有开启硬件加速 显示大图 isHard:");
            sb.append(this.g);
            sb.append(" downloadtask:");
            sb.append(this.aa != null);
            z.d(TAG, sb.toString());
            return a.a;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            z.b(TAG, "默认显示大图");
            return a.a;
        }
    }

    private void q() {
        try {
            if (this.N == null) {
                z.b(TAG, "campaign is null addPlayerView return");
            }
            z.b(TAG, "specSize addPlayerView");
            if (this.w != null && this.w.getParent() != null) {
                ((ViewGroup) this.w.getParent()).removeView(this.w);
            }
            l();
            MediaViewPlayerView mediaViewPlayerView = new MediaViewPlayerView(getContext());
            this.w = mediaViewPlayerView;
            mediaViewPlayerView.showProgressView(this.k);
            this.w.showSoundIndicator(this.l);
            if (this.f) {
                this.w.openSound();
            } else {
                this.w.closeSound();
            }
            this.w.setAllowLoopPlay(this.b);
            this.w.initPlayerViewData(s(), this.N, v(), this, this.aa, p());
            this.w.setOnMediaViewPlayerViewListener(new c(this));
            this.x.addView(this.w, -1, -1);
            try {
                if (this.w == null) {
                    z.b(TAG, "setPlayerViewListener playerview is null return");
                } else {
                    this.w.setOnClickListener(new com.mbridge.msdk.widget.a() {
                        @Override
                        protected final void a(View view) {
                            try {
                                if (!MBMediaView.this.h) {
                                    MBMediaView.d(MBMediaView.this);
                                }
                                MBMediaView.this.w.showSoundIndicator(true);
                                MBMediaView.this.w.showProgressView(true);
                                if (!MBMediaView.this.d || MBMediaView.this.h || (MBMediaView.this.E != null && MBMediaView.this.E.getParent() != null)) {
                                    if (!MBMediaView.this.h) {
                                        if (MBMediaView.this.al != null) {
                                            MBMediaView.this.b(MBMediaView.this.al);
                                        } else {
                                            MBMediaView.this.b(view.getContext());
                                        }
                                        z.d(MBMediaView.TAG, "不允许全屏 跳gp");
                                        if (MBMediaView.this.u != null) {
                                            MBMediaView.this.u.adUserInteraction(InteractionType.CLICK);
                                            return;
                                        }
                                        return;
                                    }
                                    z.b(MBMediaView.TAG, "fullScreenShowUI");
                                    MBMediaView.i(MBMediaView.this);
                                    return;
                                }
                                if (!MBMediaView.this.w.halfLoadingViewisVisible() && MBMediaView.this.w.isPlaying()) {
                                    MBMediaView.h(MBMediaView.this);
                                    return;
                                }
                                z.b(MBMediaView.TAG, "is loading or no playing return;");
                            } catch (Throwable th) {
                                z.c(MBMediaView.TAG, th.getMessage(), th);
                            }
                        }
                    });
                }
            } catch (Throwable th) {
                z.d(TAG, th.getMessage());
            }
            if (this.s != null) {
                if (this.w != null) {
                    this.w.registerView(this.s);
                }
                this.t = AdEvents.createAdEvents(this.s);
                this.u = MediaEvents.createMediaEvents(this.s);
                this.s.start();
                this.t.loaded(VastProperties.createVastPropertiesForNonSkippableMedia(true, Position.STANDALONE));
                this.w.setVideoEvents(this.u);
                try {
                    if (this.t != null) {
                        this.t.impressionOccurred();
                    }
                } catch (Exception e2) {
                    z.a("omsdk", e2.getMessage());
                }
                z.a("omsdk", "NV adSession start, impressionOccurred");
            }
        } catch (Throwable th2) {
            z.d(TAG, th2.getMessage());
        }
    }

    private void r() {
        try {
            if (getVisibility() != 0) {
                return;
            }
            if (a((View) this)) {
                com.mbridge.msdk.c.d dVarU = u();
                int iD = dVarU != null ? dVarU.d() : 0;
                Message messageObtainMessage = this.M.obtainMessage();
                messageObtainMessage.what = 3;
                messageObtainMessage.obj = this;
                this.M.sendMessageDelayed(messageObtainMessage, (iD * 1000) + 300);
            }
            if (this.ab == a.b) {
                if (this.w == null) {
                    z.b(TAG, "setPlayerByVisibilityChange : player is null and addPlayerView");
                    q();
                } else if (this.N != this.w.getCampaign()) {
                    this.w.release();
                    q();
                    if (getParent() != null) {
                        ((View) getParent()).invalidate();
                    }
                    requestLayout();
                    z.b(TAG, "setPlayerByVisibilityChange : addplayerview andr requestLayout");
                }
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private String s() {
        try {
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
        if (this.N == null) {
            return null;
        }
        z.b(TAG, "getPlayUrl curDisplay:" + this.ab);
        if (this.aa != null) {
            int iF = this.aa.f();
            z.b(TAG, "downloadState:" + iF);
            if (iF == 5) {
                String strD = this.aa.d();
                if (new File(strD).exists() && this.aa.e() == ae.a(new File(strD))) {
                    z.b(TAG, "本地已下载完 拿本地播放地址：" + strD + " state：" + iF);
                    return strD;
                }
            }
        }
        String videoUrlEncode = this.N.getVideoUrlEncode();
        if (ai.b(videoUrlEncode)) {
            z.b(TAG, "本地尚未下载完 拿网络地址：" + videoUrlEncode);
            return videoUrlEncode;
        }
        return null;
    }

    private boolean a(View view) {
        if (view != null) {
            try {
                if (view.getVisibility() == 0) {
                    Rect rect = new Rect();
                    if (!view.getLocalVisibleRect(rect)) {
                        return false;
                    }
                    long jHeight = rect.height() * rect.width();
                    long height = view.getHeight() * view.getWidth();
                    long j = (long) (height * 0.5f);
                    if (height > 0 && ae.l(getContext()) && this.e && jHeight >= j) {
                        if (isShown()) {
                            return true;
                        }
                    }
                }
            } catch (Throwable th) {
                z.d(TAG, th.getMessage());
            }
        }
        return false;
    }

    private int t() {
        if (u() != null) {
            return u().f();
        }
        return 100;
    }

    private com.mbridge.msdk.c.d u() {
        try {
            if (this.N != null && !ai.a(this.N.getCampaignUnitId())) {
                String campaignUnitId = this.N.getCampaignUnitId();
                String strK = com.mbridge.msdk.foundation.controller.a.f().k();
                if (!ai.a(campaignUnitId) && !ai.a(strK)) {
                    com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(strK, campaignUnitId);
                    return dVarE != null ? dVarE : com.mbridge.msdk.c.d.d(campaignUnitId);
                }
                return com.mbridge.msdk.c.d.d(campaignUnitId);
            }
            return null;
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            return null;
        }
    }

    private boolean v() {
        com.mbridge.msdk.c.d dVarU;
        try {
            dVarU = u();
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
        if (dVarU == null) {
            return false;
        }
        int iJ = dVarU.j();
        z.b(TAG, "========autoPlayType：" + iJ);
        if (iJ == 1) {
            if (ae.b(getContext())) {
                z.b(TAG, "========wifi下自动播放");
                return true;
            }
            z.b(TAG, "========wifi下自动播放 但目前不是wifi环境 现在为点击播放");
            return false;
        }
        if (iJ == 2) {
            z.b(TAG, "========点击播放");
            return false;
        }
        if (iJ == 3) {
            z.b(TAG, "========有网自动播放");
            return ae.c(getContext());
        }
        if (ae.b(getContext())) {
            z.b(TAG, "========else wifi下自动播放");
            return true;
        }
        z.b(TAG, "========else wifi下自动播放 但目前不是wifi环境 现在为点击播放");
        return false;
    }

    @Override
    public void onPlayStarted(int i) {
        MediaEvents mediaEvents = this.u;
        if (mediaEvents != null) {
            try {
                mediaEvents.start(i, this.f ? 1.0f : 0.0f);
            } catch (IllegalArgumentException e2) {
                z.a("omsdk", e2.getMessage());
            }
            z.a("omsdk", "videoEvents.start()");
        }
    }

    @Override
    public void onPlayCompleted() {
        MediaEvents mediaEvents = this.u;
        if (mediaEvents != null) {
            mediaEvents.complete();
            z.a("omsdk", "videoEvents.complete()");
        }
    }

    @Override
    public void onPlayError(final String str) {
        try {
            z.b("error", str);
            Runnable runnable = new Runnable() {
                @Override
                public final void run() {
                    MBMediaView.r(MBMediaView.this);
                    MBMediaView.a(MBMediaView.this, str);
                    NativeController.insertExcludeId(MBMediaView.this.N.getCampaignUnitId(), MBMediaView.this.N);
                }
            };
            if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
            } else {
                runnable.run();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    @Override
    public void onBufferingStart(String str) {
        z.b("bufferMsg", str);
        MediaEvents mediaEvents = this.u;
        if (mediaEvents != null) {
            mediaEvents.bufferStart();
            z.a("omsdk", "videoEvents.bufferStart()");
        }
    }

    @Override
    public void onBufferingEnd() {
        MediaEvents mediaEvents = this.u;
        if (mediaEvents != null) {
            mediaEvents.bufferFinish();
            z.a("omsdk", "videoEvents.bufferFinish()");
        }
        z.b("bufferend", "bufferend");
    }

    @Override
    public void onPlaySetDataSourceError(String str) {
        z.b("errorstr", str);
    }

    static class 11 {
        static final int[] a;

        static {
            int[] iArr = new int[BaseView.a.values().length];
            a = iArr;
            try {
                iArr[BaseView.a.b.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[BaseView.a.a.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    private View w() {
        try {
            this.ah = new RelativeLayout(getContext());
            this.ah.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
            ImageView imageView = new ImageView(getContext());
            this.ai = imageView;
            imageView.setScaleType(ImageView.ScaleType.FIT_XY);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 30.0f), ae.b(getContext(), 30.0f));
            layoutParams.addRule(11);
            layoutParams.addRule(10);
            layoutParams.topMargin = ae.b(getContext(), 8.0f);
            layoutParams.rightMargin = ae.b(getContext(), 8.0f);
            this.ai.setLayoutParams(layoutParams);
            this.ai.setBackgroundResource(s.a(getContext(), "mbridge_nativex_close", i.c));
            this.ai.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    MBMediaView.this.exitFullScreen();
                }
            });
            this.B.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
            this.ah.addView(this.B);
            this.ah.addView(this.ai);
            return this.ah;
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            return null;
        }
    }

    public void exitFullScreen() {
        try {
            x();
            z.b(TAG, "=========webview close mAllowLoopPlay:" + this.b);
            if (this.b) {
                z.b(TAG, "播放结束 调用onClickPlayButton");
                this.w.onClickPlayButton();
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    public void showEndCardWebViewCloseBtn() {
        ImageView imageView = this.ai;
        if (imageView == null || imageView.getVisibility() == 0) {
            return;
        }
        this.ai.setVisibility(0);
    }

    public void hideEndCardWebViewCloseBtn() {
        ImageView imageView = this.ai;
        if (imageView == null || imageView.getVisibility() != 0) {
            return;
        }
        this.ai.setVisibility(8);
    }

    private void x() {
        try {
            FrameLayout frameLayout = (FrameLayout) getRootView().findViewById(R.id.content);
            FrameLayout frameLayout2 = (FrameLayout) getRootView().findViewById(100);
            RelativeLayout relativeLayout = (RelativeLayout) getRootView().findViewById(101);
            RelativeLayout relativeLayout2 = (RelativeLayout) getRootView().findViewById(103);
            if (relativeLayout2 == null && relativeLayout != null) {
                relativeLayout2 = (RelativeLayout) relativeLayout.findViewById(103);
            }
            RelativeLayout relativeLayout3 = (RelativeLayout) getRootView().findViewById(s.a(getContext(), "mbridge_full_rl_playcontainer", "id"));
            if (relativeLayout3 == null && relativeLayout2 != null) {
                relativeLayout3 = (RelativeLayout) relativeLayout2.findViewById(s.a(getContext(), "mbridge_full_rl_playcontainer", "id"));
            }
            RelativeLayout relativeLayout4 = (RelativeLayout) getRootView().findViewById(s.a(getContext(), "mbridge_full_player_parent", "id"));
            if (relativeLayout4 == null && relativeLayout3 != null) {
                relativeLayout4 = (RelativeLayout) relativeLayout3.findViewById(s.a(getContext(), "mbridge_full_player_parent", "id"));
            }
            ProgressBar progressBar = (ProgressBar) getRootView().findViewById(s.a(getContext(), "mbridge_full_pb_loading", "id"));
            RelativeLayout relativeLayout5 = (RelativeLayout) getRootView().findViewById(s.a(getContext(), "mbridge_full_rl_install", "id"));
            LinearLayout linearLayout = (LinearLayout) getRootView().findViewById(s.a(getContext(), "mbridge_full_ll_pro_dur", "id"));
            ViewGroup viewGroup = frameLayout2 != null ? (ViewGroup) frameLayout2.getParent() : null;
            if (relativeLayout2 != null) {
                relativeLayout2.removeView(linearLayout);
            } else if (linearLayout != null && linearLayout.getParent() != null) {
                ((ViewGroup) linearLayout.getParent()).removeView(linearLayout);
            }
            if (this.ah != null) {
                if (relativeLayout2 != null) {
                    relativeLayout2.removeView(this.ah);
                } else if (this.ah.getParent() != null) {
                    ((ViewGroup) this.ah.getParent()).removeView(this.ah);
                }
                this.B.setBackListener(null);
                this.B.setObject(null);
                this.B = null;
                this.ah = null;
            }
            if (relativeLayout2 != null) {
                relativeLayout2.removeView(relativeLayout5);
            } else if (relativeLayout5 != null && relativeLayout5.getParent() != null) {
                ((ViewGroup) relativeLayout5.getParent()).removeView(relativeLayout5);
            }
            if (relativeLayout2 != null) {
                relativeLayout2.removeView(progressBar);
            } else if (progressBar != null && progressBar.getParent() != null) {
                ((ViewGroup) progressBar.getParent()).removeView(progressBar);
            }
            if (relativeLayout4 != null) {
                relativeLayout4.removeView(this.w);
            }
            if (relativeLayout3 != null) {
                relativeLayout3.removeView(relativeLayout4);
            } else if (relativeLayout4 != null && relativeLayout4.getParent() != null) {
                ((ViewGroup) relativeLayout4.getParent()).removeView(relativeLayout4);
            }
            if (relativeLayout2 != null) {
                relativeLayout2.removeView(relativeLayout3);
            } else if (relativeLayout3 != null && relativeLayout3.getParent() != null) {
                ((ViewGroup) relativeLayout3.getParent()).removeView(relativeLayout3);
            } else if (this.F != null) {
                this.F.removeView(this.G);
            }
            if (relativeLayout != null) {
                relativeLayout.removeView(relativeLayout2);
            } else if (relativeLayout2 != null && relativeLayout2.getParent() != null) {
                ((ViewGroup) relativeLayout2.getParent()).removeView(relativeLayout2);
            } else if (this.E != null) {
                ((ViewGroup) this.E).removeView(this.F);
                ((ViewGroup) this.E.getParent()).removeView(this.E);
            }
            if (frameLayout != null) {
                if (relativeLayout != null) {
                    frameLayout.removeView(relativeLayout);
                } else {
                    frameLayout.removeView(this.E);
                    if (this.E.getParent() != null) {
                        ((ViewGroup) this.E.getParent()).removeView(this.E);
                        this.E.setVisibility(8);
                    }
                }
            }
            setVisibility(0);
            requestLayout();
            if (viewGroup != null) {
                if (this.w.getParent() != null && this.w.getParent() != viewGroup) {
                    ((ViewGroup) this.w.getParent()).removeView(this.w);
                }
                viewGroup.addView(this.w, this.L);
                viewGroup.removeView(frameLayout2);
                viewGroup.invalidate();
            }
            i();
            this.h = false;
            if (this.w != null) {
                this.w.setExitFullScreen();
                if (this.f) {
                    this.w.openSound();
                } else {
                    this.w.closeSound();
                }
                this.w.gonePauseView();
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private boolean y() {
        try {
            this.G = this.F.getMBridgeFullPlayContainer();
            this.K = this.F.getMBridgeFullPlayerParent();
            this.H = this.F.getMBridgeFullClose();
            this.I = this.F.getMBridgeFullTvInstall();
            this.J = this.F.getMBridgeFullPb();
            return true;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return false;
        }
    }

    private void z() {
        try {
            this.i = ae.i(getContext()) >= ae.j(getContext());
            this.j = this.i;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void A() {
        try {
            if (this.N != null && !ai.a(this.N.getVideoResolution())) {
                String videoResolution = this.N.getVideoResolution();
                z.d(TAG, "videoResolution:" + videoResolution);
                String[] strArrSplit = videoResolution.split("x");
                if (strArrSplit == null || strArrSplit.length != 2) {
                    return;
                }
                String str = strArrSplit[0];
                String str2 = strArrSplit[1];
                double dB = ae.b(str);
                double dB2 = ae.b(str2);
                if (dB <= 0.0d || dB2 <= 0.0d) {
                    return;
                }
                this.Q = dB;
                this.R = dB2;
                return;
            }
            z.b(TAG, "campaign is null initVideoWH return");
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private float B() {
        try {
            float fI = ae.i(getContext());
            return this.i ? fI + ae.k(getContext()) : fI;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return 0.0f;
        }
    }

    private float C() {
        try {
            float fJ = ae.j(getContext());
            return !this.i ? fJ + ae.k(getContext()) : fJ;
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
            return 0.0f;
        }
    }

    private boolean c(Context context) {
        return (context.getResources().getConfiguration().screenLayout & 15) >= 3;
    }

    private void a(View view, float f2, float f3) {
        try {
            if (view == null) {
                z.b(TAG, "setPlayViewParamsByVidoWH view is null");
                return;
            }
            double d2 = 0.0d;
            if (this.Q > 0.0d && this.R > 0.0d) {
                double d3 = this.Q / this.R;
                if (f2 > 0.0f && f3 > 0.0f) {
                    d2 = f2 / f3;
                }
                double dA = ae.a(Double.valueOf(d3));
                double dA2 = ae.a(Double.valueOf(d2));
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.x.getLayoutParams();
                RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) view.getLayoutParams();
                boolean z = c(getContext()) && this.i;
                int i = -1;
                if (dA > dA2) {
                    double d4 = (((double) f2) * this.R) / this.Q;
                    z.b(TAG, " setPlayView 宽铺满 playerViewHeight:" + d4 + " onMeasure mDevWidth " + this.P + " * mDevHeight *****" + this.O);
                    layoutParams2.width = -1;
                    if (!z) {
                        i = (int) d4;
                    }
                    layoutParams2.height = i;
                    layoutParams2.addRule(13);
                    layoutParams.width = this.P;
                    layoutParams.height = (int) d4;
                    layoutParams.addRule(13);
                } else if (dA < dA2) {
                    double d5 = ((double) f3) * d3;
                    layoutParams2.width = z ? -1 : (int) d5;
                    layoutParams2.height = -1;
                    layoutParams2.addRule(13);
                    layoutParams.width = (int) d5;
                    layoutParams.height = this.O;
                    layoutParams.addRule(13);
                    z.b(TAG, "setPlayView 高铺满 playerViewWidth:" + d5 + " mDevWidth " + this.P + " * mDevHeight *****" + this.O);
                } else {
                    layoutParams2.width = -1;
                    layoutParams2.height = -1;
                    layoutParams.width = this.P;
                    layoutParams.height = this.O;
                    layoutParams.addRule(13);
                    z.b(TAG, "setPlayView 铺满父布局  videoWHDivide_final：" + dA + "  screenWHDivide_final：" + dA2);
                }
                if (!this.h) {
                    this.x.setLayoutParams(layoutParams);
                }
                view.setLayoutParams(layoutParams2);
                return;
            }
            b(view);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void b(View view) {
        try {
            if (view == null) {
                z.b(TAG, "setPlayViewParamsDefault view is null");
                return;
            }
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) view.getLayoutParams();
            layoutParams.width = -1;
            if (this.i) {
                layoutParams.height = -1;
            } else {
                layoutParams.height = (((int) B()) * 9) / 16;
                layoutParams.addRule(13);
            }
            view.setLayoutParams(layoutParams);
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private void D() {
        try {
            if (this.H == null && this.ai == null) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 30.0f), ae.b(getContext(), 30.0f));
            layoutParams.addRule(11);
            layoutParams.addRule(10);
            layoutParams.topMargin = ae.b(getContext(), 8.0f);
            layoutParams.rightMargin = ae.b(getContext(), 8.0f);
            if (this.H != null) {
                this.H.setLayoutParams(layoutParams);
            }
            if (this.ai != null) {
                this.ai.setLayoutParams(layoutParams);
            }
            updateViewManger(false);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    private void E() {
        try {
            if (this.H == null && this.ai == null) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 30.0f), ae.b(getContext(), 30.0f));
            layoutParams.addRule(11);
            layoutParams.addRule(10);
            if (this.ae == 0 && ae.a(getContext())) {
                layoutParams.rightMargin = ae.k(getContext()) + ae.b(getContext(), 8.0f);
            } else {
                layoutParams.rightMargin = ae.b(getContext(), 8.0f);
            }
            layoutParams.topMargin = ae.b(getContext(), 8.0f);
            if (this.H != null) {
                this.H.setLayoutParams(layoutParams);
            }
            if (this.ai != null) {
                this.ai.setLayoutParams(layoutParams);
            }
            updateViewManger(true);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    public void updateViewManger(boolean z) {
        com.mbridge.msdk.nativex.view.mbfullview.a aVarA = com.mbridge.msdk.nativex.view.mbfullview.a.a(getContext());
        boolean z2 = true;
        int i = 0;
        if (aVarA != null) {
            try {
                this.F.getmAnimationPlayer().clearAnimation();
                aVarA.a(z, !this.w.isComplete(), this.F);
                aVarA.a(z, this.F, this.ae);
            } catch (NullPointerException e2) {
                e2.printStackTrace();
                return;
            }
        }
        if (!(this.F instanceof MBridgeTopFullView) || aVarA == null) {
            return;
        }
        if (z) {
            z2 = false;
        }
        BaseView baseView = this.F;
        if (baseView instanceof MBridgeTopFullView) {
            MBridgeTopFullView mBridgeTopFullView = (MBridgeTopFullView) baseView;
            if (!z2) {
                i = 8;
            }
            mBridgeTopFullView.getMBridgeFullViewDisplayIcon().setVisibility(i);
            mBridgeTopFullView.getMBridgeFullViewDisplayTitle().setVisibility(i);
            mBridgeTopFullView.getMBridgeFullViewDisplayDscription().setVisibility(i);
            mBridgeTopFullView.getStarLevelLayoutView().setVisibility(i);
        }
    }

    private void F() {
        if (this.N.isReportClick()) {
            return;
        }
        this.N.setReportClick(true);
        CampaignEx campaignEx = this.N;
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || this.N.getNativeVideoTracking().h() == null) {
            return;
        }
        Context context = getContext();
        CampaignEx campaignEx2 = this.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), this.N.getNativeVideoTracking().h(), false, false);
    }

    private void a(int i, int i2) {
        CampaignEx.b mediaViewHolder;
        try {
            if (this.N == null || (mediaViewHolder = this.N.getMediaViewHolder()) == null || mediaViewHolder.i || i2 == 0) {
                return;
            }
            List<Map<Integer, String>> listE = this.N.getNativeVideoTracking().e();
            int i3 = ((i + 1) * 100) / i2;
            if (listE != null) {
                int i4 = 0;
                while (i4 < listE.size()) {
                    Map<Integer, String> map = listE.get(i4);
                    if (map != null && map.size() > 0) {
                        Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            Map.Entry<Integer, String> next = it.next();
                            int iIntValue = next.getKey().intValue();
                            String value = next.getValue();
                            if (iIntValue <= i3 && !TextUtils.isEmpty(value)) {
                                com.mbridge.msdk.click.b.a(getContext(), this.N, this.N.getCampaignUnitId(), new String[]{value}, false, true);
                                it.remove();
                                listE.remove(i4);
                                i4--;
                            }
                        }
                    }
                    i4++;
                }
                if (listE.size() <= 0) {
                    mediaViewHolder.i = true;
                }
            }
        } catch (Throwable unused) {
            z.d(TAG, "reportPlayPercentageData error");
        }
    }

    private void G() {
        int i;
        try {
            if (this.N == null || this.N.getNativeVideoTracking() == null) {
                return;
            }
            String[] strArrD = this.N.getNativeVideoTracking().d();
            if (this.i) {
                i = o;
            } else {
                i = p;
            }
            for (String str : strArrD) {
                if (!TextUtils.isEmpty(str)) {
                    com.mbridge.msdk.click.b.a(getContext(), this.N, this.N.getCampaignUnitId(), str + "&orienation=" + i, false, false);
                }
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    public void changeNoticeURL() {
        String str;
        CampaignEx campaignEx = this.N;
        if (campaignEx != null) {
            String noticeUrl = campaignEx.getNoticeUrl();
            if (TextUtils.isEmpty(noticeUrl)) {
                return;
            }
            if (noticeUrl.contains("is_video")) {
                if (this.ab == a.b) {
                    if (noticeUrl.contains("is_video=2")) {
                        noticeUrl = noticeUrl.replace("is_video=2", "is_video=1");
                    }
                } else if (this.ab == a.a && noticeUrl.contains("is_video=1")) {
                    noticeUrl = noticeUrl.replace("is_video=1", "is_video=2");
                }
            } else {
                if (this.ab == a.b) {
                    str = "1";
                } else {
                    str = this.ab == a.a ? "2" : "";
                }
                StringBuilder sb = new StringBuilder(noticeUrl);
                if (noticeUrl.contains("?")) {
                    sb.append("&is_video=");
                    sb.append(str);
                } else {
                    sb.append("?is_video=");
                    sb.append(str);
                }
                noticeUrl = sb.toString();
            }
            this.N.setNoticeUrl(noticeUrl);
        }
    }

    public String getAddNVT2ToNoticeURL() {
        CampaignEx campaignEx = this.N;
        if (campaignEx == null) {
            return null;
        }
        String noticeUrl = campaignEx.getNoticeUrl();
        if (TextUtils.isEmpty(noticeUrl) || noticeUrl.contains("nv_t2")) {
            return noticeUrl;
        }
        return noticeUrl + "&nv_t2=" + this.N.getNvT2();
    }

    public boolean canShowVideo() {
        return a(false) == a.b;
    }

    private class e implements SensorEventListener {
        @Override
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        private e() {
        }

        @Override
        public final void onSensorChanged(SensorEvent sensorEvent) {
            int iRound;
            if (MBMediaView.this.ak) {
                return;
            }
            try {
                float[] fArr = sensorEvent.values;
                float f = -fArr[0];
                float f2 = -fArr[1];
                float f3 = -fArr[2];
                if (((f * f) + (f2 * f2)) * 4.0f >= f3 * f3) {
                    iRound = 90 - Math.round(((float) Math.atan2(-f2, f)) * 57.29578f);
                    while (iRound >= 360) {
                        iRound -= 360;
                    }
                    while (iRound < 0) {
                        iRound += 360;
                    }
                } else {
                    iRound = -1;
                }
                float fB = MBMediaView.this.B();
                int iJ = ae.j(MBMediaView.this.getContext());
                if ((iRound <= 45 || iRound >= 135) && (iRound <= 225 || iRound >= 315)) {
                    if (((iRound <= 135 || iRound >= 225) && ((iRound <= 315 || iRound >= 360) && ((iRound < 0 || iRound > 45) && iRound != -1))) || fB > iJ || !MBMediaView.this.j) {
                        return;
                    }
                    z.b(MBMediaView.TAG, "onSensorChanged: to protrait: |||||||||||||||||");
                    MBMediaView.this.i = false;
                    MBMediaView.this.j = false;
                    MBMediaView.this.M.postDelayed(new Runnable() {
                        @Override
                        public final void run() {
                            try {
                                z.b(MBMediaView.TAG, "onSensorChanged: is portrait: |||||||||||||||||");
                                com.mbridge.msdk.nativex.view.mbfullview.a.a(MBMediaView.this.getContext()).a(MBMediaView.this.F, MBMediaView.this.i);
                                MBMediaView.this.D();
                                MBMediaView.this.h();
                                MBMediaView.this.f();
                                MBMediaView.this.g();
                                if (MBMediaView.this.B != null) {
                                    z.a(MBMediaView.TAG, "=====orientation|||||");
                                    MBMediaView.this.B.orientation(MBMediaView.this.i);
                                }
                            } catch (Exception e) {
                                z.d(MBMediaView.TAG, e.getMessage());
                            }
                        }
                    }, 200L);
                    return;
                }
                if (fB < iJ || MBMediaView.this.j) {
                    return;
                }
                z.b(MBMediaView.TAG, "onSensorChanged: to LandScape: --------------");
                MBMediaView.this.i = true;
                MBMediaView.this.j = true;
                MBMediaView.this.M.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            z.b(MBMediaView.TAG, "onSensorChanged: is LandScape: --------------");
                            com.mbridge.msdk.nativex.view.mbfullview.a.a(MBMediaView.this.getContext()).a(MBMediaView.this.F, MBMediaView.this.i);
                            MBMediaView.this.E();
                            MBMediaView.this.h();
                            MBMediaView.this.f();
                            MBMediaView.this.g();
                            if (MBMediaView.this.B != null) {
                                z.a(MBMediaView.TAG, "=====orientation----");
                                MBMediaView.this.B.orientation(MBMediaView.this.i);
                            }
                        } catch (Exception e) {
                            z.d(MBMediaView.TAG, e.getMessage());
                        }
                    }
                }, 200L);
            } catch (Throwable th) {
                z.c(MBMediaView.TAG, th.getMessage(), th);
            }
        }
    }

    private WindVaneWebViewForNV H() {
        try {
            z.d(TAG, "getEndCardWebview hadStarLoad:" + this.ag + "-endCardWebview:" + this.B);
            if (this.B != null && this.ag) {
                return this.B;
            }
            if (this.ag) {
                return null;
            }
            b(true);
            return null;
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            return null;
        }
    }

    private void b(boolean z) {
        try {
            int nvT2 = this.N.getNvT2();
            if (this.B == null) {
                WindVaneWebViewForNV windVaneWebViewForNV = new WindVaneWebViewForNV(getContext());
                this.B = windVaneWebViewForNV;
                windVaneWebViewForNV.setObject(this);
                this.B.setBackListener(new com.mbridge.msdk.nativex.listener.b() {
                    @Override
                    public final void a() {
                        MBMediaView.this.exitFullScreen();
                    }
                });
                this.B.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() {
                    @Override
                    public final void a(WebView webView, String str) {
                        super.a(webView, str);
                        MBMediaView.this.af = true;
                    }

                    @Override
                    public final void a(WebView webView, int i, String str, String str2) {
                        super.a(webView, i, str, str2);
                        MBMediaView.this.af = false;
                    }
                });
            }
            if (nvT2 != 3) {
                if (nvT2 == 4) {
                    this.ag = true;
                    if (this.N != null) {
                        BrowserView.MBDownloadListener mBDownloadListener = new BrowserView.MBDownloadListener(this.N);
                        mBDownloadListener.setTitle(this.N.getAppName());
                        this.B.setDownloadListener(mBDownloadListener);
                        this.B.setFilter(new d());
                        return;
                    }
                    return;
                }
                return;
            }
            String str = this.N.getendcard_url();
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.N.getMediaViewHolder();
            if (str.contains(".zip") && str.contains("md5filename")) {
                String h5ResAddress = H5DownLoadManager.getInstance().getH5ResAddress(str);
                if (ai.b(h5ResAddress)) {
                    this.ag = true;
                    this.B.loadUrl(h5ResAddress);
                    return;
                }
                return;
            }
            String htmlContentFromUrl = HTMLResourceManager.getInstance().getHtmlContentFromUrl(str);
            if (ai.b(htmlContentFromUrl)) {
                z.a(TAG, "load html...");
                this.ag = true;
                this.B.loadDataWithBaseURL(str, htmlContentFromUrl, "text/html", "UTF-8", null);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    private static final class g extends WebViewClient {
        WeakReference<MBMediaView> a;

        public g(MBMediaView mBMediaView) {
            this.a = new WeakReference<>(mBMediaView);
        }

        @Override
        public final void onPageFinished(WebView webView, String str) {
            super.onPageFinished(webView, str);
            try {
                MBMediaView mBMediaView = this.a.get();
                if (mBMediaView == null || mBMediaView.ab == null || mBMediaView.ab != a.a) {
                    return;
                }
                mBMediaView.m();
                mBMediaView.ab = a.c;
                mBMediaView.changeNoticeURL();
            } catch (Exception e) {
                z.d(MBMediaView.TAG, e.getMessage());
            }
        }
    }

    private static final class f implements com.mbridge.msdk.videocommon.listener.a {
        WeakReference<MBMediaView> a;

        @Override
        public final void a(String str, String str2) {
        }

        public f(MBMediaView mBMediaView) {
            this.a = new WeakReference<>(mBMediaView);
        }

        @Override
        public final void a(String str) {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                mBMediaView.M.post(new b(mBMediaView));
            }
        }
    }

    private static final class b implements Runnable {
        WeakReference<MBMediaView> a;

        public b(MBMediaView mBMediaView) {
            this.a = new WeakReference<>(mBMediaView);
        }

        @Override
        public final void run() {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                try {
                    if (mBMediaView.ab == null || mBMediaView.ab != a.a) {
                        return;
                    }
                    mBMediaView.e();
                    mBMediaView.ab = a.b;
                    mBMediaView.changeNoticeURL();
                } catch (Throwable th) {
                    z.c(MBMediaView.TAG, th.getMessage(), th);
                }
            }
        }
    }

    private static final class c implements com.mbridge.msdk.nativex.listener.a {
        WeakReference<MBMediaView> a;

        public c(MBMediaView mBMediaView) {
            this.a = new WeakReference<>(mBMediaView);
        }

        @Override
        public final void a() {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                MBMediaView.N(mBMediaView);
            }
        }

        @Override
        public final void b() {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                MBMediaView.O(mBMediaView);
            }
        }

        @Override
        public final void c() {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                MBMediaView.P(mBMediaView);
            }
        }

        @Override
        public final void d() {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                MBMediaView.Q(mBMediaView);
            }
        }

        @Override
        public final void a(String str) {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                mBMediaView.a(str);
            }
        }

        @Override
        public final void b(String str) {
            MBMediaView mBMediaView = this.a.get();
            if (mBMediaView != null) {
                mBMediaView.b(str);
            }
        }
    }

    public BaseView.a handleViewStyleResult(Context context) {
        int nvT2 = this.N.getNvT2();
        if (nvT2 == 1) {
            b(context);
        } else {
            if (nvT2 == 2 || nvT2 == 3 || nvT2 == 4) {
                return BaseView.a.b;
            }
            if (nvT2 == 6) {
                return BaseView.a.a;
            }
        }
        return null;
    }

    private static final class d implements com.mbridge.msdk.mbjscommon.base.a {
        private d() {
        }

        @Override
        public final boolean a(String str) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    if (ad.a.a(str)) {
                        ad.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, (NativeListener.NativeTrackingListener) null);
                        return true;
                    }
                    if (URLUtil.isNetworkUrl(str)) {
                        return false;
                    }
                    ad.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, (BaseTrackingListener) null);
                    return true;
                }
            } catch (Exception e) {
                z.d(MBMediaView.TAG, e.getMessage());
            }
            return false;
        }
    }

    public void setProgressVisibility(boolean z) {
        this.k = z;
        MediaViewPlayerView mediaViewPlayerView = this.w;
        if (mediaViewPlayerView != null) {
            mediaViewPlayerView.showProgressView(z);
        }
    }

    public void setSoundIndicatorVisibility(boolean z) {
        this.l = z;
        MediaViewPlayerView mediaViewPlayerView = this.w;
        if (mediaViewPlayerView != null) {
            mediaViewPlayerView.showSoundIndicator(z);
        }
    }

    public void setVideoSoundOnOff(boolean z) {
        this.f = z;
        MediaViewPlayerView mediaViewPlayerView = this.w;
        if (mediaViewPlayerView != null) {
            if (z) {
                mediaViewPlayerView.openSound();
            } else {
                mediaViewPlayerView.closeSound();
            }
        }
    }

    public BaseView getFullScreenViewByStyle(Context context, BaseView.a aVar) {
        BaseView mBridgeFullView;
        BaseView baseView;
        int i = 11.a[aVar.ordinal()];
        if (i == 1) {
            mBridgeFullView = new MBridgeFullView(context);
        } else if (i == 2) {
            mBridgeFullView = new MBridgeTopFullView(context);
        } else {
            baseView = null;
            baseView.setStytle(aVar);
            return baseView;
        }
        baseView = mBridgeFullView;
        baseView.setStytle(aVar);
        return baseView;
    }

    public void setFullScreenViewBackgroundColor(int i) {
        this.v = i;
    }

    public void setFollowActivityOrientation(boolean z) {
        this.ak = z;
    }

    @Override
    protected void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        z.d(TAG, "onConfigurationChange " + configuration.orientation);
        if (!this.ak || this.aj == configuration.orientation) {
            return;
        }
        int i = configuration.orientation;
        this.aj = i;
        this.i = i == 0;
        this.j = this.aj == 0;
        this.M.postDelayed(new Runnable() {
            @Override
            public final void run() {
                try {
                    com.mbridge.msdk.nativex.view.mbfullview.a.a(MBMediaView.this.getContext()).a(MBMediaView.this.F, MBMediaView.this.i);
                    if (MBMediaView.this.aj == 0) {
                        MBMediaView.this.E();
                    } else {
                        MBMediaView.this.D();
                    }
                    MBMediaView.this.h();
                    MBMediaView.this.f();
                    MBMediaView.this.g();
                    if (MBMediaView.this.B != null) {
                        MBMediaView.this.B.orientation(MBMediaView.this.i);
                    }
                } catch (Exception e2) {
                    z.d(MBMediaView.TAG, e2.getMessage());
                }
            }
        }, 200L);
    }

    public boolean ismCurIsFullScreen() {
        return this.h;
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        z.d(TAG, "onVisibilityChanged invoked");
    }

    @Override
    public void getEndScreenInfo(Object obj, String str) {
        try {
            ArrayList arrayList = new ArrayList();
            arrayList.add(this.N);
            String strA = a(arrayList, p(), "MAL_16.3.67,3.0.1");
            String strEncodeToString = !TextUtils.isEmpty(strA) ? Base64.encodeToString(strA.getBytes(), 2) : "";
            z.d(TAG, "====getEndScreenInfo-mCampaign.name:" + this.N.getAppName());
            h.a().a(obj, strEncodeToString);
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    @Override
    public void install(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        try {
            if (this.al != null) {
                b(this.al);
            } else {
                if (!(obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) || (windVaneWebView = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).a) == null) {
                    return;
                }
                b(windVaneWebView.getContext());
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        z.d(TAG, "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "params is null");
            return;
        }
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextJ == null) {
            try {
                if ((obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) && (windVaneWebView = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).a) != null) {
                    contextJ = windVaneWebView.getContext();
                }
            } catch (Exception e2) {
                z.d(TAG, e2.getMessage());
            }
        }
        if (contextJ == null) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                com.mbridge.msdk.click.c.a(contextJ, strOptString);
            } else if (iOptInt == 2) {
                com.mbridge.msdk.click.c.b(contextJ, strOptString);
            }
        } catch (JSONException e3) {
            z.d(TAG, e3.getMessage());
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    @Override
    public void cai(Object obj, String str) {
        z.a(TAG, "cai:" + str);
        if (TextUtils.isEmpty(str)) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "packageName is empty");
            }
            int i = ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e2) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e2.getMessage());
                z.a(TAG, e2.getMessage());
            }
        } catch (JSONException e3) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + e3.getLocalizedMessage());
            z.c(TAG, "cai", e3);
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + th.getLocalizedMessage());
            z.c(TAG, "cai", th);
        }
    }

    @Override
    public void gial(Object obj, String str) {
        z.a(TAG, "gial:" + str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
            JSONObject jSONObject2 = new JSONObject();
            List<String> list = com.mbridge.msdk.foundation.controller.a.c;
            JSONArray jSONArray = new JSONArray();
            if (list != null && list.size() > 0) {
                int size = list.size();
                for (int i = 0; i < size; i++) {
                    jSONArray.put(list.get(i));
                }
            }
            jSONObject2.put("packageNameList", jSONArray);
            jSONObject.put("data", jSONObject2);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e2) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e2.getMessage());
            z.a(TAG, e2.getMessage());
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, th.getMessage());
            z.a(TAG, th.getMessage());
        }
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (!TextUtils.isEmpty(str)) {
                try {
                    new JSONObject(str).optInt(CallMraidJS.b, 1);
                } catch (Exception unused) {
                }
            }
            z.d(TAG, "SHOW CLOSE BTN ");
            showEndCardWebViewCloseBtn();
            h.a().a(obj, a(0));
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            h.a().b(obj, a(1));
        }
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
        try {
            exitFullScreen();
            h.a().a(obj, a(0));
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            h.a().b(obj, a(1));
        }
    }

    private String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            z.d(TAG, "code to string is error");
            return "";
        }
    }

    private String a(List<CampaignEx> list, String str, String str2) {
        if (list == null) {
            return null;
        }
        try {
            if (list.size() <= 0) {
                return null;
            }
            JSONArray camplistToJson = CampaignEx.parseCamplistToJson(list);
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("campaignList", camplistToJson);
            jSONObject.put("unit_id", str);
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, str2);
            return jSONObject.toString();
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
            return null;
        }
    }

    @Override
    public void onPlayProgress(int i, int i2) {
        int i3;
        String str;
        CampaignEx.b mediaViewHolder;
        try {
            if (this.N != null && (mediaViewHolder = this.N.getMediaViewHolder()) != null && !mediaViewHolder.h && mediaViewHolder.l != null && mediaViewHolder.l.size() > 0) {
                Map<Integer, String> map = mediaViewHolder.l;
                z.b(TAG, "reportAdvImp pre advImpMap.size:" + map.size());
                Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                while (it.hasNext()) {
                    Map.Entry<Integer, String> next = it.next();
                    Integer key = next.getKey();
                    String value = next.getValue();
                    if (i >= key.intValue() && !TextUtils.isEmpty(value)) {
                        com.mbridge.msdk.click.b.a(getContext(), this.N, this.N.getCampaignUnitId(), value, false, false);
                        it.remove();
                        z.b(TAG, "reportAdvImp remove value:" + value);
                    }
                }
                z.b(TAG, "reportAdvImp advImpMap after size:" + map.size());
                if (map.size() <= 0) {
                    mediaViewHolder.h = true;
                }
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
        a(i, i2);
        if (this.u != null) {
            int i4 = (i * 100) / i2;
            int i5 = ((i + 1) * 100) / i2;
            z.a("omsdk", "onPlayProgress: mCurPlayPosition = " + i + " percent = " + i4 + " nextPercent = " + i5);
            if (i4 <= 25 && 25 < i5) {
                this.u.firstQuartile();
                z.a("omsdk", "videoEvents.firstQuartile()");
            } else if (i4 <= 50 && 50 < i5) {
                this.u.midpoint();
                z.a("omsdk", "videoEvents.midpoint()");
            } else if (i4 <= 75 && 75 < i5) {
                this.u.thirdQuartile();
                z.a("omsdk", "videoEvents.thirdQuartile()");
            }
        }
        if (t() == 100 || this.am) {
            return;
        }
        int iG = u() != null ? u().g() : 0;
        int iT = t();
        if (iT == 0) {
            return;
        }
        if (iG > iT) {
            iG = iT / 2;
        }
        if (iG < 0 || i < (i3 = (iG * i2) / 100)) {
            return;
        }
        if (this.N.getAdType() == 94 || this.N.getAdType() == 287) {
            str = this.N.getRequestId() + this.N.getId() + this.N.getVideoUrlEncode();
        } else {
            str = this.N.getId() + this.N.getVideoUrlEncode() + this.N.getBidToken();
        }
        com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(p(), str);
        if (aVarA != null) {
            aVarA.j();
            this.am = true;
            z.d(TAG, "CDRate is : " + i3 + " and start download !");
        }
    }

    static void b(MBMediaView mBMediaView) {
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || campaignEx.getMediaViewHolder() == null) {
            return;
        }
        com.mbridge.msdk.foundation.controller.a.f().a(mBMediaView.getContext());
        com.mbridge.msdk.mbnative.d.b.a(mBMediaView.N, mBMediaView.getContext(), mBMediaView.p(), null);
        CampaignEx.b mediaViewHolder = mBMediaView.N.getMediaViewHolder();
        if (!mediaViewHolder.a && mBMediaView.ab == a.b && ai.b(mBMediaView.N.getImpressionURL())) {
            mediaViewHolder.a = true;
            String impressionURL = mBMediaView.N.getImpressionURL();
            if (!impressionURL.contains("is_video=1")) {
                StringBuilder sb = new StringBuilder(impressionURL);
                if (impressionURL.contains("?")) {
                    sb.append("&is_video=1");
                } else {
                    sb.append("?is_video=1");
                }
                impressionURL = sb.toString();
            }
            String str = impressionURL;
            z.b(TAG, "change impressionurl:" + str);
            Context context = mBMediaView.getContext();
            CampaignEx campaignEx2 = mBMediaView.N;
            com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), str, false, true, com.mbridge.msdk.click.a.a.g);
        }
    }

    static void d(MBMediaView mBMediaView) {
        CampaignEx.b mediaViewHolder;
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || (mediaViewHolder = campaignEx.getMediaViewHolder()) == null || mediaViewHolder.g || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().o() == null) {
            return;
        }
        mediaViewHolder.g = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().o(), false, false);
    }

    static void h(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.getRootView() != null && (mBMediaView.getRootView() instanceof ViewGroup)) {
                BaseView.a aVarHandleViewStyleResult = mBMediaView.handleViewStyleResult(mBMediaView.getContext());
                if (aVarHandleViewStyleResult == null) {
                    return;
                }
                BaseView fullScreenViewByStyle = mBMediaView.getFullScreenViewByStyle(mBMediaView.getContext(), aVarHandleViewStyleResult);
                mBMediaView.F = fullScreenViewByStyle;
                if (fullScreenViewByStyle == null) {
                    z.b(TAG, "mFullScreenViewUI is null");
                    return;
                }
                if (!mBMediaView.y()) {
                    z.d(TAG, "fullViewFailed return");
                    return;
                }
                com.mbridge.msdk.nativex.view.mbfullview.a.a(mBMediaView.getContext()).a(mBMediaView.F.style, mBMediaView.N, mBMediaView.F);
                mBMediaView.h = true;
                mBMediaView.r = false;
                if (mBMediaView.w != null) {
                    mBMediaView.w.setEnterFullScreen();
                    mBMediaView.w.setIsActivePause(false);
                }
                try {
                    if (mBMediaView.ac != null) {
                        mBMediaView.ac.onEnterFullscreen();
                    }
                    if (mBMediaView.ad != null) {
                        mBMediaView.ad.onEnterFullscreen();
                    }
                    if (mBMediaView.u != null) {
                        mBMediaView.u.playerStateChange(PlayerState.FULLSCREEN);
                        z.a("omsdk", "NV playerStateChange, FULLSCREEN");
                    }
                } catch (Exception e2) {
                    z.d(TAG, e2.getMessage());
                }
                FrameLayout frameLayout = (FrameLayout) mBMediaView.getRootView().findViewById(R.id.content);
                RelativeLayout relativeLayout = new RelativeLayout(mBMediaView.getContext());
                mBMediaView.E = relativeLayout;
                relativeLayout.setClickable(true);
                ViewGroup viewGroup = (ViewGroup) mBMediaView.w.getParent();
                int childCount = viewGroup.getChildCount();
                int i = 0;
                while (i < childCount && viewGroup.getChildAt(i) != mBMediaView.w) {
                    i++;
                }
                mBMediaView.L = i;
                FrameLayout frameLayout2 = new FrameLayout(mBMediaView.getContext());
                frameLayout2.setId(100);
                viewGroup.addView(frameLayout2, i, new ViewGroup.LayoutParams(mBMediaView.getWidth(), mBMediaView.getHeight()));
                viewGroup.removeView(mBMediaView.w);
                ViewGroup.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                relativeLayout.setId(101);
                new RelativeLayout.LayoutParams(-1, -1);
                mBMediaView.K.addView(mBMediaView.w, new RelativeLayout.LayoutParams(-1, -1));
                frameLayout.addView(relativeLayout, layoutParams);
                int i2 = -16777216;
                if (11.a[mBMediaView.F.style.ordinal()] == 2) {
                    i2 = -1;
                }
                if (mBMediaView.v != 0) {
                    relativeLayout.setBackgroundColor(mBMediaView.v);
                } else {
                    relativeLayout.setBackgroundColor(i2);
                }
                mBMediaView.F.setId(103);
                RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
                int[] iArr = new int[2];
                frameLayout.getLocationInWindow(iArr);
                mBMediaView.ae = iArr[1];
                z.b(TAG, "mFullViewStartY:" + mBMediaView.ae);
                if (mBMediaView.ae == 0) {
                    z.b(TAG, "addfullview 增加状态栏高度 沉浸式时contentview的高度和屏幕高度一样");
                    if (Build.VERSION.SDK_INT >= 23) {
                        WindowInsets rootWindowInsets = mBMediaView.getRootWindowInsets();
                        if (rootWindowInsets != null) {
                            layoutParams2.setMargins(0, rootWindowInsets.getStableInsetTop(), 0, 0);
                        }
                    } else {
                        layoutParams2.setMargins(0, ae.e(mBMediaView.getContext()), 0, 0);
                    }
                }
                relativeLayout.addView(mBMediaView.F, layoutParams2);
                try {
                    mBMediaView.z();
                    mBMediaView.a(mBMediaView.G, mBMediaView.B(), mBMediaView.C());
                    com.mbridge.msdk.nativex.view.mbfullview.a.a(mBMediaView.getContext()).a(mBMediaView.F, mBMediaView.i);
                    if (mBMediaView.i) {
                        mBMediaView.E();
                    } else {
                        mBMediaView.D();
                    }
                    mBMediaView.M.postDelayed(new Runnable() {
                        @Override
                        public final void run() {
                            MBMediaView.this.r = true;
                            if (MBMediaView.this.h) {
                                TextView unused = MBMediaView.this.I;
                            }
                        }
                    }, 3000L);
                } catch (Throwable th) {
                    z.d(TAG, th.getMessage());
                }
                try {
                    mBMediaView.E.setFocusableInTouchMode(true);
                    mBMediaView.E.requestFocus();
                    mBMediaView.E.setOnKeyListener(new View.OnKeyListener() {
                        @Override
                        public final boolean onKey(View view, int i3, KeyEvent keyEvent) {
                            try {
                                if (keyEvent.getKeyCode() != 4) {
                                    return false;
                                }
                                MBMediaView.this.x();
                                return true;
                            } catch (Throwable th2) {
                                z.d(MBMediaView.TAG, th2.getMessage());
                                return false;
                            }
                        }
                    });
                    mBMediaView.E.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            MBMediaView.i(MBMediaView.this);
                        }
                    });
                    mBMediaView.H.setOnClickListener(new View.OnClickListener() {
                        @Override
                        public final void onClick(View view) {
                            MBMediaView.this.x();
                        }
                    });
                    mBMediaView.I.setOnClickListener(new com.mbridge.msdk.widget.a() {
                        @Override
                        protected final void a(View view) {
                            try {
                                z.b(MBMediaView.TAG, "点击安装 click");
                                MBMediaView.this.b(view.getContext());
                                if (MBMediaView.this.u != null) {
                                    MBMediaView.this.u.adUserInteraction(InteractionType.CLICK);
                                }
                            } catch (Exception e3) {
                                z.d(MBMediaView.TAG, e3.getMessage());
                            }
                        }
                    });
                } catch (Exception e3) {
                    z.d(TAG, e3.getMessage());
                }
                if (mBMediaView.w != null) {
                    mBMediaView.w.openSound();
                }
                mBMediaView.w.setMediaViewPlayListener(new MediaViewPlayerView.a(mBMediaView.w) {
                    @Override
                    public final void a() {
                        int nvT2 = MBMediaView.this.N.getNvT2();
                        if (MBMediaView.this.h && (nvT2 == 3 || nvT2 == 4)) {
                            WindVaneWebViewForNV windVaneWebViewForNVH = MBMediaView.this.H();
                            if (windVaneWebViewForNVH != null) {
                                View viewW = MBMediaView.this.w();
                                if (viewW != null) {
                                    if (nvT2 == 3 && MBMediaView.this.af) {
                                        com.mbridge.msdk.nativex.view.mbfullview.a.a(MBMediaView.this.getContext()).a(viewW, MBMediaView.this.F);
                                        Context context = MBMediaView.this.getContext();
                                        CampaignEx campaignEx = MBMediaView.this.N;
                                        String campaignUnitId = MBMediaView.this.N.getCampaignUnitId();
                                        if (campaignEx != null) {
                                            try {
                                                if (campaignEx.getNativeVideoTracking() != null && campaignEx.getNativeVideoTracking().m() != null) {
                                                    for (String str : campaignEx.getNativeVideoTracking().m()) {
                                                        if (!TextUtils.isEmpty(str)) {
                                                            com.mbridge.msdk.click.b.a(context, campaignEx, campaignUnitId, str, false, true);
                                                        }
                                                    }
                                                }
                                            } catch (Exception e4) {
                                                e4.printStackTrace();
                                            }
                                        }
                                    } else if (nvT2 == 4) {
                                        com.mbridge.msdk.nativex.view.mbfullview.a.a(MBMediaView.this.getContext()).a(viewW, MBMediaView.this.F);
                                        String clickURL = MBMediaView.this.N.getClickURL();
                                        if (!TextUtils.isEmpty(clickURL)) {
                                            com.mbridge.msdk.click.b.a(MBMediaView.this.getContext(), MBMediaView.this.N, MBMediaView.this.p(), MBMediaView.this.getAddNVT2ToNoticeURL(), true, false, com.mbridge.msdk.click.a.a.i);
                                            MBMediaView.this.B.loadUrl(clickURL);
                                        }
                                    } else {
                                        super.a();
                                        return;
                                    }
                                    windVaneWebViewForNVH.webViewShow(MBMediaView.this.N, MBMediaView.this.p());
                                    windVaneWebViewForNVH.orientation(MBMediaView.this.i);
                                    return;
                                }
                                super.a();
                                return;
                            }
                            super.a();
                            return;
                        }
                        super.a();
                    }
                });
                mBMediaView.b(false);
                if (mBMediaView.N != null && mBMediaView.N.getMediaViewHolder() != null && !mBMediaView.N.getMediaViewHolder().k && !TextUtils.isEmpty(mBMediaView.N.getCampaignUnitId()) && mBMediaView.N.getNativeVideoTracking() != null && mBMediaView.N.getNativeVideoTracking().d() != null) {
                    mBMediaView.N.getMediaViewHolder().k = true;
                    mBMediaView.G();
                }
                z.b(TAG, "mediaview add to full screen");
                return;
            }
            z.b(TAG, "rootView is null");
        } catch (Exception e4) {
            z.d(TAG, e4.getMessage());
        }
    }

    static void i(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.w == null) {
                z.b(TAG, "playerview is null return");
            } else {
                mBMediaView.w.onClickPlayerView();
            }
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }

    static void n(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.D != null) {
                mBMediaView.D.setVisibility(0);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void o(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.J != null) {
                mBMediaView.J.setVisibility(0);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void a(MBMediaView mBMediaView, Campaign campaign, String str) {
        try {
            if (mBMediaView.ac != null) {
                mBMediaView.ac.onStartRedirection(campaign, str);
            }
            if (mBMediaView.ad != null) {
                mBMediaView.ad.onStartRedirection(campaign, str);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void p(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.D != null) {
                mBMediaView.D.setVisibility(8);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void q(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.J != null) {
                mBMediaView.J.setVisibility(8);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void b(MBMediaView mBMediaView, Campaign campaign, String str) {
        try {
            if (mBMediaView.ac != null) {
                mBMediaView.ac.onRedirectionFailed(campaign, str);
            }
            if (mBMediaView.ad != null) {
                mBMediaView.ad.onRedirectionFailed(campaign, str);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void c(MBMediaView mBMediaView, Campaign campaign, String str) {
        try {
            if (mBMediaView.ac != null) {
                mBMediaView.ac.onFinishRedirection(campaign, str);
            }
            if (mBMediaView.ad != null) {
                mBMediaView.ad.onFinishRedirection(campaign, str);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void r(MBMediaView mBMediaView) {
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || campaignEx.getMediaViewHolder() == null || mBMediaView.N.getMediaViewHolder().d || TextUtils.isEmpty(mBMediaView.N.getCampaignUnitId()) || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().k() == null) {
            return;
        }
        mBMediaView.N.getMediaViewHolder().d = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().k(), false, false);
    }

    static void a(MBMediaView mBMediaView, String str) {
        try {
            t tVarA = t.a(com.mbridge.msdk.foundation.db.i.a(mBMediaView.getContext()));
            p pVar = null;
            if (!TextUtils.isEmpty(mBMediaView.N.getNoticeUrl())) {
                int iD = v.D(mBMediaView.getContext());
                pVar = new p(r.b, iD, mBMediaView.N.getNoticeUrl(), str, v.a(mBMediaView.getContext(), iD));
            } else if (!TextUtils.isEmpty(mBMediaView.N.getClickURL())) {
                int iD2 = v.D(mBMediaView.getContext());
                pVar = new p(r.b, iD2, mBMediaView.N.getClickURL(), str, v.a(mBMediaView.getContext(), iD2));
            }
            if (pVar != null) {
                pVar.n(mBMediaView.N.getId());
                pVar.e(mBMediaView.N.getVideoUrlEncode());
                pVar.p(str);
                pVar.k(mBMediaView.N.getRequestId());
                pVar.l(mBMediaView.N.getRequestIdNotice());
                pVar.m(mBMediaView.p());
                tVarA.a(pVar);
            }
        } catch (Exception e2) {
            z.d(TAG, e2.getMessage());
        }
    }

    static void N(MBMediaView mBMediaView) {
        CampaignEx.b mediaViewHolder;
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || (mediaViewHolder = campaignEx.getMediaViewHolder()) == null || mediaViewHolder.b || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().f() == null) {
            return;
        }
        mediaViewHolder.b = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().f(), false, false);
    }

    static void O(MBMediaView mBMediaView) {
        CampaignEx.b mediaViewHolder;
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || (mediaViewHolder = campaignEx.getMediaViewHolder()) == null || mediaViewHolder.c || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().g() == null) {
            return;
        }
        mediaViewHolder.c = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().g(), false, false);
    }

    static void P(MBMediaView mBMediaView) {
        CampaignEx.b mediaViewHolder;
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || (mediaViewHolder = campaignEx.getMediaViewHolder()) == null || mediaViewHolder.e || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().i() == null) {
            return;
        }
        mediaViewHolder.e = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().i(), false, false);
    }

    static void Q(MBMediaView mBMediaView) {
        CampaignEx.b mediaViewHolder;
        CampaignEx campaignEx = mBMediaView.N;
        if (campaignEx == null || (mediaViewHolder = campaignEx.getMediaViewHolder()) == null || mediaViewHolder.f || mBMediaView.N.getNativeVideoTracking() == null || mBMediaView.N.getNativeVideoTracking().j() == null) {
            return;
        }
        mediaViewHolder.f = true;
        Context context = mBMediaView.getContext();
        CampaignEx campaignEx2 = mBMediaView.N;
        com.mbridge.msdk.click.b.a(context, campaignEx2, campaignEx2.getCampaignUnitId(), mBMediaView.N.getNativeVideoTracking().j(), false, false);
    }

    static void S(MBMediaView mBMediaView) {
        try {
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
        if (mBMediaView.w != null && mBMediaView.w.hasPrepare() && mBMediaView.w.isPlaying()) {
            z.b(TAG, "isPlaying pasue======");
            try {
                if (mBMediaView.w != null) {
                    mBMediaView.w.pause();
                    return;
                }
                return;
            } catch (Throwable th2) {
                z.d(TAG, th2.getMessage());
                return;
            }
            z.d(TAG, th.getMessage());
        }
    }

    static void T(MBMediaView mBMediaView) {
        try {
            if (mBMediaView.w == null || !mBMediaView.w.hasPrepare() || mBMediaView.w.isPlaying() || mBMediaView.w.isComplete() || !mBMediaView.w.hasPrepare()) {
                return;
            }
            mBMediaView.w.startOrPlayVideo();
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }
}
