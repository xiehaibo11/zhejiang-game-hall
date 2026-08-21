package com.mbridge.msdk.video.bt.module.b;

import com.mbridge.msdk.foundation.tools.z;

public class c implements h {
    @Override
    public boolean b() {
        return false;
    }

    @Override
    public void a() {
        z.a("ShowRewardListener", "onAdShow");
    }

    @Override
    public void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
        z.a("ShowRewardListener", "onAdClose:isCompleteView:" + z + ",reward:" + dVar);
    }

    @Override
    public void a(String str) {
        z.a("ShowRewardListener", "onShowFail:" + str);
    }

    @Override
    public void a(boolean z, String str, String str2) {
        z.a("ShowRewardListener", "onVideoAdClicked:" + str2);
    }

    @Override
    public void a(String str, String str2) {
        z.a("ShowRewardListener", "onVideoComplete: " + str2);
    }

    @Override
    public void a(boolean z, int i) {
        z.a("ShowRewardListener", "onAdCloseWithIVReward: " + z + "  " + i);
    }

    @Override
    public void b(String str, String str2) {
        z.a("ShowRewardListener", "onEndcardShow: " + str2);
    }

    @Override
    public void a(int i, String str, String str2) {
        z.a("ShowRewardListener", "onAutoLoad: " + str2);
    }
}
