package com.tkay.network.mintegral;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.ViewGroup;
import com.mbridge.msdk.out.MBSplashHandler;
import com.mbridge.msdk.out.MBSplashLoadListener;
import com.mbridge.msdk.out.MBSplashShowListener;
import com.mbridge.msdk.out.MBridgeIds;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.expressad.d.a.b;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.lang.ref.WeakReference;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYSplashAdapter extends CustomSplashAdapter {
    private static final String j = MintegralTYSplashAdapter.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f7642a;
    int b = 5;
    int c = 1;
    boolean d = true;
    String e = "";
    String f = "";
    String g = "";
    String h = "";
    MBSplashHandler i = null;

    static /* synthetic */ int m(MintegralTYSplashAdapter mintegralTYSplashAdapter) {
        mintegralTYSplashAdapter.mDismissType = 99;
        return 99;
    }

    static /* synthetic */ int t(MintegralTYSplashAdapter mintegralTYSplashAdapter) {
        mintegralTYSplashAdapter.mDismissType = 2;
        return 2;
    }

    static /* synthetic */ int v(MintegralTYSplashAdapter mintegralTYSplashAdapter) {
        mintegralTYSplashAdapter.mDismissType = 3;
        return 3;
    }

    static /* synthetic */ int x(MintegralTYSplashAdapter mintegralTYSplashAdapter) {
        mintegralTYSplashAdapter.mDismissType = 4;
        return 4;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, final Map<String, Object> map2) {
        try {
            this.e = TYInitMediation.getStringFromMap(map, "appid");
            this.g = TYInitMediation.getStringFromMap(map, "appkey");
            this.f = TYInitMediation.getStringFromMap(map, "unitid");
            this.f7642a = TYInitMediation.getStringFromMap(map, "payload");
            this.h = TYInitMediation.getStringFromMap(map, l.a.c);
            if (!TextUtils.isEmpty(this.e) && !TextUtils.isEmpty(this.f) && !TextUtils.isEmpty(this.g)) {
                this.b = TYInitMediation.getIntFromMap(map, b.dk, 5);
                if (map.containsKey("allows_skip")) {
                    this.d = TYInitMediation.getIntFromMap(map, "allows_skip") == 1;
                }
                if (map.containsKey("orientation")) {
                    this.c = TextUtils.equals(TYInitMediation.getStringFromMap(map, "orientation"), "2") ? 2 : 1;
                }
                MintegralTYInitManager.getInstance().initSDK(context.getApplicationContext(), map, new MediationInitCallback() { // from class: com.tkay.network.mintegral.MintegralTYSplashAdapter.1
                    @Override // com.tkay.core.api.MediationInitCallback
                    public final void onSuccess() {
                        if (MintegralTYSplashAdapter.this.getMixedFormatAdType() == 0) {
                            if (!map.containsKey("video_muted")) {
                                map.put("video_muted", "0");
                            }
                            MintegralTYSplashAdapter.this.thirdPartyLoad(new MintegralTYAdapter(), context, map, map2);
                            return;
                        }
                        MintegralTYSplashAdapter.a(MintegralTYSplashAdapter.this, map);
                    }

                    @Override // com.tkay.core.api.MediationInitCallback
                    public final void onFail(String str) {
                        if (MintegralTYSplashAdapter.this.mLoadListener != null) {
                            MintegralTYSplashAdapter.this.mLoadListener.onAdLoadError("", str);
                        }
                    }
                });
                return;
            }
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", "mintegral appid ,unitid or sdkkey is empty.");
            }
        } catch (Exception e) {
            e.printStackTrace();
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", e.getMessage());
            }
        }
    }

    private void a(Map<String, Object> map) {
        MBSplashHandler mBSplashHandler = new MBSplashHandler(this.h, this.f, this.d, this.b, this.c, 0, 0);
        this.i = mBSplashHandler;
        mBSplashHandler.setLoadTimeOut(this.mFetchAdTimeout / 1000);
        this.i.setSplashLoadListener(new AnonymousClass2());
        this.i.setSplashShowListener(new AnonymousClass3());
        if (b()) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            this.i.preLoadByToken(this.f7642a);
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            this.i.preLoad();
        }
        this.i.onResume();
    }

    /* JADX INFO: renamed from: com.tkay.network.mintegral.MintegralTYSplashAdapter$2, reason: invalid class name */
    final class AnonymousClass2 implements MBSplashLoadListener {
        @Override // com.mbridge.msdk.out.MBSplashLoadListener
        public final void isSupportZoomOut(MBridgeIds mBridgeIds, boolean z) {
        }

        AnonymousClass2() {
        }

        @Override // com.mbridge.msdk.out.MBSplashLoadListener
        public final void onLoadSuccessed(MBridgeIds mBridgeIds, int i) {
            if (MintegralTYSplashAdapter.this.isAdReady()) {
                if (MintegralTYSplashAdapter.this.mLoadListener != null) {
                    MintegralTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                    return;
                }
                return;
            }
            MintegralTYSplashAdapter.this.postOnMainThreadDelayed(new Runnable() { // from class: com.tkay.network.mintegral.MintegralTYSplashAdapter.2.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (MintegralTYSplashAdapter.this.isAdReady()) {
                        if (MintegralTYSplashAdapter.this.mLoadListener != null) {
                            MintegralTYSplashAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                        }
                    } else if (MintegralTYSplashAdapter.this.mLoadListener != null) {
                        MintegralTYSplashAdapter.this.mLoadListener.onAdLoadError("", "Mintegral Splash Ad is not ready.");
                    }
                }
            }, 10L);
        }

        @Override // com.mbridge.msdk.out.MBSplashLoadListener
        public final void onLoadFailed(MBridgeIds mBridgeIds, String str, int i) {
            if (MintegralTYSplashAdapter.this.mLoadListener != null) {
                MintegralTYSplashAdapter.this.mLoadListener.onAdLoadError(String.valueOf(i), str);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.network.mintegral.MintegralTYSplashAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements MBSplashShowListener {
        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onAdTick(MBridgeIds mBridgeIds, long j) {
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onZoomOutPlayFinish(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onZoomOutPlayStart(MBridgeIds mBridgeIds) {
        }

        AnonymousClass3() {
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onShowSuccessed(MBridgeIds mBridgeIds) {
            try {
                MintegralTYInitManager.getInstance().a(MintegralTYSplashAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYSplashAdapter.this.i));
            } catch (Throwable unused) {
            }
            if (MintegralTYSplashAdapter.this.mImpressionListener != null) {
                MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdShow();
            }
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onShowFailed(MBridgeIds mBridgeIds, String str) {
            Log.e(MintegralTYSplashAdapter.j, "onShowFailed: ".concat(String.valueOf(str)));
            MintegralTYSplashAdapter.m(MintegralTYSplashAdapter.this);
            if (MintegralTYSplashAdapter.this.mImpressionListener != null) {
                MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, "", str));
                MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
            }
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onAdClicked(MBridgeIds mBridgeIds) {
            if (MintegralTYSplashAdapter.this.mImpressionListener != null) {
                MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdClicked();
            }
        }

        @Override // com.mbridge.msdk.out.MBSplashShowListener
        public final void onDismiss(MBridgeIds mBridgeIds, int i) {
            if (MintegralTYSplashAdapter.this.mImpressionListener != null) {
                if (i == 1) {
                    MintegralTYSplashAdapter.t(MintegralTYSplashAdapter.this);
                    MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                } else if (i == 2) {
                    MintegralTYSplashAdapter.v(MintegralTYSplashAdapter.this);
                    MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                } else if (i != 3) {
                    MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                } else {
                    MintegralTYSplashAdapter.x(MintegralTYSplashAdapter.this);
                    MintegralTYSplashAdapter.this.mImpressionListener.onSplashAdDismiss();
                }
            }
        }
    }

    private boolean b() {
        return !TextUtils.isEmpty(this.f7642a);
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        if (this.i != null) {
            return b() ? this.i.isReady(this.f7642a) : this.i.isReady();
        }
        return false;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashAdapter
    public void show(Activity activity, ViewGroup viewGroup) {
        if (this.i != null) {
            if (b()) {
                this.i.show(viewGroup, this.f7642a);
            } else {
                this.i.show(viewGroup);
            }
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        MBSplashHandler mBSplashHandler = this.i;
        if (mBSplashHandler != null) {
            mBSplashHandler.onPause();
            this.i.onDestroy();
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.f;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.f = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 5, tYBidRequestInfoListener);
    }

    static /* synthetic */ void a(MintegralTYSplashAdapter mintegralTYSplashAdapter, Map map) {
        MBSplashHandler mBSplashHandler = new MBSplashHandler(mintegralTYSplashAdapter.h, mintegralTYSplashAdapter.f, mintegralTYSplashAdapter.d, mintegralTYSplashAdapter.b, mintegralTYSplashAdapter.c, 0, 0);
        mintegralTYSplashAdapter.i = mBSplashHandler;
        mBSplashHandler.setLoadTimeOut(mintegralTYSplashAdapter.mFetchAdTimeout / 1000);
        mintegralTYSplashAdapter.i.setSplashLoadListener(mintegralTYSplashAdapter.new AnonymousClass2());
        mintegralTYSplashAdapter.i.setSplashShowListener(mintegralTYSplashAdapter.new AnonymousClass3());
        if (mintegralTYSplashAdapter.b()) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mintegralTYSplashAdapter.i.preLoadByToken(mintegralTYSplashAdapter.f7642a);
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mintegralTYSplashAdapter.i.preLoad();
        }
        mintegralTYSplashAdapter.i.onResume();
    }
}
