package com.tkay.expressad.video.bt.module.b;

public class c implements h {
    private static final String a = "ShowRewardListener";

    @Override
    public void a() {
    }

    @Override
    public void a(com.tkay.expressad.foundation.d.c cVar) {
    }

    @Override
    public void a(String str) {
    }

    @Override
    public void b() {
    }

    @Override
    public void c() {
    }

    @Override
    public void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
        StringBuilder sb = new StringBuilder("onAdClose:isCompleteView:");
        sb.append(z);
        sb.append(",reward:");
        sb.append(cVar);
    }

    @Override
    public void a(boolean z, int i) {
        StringBuilder sb = new StringBuilder("onAdCloseWithIVReward: ");
        sb.append(z);
        sb.append("  ");
        sb.append(i);
    }
}
