package com.tkay.network.mintegral;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.out.MBBidRewardVideoHandler;
import com.mbridge.msdk.out.MBRewardVideoHandler;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.RewardInfo;
import com.mbridge.msdk.out.RewardVideoListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

public class MintegralTYRewardedVideoAdapter extends CustomRewardVideoAdapter {
    MBRewardVideoHandler a;
    MBBidRewardVideoHandler b;
    String e;
    String f;
    Map<String, Object> g;
    private final String h = MintegralTYRewardedVideoAdapter.class.getSimpleName();
    String c = "";
    String d = "";

    @Override
    public void loadCustomNetworkAd(final Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "appid");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "appkey");
        this.d = TYInitMediation.getStringFromMap(map, "unitid");
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.d)) {
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", "mintegral appid, appkey or unitid is empty!");
            }
        } else {
            this.e = TYInitMediation.getStringFromMap(map, "payload");
            this.c = TYInitMediation.getStringFromMap(map, l.a.c);
            this.f = TYInitMediation.getStringFromMap(map, "video_muted");
            MintegralTYInitManager.getInstance().initSDK(context.getApplicationContext(), map, new MediationInitCallback() {
                @Override
                public final void onSuccess() {
                    MintegralTYRewardedVideoAdapter.this.a(context);
                    MintegralTYRewardedVideoAdapter.this.startLoad(map);
                }

                @Override
                public final void onFail(String str) {
                    if (MintegralTYRewardedVideoAdapter.this.mLoadListener != null) {
                        MintegralTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError("", str);
                    }
                }
            });
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0093  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(Context context) {
        RewardVideoListener rewardVideoListener = new RewardVideoListener() {
            @Override
            public final void onEndcardShow(MBridgeIds mBridgeIds) {
            }

            @Override
            public final void onVideoLoadSuccess(MBridgeIds mBridgeIds) {
                if (MintegralTYRewardedVideoAdapter.this.g == null) {
                    MintegralTYRewardedVideoAdapter.this.g = new HashMap(3);
                }
                if (MintegralTYRewardedVideoAdapter.this.a != null) {
                    MintegralTYRewardedVideoAdapter.this.g.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, MintegralTYRewardedVideoAdapter.this.a.getRequestId());
                }
                if (MintegralTYRewardedVideoAdapter.this.b != null) {
                    MintegralTYRewardedVideoAdapter.this.g.put(TYAdConst.NETWORK_CUSTOM_KEY.NETWORK_REQUEST_ID, MintegralTYRewardedVideoAdapter.this.b.getRequestId());
                }
                if (MintegralTYRewardedVideoAdapter.this.mLoadListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
                }
            }

            @Override
            public final void onLoadSuccess(MBridgeIds mBridgeIds) {
                if (MintegralTYRewardedVideoAdapter.this.mLoadListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mLoadListener.onAdDataLoaded();
                }
            }

            @Override
            public final void onVideoLoadFail(MBridgeIds mBridgeIds, String str) {
                if (MintegralTYRewardedVideoAdapter.this.mLoadListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError("", str);
                }
            }

            @Override
            public final void onAdShow(MBridgeIds mBridgeIds) {
                try {
                    if (MintegralTYRewardedVideoAdapter.this.a != null) {
                        MintegralTYInitManager.getInstance().a(MintegralTYRewardedVideoAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYRewardedVideoAdapter.this.a));
                    }
                    if (MintegralTYRewardedVideoAdapter.this.b != null) {
                        MintegralTYInitManager.getInstance().a(MintegralTYRewardedVideoAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYRewardedVideoAdapter.this.b));
                    }
                } catch (Exception unused) {
                }
                if (MintegralTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayStart();
                }
            }

            @Override
            public final void onAdClose(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
                if (MintegralTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    if (rewardInfo.isCompleteView()) {
                        MintegralTYRewardedVideoAdapter.this.mImpressionListener.onReward();
                    }
                    MintegralTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdClosed();
                }
            }

            @Override
            public final void onShowFail(MBridgeIds mBridgeIds, String str) {
                if (MintegralTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayFailed("", str);
                }
            }

            @Override
            public final void onVideoAdClicked(MBridgeIds mBridgeIds) {
                if (MintegralTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayClicked();
                }
            }

            @Override
            public final void onVideoComplete(MBridgeIds mBridgeIds) {
                if (MintegralTYRewardedVideoAdapter.this.mImpressionListener != null) {
                    MintegralTYRewardedVideoAdapter.this.mImpressionListener.onRewardedVideoAdPlayEnd();
                }
            }
        };
        byte b = 0;
        if (TextUtils.isEmpty(this.e)) {
            MBRewardVideoHandler mBRewardVideoHandler = new MBRewardVideoHandler(context.getApplicationContext(), this.c, this.d);
            this.a = mBRewardVideoHandler;
            mBRewardVideoHandler.setRewardVideoListener(rewardVideoListener);
            if (TextUtils.isEmpty(this.f)) {
                return;
            }
            String str = this.f;
            int iHashCode = str.hashCode();
            if (iHashCode != 48) {
                b = (iHashCode == 49 && str.equals("1")) ? (byte) 1 : (byte) -1;
            } else if (!str.equals("0")) {
            }
            if (b == 0) {
                this.a.playVideoMute(1);
                return;
            } else {
                if (b != 1) {
                    return;
                }
                this.a.playVideoMute(2);
                return;
            }
        }
        MBBidRewardVideoHandler mBBidRewardVideoHandler = new MBBidRewardVideoHandler(context.getApplicationContext(), this.c, this.d);
        this.b = mBBidRewardVideoHandler;
        mBBidRewardVideoHandler.setRewardVideoListener(rewardVideoListener);
        if (TextUtils.isEmpty(this.f)) {
            return;
        }
        String str2 = this.f;
        int iHashCode2 = str2.hashCode();
        if (iHashCode2 != 48) {
            b = (iHashCode2 == 49 && str2.equals("1")) ? (byte) 1 : (byte) -1;
        } else if (!str2.equals("0")) {
        }
        if (b == 0) {
            this.b.playVideoMute(1);
        } else {
            if (b != 1) {
                return;
            }
            this.b.playVideoMute(2);
        }
    }

    @Override
    public boolean initNetworkObjectByPlacementId(Context context, Map<String, Object> map, Map<String, Object> map2) {
        if (map == null || !map.containsKey("appid") || !map.containsKey("appkey") || !map.containsKey("unitid")) {
            return false;
        }
        this.d = TYInitMediation.getStringFromMap(map, "unitid");
        if (map.containsKey(l.a.c)) {
            this.c = TYInitMediation.getStringFromMap(map, l.a.c);
        }
        a(context);
        return true;
    }

    public void startLoad(Map<String, Object> map) {
        if (this.a != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            this.a.load();
        }
        if (this.b != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            this.b.loadFromBid(this.e);
        }
    }

    @Override
    public boolean isAdReady() {
        MBRewardVideoHandler mBRewardVideoHandler = this.a;
        if (mBRewardVideoHandler != null) {
            return mBRewardVideoHandler.isReady();
        }
        MBBidRewardVideoHandler mBBidRewardVideoHandler = this.b;
        if (mBBidRewardVideoHandler != null) {
            return mBBidRewardVideoHandler.isBidReady();
        }
        return false;
    }

    @Override
    public void show(Activity activity) {
        if (this.a != null) {
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            this.a.show(this.mUserId, this.mUserData);
        }
        if (this.b != null) {
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            this.b.showFromBid(this.mUserId, this.mUserData);
        }
    }

    @Override
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void destory() {
        MBBidRewardVideoHandler mBBidRewardVideoHandler = this.b;
        if (mBBidRewardVideoHandler != null) {
            mBBidRewardVideoHandler.setRewardVideoListener(null);
            this.b = null;
        }
        MBRewardVideoHandler mBRewardVideoHandler = this.a;
        if (mBRewardVideoHandler != null) {
            mBRewardVideoHandler.setRewardVideoListener(null);
            this.a = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.d;
    }

    @Override
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override
    public Map<String, Object> getNetworkInfoMap() {
        return this.g;
    }

    @Override
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.d = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 1, tYBidRequestInfoListener);
    }
}
