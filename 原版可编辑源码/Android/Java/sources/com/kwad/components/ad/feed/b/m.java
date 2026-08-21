package com.kwad.components.ad.feed.b;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.content.Context;
import android.graphics.BitmapFactory;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.kwad.components.ad.feed.d;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.j.a;
import com.kwad.components.core.liveEnd.AdLiveEndCommonResultData;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.video.a;
import com.kwad.components.core.webview.jshandler.WebCardRegisterLiveMessageListener;
import com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener;
import com.kwad.components.core.webview.jshandler.WebCardVideoPositionHandler;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.af;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.ai;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.an;
import com.kwad.components.core.webview.jshandler.ao;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.aq;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.s;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.core.widget.b;
import com.kwad.components.model.FeedType;
import com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest;
import com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView;
import com.kwad.components.offline.api.core.adlive.IAdLivePlayModule;
import com.kwad.components.offline.api.core.adlive.listener.AdLiveMessageListener;
import com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListener;
import com.kwad.components.offline.api.core.adlive.listener.AdLivePlayStateListenerAdapter;
import com.kwad.components.offline.api.core.adlive.listener.AdLiveShopListener;
import com.kwad.components.offline.api.core.adlive.model.AdLiveMessageInfo;
import com.kwad.components.offline.api.core.adlive.model.AdLiveShopInfo;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.widget.KSRelativeLayout;
import com.kwad.sdk.widget.RatioFrameLayout;
import java.io.File;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class m extends com.kwad.components.core.widget.b<AdTemplate> implements View.OnClickListener, com.kwad.sdk.widget.c {
    private static final HashMap<Long, Double> fq = new HashMap<>(8);
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private int cF;
    private ah.b cK;
    private List<Integer> cr;
    private KsAdVideoPlayConfig dJ;
    private d.b dS;
    private boolean eA;
    private final a.a eC;
    private IAdLiveOfflineView eD;
    private com.kwad.components.core.offline.api.a.a eE;
    private IAdLivePlayModule eF;
    private boolean eG;
    private View eH;
    private a.b eI;
    private final AdLivePlayStateListener eJ;
    private OfflineOnAudioConflictListener eK;
    private long eh;
    private KSRelativeLayout ev;
    private ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.video.e ey;
    private d ez;
    private a fA;
    private ViewGroup.MarginLayoutParams fB;
    private e fC;
    private ai fD;
    private boolean fE;
    private boolean fF;
    private b.a fG;
    private IAdLiveEndRequest fH;
    private RatioFrameLayout fi;
    private double fj;
    private LinearLayout fk;
    private TextView fl;
    private aq fm;
    private am fn;
    private WebCardRegisterLiveMessageListener fo;
    private WebCardRegisterLiveShopListener fp;
    private boolean fr;
    private String fs;
    private an.b ft;
    private an.a fu;
    private boolean fv;
    private com.kwad.components.core.widget.b fw;
    private float fx;
    private float fy;
    private boolean fz;
    private KsAdWebView mAdWebView;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private Handler mHandler;
    private boolean mIsAudioEnable;
    private final com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, AdLiveEndCommonResultData> mNetworking;
    private int mWidth;

    public interface a {
        void c(int i, String str);
    }

    public m(Context context) {
        super(context);
        this.cF = -1;
        this.mIsAudioEnable = false;
        this.fv = false;
        this.mHandler = new Handler(Looper.getMainLooper());
        this.fE = false;
        this.fF = false;
        this.eK = new OfflineOnAudioConflictListener() {
            @Override
            public final void onAudioBeOccupied() {
                m.a(m.this, false);
                if (m.this.ex != null) {
                    m.this.ex.setVideoSoundEnable(false);
                }
                if (m.this.eF != null) {
                    m.this.eF.setAudioEnabled(false, false);
                }
            }

            @Override
            public final void onAudioBeReleased() {
            }
        };
        this.fG = new b.a() {
            @Override
            public final void onAdClicked() {
                if (m.this.XT != null) {
                    m.this.XT.onAdClicked();
                }
            }

            @Override
            public final void onAdShow() {
                if (m.this.XT != null) {
                    m.this.XT.onAdShow();
                }
                if (m.this.fv) {
                    com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
                    z.a aVar = new z.a();
                    FeedType feedTypeFromInt = FeedType.fromInt(m.this.mAdTemplate.type);
                    if (feedTypeFromInt == FeedType.FEED_TYPE_TEXT_NEW) {
                        feedTypeFromInt = FeedType.FEED_TYPE_TEXT_BELOW;
                    }
                    aVar.templateId = String.valueOf(feedTypeFromInt.getType());
                    jVar.a(aVar);
                    jVar.t((int) Math.ceil(m.this.fj), m.this.mWidth);
                    com.kwad.components.core.t.b.qj().a(m.this.mAdTemplate, null, jVar);
                    com.kwad.components.ad.feed.monitor.b.a(m.this.mAdTemplate, 1);
                }
            }

            @Override
            public final void onDislikeClicked() {
                if (m.this.XT != null) {
                    m.this.XT.onDislikeClicked();
                }
            }

            @Override
            public final void onDownloadTipsDialogDismiss() {
                if (m.this.XT != null) {
                    m.this.XT.onDownloadTipsDialogDismiss();
                }
            }

            @Override
            public final void onDownloadTipsDialogShow() {
                if (m.this.XT != null) {
                    m.this.XT.onDownloadTipsDialogShow();
                }
            }
        };
        this.mNetworking = new com.kwad.sdk.core.network.m<com.kwad.components.core.liveEnd.a, AdLiveEndCommonResultData>() {
            @Override
            private com.kwad.components.core.liveEnd.a createRequest() {
                return new com.kwad.components.core.liveEnd.a(m.this.fH);
            }

            private static AdLiveEndCommonResultData p(String str) {
                AdLiveEndCommonResultData adLiveEndCommonResultData = new AdLiveEndCommonResultData();
                adLiveEndCommonResultData.parseJson(new JSONObject(str));
                return adLiveEndCommonResultData;
            }

            @Override
            public final boolean isPostByJson() {
                return false;
            }

            @Override
            public final BaseResultData parseData(String str) {
                return p(str);
            }
        };
        this.eJ = new AdLivePlayStateListenerAdapter() {
            @Override
            public final void onLivePlayEnd() {
                super.onLivePlayEnd();
                String strAY = com.kwad.sdk.core.response.b.a.aY(m.this.mAdInfo);
                if (TextUtils.isEmpty(strAY)) {
                    return;
                }
                com.kwad.components.core.offline.api.a.a aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class);
                if (aVar != null) {
                    m.this.fH = aVar.getAdLiveEndRequest(strAY);
                }
                m.this.mNetworking.request(new p<com.kwad.components.core.liveEnd.a, AdLiveEndCommonResultData>() {
                    @Override
                    private void onStartRequest(com.kwad.components.core.liveEnd.a aVar2) {
                        super.onStartRequest(aVar2);
                    }

                    @Override
                    private void onError(com.kwad.components.core.liveEnd.a aVar2, int i, String str) {
                        super.onError(aVar2, i, str);
                    }

                    @Override
                    private void onSuccess(com.kwad.components.core.liveEnd.a aVar2, AdLiveEndCommonResultData adLiveEndCommonResultData) {
                        super.onSuccess(aVar2, adLiveEndCommonResultData);
                        an.a aVar3 = new an.a();
                        aVar3.status = 9;
                        aVar3.totalWatchingDuration = adLiveEndCommonResultData.totalWatchingDuration;
                        aVar3.watchingUserCount = adLiveEndCommonResultData.watchingUserCount;
                        aVar3.displayWatchingUserCount = adLiveEndCommonResultData.displayWatchingUserCount;
                        aVar3.likeUserCount = adLiveEndCommonResultData.likeUserCount;
                        aVar3.displayLikeUserCount = adLiveEndCommonResultData.displayLikeUserCount;
                        aVar3.liveDuration = adLiveEndCommonResultData.liveDuration;
                        if (m.this.ft != null) {
                            m.this.ft.a(aVar3);
                        } else {
                            m.this.fu = aVar3;
                        }
                    }
                });
            }

            @Override
            public final void onLivePlayProgress(long j) {
                super.onLivePlayProgress(j);
                m.this.c(j);
            }

            @Override
            public final void onLivePlayResume() {
                com.kwad.components.core.j.a.oa().a(m.this.getCurrentVoiceItem());
                super.onLivePlayResume();
                IAdLivePlayModule iAdLivePlayModule = m.this.eF;
                m mVar = m.this;
                iAdLivePlayModule.setAudioEnabled(mVar.g(mVar.mIsAudioEnable), false);
            }

            @Override
            public final void onLivePlayStart() {
                com.kwad.components.core.j.a.oa().a(m.this.getCurrentVoiceItem());
                super.onLivePlayStart();
                IAdLivePlayModule iAdLivePlayModule = m.this.eF;
                m mVar = m.this;
                iAdLivePlayModule.setAudioEnabled(mVar.g(mVar.mIsAudioEnable), false);
            }

            @Override
            public final void onLivePrepared() {
                super.onLivePrepared();
                m.this.eF.setAudioEnabled(false, false);
            }
        };
        this.cK = new ah.b() {
            @Override
            public final void a(ah.a aVar) {
                if (m.this.fr) {
                    return;
                }
                m.this.cF = aVar.status;
                if (m.this.cF != 1) {
                    m.this.f("3", 3);
                    return;
                }
                m.this.mHandler.removeCallbacksAndMessages(null);
                if (m.this.fw != null) {
                    m.this.fw.setVisibility(8);
                }
                m.this.mAdWebView.setVisibility(0);
                com.kwad.components.core.o.a.pA().U(m.this.mAdTemplate);
                if (m.this.fA != null) {
                    m.this.fA.c(2, "");
                }
            }
        };
        this.eC = new a.a() {
            @Override
            public final void a(int i, ac.a aVar) {
                int i2;
                int i3 = 2;
                boolean z = false;
                if (i == 1) {
                    i2 = 13;
                } else if (i == 2) {
                    i2 = 82;
                } else if (i != 3) {
                    i2 = 108;
                } else {
                    i2 = 83;
                    i3 = 1;
                    z = true;
                }
                z.b bVar = new z.b();
                bVar.jI = aVar;
                bVar.jG = i2;
                m.this.bu();
                com.kwad.components.core.e.d.a.a(new a.a(m.this.getContext()).P(m.this.mAdTemplate).b(m.this.mApkDownloadHelper).ao(i3).am(z).ao(true).a(bVar).aq(true).a(new a.b() {
                    @Override
                    public final void onAdClicked() {
                        m.this.eb();
                    }
                }));
            }
        };
    }

    private void a(MotionEvent motionEvent) {
        if (motionEvent.getActionMasked() != 0) {
            return;
        }
        this.fx = motionEvent.getX();
        this.fy = motionEvent.getY();
    }

    private void a(com.kwad.components.core.webview.a aVar) {
        this.fm = new aq();
        am amVar = new am();
        this.fn = amVar;
        aVar.a(amVar);
        aVar.a(new r(this.cE, this.mApkDownloadHelper, getClickListener()));
        aVar.a(new o(this.cE, this.mApkDownloadHelper, getClickListener()));
        aVar.a(new aa(this.cE, new aa.b() {
            @Override
            public final void a(aa.a aVar2) {
                if (m.this.fv) {
                    return;
                }
                m.this.mAdWebView.setVisibility(0);
                if (m.this.fj == 0.0d) {
                    m.this.fj = aVar2.height;
                    m.this.fi.setRatio((float) r0);
                    m.fq.put(Long.valueOf(m.this.mAdTemplate.posId), Double.valueOf(aVar2.height / m.this.mWidth));
                }
            }
        }));
        aVar.a(new com.kwad.components.core.webview.b.a.f());
        aVar.a(new u(this.cE));
        aVar.a(new WebCardVideoPositionHandler(new WebCardVideoPositionHandler.a() {
            @Override
            public final void a(WebCardVideoPositionHandler.VideoPosition videoPosition) {
                m mVar;
                boolean zBH;
                if (m.this.mAdInfo != null) {
                    if (com.kwad.sdk.core.response.b.a.aU(m.this.mAdInfo) || m.this.eG) {
                        m mVar2 = m.this;
                        mVar2.fB = (ViewGroup.MarginLayoutParams) mVar2.ev.getLayoutParams();
                        int iCeil = (int) Math.ceil(m.this.fj);
                        int i = m.this.mWidth;
                        if (videoPosition.widthRation == 0.0d) {
                            videoPosition.widthRation = 0.9200000166893005d;
                            videoPosition.leftMarginRation = 0.03999999910593033d;
                        }
                        m.this.fB.topMargin = (int) (videoPosition.topMarginRation * ((double) iCeil));
                        double d = i;
                        m.this.fB.leftMargin = (int) (videoPosition.leftMarginRation * d);
                        m.this.fB.width = (int) (d * videoPosition.widthRation);
                        m.this.fB.height = (int) (((double) m.this.fB.width) * videoPosition.heightWidthRation);
                        m.this.ev.setRadius(videoPosition.borderRadius);
                        m.this.ev.setLayoutParams(m.this.fB);
                        if (!(m.this.dJ instanceof KSAdVideoPlayConfigImpl) || ((KSAdVideoPlayConfigImpl) m.this.dJ).getVideoSoundValue() == 0) {
                            mVar = m.this;
                            zBH = com.kwad.sdk.core.response.b.a.bH(mVar.mAdInfo);
                        } else {
                            mVar = m.this;
                            zBH = mVar.dJ.isVideoSoundEnable();
                        }
                        mVar.mIsAudioEnable = zBH;
                        m.this.mAdTemplate.mIsAudioEnable = m.this.mIsAudioEnable;
                        m mVar3 = m.this;
                        mVar3.cr = com.kwad.sdk.core.response.b.a.bd(mVar3.mAdInfo);
                        if (!m.this.eG) {
                            m mVar4 = m.this;
                            mVar4.a(mVar4.dJ);
                        } else if (m.this.eF != null) {
                            IAdLivePlayModule iAdLivePlayModule = m.this.eF;
                            m mVar5 = m.this;
                            iAdLivePlayModule.setAudioEnabled(mVar5.g(mVar5.mIsAudioEnable), false);
                        }
                    }
                }
            }
        }));
        aVar.a(new s(this.cE, new s.a() {
            @Override
            public final void bz() {
                m.this.mHandler.post(new Runnable() {
                    @Override
                    public final void run() {
                        m.this.sm();
                    }
                });
            }
        }));
        aVar.a(new x(this.cE));
        t tVar = new t(this.cE);
        tVar.a(new t.b() {
            @Override
            public final void a(t.a aVar2) {
                aVar2.height = 0;
                aVar2.width = m.this.mWidth;
            }
        });
        aVar.a(tVar);
        aVar.a(new ah(this.cK, com.kwad.sdk.core.response.b.b.bq(this.mAdTemplate)));
        aVar.a(new ap(this.cE, this.mApkDownloadHelper));
        aVar.a(new ab(this.cE));
        aVar.a(this.fm);
        aVar.a(new af(getOpenNewPageListener()));
        aVar.a(new ao(new ao.a() {
            @Override
            public final void bA() {
                m.d(m.this, true);
                m.this.bs();
            }
        }));
        ai aiVar = new ai();
        this.fD = aiVar;
        aVar.a(aiVar);
        if (this.eG) {
            aVar.a(new com.kwad.components.core.webview.jshandler.c(1, 1));
            this.fp = new WebCardRegisterLiveShopListener();
            this.fo = new WebCardRegisterLiveMessageListener();
            aVar.a(this.fp);
            aVar.a(this.fo);
            aVar.a(new an(getRegisterLiveListener()));
        }
    }

    private void a(com.kwad.sdk.core.video.videoview.a aVar, final int i) {
        if (aVar != null) {
            String strF = com.kwad.sdk.core.response.b.a.F(this.mAdInfo);
            this.ey.setAutoRelease(false);
            AdVideoPlayerViewCache.getInstance().a(strF, this.ex);
            FeedType.fromInt(this.mAdTemplate.type);
            bu();
            com.kwad.components.core.e.d.a.a(new a.a(getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(2).aq(com.kwad.sdk.core.response.b.a.aU(this.mAdInfo)).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    m.this.aK(i);
                }
            }));
        }
    }

    static boolean a(m mVar, com.kwad.sdk.core.webview.d.b.a aVar) {
        return b(aVar);
    }

    static boolean a(m mVar, boolean z) {
        mVar.eA = false;
        return false;
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.aye = null;
        this.cE.MT = this.fi;
        this.cE.Ms = this.mAdWebView;
        this.cE.mReportExtData = null;
        this.cE.ayg = false;
    }

    private void aw() {
        ay();
        this.mAdWebView.setClientConfig(this.mAdWebView.getClientConfig().cy(this.mAdTemplate).b(getWebListener()));
        this.mAdWebView.setVisibility(4);
        this.mAdWebView.setBackgroundColor(0);
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.mAdWebView);
        this.cD = aVar;
        a(aVar);
        this.mAdWebView.addJavascriptInterface(this.cD, "KwaiAd");
        this.mAdWebView.loadUrl(com.kwad.sdk.core.response.b.b.bq(this.mAdTemplate));
        com.kwad.components.ad.feed.monitor.b.o(com.kwad.sdk.core.response.b.b.bq(this.mAdTemplate));
        br();
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    private static boolean b(com.kwad.sdk.core.webview.d.b.a aVar) {
        return aVar.JC ? aVar.UX : aVar.UZ == 1;
    }

    private boolean bf() {
        IAdLiveOfflineView iAdLiveOfflineView = this.eD;
        if (iAdLiveOfflineView == null || iAdLiveOfflineView.getView() == null || this.eF == null) {
            return false;
        }
        ViewGroup viewGroup = (ViewGroup) this.eD.getView().getParent();
        if (viewGroup != this.ev) {
            viewGroup.removeView(this.eD.getView());
            if (this.ev.getTag() != null) {
                KSRelativeLayout kSRelativeLayout = this.ev;
                kSRelativeLayout.removeView((View) kSRelativeLayout.getTag());
                this.ev.setTag(null);
            }
            this.ev.addView(this.eD.getView());
            this.ev.setTag(this.eD.getView());
            this.eF.setAudioEnabled(g(this.mIsAudioEnable), false);
            IAdLivePlayModule adLivePlayModule = this.eE.getAdLivePlayModule(this.eD, KsAdSDKImpl.get().getAppId(), String.valueOf(com.kwad.sdk.core.response.b.a.bR(this.mAdInfo)));
            this.eF = adLivePlayModule;
            adLivePlayModule.registerAdLivePlayStateListener(this.eJ);
        }
        this.eF.onResume();
        return true;
    }

    private IAdLivePlayModule bg() {
        bh();
        IAdLiveOfflineView view = this.eE.getView(this.mContext, 3);
        this.eD = view;
        IAdLivePlayModule adLivePlayModule = this.eE.getAdLivePlayModule(view, ServiceProvider.HE().appId, String.valueOf(com.kwad.sdk.core.response.b.a.bR(this.mAdInfo)));
        adLivePlayModule.setAudioEnabled(g(this.mIsAudioEnable), false);
        adLivePlayModule.registerAdLivePlayStateListener(this.eJ);
        final View view2 = this.eD.getView();
        if (this.ev.getTag() != null) {
            KSRelativeLayout kSRelativeLayout = this.ev;
            kSRelativeLayout.removeView((View) kSRelativeLayout.getTag());
            this.ev.setTag(null);
        }
        this.ev.addView(view2);
        this.ev.setTag(view2);
        bj.postOnUiThread(new Runnable() {
            @Override
            public final void run() {
                m.this.c(view2);
            }
        });
        bw();
        if (this.mIsAudioEnable) {
            com.kwad.components.core.t.a.al(this.mContext).a(this.eK);
        }
        return adLivePlayModule;
    }

    private void bh() {
        String url = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo).getUrl();
        this.ew.setVisibility(0);
        this.eH.setVisibility(0);
        if (TextUtils.isEmpty(url)) {
            this.ew.setImageResource(R.drawable.ksad_ad_live_end);
        } else {
            this.ew.setImageDrawable(null);
            KSImageLoader.loadImage(this.ew, url, this.mAdTemplate, new DisplayImageOptionsCompat.Builder().setBlurRadius(50).build(), new SimpleImageLoadingListener() {
                @Override
                public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
                    decodedResult.mBitmap = BlurUtils.stackBlur(BitmapFactory.decodeStream(inputStream), 50, false);
                    return true;
                }
            });
        }
    }

    private void br() {
        this.mHandler.postDelayed(new Runnable() {
            @Override
            public final void run() {
                m.this.mAdWebView.stopLoading();
                m.this.mAdWebView.setVisibility(8);
                m.this.f("0", 1);
            }
        }, 2500L);
    }

    private void bs() {
        float fBu = com.kwad.sdk.core.response.b.b.bu(this.mAdTemplate);
        this.dS = new d.b() {
            @Override
            public final boolean b(final double d) {
                if (!bm.o(m.this.fi, (int) (com.kwad.sdk.core.config.d.zH() * 100.0f))) {
                    return false;
                }
                com.kwad.components.core.e.d.a.a(new a.a(m.this.getContext()).P(m.this.mAdTemplate).b(m.this.mApkDownloadHelper).ao(2).am(false).ao(false).an(157).am(5).aq(true).a(new a.b() {
                    @Override
                    public final void onAdClicked() {
                        com.kwad.sdk.core.e.c.d("FeedWebView", "convertEnable End" + com.kwad.sdk.core.response.b.d.cq(m.this.mAdTemplate));
                        com.kwad.sdk.core.report.j jVar = new com.kwad.sdk.core.report.j();
                        jVar.i(d);
                        jVar.cg(157);
                        m.this.c(jVar);
                    }
                }));
                return true;
            }
        };
        com.kwad.components.ad.feed.d.a(fBu, this.mContext, this.dS);
    }

    private void bu() {
        if (this.fz) {
            return;
        }
        this.fz = true;
        com.kwad.components.ad.feed.monitor.b.a(this.mAdTemplate, 2, getStayTime());
    }

    private boolean bv() {
        return this.cF == 1;
    }

    private void bw() {
        this.eD.registerLiveMessageListener(new AdLiveMessageListener() {
            @Override
            public final void handleAdLiveMessage(List<AdLiveMessageInfo> list) {
                if (m.this.fo != null) {
                    m.this.fo.k(list);
                }
            }
        });
        this.eD.registerLiveShopListener(new AdLiveShopListener() {
            @Override
            public final void handleAdLiveShop(AdLiveShopInfo adLiveShopInfo) {
                if (m.this.fp != null) {
                    m.this.fp.a(adLiveShopInfo);
                }
            }
        });
    }

    private void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        Iterator<Integer> it = this.cr.iterator();
        while (it.hasNext()) {
            if (iCeil >= it.next().intValue()) {
                com.kwad.sdk.core.report.a.a((AdTemplate) this.mAdTemplate, iCeil, (JSONObject) null);
                it.remove();
                return;
            }
        }
    }

    private void c(View view) {
        int width = this.ev.getWidth();
        int height = this.ev.getHeight();
        if (width == 0 || height == 0) {
            return;
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams((int) (height * 0.5625f), height);
        layoutParams.addRule(13, -1);
        view.setLayoutParams(layoutParams);
    }

    static boolean d(m mVar, boolean z) {
        mVar.fE = true;
        return true;
    }

    private void e(AdTemplate adTemplate) {
        if (this.fF) {
            return;
        }
        this.mAdWebView = (KsAdWebView) findViewById(com.kwad.sdk.core.response.b.a.cw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) ? R.id.ksad_web_bottom_card_webView : R.id.ksad_web_default_bottom_card_webView);
        this.fF = true;
    }

    private static float f(AdTemplate adTemplate) {
        int i = adTemplate.type;
        if (i == 1) {
            return 0.6013f;
        }
        return (i == 2 || i == 3) ? 0.283f : 0.968f;
    }

    private void f(String str, int i) {
        com.kwad.sdk.core.e.c.d("FeedWebView", "handleWebViewError " + str);
        this.mHandler.removeCallbacksAndMessages(null);
        if (this.fr) {
            return;
        }
        this.fr = true;
        if (this.mAdWebView != null) {
            com.kwad.components.ad.feed.monitor.b.a(com.kwad.sdk.core.response.b.b.bq(this.mAdTemplate), System.currentTimeMillis() - this.mAdWebView.getLoadTime(), i);
        }
        com.kwad.components.core.o.a.pA().b(this.mAdTemplate, com.kwad.sdk.core.response.b.b.bq(this.mAdTemplate), str);
        a aVar = this.fA;
        if (aVar != null) {
            aVar.c(1, str);
        }
        this.fA = null;
        if (this.fw == null) {
            this.fv = true;
            c((ViewGroup) this);
            int iAW = com.kwad.sdk.core.response.b.a.aW(this.mAdInfo);
            IAdLivePlayModule iAdLivePlayModule = this.eF;
            if (iAdLivePlayModule != null) {
                iAdLivePlayModule.setAudioEnabled(false, false);
                this.eF.onDestroy();
                this.eF = null;
            }
            IAdLiveOfflineView iAdLiveOfflineView = this.eD;
            if (iAdLiveOfflineView != null) {
                iAdLiveOfflineView.onDestroy();
                this.eD = null;
            }
            com.kwad.components.core.widget.b bVarA = com.kwad.components.ad.feed.b.a(this.mContext, FeedType.fromInt(this.mAdTemplate.type), iAW);
            this.fw = bVarA;
            if (bVarA != null) {
                this.fw.setMargin(com.kwad.sdk.d.a.a.a(this.mContext, 16.0f));
                this.fi.removeAllViews();
                this.fi.setRatio(0.0d);
                KsAdWebView ksAdWebView = this.mAdWebView;
                if (ksAdWebView != null) {
                    ksAdWebView.setVisibility(8);
                }
                this.ev.setVisibility(8);
                this.fw.setInnerAdInteractionListener(this.fG);
                this.fi.addView(this.fw);
                this.fw.b(this.mAdTemplate);
                com.kwad.components.core.widget.b bVar = this.fw;
                if (bVar instanceof c) {
                    ((c) bVar).a(this.dJ);
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void g(AdTemplate adTemplate) {
        RatioFrameLayout ratioFrameLayout;
        double dF;
        com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
        this.mApkDownloadHelper = cVar;
        cVar.setOnShowListener(this);
        this.mApkDownloadHelper.setOnDismissListener(this);
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        if (fq.get(Long.valueOf(this.mAdTemplate.posId)) != null) {
            this.fi.setRatio(r5.floatValue());
        } else {
            if (com.kwad.sdk.core.response.b.b.bv(this.mAdTemplate) > 0.0d) {
                ratioFrameLayout = this.fi;
                dF = com.kwad.sdk.core.response.b.b.bv(this.mAdTemplate);
            } else if (this.fi.getRatio() == 0.0d) {
                ratioFrameLayout = this.fi;
                dF = f(this.mAdTemplate);
            }
            ratioFrameLayout.setRatio(dF);
        }
        com.kwad.components.core.offline.api.a.a aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class);
        this.eE = aVar;
        if (aVar != null && aVar.hasLiveCompoReady() && com.kwad.sdk.core.response.b.a.cw(this.mAdInfo)) {
            this.eG = true;
        }
        av();
    }

    private boolean g(boolean z) {
        if (!z) {
            return false;
        }
        if (this.eI != null) {
            com.kwad.components.core.j.a.oa();
            if (!com.kwad.components.core.j.a.b(this.eI)) {
                return false;
            }
        }
        if (!com.kwad.sdk.core.config.d.gF()) {
            return !com.kwad.components.core.t.a.al(this.mContext).qi() ? com.kwad.components.core.t.a.al(this.mContext).aJ(false) : !com.kwad.components.core.t.a.al(this.mContext).qh();
        }
        if (!this.eA) {
            this.eA = com.kwad.components.core.t.a.al(this.mContext).aJ(true);
        }
        return this.eA;
    }

    private com.kwad.sdk.core.webview.d.a.a getClickListener() {
        return new com.kwad.sdk.core.webview.d.a.a() {
            @Override
            public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
                m.this.bu();
                int i = aVar.UZ;
                if (aVar.JC) {
                    i = aVar.UX ? 1 : 2;
                }
                boolean zAU = com.kwad.sdk.core.response.b.a.aU(m.this.mAdInfo);
                z.b bVar = new z.b();
                if (aVar.Va != null && !TextUtils.isEmpty(aVar.Va.UP)) {
                    bVar.UP = aVar.Va.UP;
                }
                com.kwad.components.core.e.d.a.a(new a.a(m.this.getContext()).P(m.this.mAdTemplate).b(m.this.mApkDownloadHelper).am(m.a(m.this, aVar)).ao(i).an(aVar.jG).am(5).as(aVar.JC).aq(zAU).s(m.this.eF == null ? 0L : m.this.eF.getPlayDuration()).a(bVar).ao(true).a(new a.b() {
                    @Override
                    public final void onAdClicked() {
                        if (m.this.XT != null) {
                            m.this.XT.onAdClicked();
                        }
                    }
                }));
            }
        };
    }

    private a.b getCurrentVoiceItem() {
        if (this.eI == null) {
            this.eI = new a.b(new a.c() {
                @Override
                public final void bi() {
                    if (!m.this.eG) {
                        if (m.this.ex != null) {
                            com.kwad.sdk.core.video.videoview.a aVar = m.this.ex;
                            m mVar = m.this;
                            aVar.setVideoSoundEnable(mVar.g(mVar.mIsAudioEnable));
                            return;
                        }
                        return;
                    }
                    if (m.this.eF == null) {
                        m mVar2 = m.this;
                        mVar2.eF = mVar2.bg();
                    }
                    IAdLivePlayModule iAdLivePlayModule = m.this.eF;
                    m mVar3 = m.this;
                    iAdLivePlayModule.setAudioEnabled(mVar3.g(mVar3.mIsAudioEnable), false);
                }
            });
        }
        return this.eI;
    }

    private af.a getOpenNewPageListener() {
        return new af.a() {
            @Override
            public final void a(com.kwad.components.core.webview.a.b bVar) {
                AdWebViewActivityProxy.launch(m.this.mContext, new AdWebViewActivityProxy.a.a().aq(bVar.title).ar(bVar.url).ay(true).S(m.this.mAdTemplate).oA());
            }
        };
    }

    private an.c getRegisterLiveListener() {
        return new an.c() {
            @Override
            public final void a(an.b bVar) {
                m.this.ft = bVar;
                if (m.this.fu != null) {
                    m.this.ft.a(m.this.fu);
                    m.this.fu = null;
                }
            }
        };
    }

    private a.b getVideoPlayCallback() {
        return new a.b() {
            private boolean cs = false;

            @Override
            public final void bj() {
                if (!this.cs) {
                    this.cs = true;
                    com.kwad.components.core.o.a.pA().a(m.this.mAdTemplate, System.currentTimeMillis(), 1);
                }
                com.kwad.sdk.core.video.videoview.a aVar = m.this.ex;
                m mVar = m.this;
                aVar.setVideoSoundEnable(mVar.g(mVar.mIsAudioEnable));
            }

            @Override
            public final void bk() {
                com.kwad.sdk.core.report.a.aA(m.this.mAdTemplate);
                m.this.fm.aO(9);
                m.this.ev.setVisibility(8);
                if (com.kwad.components.ad.feed.a.b.aU() && m.this.ez == null && !m.this.fE) {
                    m.this.ez = new d(m.this.mContext);
                    FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                    m mVar = m.this;
                    mVar.addView(mVar.ez, layoutParams);
                    m.this.ez.bl();
                }
            }

            @Override
            public final void d(long j) {
                m.this.c(j);
            }

            @Override
            public final void onVideoPlayError(int i, int i2) {
                com.kwad.components.ad.feed.monitor.b.a(m.this.mAdTemplate, 2, 1, com.kwad.sdk.core.response.b.a.F(m.this.mAdInfo), i + " " + i2, SystemClock.elapsedRealtime() - m.this.eh);
            }

            @Override
            public final void onVideoPlayStart() {
                com.kwad.components.core.j.a.oa().a(m.this.getCurrentVoiceItem());
                com.kwad.components.ad.feed.monitor.b.a(m.this.mAdTemplate, 1, 1, com.kwad.sdk.core.response.b.a.F(m.this.mAdInfo), null, SystemClock.elapsedRealtime() - m.this.eh);
                com.kwad.sdk.core.report.a.j(m.this.mAdTemplate);
                m.this.fm.aO(3);
                if (m.this.ez != null && (m.this.ez.getParent() instanceof ViewGroup)) {
                    ((ViewGroup) m.this.ez.getParent()).removeView(m.this.ez);
                    m.this.ez.bm();
                    m.this.ez = null;
                }
                if (m.this.fC == null && com.kwad.sdk.core.response.b.b.bs(m.this.mAdTemplate) && m.this.fE) {
                    m.this.fC = new e(m.this.mContext);
                    m.this.ev.addView(m.this.fC, new FrameLayout.LayoutParams(-1, -1));
                    m.this.fC.setOnViewEventListener(new com.kwad.sdk.widget.c() {
                        @Override
                        public final void a(View view) {
                            if (com.kwad.sdk.core.response.b.b.bt(m.this.mAdTemplate)) {
                                return;
                            }
                            m.this.u(158);
                        }

                        @Override
                        public final void b(View view) {
                            if (com.kwad.sdk.core.response.b.b.bt(m.this.mAdTemplate) || !com.kwad.sdk.core.response.b.c.bV(m.this.mAdTemplate)) {
                                return;
                            }
                            m.this.u(153);
                        }
                    });
                    m.this.fC.a(new AnimatorListenerAdapter() {
                        @Override
                        public final void onAnimationEnd(Animator animator) {
                            super.onAnimationEnd(animator);
                            m.this.fD.aN(1);
                            m.this.ev.removeView(m.this.fC);
                        }
                    });
                }
            }
        };
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                com.kwad.components.ad.feed.monitor.b.c(com.kwad.sdk.core.response.b.b.bq(m.this.mAdTemplate), System.currentTimeMillis() - m.this.mAdWebView.getLoadTime());
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                m.this.f("1", 2);
            }
        };
    }

    private void u(final int i) {
        bu();
        com.kwad.components.core.e.d.a.a(new a.a(getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).ao(1).am(true).an(i).am(5).ao(false).aq(true).a(new a.b() {
            @Override
            public final void onAdClicked() {
                m.this.aK(i);
            }
        }));
    }

    @Override
    public final void a(View view) {
        if (view != this.ev) {
            if (view == this.fl) {
                a(this.ex, 25);
            }
        } else {
            if (!this.ex.isIdle()) {
                a(this.ex, 100);
                return;
            }
            com.kwad.sdk.utils.l.cA(this.mAdTemplate);
            this.ex.setKsPlayLogParam(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate));
            this.ex.start();
        }
    }

    public final void a(KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        String url = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo).getUrl();
        if (TextUtils.isEmpty(url)) {
            this.ew.setVisibility(8);
        } else {
            this.ew.setImageDrawable(null);
            KSImageLoader.loadImage(this.ew, url, this.mAdTemplate);
            this.ew.setVisibility(0);
        }
        com.kwad.sdk.core.video.videoview.a aVar = new com.kwad.sdk.core.video.videoview.a(this.mContext);
        this.ex = aVar;
        aVar.setTag(this.cr);
        int iZz = com.kwad.sdk.core.config.d.zz();
        String strF = com.kwad.sdk.core.response.b.a.F(this.mAdInfo);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        if (iZz < 0) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
            strF = (fileBR == null || !fileBR.exists()) ? null : fileBR.getAbsolutePath();
        } else if (iZz != 0) {
            strF = com.kwad.sdk.core.videocache.c.a.bj(this.mContext).dN(strF);
        }
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        this.ex.a(new b.a(this.mAdTemplate).cn(strF).co(com.kwad.sdk.core.response.b.f.b(com.kwad.sdk.core.response.b.d.ch(this.mAdTemplate))).a(this.mAdTemplate.mVideoPlayerStatus).b(new com.kwad.sdk.contentalliance.a.a.a(this.mAdTemplate, System.currentTimeMillis())).yS(), null);
        this.ex.setVideoSoundEnable(g(this.mIsAudioEnable));
        this.ey = new com.kwad.components.core.video.e(this.mContext, this.mAdTemplate, this.ex, ksAdVideoPlayConfig);
        this.eh = SystemClock.elapsedRealtime();
        this.ey.setVideoPlayCallback(getVideoPlayCallback());
        this.ey.setAdClickListener(this.eC);
        this.ex.setController(this.ey);
        if (this.ev.getTag() != null) {
            KSRelativeLayout kSRelativeLayout = this.ev;
            kSRelativeLayout.removeView((View) kSRelativeLayout.getTag());
            this.ev.setTag(null);
        }
        this.ev.addView(this.ex, 1);
        this.ev.setTag(this.ex);
        this.ev.setClickable(true);
        new com.kwad.sdk.widget.f(this.ev, this);
        if (this.mIsAudioEnable) {
            com.kwad.components.core.t.a.al(this.mContext).a(this.eK);
        }
        if (this.mAdTemplate.type == 1 || this.mAdTemplate.type == 19) {
            this.fk.setVisibility(0);
            this.fl.setVisibility(0);
            this.fl.setText(com.kwad.components.ad.feed.f.c(this.mAdTemplate));
            new com.kwad.sdk.widget.f(this.fl, this);
        }
    }

    @Override
    public final void aK() {
        super.aK();
        com.kwad.components.core.j.a.oa().a(getCurrentVoiceItem());
        if (this.eG) {
            IAdLivePlayModule iAdLivePlayModule = this.eF;
            if (iAdLivePlayModule == null) {
                this.eF = bg();
            } else {
                iAdLivePlayModule.onResume();
            }
        }
    }

    @Override
    public final void aL() {
        super.aL();
        IAdLivePlayModule iAdLivePlayModule = this.eF;
        if (iAdLivePlayModule != null) {
            iAdLivePlayModule.onPause();
        }
        com.kwad.components.core.j.a.oa().c(this.eI);
    }

    @Override
    public final void aa() {
        super.aa();
        if (this.dS != null) {
            com.kwad.components.ad.feed.d.a(com.kwad.sdk.core.response.b.b.bu(this.mAdTemplate), this.mContext, this.dS);
        }
    }

    @Override
    public final void ab() {
        super.ab();
        this.mHandler.removeCallbacksAndMessages(null);
        com.kwad.sdk.utils.l.cz(this.mAdTemplate);
        d.b bVar = this.dS;
        if (bVar != null) {
            com.kwad.components.ad.feed.d.a(bVar);
        }
        IAdLivePlayModule iAdLivePlayModule = this.eF;
        if (iAdLivePlayModule != null) {
            iAdLivePlayModule.onDestroy();
            this.eF = null;
        }
        IAdLiveOfflineView iAdLiveOfflineView = this.eD;
        if (iAdLiveOfflineView != null) {
            iAdLiveOfflineView.onDestroy();
            this.eD = null;
        }
        com.kwad.components.core.j.a.oa().c(this.eI);
        this.ft = null;
        this.fu = null;
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            if (view == this.ev || view == this.fl) {
                a(this.ex, 153);
            }
        }
    }

    @Override
    public final void b(AdTemplate adTemplate) {
        e(adTemplate);
        adTemplate.realShowType = 2;
        super.b(adTemplate);
        if (this.fr) {
            com.kwad.components.core.widget.b bVar = this.fw;
            if (bVar != null) {
                bVar.b(this.mAdTemplate);
                com.kwad.components.core.widget.b bVar2 = this.fw;
                if (bVar2 instanceof c) {
                    ((c) bVar2).a(this.dJ);
                    return;
                }
                return;
            }
            return;
        }
        if (!com.kwad.sdk.core.response.b.b.bw(this.mAdTemplate)) {
            f("0", 0);
            return;
        }
        if (!bv()) {
            g(this.mAdTemplate);
        }
        try {
            if (this.fs == null || !this.fs.equals(adTemplate.mOriginJString)) {
                if (bv()) {
                    this.mAdWebView.reload();
                } else {
                    aw();
                }
            }
        } catch (Throwable unused) {
            f("0", 0);
        }
        this.fs = adTemplate.mOriginJString;
    }

    @Override
    public final void ba() {
        com.kwad.components.ad.feed.monitor.b.aX();
        this.fi = (RatioFrameLayout) findViewById(R.id.ksad_container);
        this.ev = (KSRelativeLayout) findViewById(R.id.ksad_video_container);
        this.fk = (LinearLayout) findViewById(R.id.ksad_video_immerse_text_container);
        this.fl = (TextView) findViewById(R.id.ksad_video_immerse_text);
        this.ew = (ImageView) findViewById(R.id.ksad_video_first_frame_container);
        this.eH = findViewById(R.id.ksad_live_end_bg_mantle);
    }

    @Override
    public final void bt() {
        am amVar;
        if (!this.mAdTemplate.mPvReported && this.XT != null) {
            this.XT.onAdShow();
            com.kwad.components.ad.feed.monitor.b.a(this.mAdTemplate, 2);
        }
        if (this.fv || (amVar = this.fn) == null) {
            return;
        }
        amVar.rA();
    }

    @Override
    public final int getLayoutId() {
        return R.layout.ksad_feed_webview;
    }

    @Override
    public final void onClick(View view) {
    }

    @Override
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction() & 255;
        if (!com.kwad.sdk.core.config.d.zK() || !com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            return super.onInterceptTouchEvent(motionEvent);
        }
        if (com.kwad.sdk.core.response.b.b.aQ(this.mAdTemplate) == null) {
            return super.onInterceptTouchEvent(motionEvent);
        }
        a(motionEvent);
        if ((action == 2 || action == 3) && this.mAdWebView != null && !this.fv && Math.abs(motionEvent.getX() - this.fx) > 0.0f) {
            this.mAdWebView.requestDisallowInterceptTouchEvent(true);
            double dAbs = Math.abs(motionEvent.getX() - this.fx);
            double dAbs2 = Math.abs(motionEvent.getY() - this.fy);
            if (Math.tan(r1.maxRange) * dAbs < dAbs2 || Math.tan(r1.minRange) * dAbs < dAbs2) {
                this.mAdWebView.requestDisallowInterceptTouchEvent(false);
            }
        }
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override
    public final void onWindowFocusChanged(boolean z) {
        IAdLivePlayModule iAdLivePlayModule;
        ViewGroup viewGroup;
        super.onWindowFocusChanged(z);
        if (!z) {
            IAdLiveOfflineView iAdLiveOfflineView = this.eD;
            if (iAdLiveOfflineView == null || iAdLiveOfflineView.getView() == null || (iAdLivePlayModule = this.eF) == null) {
                return;
            }
            iAdLivePlayModule.onPause();
            return;
        }
        if (bf()) {
            return;
        }
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar != null && (viewGroup = (ViewGroup) aVar.getParent()) != this.ev) {
            viewGroup.removeView(this.ex);
            if (this.ev.getTag() != null) {
                KSRelativeLayout kSRelativeLayout = this.ev;
                kSRelativeLayout.removeView((View) kSRelativeLayout.getTag());
                this.ev.setTag(null);
            }
            this.ev.addView(this.ex);
            this.ev.setTag(this.ex);
            this.ex.setVideoSoundEnable(this.mIsAudioEnable);
            this.ey.setVideoPlayCallback(getVideoPlayCallback());
            this.ey.setAdClickListener(this.eC);
            this.ey.getAdTemplate().mAdWebVideoPageShowing = false;
            this.ey.qW();
            this.ey.setAutoRelease(true);
        }
        AdVideoPlayerViewCache.getInstance().remove(com.kwad.sdk.core.response.b.a.F(this.mAdInfo));
    }

    @Override
    public final void setMargin(int i) {
    }

    public final void setPreloadListener(a aVar) {
        a aVar2 = this.fA;
        if (aVar2 != null) {
            aVar2.c(this.cF == 1 ? 2 : 1, "");
        }
        this.fA = aVar;
    }

    public final void setVideoPlayConfig(KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        com.kwad.components.core.video.e eVar;
        IAdLivePlayModule iAdLivePlayModule;
        this.dJ = ksAdVideoPlayConfig;
        if (ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl) {
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig;
            if (kSAdVideoPlayConfigImpl.getVideoSoundValue() != 0) {
                this.mIsAudioEnable = kSAdVideoPlayConfigImpl.isVideoSoundEnable();
                this.mAdTemplate.mIsAudioEnable = this.mIsAudioEnable;
                IAdLiveOfflineView iAdLiveOfflineView = this.eD;
                if (iAdLiveOfflineView == null || iAdLiveOfflineView.getView() == null || (iAdLivePlayModule = this.eF) == null) {
                    com.kwad.sdk.core.video.videoview.a aVar = this.ex;
                    if (aVar != null) {
                        aVar.setVideoSoundEnable(g(this.mIsAudioEnable));
                    }
                } else {
                    iAdLivePlayModule.setAudioEnabled(g(this.mIsAudioEnable), false);
                }
                if (this.mIsAudioEnable) {
                    com.kwad.components.core.t.a.al(this.mContext).a(this.eK);
                }
            }
            if (kSAdVideoPlayConfigImpl.getDataFlowAutoStartValue() == 0 || (eVar = this.ey) == null) {
                return;
            }
            eVar.setDataAutoStart(kSAdVideoPlayConfigImpl.isDataFlowAutoStart());
        }
    }

    public final void setWidth(int i) {
        if (i <= 0) {
            i = getContext().getResources().getDisplayMetrics().widthPixels;
        }
        this.mWidth = i;
    }
}
