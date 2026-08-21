package com.reyun.tracking.sdk;

class m implements Runnable {
    private o a;

    public m(o oVar) {
        this.a = oVar;
    }

    private void a() {
        o oVar = this.a;
        if (oVar != null) {
            oVar.a();
        }
    }

    @Override
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
