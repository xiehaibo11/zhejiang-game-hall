package com.tkay.network.mintegral;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.out.MBBidRewardVideoHandler;
import com.mbridge.msdk.out.MBRewardVideoHandler;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class MintegralTYRewardedVideoAdapter extends CustomRewardVideoAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MBRewardVideoHandler f7639a;
    MBBidRewardVideoHandler b;
    String e;
    String f;
    Map<String, Object> g;
    private final String h = MintegralTYRewardedVideoAdapter.class.getSimpleName();
    String c = "";
    String d = "";

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
            MintegralTYInitManager.getInstance().initSDK(context.getApplicationContext(), map, new MediationInitCallback() { // from class: com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter.1
                @Override // com.tkay.core.api.MediationInitCallback
                public final void onSuccess() {
                    MintegralTYRewardedVideoAdapter.this.a(context);
                    MintegralTYRewardedVideoAdapter.this.startLoad(map);
                }

                @Override // com.tkay.core.api.MediationInitCallback
                public final void onFail(String str) {
                    if (MintegralTYRewardedVideoAdapter.this.mLoadListener != null) {
                        MintegralTYRewardedVideoAdapter.this.mLoadListener.onAdLoadError("", str);
                    }
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:16:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0093  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(android.content.Context r13) {
        /*
            r12 = this;
            com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$2 r0 = new com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter$2
            r0.<init>()
            java.lang.String r1 = r12.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 0
            r3 = 2
            java.lang.String r4 = "1"
            java.lang.String r5 = "0"
            r6 = 49
            r7 = 48
            r8 = -1
            r9 = 1
            if (r1 == 0) goto L5f
            com.mbridge.msdk.out.MBRewardVideoHandler r1 = new com.mbridge.msdk.out.MBRewardVideoHandler
            android.content.Context r13 = r13.getApplicationContext()
            java.lang.String r10 = r12.c
            java.lang.String r11 = r12.d
            r1.<init>(r13, r10, r11)
            r12.f7639a = r1
            r1.setRewardVideoListener(r0)
            java.lang.String r13 = r12.f
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto La4
            java.lang.String r13 = r12.f
            int r0 = r13.hashCode()
            if (r0 == r7) goto L46
            if (r0 == r6) goto L3e
            goto L4d
        L3e:
            boolean r13 = r13.equals(r4)
            if (r13 == 0) goto L4d
            r2 = r9
            goto L4e
        L46:
            boolean r13 = r13.equals(r5)
            if (r13 == 0) goto L4d
            goto L4e
        L4d:
            r2 = r8
        L4e:
            if (r2 == 0) goto L59
            if (r2 == r9) goto L53
            goto L58
        L53:
            com.mbridge.msdk.out.MBRewardVideoHandler r13 = r12.f7639a
            r13.playVideoMute(r3)
        L58:
            return
        L59:
            com.mbridge.msdk.out.MBRewardVideoHandler r13 = r12.f7639a
            r13.playVideoMute(r9)
            return
        L5f:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r1 = new com.mbridge.msdk.out.MBBidRewardVideoHandler
            android.content.Context r13 = r13.getApplicationContext()
            java.lang.String r10 = r12.c
            java.lang.String r11 = r12.d
            r1.<init>(r13, r10, r11)
            r12.b = r1
            r1.setRewardVideoListener(r0)
            java.lang.String r13 = r12.f
            boolean r13 = android.text.TextUtils.isEmpty(r13)
            if (r13 != 0) goto La4
            java.lang.String r13 = r12.f
            int r0 = r13.hashCode()
            if (r0 == r7) goto L8c
            if (r0 == r6) goto L84
            goto L93
        L84:
            boolean r13 = r13.equals(r4)
            if (r13 == 0) goto L93
            r2 = r9
            goto L94
        L8c:
            boolean r13 = r13.equals(r5)
            if (r13 == 0) goto L93
            goto L94
        L93:
            r2 = r8
        L94:
            if (r2 == 0) goto L9f
            if (r2 == r9) goto L99
            goto La4
        L99:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r13 = r12.b
            r13.playVideoMute(r3)
            goto La4
        L9f:
            com.mbridge.msdk.out.MBBidRewardVideoHandler r13 = r12.b
            r13.playVideoMute(r9)
        La4:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.network.mintegral.MintegralTYRewardedVideoAdapter.a(android.content.Context):void");
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
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
        if (this.f7639a != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            this.f7639a.load();
        }
        if (this.b != null) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            this.b.loadFromBid(this.e);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        MBRewardVideoHandler mBRewardVideoHandler = this.f7639a;
        if (mBRewardVideoHandler != null) {
            return mBRewardVideoHandler.isReady();
        }
        MBBidRewardVideoHandler mBBidRewardVideoHandler = this.b;
        if (mBBidRewardVideoHandler != null) {
            return mBBidRewardVideoHandler.isBidReady();
        }
        return false;
    }

    @Override // com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter
    public void show(Activity activity) {
        if (this.f7639a != null) {
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            this.f7639a.show(this.mUserId, this.mUserData);
        }
        if (this.b != null) {
            if (!TextUtils.isEmpty(this.mUserData) && this.mUserData.contains(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME)) {
                this.mUserData = this.mUserData.replace(TYAdConst.REWARD_EXTRA_REPLACE_HODLER_KEY.NETWORK_PLACEMENT_ID_HOLDER_NAME, this.d);
            }
            this.b.showFromBid(this.mUserId, this.mUserData);
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void destory() {
        MBBidRewardVideoHandler mBBidRewardVideoHandler = this.b;
        if (mBBidRewardVideoHandler != null) {
            mBBidRewardVideoHandler.setRewardVideoListener(null);
            this.b = null;
        }
        MBRewardVideoHandler mBRewardVideoHandler = this.f7639a;
        if (mBRewardVideoHandler != null) {
            mBRewardVideoHandler.setRewardVideoListener(null);
            this.f7639a = null;
        }
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkPlacementId() {
        return this.d;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public String getNetworkSDKVersion() {
        return MintegralTYInitManager.getInstance().getNetworkVersion();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public Map<String, Object> getNetworkInfoMap() {
        return this.g;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public TYInitMediation getMediationInitManager() {
        return MintegralTYInitManager.getInstance();
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public void getBidRequestInfo(Context context, Map<String, Object> map, Map<String, Object> map2, TYBidRequestInfoListener tYBidRequestInfoListener) {
        this.d = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 1, tYBidRequestInfoListener);
    }
}
