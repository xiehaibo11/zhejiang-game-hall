package com.sigmob.sdk.mraid2;

import java.util.Timer;
import java.util.TimerTask;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5075a;
    private int b;
    private boolean c;
    private b d;
    private Timer e = null;
    private TimerTask f = null;

    public k(b bVar, JSONObject jSONObject) {
        this.d = bVar;
        this.b = jSONObject.optInt("interval");
        this.c = jSONObject.optBoolean("repeats");
        this.f5075a = jSONObject.optString("uniqueId");
    }

    private void d() {
        this.e = new Timer();
        this.f = new TimerTask() { // from class: com.sigmob.sdk.mraid2.k.1
            @Override // java.util.TimerTask, java.lang.Runnable
            public void run() {
                if (k.this.d != null) {
                    k.this.d.a().post(new Runnable() { // from class: com.sigmob.sdk.mraid2.k.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            k.this.d.e(k.this.f5075a);
                        }
                    });
                }
            }
        };
    }

    public void a() {
        c();
    }

    public void b() {
        try {
            c();
            d();
            if (this.b > 0) {
                if (this.c) {
                    this.e.schedule(this.f, this.b, this.b);
                } else {
                    this.e.schedule(this.f, this.b);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void c() {
        TimerTask timerTask = this.f;
        if (timerTask != null) {
            timerTask.cancel();
            this.f = null;
        }
        Timer timer = this.e;
        if (timer != null) {
            timer.cancel();
            this.e.purge();
            this.e = null;
        }
    }
}
