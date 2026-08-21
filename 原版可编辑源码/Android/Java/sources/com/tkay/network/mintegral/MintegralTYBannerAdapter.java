package com.tkay.network.mintegral;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.mbridge.msdk.out.BannerAdListener;
import com.mbridge.msdk.out.BannerSize;
import com.mbridge.msdk.out.MBBannerView;
import com.mbridge.msdk.out.MBridgeIds;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.common.c.l;
import com.tkay.core.common.f.j;
import java.lang.ref.WeakReference;
import java.util.Map;

public class MintegralTYBannerAdapter extends CustomBannerAdapter {
    MBBannerView a;
    String b = "";
    String c = "";
    String d;
    String e;
    int f;

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private void a(Context context, Map<String, Object> map) {
        byte b;
        int iDip2px;
        this.a = new MBBannerView(context);
        String str = this.d;
        int i = 3;
        switch (str.hashCode()) {
            case -559799608:
                b = !str.equals(j.c) ? (byte) -1 : (byte) 1;
                break;
            case 109549001:
                b = !str.equals("smart") ? (byte) -1 : (byte) 2;
                break;
            case 1507809730:
                b = !str.equals(j.a) ? (byte) -1 : (byte) 3;
                break;
            case 1507809854:
                b = !str.equals(j.b) ? (byte) -1 : (byte) 0;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0) {
            iDip2px = 90;
            i = 1;
        } else if (b == 1) {
            iDip2px = 250;
            i = 2;
        } else if (b != 2) {
            i = 4;
            iDip2px = 50;
        } else {
            iDip2px = -1;
        }
        this.a.init(new BannerSize(i, 0, 0), this.c, this.b);
        MBBannerView mBBannerView = this.a;
        if (iDip2px > 0) {
            iDip2px = dip2px(context, iDip2px);
        }
        mBBannerView.setLayoutParams(new ViewGroup.LayoutParams(-1, iDip2px));
        this.a.setBannerAdListener(new 1());
        int i2 = this.f;
        if (i2 > 0) {
            this.a.setRefreshTime(i2);
        } else {
            this.a.setRefreshTime(0);
        }
        if (!TextUtils.isEmpty(this.e)) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            this.a.loadFromBid(this.e);
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            this.a.load();
        }
    }

    final class 1 implements BannerAdListener {
        @Override
        public final void closeFullScreen(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void onLeaveApp(MBridgeIds mBridgeIds) {
        }

        @Override
        public final void showFullScreen(MBridgeIds mBridgeIds) {
        }

        1() {
        }

        @Override
        public final void onLoadFailed(MBridgeIds mBridgeIds, String str) {
            if (MintegralTYBannerAdapter.this.mLoadListener != null) {
                MintegralTYBannerAdapter.this.mLoadListener.onAdLoadError("", str);
            }
        }

        @Override
        public final void onLoadSuccessed(MBridgeIds mBridgeIds) {
            if (MintegralTYBannerAdapter.this.mLoadListener != null) {
                MintegralTYBannerAdapter.this.mLoadListener.onAdCacheLoaded(new BaseAd[0]);
            }
        }

        @Override
        public final void onLogImpression(MBridgeIds mBridgeIds) {
            try {
                MintegralTYInitManager.getInstance().a(MintegralTYBannerAdapter.this.getTrackingInfo().l(), new WeakReference(MintegralTYBannerAdapter.this.a));
            } catch (Throwable unused) {
            }
            if (MintegralTYBannerAdapter.this.mImpressionEventListener != null) {
                MintegralTYBannerAdapter.this.mImpressionEventListener.onBannerAdShow();
            }
        }

        @Override
        public final void onClick(MBridgeIds mBridgeIds) {
            if (MintegralTYBannerAdapter.this.mImpressionEventListener != null) {
                MintegralTYBannerAdapter.this.mImpressionEventListener.onBannerAdClicked();
            }
        }

        @Override
        public final void onCloseBanner(MBridgeIds mBridgeIds) {
            if (MintegralTYBannerAdapter.this.mImpressionEventListener != null) {
                MintegralTYBannerAdapter.this.mImpressionEventListener.onBannerAdClose();
            }
        }
    }

    public static int dip2px(Context context, float f) {
        return (int) ((f * context.getResources().getDisplayMetrics().density) + 0.5f);
    }

    @Override
    public View getBannerView() {
        return this.a;
    }

    @Override
    public String getNetworkName() {
        return MintegralTYInitManager.getInstance().getNetworkName();
    }

    @Override
    public void loadCustomNetworkAd(Context context, final Map<String, Object> map, Map<String, Object> map2) {
        String stringFromMap = TYInitMediation.getStringFromMap(map, "appid");
        String stringFromMap2 = TYInitMediation.getStringFromMap(map, "appkey");
        this.b = TYInitMediation.getStringFromMap(map, "unitid");
        this.d = TYInitMediation.getStringFromMap(map, TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE);
        this.e = TYInitMediation.getStringFromMap(map, "payload");
        this.c = TYInitMediation.getStringFromMap(map, l.a.c);
        if (TextUtils.isEmpty(stringFromMap) || TextUtils.isEmpty(stringFromMap2) || TextUtils.isEmpty(this.b)) {
            if (this.mLoadListener != null) {
                this.mLoadListener.onAdLoadError("", "appid、appkey or unitid is empty.");
                return;
            }
            return;
        }
        this.f = 0;
        try {
            if (map.containsKey("nw_rft")) {
                int intFromMap = TYInitMediation.getIntFromMap(map, "nw_rft");
                this.f = intFromMap;
                this.f = (int) (intFromMap / 1000.0f);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        final Context applicationContext = context.getApplicationContext();
        MintegralTYInitManager.getInstance().initSDK(applicationContext, map, new MediationInitCallback() {
            @Override
            public final void onSuccess() {
                MintegralTYBannerAdapter.a(MintegralTYBannerAdapter.this, applicationContext, map);
            }

            @Override
            public final void onFail(String str) {
                if (MintegralTYBannerAdapter.this.mLoadListener != null) {
                    MintegralTYBannerAdapter.this.mLoadListener.onAdLoadError("", str);
                }
            }
        });
    }

    @Override
    public void destory() {
        MBBannerView mBBannerView = this.a;
        if (mBBannerView != null) {
            mBBannerView.setBannerAdListener(null);
            this.a.release();
            this.a = null;
        }
    }

    @Override
    public String getNetworkPlacementId() {
        return this.b;
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
        this.b = TYInitMediation.getStringFromMap(map, "unitid");
        MintegralTYInitManager.getInstance().a(context, map, map2, 2, tYBidRequestInfoListener);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    static void a(MintegralTYBannerAdapter mintegralTYBannerAdapter, Context context, Map map) {
        byte b;
        int iDip2px;
        mintegralTYBannerAdapter.a = new MBBannerView(context);
        String str = mintegralTYBannerAdapter.d;
        int i = 3;
        switch (str.hashCode()) {
            case -559799608:
                b = !str.equals(j.c) ? (byte) -1 : (byte) 1;
                break;
            case 109549001:
                b = !str.equals("smart") ? (byte) -1 : (byte) 2;
                break;
            case 1507809730:
                b = !str.equals(j.a) ? (byte) -1 : (byte) 3;
                break;
            case 1507809854:
                b = !str.equals(j.b) ? (byte) -1 : (byte) 0;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0) {
            iDip2px = 90;
            i = 1;
        } else if (b == 1) {
            iDip2px = 250;
            i = 2;
        } else if (b != 2) {
            i = 4;
            iDip2px = 50;
        } else {
            iDip2px = -1;
        }
        mintegralTYBannerAdapter.a.init(new BannerSize(i, 0, 0), mintegralTYBannerAdapter.c, mintegralTYBannerAdapter.b);
        MBBannerView mBBannerView = mintegralTYBannerAdapter.a;
        if (iDip2px > 0) {
            iDip2px = dip2px(context, iDip2px);
        }
        mBBannerView.setLayoutParams(new ViewGroup.LayoutParams(-1, iDip2px));
        mintegralTYBannerAdapter.a.setBannerAdListener(mintegralTYBannerAdapter.new 1());
        int i2 = mintegralTYBannerAdapter.f;
        if (i2 > 0) {
            mintegralTYBannerAdapter.a.setRefreshTime(i2);
        } else {
            mintegralTYBannerAdapter.a.setRefreshTime(0);
        }
        if (!TextUtils.isEmpty(mintegralTYBannerAdapter.e)) {
            MintegralTYInitManager.getInstance().setCustomInfo(7, map);
            mintegralTYBannerAdapter.a.loadFromBid(mintegralTYBannerAdapter.e);
        } else {
            MintegralTYInitManager.getInstance().setCustomInfo(8, map);
            mintegralTYBannerAdapter.a.load();
        }
    }
}
