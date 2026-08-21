package com.xiaomi.push;

import java.util.Date;

/* JADX INFO: loaded from: classes4.dex */
class fv implements fz {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ fu f8170a;

    fv(fu fuVar) {
        this.f8170a = fuVar;
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.f8170a.f414a.format(new Date()) + " Connection started (" + this.f8170a.f411a.hashCode() + ")");
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar, int i, Exception exc) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.f8170a.f414a.format(new Date()) + " Connection closed (" + this.f8170a.f411a.hashCode() + ")");
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar, Exception exc) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.f8170a.f414a.format(new Date()) + " Reconnection failed due to an exception (" + this.f8170a.f411a.hashCode() + ")");
        exc.printStackTrace();
    }

    @Override // com.xiaomi.push.fz
    public void b(fw fwVar) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.f8170a.f414a.format(new Date()) + " Connection reconnected (" + this.f8170a.f411a.hashCode() + ")");
    }
}
