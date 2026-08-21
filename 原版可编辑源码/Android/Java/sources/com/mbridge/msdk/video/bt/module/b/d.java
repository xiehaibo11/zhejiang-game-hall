package com.mbridge.msdk.video.bt.module.b;

import com.mbridge.msdk.foundation.tools.z;

public final class d extends c {
    private com.mbridge.msdk.video.bt.module.a.c a;
    private String b;

    @Override
    public final boolean b() {
        return false;
    }

    public d(com.mbridge.msdk.video.bt.module.a.c cVar, String str) {
        this.a = cVar;
        this.b = str;
    }

    @Override
    public final void a() {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onAdShow");
            this.a.a(this.b);
        }
    }

    @Override
    public final void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onAdClose");
            this.a.a(this.b, z, dVar);
        }
    }

    @Override
    public final void a(String str) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onShowFail");
            this.a.a(this.b, str);
        }
    }

    @Override
    public final void a(boolean z, String str, String str2) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onVideoAdClicked");
            this.a.a(this.b, str, str2);
        }
    }

    @Override
    public final void a(String str, String str2) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onVideoComplete");
            this.a.b(this.b, str, str2);
        }
    }

    @Override
    public final void b(String str, String str2) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onEndcardShow");
            this.a.c(this.b, str, str2);
        }
    }

    @Override
    public final void a(int i, String str, String str2) {
        if (this.a != null) {
            z.a("H5ShowRewardListener", "onAutoLoad");
            this.a.a(this.b, i, str, str2);
        }
    }
}
