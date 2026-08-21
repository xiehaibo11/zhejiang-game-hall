package com.igexin.push.core.b;

import com.igexin.push.util.EncryptUtils;

/* JADX INFO: loaded from: classes2.dex */
class z extends com.igexin.push.b.d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ i f2549a;

    z(i iVar) {
        this.f2549a = iVar;
    }

    @Override // com.igexin.push.b.d
    public void a() {
        i.a().a(this.d, 1, EncryptUtils.getBytesEncrypted(String.valueOf(com.igexin.push.core.d.t).getBytes()));
        i.a().a(this.d, 20, this.f2549a.g(com.igexin.push.core.d.u));
        com.igexin.push.core.d.d.a().b(com.igexin.push.core.d.g, com.igexin.push.core.d.u);
        com.igexin.push.core.d.d.a().a(com.igexin.push.core.d.g, com.igexin.push.core.d.t);
    }
}
