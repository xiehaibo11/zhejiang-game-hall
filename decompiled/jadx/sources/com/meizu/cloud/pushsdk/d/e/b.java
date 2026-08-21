package com.meizu.cloud.pushsdk.d.e;

import android.content.Context;
import com.meizu.cloud.pushsdk.d.f.e;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f4591a = b.class.getSimpleName();
    private String b;
    private String c;
    private String d;
    private int e;
    private final String f = "SQLITE";
    private final AtomicBoolean g = new AtomicBoolean(false);
    private long h;
    private final long i;
    private final long j;
    private final Context k;

    public b(long j, long j2, TimeUnit timeUnit, Context context) {
        this.c = null;
        this.e = 0;
        this.i = timeUnit.toMillis(j);
        this.j = timeUnit.toMillis(j2);
        this.k = context;
        Map mapF = f();
        if (mapF == null) {
            this.b = e.b();
        } else {
            try {
                String string = mapF.get("userId").toString();
                String string2 = mapF.get("sessionId").toString();
                int iIntValue = ((Integer) mapF.get("sessionIndex")).intValue();
                this.b = string;
                this.e = iIntValue;
                this.c = string2;
            } catch (Exception e) {
                com.meizu.cloud.pushsdk.d.f.c.a(f4591a, "Exception occurred retrieving session info from file: %s", e.getMessage());
                this.b = e.b();
            }
        }
        d();
        g();
        com.meizu.cloud.pushsdk.d.f.c.c(f4591a, "Tracker Session Object created.", new Object[0]);
    }

    private void d() {
        this.d = this.c;
        this.c = e.b();
        this.e++;
        com.meizu.cloud.pushsdk.d.f.c.b(f4591a, "Session information is updated:", new Object[0]);
        com.meizu.cloud.pushsdk.d.f.c.b(f4591a, " + Session ID: %s", this.c);
        com.meizu.cloud.pushsdk.d.f.c.b(f4591a, " + Previous Session ID: %s", this.d);
        com.meizu.cloud.pushsdk.d.f.c.b(f4591a, " + Session Index: %s", Integer.valueOf(this.e));
        e();
    }

    private boolean e() {
        return com.meizu.cloud.pushsdk.d.f.a.a("snowplow_session_vars", c(), this.k);
    }

    private Map f() {
        return com.meizu.cloud.pushsdk.d.f.a.a("snowplow_session_vars", this.k);
    }

    private void g() {
        this.h = System.currentTimeMillis();
    }

    public com.meizu.cloud.pushsdk.d.a.b a() {
        com.meizu.cloud.pushsdk.d.f.c.c(f4591a, "Getting session context...", new Object[0]);
        g();
        return new com.meizu.cloud.pushsdk.d.a.b("client_session", c());
    }

    public void b() {
        com.meizu.cloud.pushsdk.d.f.c.b(f4591a, "Checking and updating session information.", new Object[0]);
        if (e.a(this.h, System.currentTimeMillis(), this.g.get() ? this.j : this.i)) {
            return;
        }
        d();
        g();
    }

    public Map c() {
        HashMap map = new HashMap(8);
        map.put("userId", this.b);
        map.put("sessionId", this.c);
        map.put("previousSessionId", this.d);
        map.put("sessionIndex", Integer.valueOf(this.e));
        getClass();
        map.put("storageMechanism", "SQLITE");
        return map;
    }
}
