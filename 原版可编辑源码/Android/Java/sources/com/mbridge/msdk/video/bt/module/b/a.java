package com.mbridge.msdk.video.bt.module.b;

import android.text.TextUtils;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.RewardInfo;
import com.mbridge.msdk.videocommon.listener.InterVideoOutListener;

public final class a implements InterVideoOutListener {
    private g a;
    private String b;
    private boolean c;

    @Override
    public final void onAdCloseWithIVReward(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
    }

    public a(g gVar, String str, boolean z) {
        this.b = "";
        this.a = gVar;
        this.b = str;
        this.c = z;
    }

    public a(g gVar) {
        this.b = "";
        this.a = gVar;
    }

    @Override
    public final void onAdShow(MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onAdShow(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.f.a().g(this.b, "rv", this.c);
        }
    }

    @Override
    public final void onAdClose(MBridgeIds mBridgeIds, RewardInfo rewardInfo) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onAdClose(mBridgeIds, rewardInfo);
        }
    }

    @Override
    public final void onShowFail(MBridgeIds mBridgeIds, String str) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onShowFail(mBridgeIds, str);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.f.a().b(this.b, str, "rv", this.c);
        }
    }

    @Override
    public final void onVideoAdClicked(boolean z, MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onVideoAdClicked(mBridgeIds);
        }
    }

    @Override
    public final void onVideoComplete(MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onVideoComplete(mBridgeIds);
        }
    }

    @Override
    public final void onEndcardShow(MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onEndcardShow(mBridgeIds);
        }
    }

    @Override
    public final void onVideoLoadFail(MBridgeIds mBridgeIds, String str) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onVideoLoadFail(mBridgeIds, str);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.f.a().a(this.b, str, "rv", this.c);
        }
    }

    @Override
    public final void onVideoLoadSuccess(MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onVideoLoadSuccess(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.f.a().c(this.b, "rv", this.c);
        }
    }

    @Override
    public final void onLoadSuccess(MBridgeIds mBridgeIds) {
        g gVar = this.a;
        if (gVar != null) {
            gVar.onLoadSuccess(mBridgeIds);
            if (TextUtils.isEmpty(this.b)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.f.a().b(this.b, "rv", this.c);
        }
    }
}
