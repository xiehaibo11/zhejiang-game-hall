package com.kwad.components.ad.reward.page;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.k;
import com.kwad.components.ad.reward.model.RewardCallBackRespInfo;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.n.c;
import com.kwad.components.core.p.d;
import com.kwad.components.core.t.b;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsRewardVideoAd;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.proxy.app.AdWebViewActivity;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.b.a;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.bi;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(AdWebViewActivity.class)
public class AdRewardPreviewActivityProxy extends c {
    public static final String KEY_TEMPLATE = "key_template_json";
    private static final String KEY_URL = "key_langingpage_url";
    private static final String TAG = "AdRewardPreviewActivityProxy";
    public static KsRewardVideoAd.RewardAdInteractionListener mInteractionListener;
    private AdTemplate mAdTemplate;
    private KsAdWebView mAdWebView;
    public k mCloseDialog;
    private int mCount;
    private View mCountDownLayout;
    private TextView mCountDownTips;
    private long mLastDown;
    protected KsLogoView mLogoView;
    private int mSkipCount;
    private View mSkipCountDownBtn;
    private View mSkipCountDownDiv;
    private long mStartPlayTime;
    private bi mTimerHelper;
    private String mUrl;
    private ImageView mWebCloseBtn;
    private AdBaseFrameLayout mWebContainer;
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private boolean mEnableSkip = false;
    private boolean counterPaused = false;
    private boolean mCheckExposureResult = true;

    static int access$410(AdRewardPreviewActivityProxy adRewardPreviewActivityProxy) {
        int i = adRewardPreviewActivityProxy.mCount;
        adRewardPreviewActivityProxy.mCount = i - 1;
        return i;
    }

    static int access$710(AdRewardPreviewActivityProxy adRewardPreviewActivityProxy) {
        int i = adRewardPreviewActivityProxy.mSkipCount;
        adRewardPreviewActivityProxy.mSkipCount = i - 1;
        return i;
    }

    private void checkRequest(final int i) {
        new m<d, RewardCallBackRespInfo>() {
            private static RewardCallBackRespInfo M(String str) {
                JSONObject jSONObject = new JSONObject(str);
                RewardCallBackRespInfo rewardCallBackRespInfo = new RewardCallBackRespInfo();
                rewardCallBackRespInfo.parseJson(jSONObject);
                return rewardCallBackRespInfo;
            }

            @Override
            private d createRequest() {
                return new d(i, AdRewardPreviewActivityProxy.this.mAdTemplate);
            }

            @Override
            public final BaseResultData parseData(String str) {
                return M(str);
            }
        }.request(exposureRequest());
    }

    private p<d, RewardCallBackRespInfo> exposureRequest() {
        return new p<d, RewardCallBackRespInfo>() {
            private void a(RewardCallBackRespInfo rewardCallBackRespInfo) {
                AdRewardPreviewActivityProxy.this.mCheckExposureResult = rewardCallBackRespInfo.result == 1;
            }

            @Override
            private void onError(d dVar, int i, String str) {
                super.onError(dVar, i, str);
                AdRewardPreviewActivityProxy.this.mCheckExposureResult = false;
            }

            @Override
            public final void onStartRequest(g gVar) {
            }

            @Override
            public final void onSuccess(g gVar, BaseResultData baseResultData) {
                a((RewardCallBackRespInfo) baseResultData);
            }
        };
    }

    private z.b getClientParams() {
        z.b bVar = new z.b();
        bVar.ati = 0;
        return bVar;
    }

    private KsAdWebView.d getWebErrorListener() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
            }

            @Override
            public final void onPageStart() {
                if (!AdRewardPreviewActivityProxy.this.mAdTemplate.mPvReported) {
                    AdRewardPreviewActivityProxy.this.checkExposure();
                }
                b.qj().a(AdRewardPreviewActivityProxy.this.mAdTemplate, null, null);
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
            }
        };
    }

    public static void launch(Activity activity, AdTemplate adTemplate, String str, KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener) {
        mInteractionListener = rewardAdInteractionListener;
        com.kwad.sdk.service.b.a(AdWebViewActivity.class, AdRewardPreviewActivityProxy.class);
        Intent intent = new Intent(activity, (Class<?>) AdWebViewActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("key_template_json", adTemplate.toJson().toString());
        intent.putExtra(KEY_URL, str);
        try {
            activity.startActivity(intent);
            activity.overridePendingTransition(0, 0);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
            com.kwad.sdk.crash.b.l(e);
        }
    }

    private void showCloseDialog() {
        k kVar = this.mCloseDialog;
        if (kVar == null || !kVar.isShowing()) {
            this.mCloseDialog = k.a(getActivity(), this.mAdTemplate, k.H("还差" + (this.mCount + 1) + "秒就可以获取奖励"), new k.b() {
                @Override
                public final void H(boolean z) {
                    AdRewardPreviewActivityProxy.this.counterPaused = false;
                    if (AdRewardPreviewActivityProxy.mInteractionListener != null) {
                        try {
                            AdRewardPreviewActivityProxy.mInteractionListener.onVideoSkipToEnd(System.currentTimeMillis() - AdRewardPreviewActivityProxy.this.mStartPlayTime);
                        } catch (Throwable th) {
                            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                        }
                    }
                    AdRewardPreviewActivityProxy.this.finish();
                }

                @Override
                public final void gg() {
                    AdRewardPreviewActivityProxy.this.counterPaused = true;
                }

                @Override
                public final void gp() {
                    AdRewardPreviewActivityProxy.this.counterPaused = false;
                }
            });
        }
    }

    private void skipToEnd() {
        this.mCountDownLayout.setVisibility(8);
        this.mWebCloseBtn.setVisibility(0);
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = mInteractionListener;
        if (rewardAdInteractionListener == null || !this.mCheckExposureResult) {
            return;
        }
        rewardAdInteractionListener.onRewardVerify();
        try {
            mInteractionListener.onRewardStepVerify(0, 0);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    public void checkExposure() {
        long j = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate).adRewardInfo.callBackStrategyInfo.impressionCheckMs;
        if (j <= 0 || a.Y(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)) <= 5000) {
            return;
        }
        this.mHandler.postDelayed(new Runnable() {
            @Override
            public final void run() {
                AdRewardPreviewActivityProxy.this.checkRequest(1);
            }
        }, j);
    }

    @Override
    public boolean checkIntentData(Intent intent) {
        try {
            String stringExtra = getIntent().getStringExtra("key_template_json");
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            this.mAdTemplate = adTemplate;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
        if (this.mAdTemplate != null) {
            return true;
        }
        com.kwad.sdk.i.a.ai("reward", PointCategory.SHOW);
        return false;
    }

    @Override
    public int getLayoutId() {
        return R.layout.ksad_activity_reward_preview;
    }

    @Override
    public String getPageName() {
        return TAG;
    }

    public bi getTimerHelper() {
        if (this.mTimerHelper == null) {
            this.mTimerHelper = new bi();
        }
        return this.mTimerHelper;
    }

    @Override
    public void initData() {
        this.mUrl = getIntent().getStringExtra(KEY_URL);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        int i = adInfoCg.adStyleInfo.adBrowseInfo.adBrowseDuration;
        int iW = a.W(adInfoCg);
        this.mCount = i;
        this.mSkipCount = Math.min(iW, i);
        this.mStartPlayTime = System.currentTimeMillis();
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = mInteractionListener;
        if (rewardAdInteractionListener != null) {
            try {
                rewardAdInteractionListener.onVideoPlayStart();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
    }

    @Override
    public void initView() {
        KsAdWebView ksAdWebView = (KsAdWebView) findViewById(R.id.ksad_video_webview);
        this.mAdWebView = ksAdWebView;
        this.mAdWebView.setClientConfig(ksAdWebView.getClientConfig().b(getClientParams()).cy(this.mAdTemplate).bk(false).bm(true).b(getWebErrorListener()));
        this.mAdWebView.onActivityCreate();
        this.mWebCloseBtn = (ImageView) findViewById(R.id.ksad_web_close_btn);
        this.mWebContainer = (AdBaseFrameLayout) findViewById(R.id.ksad_landing_page_root);
        KsLogoView ksLogoView = (KsLogoView) findViewById(R.id.ksad_reward_preview_logo);
        this.mLogoView = ksLogoView;
        ksLogoView.aa(this.mAdTemplate);
        this.mWebCloseBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (AdRewardPreviewActivityProxy.mInteractionListener != null) {
                    try {
                        AdRewardPreviewActivityProxy.mInteractionListener.onVideoPlayEnd();
                    } catch (Throwable th) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    }
                }
                com.kwad.sdk.core.report.a.a(AdRewardPreviewActivityProxy.this.mAdTemplate, 1, AdRewardPreviewActivityProxy.this.getTimerHelper().getTime(), (JSONObject) null);
                AdRewardPreviewActivityProxy.this.finish();
            }
        });
        this.mCountDownLayout = findViewById(R.id.ksad_reward_preview_skip_layout);
        this.mSkipCountDownDiv = findViewById(R.id.ksad_reward_preview_skip_div);
        this.mSkipCountDownBtn = findViewById(R.id.ksad_reward_preview_skip_btn);
        this.mCountDownTips = (TextView) findViewById(R.id.ksad_reward_preview_skip_time);
        if (this.mSkipCount <= 0) {
            this.mSkipCountDownBtn.setVisibility(0);
            this.mSkipCountDownDiv.setVisibility(0);
        } else {
            this.mSkipCountDownBtn.setVisibility(8);
            this.mSkipCountDownDiv.setVisibility(8);
        }
        this.mSkipCountDownBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                AdRewardPreviewActivityProxy.this.showCloseDialog();
            }
        });
        this.mCountDownTips.setText("激励领取视频还有" + this.mCount + "秒");
        this.mHandler.postDelayed(new Runnable() {
            @Override
            public final void run() {
                if (AdRewardPreviewActivityProxy.this.counterPaused) {
                    AdRewardPreviewActivityProxy.this.mHandler.postDelayed(this, 400L);
                    return;
                }
                if (AdRewardPreviewActivityProxy.this.mCount <= 0) {
                    AdRewardPreviewActivityProxy.this.mEnableSkip = true;
                    AdRewardPreviewActivityProxy.this.skipToEnd();
                } else {
                    if (AdRewardPreviewActivityProxy.this.mSkipCount <= 0) {
                        AdRewardPreviewActivityProxy.this.mSkipCountDownBtn.setVisibility(0);
                        AdRewardPreviewActivityProxy.this.mSkipCountDownDiv.setVisibility(0);
                    }
                    AdRewardPreviewActivityProxy.this.mCountDownTips.setText("激励领取视频还有" + AdRewardPreviewActivityProxy.this.mCount + "秒");
                    AdRewardPreviewActivityProxy.this.mHandler.postDelayed(this, 1000L);
                }
                AdRewardPreviewActivityProxy.access$710(AdRewardPreviewActivityProxy.this);
                AdRewardPreviewActivityProxy.access$410(AdRewardPreviewActivityProxy.this);
            }
        }, 1000L);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        if (this.mUrl != null) {
            com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            if (a.ax(adInfoCg) && com.kwad.sdk.core.config.d.zo() && ag.isWifiConnected(getActivity())) {
                cVar.m(new a.a(getActivity()).am(false).an(false).P(this.mAdTemplate).ap(false));
            }
        }
        this.mAdWebView.loadUrl(!TextUtils.isEmpty(this.mUrl) ? this.mUrl : com.kwad.sdk.core.response.b.a.aK(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)));
        getTimerHelper().startTiming();
        this.mWebContainer.a(new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getX() > AdRewardPreviewActivityProxy.this.mWebCloseBtn.getX() && motionEvent.getX() - AdRewardPreviewActivityProxy.this.mWebCloseBtn.getX() < AdRewardPreviewActivityProxy.this.mWebCloseBtn.getWidth() && motionEvent.getY() > AdRewardPreviewActivityProxy.this.mWebCloseBtn.getY() && motionEvent.getY() - AdRewardPreviewActivityProxy.this.mWebCloseBtn.getY() < AdRewardPreviewActivityProxy.this.mWebCloseBtn.getHeight()) {
                    com.kwad.sdk.core.e.c.d(AdRewardPreviewActivityProxy.TAG, "onClick backIcon");
                    return false;
                }
                if (motionEvent.getAction() == 0) {
                    AdRewardPreviewActivityProxy.this.mLastDown = SystemClock.elapsedRealtime();
                } else if (motionEvent.getAction() == 1) {
                    long jElapsedRealtime = SystemClock.elapsedRealtime() - AdRewardPreviewActivityProxy.this.mLastDown;
                    if (AdRewardPreviewActivityProxy.this.mLastDown > 0 && jElapsedRealtime > 60 && jElapsedRealtime < 500) {
                        com.kwad.sdk.core.report.a.a(AdRewardPreviewActivityProxy.this.mAdTemplate, 72, AdRewardPreviewActivityProxy.this.mWebContainer.getTouchCoords());
                        if (AdRewardPreviewActivityProxy.mInteractionListener != null) {
                            AdRewardPreviewActivityProxy.mInteractionListener.onAdClicked();
                        }
                    }
                    AdRewardPreviewActivityProxy.this.mLastDown = 0L;
                }
                return false;
            }
        });
    }

    @Override
    public void onActivityCreate() {
        super.onActivityCreate();
        com.kwad.sdk.i.a.ai("reward", PointCategory.SHOW);
    }

    @Override
    public void onBackPressed() {
        KsAdWebView ksAdWebView = this.mAdWebView;
        if (ksAdWebView != null && ksAdWebView.canGoBack()) {
            this.mAdWebView.goBack();
            com.kwad.sdk.core.report.a.aB(this.mAdTemplate);
        } else {
            if (!this.mEnableSkip) {
                showCloseDialog();
                return;
            }
            super.onBackPressed();
            KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = mInteractionListener;
            if (rewardAdInteractionListener != null) {
                try {
                    rewardAdInteractionListener.onVideoPlayEnd();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
            com.kwad.sdk.core.report.a.a(this.mAdTemplate, 11, getTimerHelper().getTime(), (JSONObject) null);
        }
    }

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_REWARD, "adShowSuccess").report();
    }

    @Override
    public void onDestroy() {
        KsRewardVideoAd.RewardAdInteractionListener rewardAdInteractionListener = mInteractionListener;
        if (rewardAdInteractionListener != null) {
            rewardAdInteractionListener.onPageDismiss();
        }
        mInteractionListener = null;
        KsAdWebView ksAdWebView = this.mAdWebView;
        if (ksAdWebView != null) {
            ksAdWebView.onActivityDestroy();
            this.mAdWebView = null;
        }
        super.onDestroy();
        this.mHandler.removeCallbacksAndMessages(null);
    }

    @Override
    public void onPause() {
        super.onPause();
        overridePendingTransition(0, 0);
        getTimerHelper().Kc();
    }

    @Override
    public void onResume() {
        super.onResume();
        getTimerHelper().Kb();
    }
}
