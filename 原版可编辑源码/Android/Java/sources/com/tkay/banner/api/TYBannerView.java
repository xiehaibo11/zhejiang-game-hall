package com.tkay.banner.api;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.tkay.banner.a.d;
import com.tkay.banner.a.e;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYAdSourceStatusListener;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.a;
import com.tkay.core.common.b.b;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.a.c;
import com.tkay.core.common.l.a.f;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.n;
import com.tkay.core.common.l.s;
import com.tkay.core.common.v;
import com.tkay.core.common.x;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class TYBannerView extends FrameLayout implements d {
    private final String TAG;
    a adLoadListener;
    private boolean canRenderBanner;
    boolean hasTouchWindow;
    c impressionTracker;
    private com.tkay.banner.a.a mAdLoadManager;
    b mAdSourceEventListener;
    private com.tkay.banner.b.a mBannerRefreshTimer;
    CustomBannerAdapter mCustomBannerAd;
    TYAdSourceStatusListener mDeveloperStatusListener;
    TYEventInterface mDownloadListener;
    private e mInnerBannerListener;
    boolean mIsRefresh;
    private TYBannerListener mListener;
    private String mPlacementId;
    private String mScenario;
    Map<String, Object> mTKExtraMap;
    f.b visibilityChecker;

    public TYBannerView(Context context) {
        super(context);
        this.TAG = TYBannerView.class.getSimpleName();
        this.mScenario = "";
        this.hasTouchWindow = false;
        this.mIsRefresh = false;
        this.mInnerBannerListener = new e() {
            @Override
            public void onBannerClicked(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClicked(i.a(customBannerAdapter));
                        }
                    }
                });
            }

            @Override
            public void onBannerShow(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            if (customBannerAdapter == null || !z) {
                                TYBannerView.this.mListener.onBannerShow(i.a(customBannerAdapter));
                            } else {
                                TYBannerView.this.mListener.onBannerAutoRefreshed(i.a(customBannerAdapter));
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerClose(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClose(i.a(customBannerAdapter));
                        }
                    }
                });
                TYBannerView.this.canRenderBanner = true;
                TYBannerView.this.loadAd(1);
            }

            @Override
            public void onDeeplinkCallback(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDeeplinkCallback(TYBannerView.this.mIsRefresh, i.a(customBannerAdapter), z);
                    }
                });
            }

            @Override
            public void onDownloadConfirm(final Context context2, final CustomBannerAdapter customBannerAdapter, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDownloadConfirm(context2, i.a(customBannerAdapter), tYNetworkConfirmInfo);
                    }
                });
            }
        };
        this.adLoadListener = new a() {
            @Override
            public void onAdLoaded() {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null && !TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerLoaded();
                        }
                        TYBannerView.this.controlShow();
                    }
                });
            }

            @Override
            public void onAdLoadFail(final AdError adError) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !TYBannerView.this.canRenderBanner) {
                            return;
                        }
                        if (TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerAutoRefreshFail(adError);
                        } else {
                            TYBannerView.this.mListener.onBannerFailed(adError);
                        }
                    }
                });
                if (TYBannerView.this.mAdLoadManager == null || !TYBannerView.this.isInView() || TYBannerView.this.mBannerRefreshTimer.a()) {
                    return;
                }
                String unused = TYBannerView.this.TAG;
                TYBannerView.this.mBannerRefreshTimer.b();
            }
        };
        this.mBannerRefreshTimer = new com.tkay.banner.b.a(this);
    }

    public TYBannerView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.TAG = TYBannerView.class.getSimpleName();
        this.mScenario = "";
        this.hasTouchWindow = false;
        this.mIsRefresh = false;
        this.mInnerBannerListener = new e() {
            @Override
            public void onBannerClicked(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClicked(i.a(customBannerAdapter));
                        }
                    }
                });
            }

            @Override
            public void onBannerShow(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            if (customBannerAdapter == null || !z) {
                                TYBannerView.this.mListener.onBannerShow(i.a(customBannerAdapter));
                            } else {
                                TYBannerView.this.mListener.onBannerAutoRefreshed(i.a(customBannerAdapter));
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerClose(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClose(i.a(customBannerAdapter));
                        }
                    }
                });
                TYBannerView.this.canRenderBanner = true;
                TYBannerView.this.loadAd(1);
            }

            @Override
            public void onDeeplinkCallback(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDeeplinkCallback(TYBannerView.this.mIsRefresh, i.a(customBannerAdapter), z);
                    }
                });
            }

            @Override
            public void onDownloadConfirm(final Context context2, final CustomBannerAdapter customBannerAdapter, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDownloadConfirm(context2, i.a(customBannerAdapter), tYNetworkConfirmInfo);
                    }
                });
            }
        };
        this.adLoadListener = new a() {
            @Override
            public void onAdLoaded() {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null && !TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerLoaded();
                        }
                        TYBannerView.this.controlShow();
                    }
                });
            }

            @Override
            public void onAdLoadFail(final AdError adError) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !TYBannerView.this.canRenderBanner) {
                            return;
                        }
                        if (TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerAutoRefreshFail(adError);
                        } else {
                            TYBannerView.this.mListener.onBannerFailed(adError);
                        }
                    }
                });
                if (TYBannerView.this.mAdLoadManager == null || !TYBannerView.this.isInView() || TYBannerView.this.mBannerRefreshTimer.a()) {
                    return;
                }
                String unused = TYBannerView.this.TAG;
                TYBannerView.this.mBannerRefreshTimer.b();
            }
        };
        this.mBannerRefreshTimer = new com.tkay.banner.b.a(this);
    }

    public TYBannerView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.TAG = TYBannerView.class.getSimpleName();
        this.mScenario = "";
        this.hasTouchWindow = false;
        this.mIsRefresh = false;
        this.mInnerBannerListener = new e() {
            @Override
            public void onBannerClicked(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClicked(i.a(customBannerAdapter));
                        }
                    }
                });
            }

            @Override
            public void onBannerShow(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            if (customBannerAdapter == null || !z) {
                                TYBannerView.this.mListener.onBannerShow(i.a(customBannerAdapter));
                            } else {
                                TYBannerView.this.mListener.onBannerAutoRefreshed(i.a(customBannerAdapter));
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerClose(final CustomBannerAdapter customBannerAdapter) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            TYBannerView.this.mListener.onBannerClose(i.a(customBannerAdapter));
                        }
                    }
                });
                TYBannerView.this.canRenderBanner = true;
                TYBannerView.this.loadAd(1);
            }

            @Override
            public void onDeeplinkCallback(final CustomBannerAdapter customBannerAdapter, final boolean z) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDeeplinkCallback(TYBannerView.this.mIsRefresh, i.a(customBannerAdapter), z);
                    }
                });
            }

            @Override
            public void onDownloadConfirm(final Context context2, final CustomBannerAdapter customBannerAdapter, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !(TYBannerView.this.mListener instanceof TYBannerExListener)) {
                            return;
                        }
                        ((TYBannerExListener) TYBannerView.this.mListener).onDownloadConfirm(context2, i.a(customBannerAdapter), tYNetworkConfirmInfo);
                    }
                });
            }
        };
        this.adLoadListener = new a() {
            @Override
            public void onAdLoaded() {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null && !TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerLoaded();
                        }
                        TYBannerView.this.controlShow();
                    }
                });
            }

            @Override
            public void onAdLoadFail(final AdError adError) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener == null || !TYBannerView.this.canRenderBanner) {
                            return;
                        }
                        if (TYBannerView.this.mIsRefresh) {
                            TYBannerView.this.mListener.onBannerAutoRefreshFail(adError);
                        } else {
                            TYBannerView.this.mListener.onBannerFailed(adError);
                        }
                    }
                });
                if (TYBannerView.this.mAdLoadManager == null || !TYBannerView.this.isInView() || TYBannerView.this.mBannerRefreshTimer.a()) {
                    return;
                }
                String unused = TYBannerView.this.TAG;
                TYBannerView.this.mBannerRefreshTimer.b();
            }
        };
        this.mBannerRefreshTimer = new com.tkay.banner.b.a(this);
    }

    public void setPlacementId(String str) {
        this.mAdLoadManager = com.tkay.banner.a.a.a(getContext(), str);
        this.mPlacementId = str;
        this.mBannerRefreshTimer.a(str);
        if (this.impressionTracker == null) {
            getContext();
            this.impressionTracker = new c(50);
        }
    }

    public void setScenario(String str) {
        if (g.c(str)) {
            this.mScenario = str;
        }
    }

    public TYAdStatusInfo checkAdStatus() {
        if (m.a().f() == null || TextUtils.isEmpty(m.a().o()) || TextUtils.isEmpty(m.a().p())) {
            Log.e(this.TAG, "SDK init error!");
            return new TYAdStatusInfo(false, false, null);
        }
        com.tkay.banner.a.a aVar = this.mAdLoadManager;
        if (aVar == null) {
            Log.e(this.TAG, "PlacementId is empty!");
            return new TYAdStatusInfo(false, false, null);
        }
        TYAdStatusInfo tYAdStatusInfoA = aVar.a(getContext(), this.mTKExtraMap);
        n.b(this.mPlacementId, f.i.o, f.i.A, tYAdStatusInfoA.toString(), "");
        return tYAdStatusInfoA;
    }

    public void setTKExtra(Map<String, Object> map) {
        if (this.mTKExtraMap == null) {
            this.mTKExtraMap = new ConcurrentHashMap();
        }
        this.mTKExtraMap.clear();
        this.mTKExtraMap.putAll(map);
    }

    public List<TYAdInfo> checkValidAdCaches() {
        com.tkay.banner.a.a aVar = this.mAdLoadManager;
        if (aVar != null) {
            return aVar.a(getContext());
        }
        return null;
    }

    public void setLocalExtra(Map<String, Object> map) {
        if (TextUtils.isEmpty(this.mPlacementId)) {
            Log.e(this.TAG, "You must set unit Id first.");
        } else {
            v.a().a(this.mPlacementId, map);
        }
    }

    public void loadAd() {
        loadAd(0);
    }

    private void loadAd(int i) {
        n.a(this.mPlacementId, f.i.o, f.i.w, f.i.n, "", true);
        this.mIsRefresh = i == 1;
        if (i == 0) {
            this.canRenderBanner = true;
        }
        com.tkay.banner.a.a aVar = this.mAdLoadManager;
        if (aVar != null) {
            aVar.a(getContext(), i, this.adLoadListener, this.mAdSourceEventListener, this.mTKExtraMap);
        } else {
            this.adLoadListener.onAdLoadFail(ErrorCode.getErrorCode(ErrorCode.placeStrategyError, "", ""));
        }
    }

    public void setBannerAdListener(TYBannerListener tYBannerListener) {
        this.mListener = tYBannerListener;
    }

    public void destroy() {
        removeAllViews();
        CustomBannerAdapter customBannerAdapter = this.mCustomBannerAd;
        if (customBannerAdapter != null) {
            customBannerAdapter.destory();
        }
        com.tkay.banner.b.a aVar = this.mBannerRefreshTimer;
        if (aVar != null) {
            aVar.d();
        }
        c cVar = this.impressionTracker;
        if (cVar != null) {
            cVar.a();
        }
    }

    private com.tkay.core.common.f.a getBannerCache() {
        return com.tkay.core.common.a.a().a(getContext(), this.mPlacementId);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.hasTouchWindow = true;
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.hasTouchWindow = false;
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i == 0) {
            controlShow();
        }
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        if (z) {
            controlShow();
        }
    }

    private void registerDelayShow(final Context context, final com.tkay.core.common.f.a aVar, CustomBannerAdapter customBannerAdapter, final boolean z) {
        View bannerView = customBannerAdapter.getBannerView();
        if (bannerView == null) {
            bannerView = this;
        }
        c cVar = this.impressionTracker;
        if (cVar != null) {
            cVar.a(bannerView, new com.tkay.core.common.l.a.a() {
                @Override
                public final int getImpressionMinPercentageViewed() {
                    return 50;
                }

                @Override
                public final int getImpressionMinTimeViewed() {
                    return 0;
                }

                @Override
                public final void recordImpression(View view) {
                    TYBannerView.this.notifyBannerShow(context, aVar, z);
                }
            });
        }
    }

    private void renderBannerView(com.tkay.core.common.f.a aVar, boolean z) {
        CustomBannerAdapter customBannerAdapter = (aVar == null || !(aVar.e() instanceof CustomBannerAdapter)) ? null : (CustomBannerAdapter) aVar.e();
        if (customBannerAdapter != null) {
            CustomBannerAdapter customBannerAdapter2 = this.mCustomBannerAd;
            if (customBannerAdapter2 != null) {
                customBannerAdapter2.destory();
            }
            View bannerView = customBannerAdapter.getBannerView();
            if (bannerView != null && bannerView.getParent() != null && bannerView.getParent() != this) {
                ((ViewGroup) bannerView.getParent()).removeView(bannerView);
            }
            this.mCustomBannerAd = customBannerAdapter;
            if (bannerView != null) {
                com.tkay.core.common.f.d trackingInfo = customBannerAdapter.getTrackingInfo();
                trackingInfo.C = this.mScenario;
                s.a(this.mTKExtraMap, trackingInfo);
                customBannerAdapter.setAdEventListener(new com.tkay.banner.a.b(this.mInnerBannerListener, customBannerAdapter, z));
                if (!isInView()) {
                    registerDelayShow(getContext().getApplicationContext(), aVar, customBannerAdapter, z);
                } else {
                    notifyBannerShow(getContext().getApplicationContext(), aVar, z);
                }
                IExHandler iExHandlerB = m.a().b();
                if (iExHandlerB != null) {
                    customBannerAdapter.setAdDownloadListener(iExHandlerB.createDownloadListener(customBannerAdapter, null, this.mDownloadListener));
                }
                removeAllViews();
                int i = bannerView.getLayoutParams() != null ? bannerView.getLayoutParams().width : 0;
                if (i == 0) {
                    i = -2;
                }
                int i2 = bannerView.getLayoutParams() != null ? bannerView.getLayoutParams().height : 0;
                FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(i, i2 > 0 ? i2 : -2);
                layoutParams.gravity = 17;
                bannerView.setLayoutParams(layoutParams);
                if (bannerView.getParent() instanceof ViewGroup) {
                    ((ViewGroup) bannerView.getParent()).removeView(bannerView);
                }
                addView(bannerView, layoutParams);
            } else {
                Log.e(this.TAG, "Network's banner view = null. Did you call destroy()?");
            }
            this.mAdLoadManager.a(aVar);
            this.mBannerRefreshTimer.b();
            if (isRefreshOpen()) {
                loadAd(1);
            }
        }
    }

    private boolean isInView() {
        if (this.hasTouchWindow && isShown()) {
            return this.mCustomBannerAd == null || checkVisibilityPercent();
        }
        return false;
    }

    private boolean checkVisibilityPercent() {
        if (this.visibilityChecker == null) {
            this.visibilityChecker = new f.b();
        }
        if (getParent() != null) {
            return this.visibilityChecker.a((View) getParent(), this, 80, 0);
        }
        return false;
    }

    protected void controlShow() {
        if (this.mAdLoadManager == null) {
            return;
        }
        final boolean z = this.mIsRefresh;
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public void run() {
                synchronized (TYBannerView.this.mAdLoadManager) {
                    if (TYBannerView.this.canRenderBanner) {
                        final com.tkay.core.common.f.a bannerCache = TYBannerView.this.getBannerCache();
                        boolean z2 = false;
                        if (bannerCache != null) {
                            if (TYBannerView.this.isInView()) {
                                bannerCache.a(bannerCache.d() + 1);
                                TYBannerView.this.canRenderBanner = false;
                                m.a().a(new Runnable() {
                                    @Override
                                    public final void run() {
                                        TYBannerView.this.renderBannerView(bannerCache, z);
                                    }
                                });
                            } else {
                                if (TYBannerView.this.hasTouchWindow && TYBannerView.this.isShown()) {
                                    z2 = true;
                                } else {
                                    TYBannerView.this.mBannerRefreshTimer.d();
                                }
                                String unused = TYBannerView.this.TAG;
                            }
                        } else if (TYBannerView.this.isRefreshOpen() && TYBannerView.this.mAdLoadManager != null && !TYBannerView.this.mAdLoadManager.e()) {
                            TYBannerView.this.loadAd(1);
                            if (TYBannerView.this.hasTouchWindow && TYBannerView.this.isShown()) {
                                z2 = true;
                            }
                        }
                        if (z2 && TYBannerView.this.mBannerRefreshTimer != null && TYBannerView.this.mBannerRefreshTimer.c()) {
                            TYBannerView.this.mBannerRefreshTimer.b();
                        }
                        return;
                    }
                    String unused2 = TYBannerView.this.TAG;
                }
            }
        });
    }

    private boolean isRefreshOpen() {
        com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(getContext().getApplicationContext()).a(this.mPlacementId);
        return dVarA != null && dVarA.W() == 1;
    }

    private void notifyBannerShow(final Context context, final com.tkay.core.common.f.a aVar, final boolean z) {
        final TYBaseAdAdapter tYBaseAdAdapterE = aVar.e();
        final com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapterE.getTrackingInfo();
        trackingInfo.v = x.a().b(trackingInfo.W());
        final long jCurrentTimeMillis = System.currentTimeMillis();
        if (trackingInfo != null && TextUtils.isEmpty(trackingInfo.l())) {
            trackingInfo.h(g.a(trackingInfo.X(), trackingInfo.x(), jCurrentTimeMillis));
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                if (trackingInfo != null) {
                    s.a(TYBannerView.this.getContext(), trackingInfo);
                    com.tkay.core.common.a.a().a(context.getApplicationContext(), aVar);
                    com.tkay.core.common.k.a.a(context).a(13, trackingInfo, tYBaseAdAdapterE.getUnitGroupInfo(), jCurrentTimeMillis);
                    if (tYBaseAdAdapterE.supportImpressionCallback()) {
                        return;
                    }
                    TYBannerView.this.notifyBannerImpression(context, tYBaseAdAdapterE, z);
                }
            }
        });
    }

    private void notifyBannerImpression(final Context context, final TYBaseAdAdapter tYBaseAdAdapter, final boolean z) {
        final com.tkay.core.common.f.d trackingInfo = tYBaseAdAdapter.getTrackingInfo();
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public void run() {
                g.a(trackingInfo, f.i.c, f.i.l, "");
                com.tkay.core.common.k.a.a(context).a(4, trackingInfo, tYBaseAdAdapter.getUnitGroupInfo());
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (TYBannerView.this.mListener != null) {
                            if (tYBaseAdAdapter == null || !z) {
                                TYBannerView.this.mListener.onBannerShow(i.a(tYBaseAdAdapter));
                            } else {
                                TYBannerView.this.mListener.onBannerAutoRefreshed(i.a(tYBaseAdAdapter));
                            }
                        }
                    }
                });
            }
        });
    }

    public void setAdDownloadListener(TYEventInterface tYEventInterface) {
        IExHandler iExHandlerB;
        this.mDownloadListener = tYEventInterface;
        if (this.mCustomBannerAd == null || (iExHandlerB = m.a().b()) == null) {
            return;
        }
        CustomBannerAdapter customBannerAdapter = this.mCustomBannerAd;
        customBannerAdapter.setAdDownloadListener(iExHandlerB.createDownloadListener(customBannerAdapter, null, this.mDownloadListener));
    }

    public void setAdSourceStatusListener(TYAdSourceStatusListener tYAdSourceStatusListener) {
        if (this.mAdSourceEventListener == null) {
            this.mAdSourceEventListener = new b();
        }
        this.mDeveloperStatusListener = tYAdSourceStatusListener;
        this.mAdSourceEventListener.a(tYAdSourceStatusListener);
    }

    @Override
    public void timeUpRefreshView() {
        this.canRenderBanner = true;
        controlShow();
    }
}
