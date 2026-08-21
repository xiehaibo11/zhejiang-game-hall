package com.tkay.network.mintegral;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler;
import com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler;
import com.mbridge.msdk.newinterstitial.out.NewInterstitialListener;
import com.mbridge.msdk.out.InterstitialListener;
import com.mbridge.msdk.out.MBInterstitialHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.MBridgeSDKFactory;
import com.mbridge.msdk.out.RewardInfo;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYInterstitialAdapter extends CustomInterstitialAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MBInterstitialHandler f7630a;
    MBNewInterstitialHandler b;
    MBBidInterstitialVideoHandler c;
    boolean f;
    boolean g;
    String h;
    String i;
    private final String k = MintegralTYInterstitialAdapter.class.getSimpleName();
    String d = "";
    String e = "";
    NewInterstitialListener j = new NewInterstitialListener() { // from class: com.tkay.network.mintegral.MintegralTYInterstitialAdapter.1
        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onAdCloseWithNIReward(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onEndcardShow(MBridgeIds mBridgeIds) {
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onLoadCampaignSuccess(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onResourceLoadSuccess(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onResourceLoadFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdLoadError("", str);
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onAdShow(MBridgeIds mBridgeIds) {
            try {
                if (MintegralTYInterstitialAdapter.this.b != null) {
                    MintegralTYInitManager.getInstance().a(MintegralTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYInterstitialAdapter.this.b));
                }
                if (MintegralTYInterstitialAdapter.this.c != null) {
                    MintegralTYInitManager.getInstance().a(MintegralTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYInterstitialAdapter.this.c));
                }
            } catch (Throwable unused) {
            }
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onAdClose(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onShowFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError("", str);
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onAdClicked(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override // com.mbridge.msdk.newinterstitial.out.NewInterstitialListener
        public final void onVideoComplete(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
            }
        }
    };

    static /* synthetic */ int z(MintegralTYInterstitialAdapter mintegralTYInterstitialAdapter) {
        mintegralTYInterstitialAdapter.mDismissType = 99;
        return 99;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        this.g = false;
        this.f = false;
        String stringFromMap = TYInitMediation.getStringFromMap(map, "appid");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "appkey");
        this.e = TYInitMediation.getStringFromMap(map, "unitid");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.e)) {
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", "mintegral appid, appkey or unitid is empty!");
            }
        } else {
            if (map.containsKey("is_video")) {
                this.f = !TYInitMediation.getStringFromMap(map, "is_video").equals("0");
            }
            this.h = TYInitMediation.getStringFromMap(map, "payload");
            this.d = TYInitMediation.getStringFromMap(map, l.a.c);
            this.i = TYInitMediation.getStringFromMap(map, "video_muted");
            MintegralTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() { // from class: com.tkay.network.mintegral.MintegralTYInterstitialAdapter.2
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    MintegralTYInterstitialAdapter.a(MintegralTYInterstitialAdapter.this, context);
                    MintegralTYInterstitialAdapter.this.startLoad(map);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                        MintegralTYInterstitialAdapter.this.mLoadListener.onAdLoadError("", str);
                    }
                }
            });
        }
    }

    private void a(Context context) {
        if (this.f) {
            if (TextUtils.isEmpty(this.h)) {
                MBNewInterstitialHandler mBNewInterstitialHandler = new MBNewInterstitialHandler(context, this.d, this.e);
                this.b = mBNewInterstitialHandler;
                mBNewInterstitialHandler.setInterstitialVideoListener(this.j);
                return;
            } else {
                MBBidInterstitialVideoHandler mBBidInterstitialVideoHandler = new MBBidInterstitialVideoHandler(context, this.d, this.e);
                this.c = mBBidInterstitialVideoHandler;
                mBBidInterstitialVideoHandler.setInterstitialVideoListener(this.j);
                return;
            }
        }
        HashMap map = new HashMap();
        map.put("unit_id", this.e);
        map.put(MBridgeConstans.PLACEMENT_ID, this.d);
        MBInterstitialHandler mBInterstitialHandler = new MBInterstitialHandler(context.getApplicationContext(), map);
        this.f7630a = mBInterstitialHandler;
        mBInterstitialHandler.setInterstitialListener(new AnonymousClass3());
    }

    /* JADX INFO: renamed from: com.tkay.network.mintegral.MintegralTYInterstitialAdapter$3, reason: invalid class name */
    final class AnonymousClass3 implements InterstitialListener {
        AnonymousClass3() {
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialLoadSuccess(MBridgeIds mBridgeIds) {
            MintegralTYInterstitialAdapter.this.g = true;
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialLoadFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdLoadError("", str);
            }
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialShowSuccess(MBridgeIds mBridgeIds) {
            try {
                if (MintegralTYInterstitialAdapter.this.f7630a != null) {
                    MintegralTYInitManager.getInstance().a(MintegralTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYInterstitialAdapter.this.f7630a));
                }
            } catch (Throwable unused) {
            }
            MintegralTYInterstitialAdapter.this.g = false;
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialShowFail(MBridgeIds mBridgeIds, String str) {
            Log.e(MintegralTYInterstitialAdapter.this.k, "onInterstitialShowFail:".concat(String.valueOf(str)));
            MintegralTYInterstitialAdapter.z(MintegralTYInterstitialAdapter.this);
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialClosed(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }

        @Override // com.mbridge.msdk.out.InterstitialListener
        public final void onInterstitialAdClick(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x004c  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x004f  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0090  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x009c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void startLoad(java.util.Map<java.lang.String, java.lang.Object> r11) {
        /*
            r10 = this;
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r10.f7630a
            r1 = 8
            if (r0 == 0) goto L12
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r1, r11)
            com.mbridge.msdk.out.MBInterstitialHandler r0 = r10.f7630a
            r0.preload()
        L12:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r2 = 0
            r3 = 2
            java.lang.String r4 = "1"
            java.lang.String r5 = "0"
            r6 = 49
            r7 = 48
            r8 = -1
            r9 = 1
            if (r0 == 0) goto L62
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r0.setCustomInfo(r1, r11)
            java.lang.String r0 = r10.i
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L5d
            java.lang.String r0 = r10.i
            int r1 = r0.hashCode()
            if (r1 == r7) goto L44
            if (r1 == r6) goto L3c
            goto L4c
        L3c:
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L4c
            r0 = r9
            goto L4d
        L44:
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L4c
            r0 = r2
            goto L4d
        L4c:
            r0 = r8
        L4d:
            if (r0 == 0) goto L58
            if (r0 == r9) goto L52
            goto L5d
        L52:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.playVideoMute(r3)
            goto L5d
        L58:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.playVideoMute(r9)
        L5d:
            com.mbridge.msdk.newinterstitial.out.MBNewInterstitialHandler r0 = r10.b
            r0.load()
        L62:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r0 = r10.c
            if (r0 == 0) goto La8
            com.tkay.network.mintegral.MintegralTYInitManager r0 = com.tkay.network.mintegral.MintegralTYInitManager.getInstance()
            r1 = 7
            r0.setCustomInfo(r1, r11)
            java.lang.String r11 = r10.i
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            if (r11 != 0) goto La1
            java.lang.String r11 = r10.i
            int r0 = r11.hashCode()
            if (r0 == r7) goto L89
            if (r0 == r6) goto L81
            goto L90
        L81:
            boolean r11 = r11.equals(r4)
            if (r11 == 0) goto L90
            r2 = r9
            goto L91
        L89:
            boolean r11 = r11.equals(r5)
            if (r11 == 0) goto L90
            goto L91
        L90:
            r2 = r8
        L91:
            if (r2 == 0) goto L9c
            if (r2 == r9) goto L96
            goto La1
        L96:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            r11.playVideoMute(r3)
            goto La1
        L9c:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            r11.playVideoMute(r9)
        La1:
            com.mbridge.msdk.newinterstitial.out.MBBidInterstitialVideoHandler r11 = r10.c
            java.lang.String r0 = r10.h
            r11.loadFromBid(r0)
        La8:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.mintegral.MintegralTYInterstitialAdapter.startLoad(java.util.Map):void");
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        MBNewInterstitialHandler mBNewInterstitialHandler = this.b;
        if (mBNewInterstitialHandler != null) {
            return mBNewInterstitialHandler.isReady();
        }
        MBBidInterstitialVideoHandler mBBidInterstitialVideoHandler = this.c;
        if (mBBidInterstitialVideoHandler != null) {
            return mBBidInterstitialVideoHandler.isBidReady();
        }
        return this.g;
    }

    @Override // com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter
    public void show(Activity activity) {
        MBInterstitialHandler mBInterstitialHandler = this.f7630a;
        if (mBInterstitialHandler != null) {
            mBInterstitialHandler.show();
        }
        if (this.b != null) {
            MBridgeSDKFactory.getMBridgeSDK().updateDialogWeakActivity(new WeakReference<>(activity));
            this.b.show();
        }
        if (this.c != null) {
            MBridgeSDKFactory.getMBridgeSDK().updateDialogWeakActivity(new WeakReference<>(activity));
            this.c.showFromBid();
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        MBInterstitialHandler mBInterstitialHandler = this.f7630a;
        if (mBInterstitialHandler != null) {
            mBInterstitialHandler.setInterstitialListener(null);
            this.f7630a = null;
        }
        MBNewInterstitialHandler mBNewInterstitialHandler = this.b;
        if (mBNewInterstitialHandler != null) {
            mBNewInterstitialHandler.setInterstitialVideoListener(null);
            this.b = null;
        }
        MBBidInterstitialVideoHandler mBBidInterstitialVideoHandler = this.c;
        if (mBBidInterstitialVideoHandler != null) {
            mBBidInterstitialVideoHandler.setInterstitialVideoListener(null);
            this.c = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.e;
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
        this.e = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 3, tYBidRequestInfoListener);
    }

    static /* synthetic */ void a(MintegralTYInterstitialAdapter mintegralTYInterstitialAdapter, Context context) {
        if (mintegralTYInterstitialAdapter.f) {
            if (TextUtils.isEmpty(mintegralTYInterstitialAdapter.h)) {
                MBNewInterstitialHandler mBNewInterstitialHandler = new MBNewInterstitialHandler(context, mintegralTYInterstitialAdapter.d, mintegralTYInterstitialAdapter.e);
                mintegralTYInterstitialAdapter.b = mBNewInterstitialHandler;
                mBNewInterstitialHandler.setInterstitialVideoListener(mintegralTYInterstitialAdapter.j);
                return;
            } else {
                MBBidInterstitialVideoHandler mBBidInterstitialVideoHandler = new MBBidInterstitialVideoHandler(context, mintegralTYInterstitialAdapter.d, mintegralTYInterstitialAdapter.e);
                mintegralTYInterstitialAdapter.c = mBBidInterstitialVideoHandler;
                mBBidInterstitialVideoHandler.setInterstitialVideoListener(mintegralTYInterstitialAdapter.j);
                return;
            }
        }
        HashMap map = new HashMap();
        map.put("unit_id", mintegralTYInterstitialAdapter.e);
        map.put(MBridgeConstans.PLACEMENT_ID, mintegralTYInterstitialAdapter.d);
        MBInterstitialHandler mBInterstitialHandler = new MBInterstitialHandler(context.getApplicationContext(), map);
        mintegralTYInterstitialAdapter.f7630a = mBInterstitialHandler;
        mBInterstitialHandler.setInterstitialListener(mintegralTYInterstitialAdapter.new AnonymousClass3());
    }
}
