package com.reyun.tracking.sdk;

import android.app.Application;
import android.content.Context;

final class h implements Runnable {
    h() {
    }

    @Override
    public void run() {
        a.a().b();
        Context unused = Tracking.m_context = null;
        Application unused2 = Tracking.mApplication = null;
    }
}
