package com.tkay.expressad.video.bt.module.b;

public final class d extends c {
    private static final String a = "H5ShowRewardListener";
    private com.tkay.expressad.video.bt.module.a.b b;
    private String c;

    public d(com.tkay.expressad.video.bt.module.a.b bVar, String str) {
        this.b = bVar;
        this.c = str;
    }

    @Override
    public final void a() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c);
        }
    }

    @Override
    public final void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, z, cVar);
        }
    }

    @Override
    public final void a(String str) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, str);
        }
    }

    @Override
    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.a(this.c, cVar);
        }
    }

    @Override
    public final void b() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.b(this.c);
        }
    }

    @Override
    public final void c() {
        com.tkay.expressad.video.bt.module.a.b bVar = this.b;
        if (bVar != null) {
            bVar.c(this.c);
        }
    }
}
