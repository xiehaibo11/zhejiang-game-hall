package com.qq.e.comm.managers;

import com.qq.e.comm.managers.plugin.e;
import com.qq.e.comm.util.GDTLogger;

/* JADX INFO: loaded from: classes3.dex */
class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f4679a;

    a(b bVar) {
        this.f4679a = bVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f4679a.d.getPOFactory();
            this.f4679a.b = true;
        } catch (e e) {
            GDTLogger.e(e.getMessage(), e);
        }
    }
}
