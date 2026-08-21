package com.igexin.push.core.b;

import com.igexin.push.util.EncryptUtils;

class z extends com.igexin.push.b.d {
    final i a;

    z(i iVar) {
        this.a = iVar;
    }

    @Override
    public void a() {
        i.a().a(this.d, 1, EncryptUtils.getBytesEncrypted(String.valueOf(com.igexin.push.core.d.t).getBytes()));
        i.a().a(this.d, 20, this.a.g(com.igexin.push.core.d.u));
        com.igexin.push.core.d.d.a().b(com.igexin.push.core.d.g, com.igexin.push.core.d.u);
        com.igexin.push.core.d.d.a().a(com.igexin.push.core.d.g, com.igexin.push.core.d.t);
    }
}
