package com.mbridge.msdk.video.bt.module.b;

import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: H5ShowRewardListener.java */
/* JADX INFO: loaded from: classes3.dex */
public final class d extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.mbridge.msdk.video.bt.module.a.c f4126a;
    private String b;

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final boolean b() {
        return false;
    }

    public d(com.mbridge.msdk.video.bt.module.a.c cVar, String str) {
        this.f4126a = cVar;
        this.b = str;
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a() {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onAdShow");
            this.f4126a.a(this.b);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onAdClose");
            this.f4126a.a(this.b, z, dVar);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(String str) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onShowFail");
            this.f4126a.a(this.b, str);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(boolean z, String str, String str2) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onVideoAdClicked");
            this.f4126a.a(this.b, str, str2);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(String str, String str2) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onVideoComplete");
            this.f4126a.b(this.b, str, str2);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void b(String str, String str2) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onEndcardShow");
            this.f4126a.c(this.b, str, str2);
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.b.c, com.mbridge.msdk.video.bt.module.b.h
    public final void a(int i, String str, String str2) {
        if (this.f4126a != null) {
            z.a("H5ShowRewardListener", "onAutoLoad");
            this.f4126a.a(this.b, i, str, str2);
        }
    }
}
