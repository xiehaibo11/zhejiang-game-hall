package com.mbridge.msdk.mbbid.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.mbbid.common.a.b;
import com.tkay.expressad.foundation.g.a;

/* JADX INFO: loaded from: classes2.dex */
public class BidManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3657a;
    private BidListennning b;
    private boolean c;

    public BidManager(String str, String str2) {
        this(str, str2, "0");
    }

    public BidManager(String str, String str2, String str3) {
        this.c = false;
        this.f3657a = new b(str, str2, str3);
    }

    public <T extends CommonBidRequestParams> BidManager(T t) {
        this(t == null ? "" : t.getmPlacementId(), t == null ? "" : t.getmUnitId(), t != null ? t.getmFloorPrice() : "");
        if (t instanceof BannerBidRequestParams) {
            BannerBidRequestParams bannerBidRequestParams = (BannerBidRequestParams) t;
            this.f3657a.a(bannerBidRequestParams.getHeight());
            this.f3657a.b(bannerBidRequestParams.getWidth());
            this.f3657a.b(a.aP);
            if (t instanceof SplashBidRequestParams) {
                SplashBidRequestParams splashBidRequestParams = (SplashBidRequestParams) t;
                this.f3657a.a(splashBidRequestParams.a());
                this.f3657a.a(splashBidRequestParams.getOrientation());
                this.f3657a.b(a.aV);
                return;
            }
            return;
        }
        if (t instanceof AdvancedNativeBidRequestParams) {
            AdvancedNativeBidRequestParams advancedNativeBidRequestParams = (AdvancedNativeBidRequestParams) t;
            this.f3657a.a(advancedNativeBidRequestParams.getHeight());
            this.f3657a.b(advancedNativeBidRequestParams.getWidth());
            this.f3657a.b(a.aX);
        }
    }

    public void setRewardPlus(boolean z) {
        this.c = z;
    }

    public void bid() {
        b bVar = this.f3657a;
        if (bVar != null) {
            bVar.b(this.c);
            return;
        }
        BidListennning bidListennning = this.b;
        if (bidListennning != null) {
            bidListennning.onFailed("you need init the class :BidManager");
        }
    }

    public static String getBuyerUid(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            str = "";
        }
        return com.mbridge.msdk.mbbid.common.a.a(context, str);
    }

    public void setBidListener(BidListennning bidListennning) {
        this.b = bidListennning;
        b bVar = this.f3657a;
        if (bVar != null) {
            bVar.a(bidListennning);
        }
    }

    public static String getBuyerUid(Context context) {
        return com.mbridge.msdk.mbbid.common.a.a(context, "");
    }
}
