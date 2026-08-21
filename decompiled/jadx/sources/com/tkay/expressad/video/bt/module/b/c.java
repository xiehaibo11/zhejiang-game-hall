package com.tkay.expressad.video.bt.module.b;

/* JADX INFO: loaded from: classes3.dex */
public class c implements h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7209a = "ShowRewardListener";

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void a() {
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void a(com.tkay.expressad.foundation.d.c cVar) {
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void a(String str) {
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void b() {
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void c() {
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
        StringBuilder sb = new StringBuilder("onAdClose:isCompleteView:");
        sb.append(z);
        sb.append(",reward:");
        sb.append(cVar);
    }

    @Override // com.tkay.expressad.video.bt.module.b.h
    public void a(boolean z, int i) {
        StringBuilder sb = new StringBuilder("onAdCloseWithIVReward: ");
        sb.append(z);
        sb.append("  ");
        sb.append(i);
    }
}
