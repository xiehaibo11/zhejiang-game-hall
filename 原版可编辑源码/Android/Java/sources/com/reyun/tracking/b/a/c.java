package com.reyun.tracking.b.a;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;

public class c {
    com.reyun.tracking.b.b.c a;
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
            if (!this.c.bindService(intent, this.b, 1) || this.a == null) {
                return;
            }
            String strA = this.a.a();
            if (dVar != null) {
                dVar.a(strA, false);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
