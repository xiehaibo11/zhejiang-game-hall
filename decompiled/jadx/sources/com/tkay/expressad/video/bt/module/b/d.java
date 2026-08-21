package com.tkay.expressad.video.bt.module.b;

/* JADX INFO: loaded from: classes3.dex */
public final class d extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7210a = "H5ShowRewardListener";
    private com.tkay.expressad.video.bt.module.a.b b;
    private String c;

    public d(com.tkay.expressad.video.bt.module.a.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void a() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, z, cVar);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void a(String str) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, str);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, cVar);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void b() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.b(this.c);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.b.c, com.tkay.expressad.video.bt.module.b.h
    public final void c() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.c(this.c);
        }
    }
}
