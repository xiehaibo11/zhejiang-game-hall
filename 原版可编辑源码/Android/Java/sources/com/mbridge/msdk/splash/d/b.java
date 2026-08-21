package com.mbridge.msdk.splash.d;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.out.MBSplashLoadListener;
import com.mbridge.msdk.out.MBridgeIds;
import java.util.ArrayList;

public final class b implements com.mbridge.msdk.splash.b.b {
    private MBSplashLoadListener a;
    private c b;
    private MBridgeIds c;
    private String d;
    private String e;

    public b(c cVar, MBridgeIds mBridgeIds) {
        this.b = cVar;
        this.c = mBridgeIds;
        if (mBridgeIds != null) {
            this.d = mBridgeIds.getUnitId();
        }
    }

    public final void a(MBSplashLoadListener mBSplashLoadListener) {
        this.a = mBSplashLoadListener;
    }

    public final void a(String str) {
        this.e = str;
    }

    @Override
    public final void a(CampaignEx campaignEx, int i) {
        c cVar;
        c cVar2 = this.b;
        if (cVar2 == null || !cVar2.a() || campaignEx == null) {
            return;
        }
        MBSplashLoadListener mBSplashLoadListener = this.a;
        if (mBSplashLoadListener != null) {
            mBSplashLoadListener.onLoadSuccessed(this.c, i);
            this.a.isSupportZoomOut(this.c, campaignEx.getFlb() == 1);
        }
        this.b.a(false);
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), arrayList, this.d, campaignEx.isBidCampaign());
        if (i != 2 || (cVar = this.b) == null) {
            return;
        }
        cVar.a(campaignEx, 0, true);
    }

    @Override
    public final void a(String str, int i) {
        c cVar = this.b;
        if (cVar == null || !cVar.a()) {
            return;
        }
        MBSplashLoadListener mBSplashLoadListener = this.a;
        if (mBSplashLoadListener != null) {
            mBSplashLoadListener.onLoadFailed(this.c, str, i);
        }
        this.b.a(false);
        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, this.d, !TextUtils.isEmpty(this.e));
    }
}
