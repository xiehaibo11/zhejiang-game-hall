package com.mbridge.msdk.video.module.a.a;

import android.os.Handler;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.video.module.MBridgeContainerView;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import java.util.Timer;

/* JADX INFO: compiled from: VideoViewDefaultListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class l extends n {
    private MBridgeVideoView l;
    private MBridgeContainerView m;
    private int n;
    private Timer o;
    private Handler p;
    private boolean q;
    private boolean r;
    private int s;
    private int t;

    public l(MBridgeVideoView mBridgeVideoView, MBridgeContainerView mBridgeContainerView, CampaignEx campaignEx, com.mbridge.msdk.videocommon.b.d dVar, com.mbridge.msdk.videocommon.download.a aVar, String str, String str2, int i, int i2, com.mbridge.msdk.video.module.a.a aVar2, int i3, boolean z, int i4) {
        super(campaignEx, dVar, aVar, str, str2, aVar2, i3, z);
        this.p = new Handler();
        this.q = false;
        this.r = false;
        this.s = 1;
        this.l = mBridgeVideoView;
        this.m = mBridgeContainerView;
        this.t = i;
        this.n = i2;
        this.s = i4;
        if (mBridgeVideoView != null) {
            this.q = mBridgeVideoView.getVideoSkipTime() == 0;
        }
        if (mBridgeVideoView == null || mBridgeContainerView == null) {
            this.f4371a = false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:141:0x021e  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x028b  */
    @Override // com.mbridge.msdk.video.module.a.a.n, com.mbridge.msdk.video.module.a.a.j, com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(int r8, java.lang.Object r9) {
        /*
            Method dump skipped, instruction units count: 766
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.module.a.a.l.a(int, java.lang.Object):void");
    }

    private void i() {
        try {
            if (this.o != null) {
                this.o.cancel();
                this.o = null;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void j() {
        if (this.b == null || this.b.getDynamicTempCode() != 5) {
            return;
        }
        CampaignEx campaignEx = null;
        MBridgeVideoView mBridgeVideoView = this.l;
        if (mBridgeVideoView != null && mBridgeVideoView.mCampOrderViewData != null) {
            int i = 0;
            int i2 = 0;
            while (true) {
                if (i2 < this.l.mCampOrderViewData.size()) {
                    if (this.l.mCampOrderViewData.get(i2) != null && this.l.mCampOrderViewData.get(i2).getId() == this.b.getId()) {
                        i = i2 - 1;
                        break;
                    }
                    i2++;
                } else {
                    break;
                }
            }
            if (i >= 0 && this.l.mCampOrderViewData.get(i) != null) {
                campaignEx = this.l.mCampOrderViewData.get(i);
            }
        }
        if (campaignEx != null) {
            MBridgeVideoView mBridgeVideoView2 = this.l;
            if (mBridgeVideoView2 != null) {
                mBridgeVideoView2.setCampaign(campaignEx);
            }
            MBridgeContainerView mBridgeContainerView = this.m;
            if (mBridgeContainerView != null) {
                mBridgeContainerView.setCampaign(campaignEx);
            }
            a(campaignEx);
        }
    }
}
