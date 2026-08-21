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

public class MintegralTYInterstitialAdapter extends CustomInterstitialAdapter {
    MBInterstitialHandler a;
    MBNewInterstitialHandler b;
    MBBidInterstitialVideoHandler c;
    boolean f;
    boolean g;
    String h;
    String i;
    private final String k = MintegralTYInterstitialAdapter.class.getSimpleName();
    String d = "";
    String e = "";
    NewInterstitialListener j = new NewInterstitialListener() {
        @Override
        public final void onAdCloseWithNIReward(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
        }

        @Override
        public final void onEndcardShow(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onLoadCampaignSuccess(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdDataLoaded();
            }
        }

        @Override
        public final void onResourceLoadSuccess(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override
        public final void onResourceLoadFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdLoadError("", str);
            }
        }

        @Override
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

        @Override
        public final void onAdClose(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }

        @Override
        public final void onShowFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoError("", str);
            }
        }

        @Override
        public final void onAdClicked(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClicked();
            }
        }

        @Override
        public final void onVideoComplete(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdVideoEnd();
            }
        }
    };

    static int z(MintegralTYInterstitialAdapter mintegralTYInterstitialAdapter) {
        mintegralTYInterstitialAdapter.mDismissType = 99;
        return 99;
    }

    @Override
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
            MintegralTYInitManager.getInstance().initSDK(context, map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    MintegralTYInterstitialAdapter.a(MintegralTYInterstitialAdapter.this, context);
                    MintegralTYInterstitialAdapter.this.startLoad(map);
                }

                @Override
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
        this.a = mBInterstitialHandler;
        mBInterstitialHandler.setInterstitialListener(new 3());
    }

    final class 3 implements InterstitialListener {
        3() {
        }

        @Override
        public final void onInterstitialLoadSuccess(MBridgeIds mBridgeIds) {
            MintegralTYInterstitialAdapter.this.g = true;
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override
        public final void onInterstitialLoadFail(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYInterstitialAdapter.this.mLoadListener != null) {
                MintegralTYInterstitialAdapter.this.mLoadListener.onAdLoadError("", str);
            }
        }

        @Override
        public final void onInterstitialShowSuccess(MBridgeIds mBridgeIds) {
            try {
                if (MintegralTYInterstitialAdapter.this.a != null) {
                    MintegralTYInitManager.getInstance().a(MintegralTYInterstitialAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYInterstitialAdapter.this.a));
                }
            } catch (Throwable unused) {
            }
            MintegralTYInterstitialAdapter.this.g = false;
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdShow();
            }
        }

        @Override
        public final void onInterstitialShowFail(MBridgeIds mBridgeIds, String str) {
            Log.e(MintegralTYInterstitialAdapter.this.k, "onInterstitialShowFail:".concat(String.valueOf(str)));
            MintegralTYInterstitialAdapter.z(MintegralTYInterstitialAdapter.this);
        }

        @Override
        public final void onInterstitialClosed(MBridgeIds mBridgeIds) {
            if (MintegralTYInterstitialAdapter.this.mImpressListener != null) {
                MintegralTYInterstitialAdapter.this.mImpressListener.onInterstitialAdClose();
            }
        }

        @Override
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
    */
    public void startLoad(Map<String, Object> map) {
        byte b;
        if (this.a != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            this.a.preload();
        }
        byte b2 = 0;
        if (this.b != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            if (!TextUtils.isEmpty(this.i)) {
                String str = this.i;
                int iHashCode = str.hashCode();
                if (iHashCode != 48) {
                    b = (iHashCode == 49 && str.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b != 0) {
                        this.b.playVideoMute(1);
                    } else if (b == 1) {
                        this.b.playVideoMute(2);
                    }
                } else {
                    if (str.equals("0")) {
                        b = 0;
                    }
                    if (b != 0) {
                    }
                }
            }
            this.b.load();
        }
        if (this.c != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            if (!TextUtils.isEmpty(this.i)) {
                String str2 = this.i;
                int iHashCode2 = str2.hashCode();
                if (iHashCode2 != 48) {
                    b2 = (iHashCode2 == 49 && str2.equals("1")) ? (byte) 1 : (byte) -1;
                    if (b2 != 0) {
                        this.c.playVideoMute(1);
                    } else if (b2 == 1) {
                        this.c.playVideoMute(2);
                    }
                } else {
                    if (!str2.equals("0")) {
                    }
                    if (b2 != 0) {
                    }
                }
            }
            this.c.loadFromBid(this.h);
        }
    }

    @Override
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

    @Override
    public void show(Activity activity) {
        MBInterstitialHandler mBInterstitialHandler = this.a;
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

    @Override
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void destory() {
        MBInterstitialHandler mBInterstitialHandler = this.a;
        if (mBInterstitialHandler != null) {
            mBInterstitialHandler.setInterstitialListener(null);
            this.a = null;
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

    @Override
    public String getNetworkPlacementId() {
        return this.e;
    }

    @Override
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.e = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 3, tYBidRequestInfoListener);
    }

    static void a(MintegralTYInterstitialAdapter mintegralTYInterstitialAdapter, Context context) {
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
        mintegralTYInterstitialAdapter.a = mBInterstitialHandler;
        mBInterstitialHandler.setInterstitialListener(mintegralTYInterstitialAdapter.new 3());
    }
}
