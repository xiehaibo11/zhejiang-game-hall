package com.reyun.tracking.sdk;

/* JADX INFO: loaded from: classes3.dex */
class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private o f4741a;

    public m(o oVar) {
        this.f4741a = oVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        o oVar = this.f4741a;
        if (oVar != null) {
            oVar.a();
        }
    }

    @Override // java.lang.Runnable
    public void run() {
        com.reyun.tracking.a.a.d(Tracking.TAG, "start getOaid !!");
        if (Tracking.m_context != null) {
            new com.reyun.tracking.b.h().a(Tracking.m_context, new n(this));
        } else {
            com.reyun.tracking.a.a.c(Tracking.TAG, "context is null! app may be destroyed");
            a();
        }
    }
}
