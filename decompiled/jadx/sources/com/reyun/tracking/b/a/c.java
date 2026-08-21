package com.reyun.tracking.b.a;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.reyun.tracking.b.b.c f4708a;
    ServiceConnection b = new d(this);
    private Context c;

    public c(Context context) {
        this.c = context;
    }

    public void a(com.reyun.tracking.b.d dVar) {
        try {
            this.c.getPackageName();
            Intent intent = new Intent();
            intent.setClassName("com.zui.deviceidservice", "com.zui.deviceidservice.DeviceidService");
            if (!this.c.bindService(intent, this.b, 1) || this.f4708a == null) {
                return;
            }
            String strA = this.f4708a.a();
            if (dVar != null) {
                dVar.a(strA, false);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
