package com.igexin.push.core;

import android.content.Context;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.Message;
import android.os.Process;
import com.igexin.assist.sdk.AssistPushManager;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicBoolean;

public class c implements com.igexin.b.a.d.a.b {
    private static c l;
    private Context a;
    private Handler c;
    private Handler d;
    private com.igexin.push.core.a.e f;
    private com.igexin.b.a.b.b h;
    private volatile com.igexin.push.e.a i;
    private com.igexin.push.b.b k;
    private final AtomicBoolean j = new AtomicBoolean(false);
    private ConcurrentLinkedQueue<Message> e = new ConcurrentLinkedQueue<>();
    private f b = new f();
    private com.igexin.b.a.b.c g = com.igexin.b.a.b.c.b();

    private c() {
        this.g.a((com.igexin.b.a.d.a.a<String, Integer, com.igexin.b.a.b.b, com.igexin.b.a.b.e>) new com.igexin.push.d.a(this.a));
        this.g.a((com.igexin.b.a.d.a.b) this);
        this.i = new com.igexin.push.e.a();
    }

    public static c a() {
        if (l == null) {
            l = new c();
        }
        return l;
    }

    private void n() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
        intentFilter.addAction(CoreConsts.b);
        intentFilter.addAction("android.intent.action.TIME_SET");
        intentFilter.addAction("android.intent.action.SCREEN_ON");
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        this.a.registerReceiver(l.a(), intentFilter);
    }

    public boolean a(Context context) {
        this.a = context.getApplicationContext();
        f fVar = this.b;
        if (fVar != null && fVar.isAlive()) {
            com.igexin.b.a.c.b.a("CoreLogic|coreThread is alive +++++", new Object[0]);
            return true;
        }
        if (!this.j.getAndSet(true)) {
            com.igexin.b.a.c.b.a("CoreLogic|start coreThread +++++", new Object[0]);
            this.b.start();
            this.c = new b(this.b.getLooper());
            this.d = new com.igexin.b.a.b.a.a.d(this.b.getLooper());
        }
        return true;
    }

    public boolean a(Message message) {
        if (d.h.get()) {
            this.c.sendMessage(message);
            return true;
        }
        this.e.add(message);
        return true;
    }

    @Override
    public boolean a(com.igexin.b.a.d.a.e eVar, com.igexin.b.a.d.f fVar) {
        com.igexin.push.core.a.e eVar2 = this.f;
        return eVar2 != null && eVar2.a(eVar);
    }

    @Override
    public boolean a(com.igexin.b.a.d.e eVar, com.igexin.b.a.d.f fVar) {
        com.igexin.push.core.a.e eVar2 = this.f;
        return eVar2 != null && eVar2.a(eVar);
    }

    public boolean a(com.igexin.push.f.b.g gVar) {
        return gVar != null && com.igexin.b.a.b.c.b().a(gVar, false, true);
    }

    public boolean a(boolean z) {
        com.igexin.b.a.c.b.a("CoreLogic|start sdkSwitch isSlave = " + z, new Object[0]);
        if (d.g == null) {
            return false;
        }
        if (!new com.igexin.sdk.a.c(d.g).b()) {
            new com.igexin.sdk.a.d(d.g).a();
            d.k = true;
            new com.igexin.sdk.a.c(d.g).a();
        }
        if (z) {
            new com.igexin.sdk.a.d(d.g).a();
            d.k = true;
        }
        a().i().b();
        return true;
    }

    public Handler b() {
        return this.d;
    }

    public void c() {
        try {
            this.k = new com.igexin.push.b.b(this.a);
            d.a(this.a);
            com.igexin.push.config.h.a().b();
            n();
            com.igexin.push.b.a aVar = new com.igexin.push.b.a();
            aVar.a(com.igexin.push.core.b.i.a());
            aVar.a(com.igexin.push.core.b.e.a());
            aVar.a(com.igexin.push.core.b.c.a());
            aVar.a(com.igexin.push.config.a.a());
            this.g.a(aVar, true, false);
            this.g.a(this.a);
            com.igexin.b.a.b.c.b().a(com.igexin.b.b.a.a(d.D.getBytes()));
            d.W = this.g.a(com.igexin.push.f.b.b.i(), false, true);
            d.X = this.g.a(com.igexin.push.f.b.f.i(), true, true);
            com.igexin.push.c.i.a().b();
            d();
            this.f = com.igexin.push.core.a.e.a();
            this.i.b();
            com.igexin.push.a.a.c.c().d();
            d.h.set(true);
            r.a().a(Process.myPid());
            com.igexin.push.extension.a.a().a(this.a);
            while (!this.e.isEmpty()) {
                Message messagePoll = this.e.poll();
                if (messagePoll != null && this.c != null) {
                    this.c.sendMessage(messagePoll);
                }
            }
            w.a().d();
            try {
                AssistPushManager.getInstance().initialize(d.g);
                AssistPushManager.getInstance().register(d.g);
            } catch (Throwable unused) {
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("CoreLogic|init|failed|" + th.toString(), new Object[0]);
            com.igexin.b.a.c.a.f.a().a("CoreLogic init failed = " + th.toString());
        }
    }

    public void d() {
        com.igexin.push.f.b.a aVarI = com.igexin.push.f.b.a.i();
        com.igexin.push.a.a.b bVar = new com.igexin.push.a.a.b();
        aVarI.a(bVar);
        aVarI.a(new com.igexin.push.a.a.a());
        aVarI.a(com.igexin.push.a.a.c.c());
        try {
            bVar.a();
            bVar.a(System.currentTimeMillis());
        } catch (Throwable unused) {
        }
        d.Y = this.g.a(aVarI, false, true);
    }

    public long e() {
        Handler handler = this.c;
        if (handler == null) {
            return -2L;
        }
        return handler.getLooper().getThread().getId();
    }

    public String f() {
        return null;
    }

    void g() {
        if (d.g != null) {
            new com.igexin.sdk.a.d(d.g).b();
            d.k = false;
            d.o = false;
            this.i.c();
        }
    }

    public com.igexin.b.a.b.b h() {
        if (this.h == null) {
            this.h = com.igexin.push.d.a.b.a();
        }
        return this.h;
    }

    public com.igexin.push.e.a i() {
        return this.i;
    }

    public com.igexin.push.core.a.e j() {
        return this.f;
    }

    public com.igexin.push.b.b k() {
        return this.k;
    }

    @Override
    public boolean l() {
        return true;
    }

    @Override
    public long m() {
        return 94808L;
    }
}
