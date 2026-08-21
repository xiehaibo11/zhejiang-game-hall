package com.igexin.push.core.a;

/* JADX INFO: loaded from: classes2.dex */
public class j extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2510a = com.igexin.push.config.i.f2493a;

    @Override // com.igexin.push.core.a.a
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(Object obj) {
        if (!(obj instanceof com.igexin.push.d.c.f)) {
            return true;
        }
        com.igexin.push.d.b.a().e();
        com.igexin.b.a.c.b.a("heartbeatRsp", new Object[0]);
        com.igexin.push.core.h.a().a(com.igexin.push.core.j.HEARTBEAT_OK);
        return true;
    }
}
