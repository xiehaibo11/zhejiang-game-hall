package com.tkay.basead.e;

import com.tkay.core.common.f.h;

/* JADX INFO: loaded from: classes3.dex */
public abstract class e implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    h f5677a;

    public e(h hVar) {
        this.f5677a = hVar;
    }

    private void a() {
        h hVar = this.f5677a;
        if (hVar instanceof com.tkay.core.common.f.f) {
            com.tkay.core.common.f.f fVar = (com.tkay.core.common.f.f) hVar;
            if (fVar.c() == 1) {
                com.tkay.core.common.a.b.a().b(fVar);
            }
        }
    }

    @Override // com.tkay.basead.e.a
    public void onAdShow() {
        h hVar = this.f5677a;
        if (hVar instanceof com.tkay.core.common.f.f) {
            com.tkay.core.common.f.f fVar = (com.tkay.core.common.f.f) hVar;
            if (fVar.c() == 1) {
                com.tkay.core.common.a.b.a().b(fVar);
            }
        }
    }
}
