package com.reyun.tracking.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import org.json.JSONArray;

final class b implements Runnable {
    final Context a;
    final com.reyun.tracking.sdk.a b;
    private BroadcastReceiver c = new c(this);

    b(Context context, com.reyun.tracking.sdk.a aVar) {
        this.a = context;
        this.b = aVar;
    }

    @Override
    public void run() {
        Intent intentRegisterReceiver;
        try {
            intentRegisterReceiver = this.a.registerReceiver(this.c, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
        } catch (Exception unused) {
            intentRegisterReceiver = null;
        }
        if (intentRegisterReceiver == null) {
            return;
        }
        float intExtra = (intentRegisterReceiver.getIntExtra("level", 0) * 1.0f) / intentRegisterReceiver.getIntExtra("scale", 1);
        float f = a.i;
        float unused2 = a.i = intExtra;
        if (f == 0.0f) {
            try {
                a.j.put(a.i);
            } catch (Exception unused3) {
            }
        } else {
            try {
                a.j.put(a.i);
            } catch (Exception unused4) {
            }
            if (System.currentTimeMillis() - a.k >= 1800000) {
                a.d();
                long unused5 = a.k = System.currentTimeMillis();
                JSONArray unused6 = a.j = new JSONArray();
            }
        }
        this.a.unregisterReceiver(this.c);
        this.b.a(this, 180000L);
    }
}
