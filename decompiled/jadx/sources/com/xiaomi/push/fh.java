package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.bl;
import com.xiaomi.push.jl;
import com.xiaomi.push.service.XMPushService;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.NoSuchElementException;

/* JADX INFO: loaded from: classes4.dex */
public class fh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8154a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f377a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fg f379a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f380a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f381a = false;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private bl f378a = bl.a();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final fh f8155a = new fh();
    }

    private fa a(bl.a aVar) {
        if (aVar.f156a == 0) {
            if (aVar.f157a instanceof fa) {
                return (fa) aVar.f157a;
            }
            return null;
        }
        fa faVarM339a = m339a();
        faVarM339a.a(ez.CHANNEL_STATS_COUNTER.a());
        faVarM339a.c(aVar.f156a);
        faVarM339a.c(aVar.f158a);
        return faVarM339a;
    }

    private fb a(int i) {
        ArrayList arrayList = new ArrayList();
        fb fbVar = new fb(this.f380a, arrayList);
        if (!bj.e(this.f379a.f374a)) {
            fbVar.a(j.k(this.f379a.f374a));
        }
        jn jnVar = new jn(i);
        jf jfVarA = new jl.a().a(jnVar);
        try {
            fbVar.b(jfVarA);
        } catch (iz unused) {
        }
        LinkedList<bl.a> linkedListM156a = this.f378a.m156a();
        while (linkedListM156a.size() > 0) {
            try {
                fa faVarA = a(linkedListM156a.getLast());
                if (faVarA != null) {
                    faVarA.b(jfVarA);
                }
                if (jnVar.a_() > i) {
                    break;
                }
                if (faVarA != null) {
                    arrayList.add(faVarA);
                }
                linkedListM156a.removeLast();
            } catch (iz | NoSuchElementException unused2) {
            }
        }
        return fbVar;
    }

    public static fg a() {
        fg fgVar;
        synchronized (a.f8155a) {
            fgVar = a.f8155a.f379a;
        }
        return fgVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static fh m337a() {
        return a.f8155a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private void m338a() {
        if (!this.f381a || System.currentTimeMillis() - this.f377a <= this.f8154a) {
            return;
        }
        this.f381a = false;
        this.f377a = 0L;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    synchronized fa m339a() {
        fa faVar;
        faVar = new fa();
        faVar.a(bj.m149a((Context) this.f379a.f374a));
        faVar.f351a = (byte) 0;
        faVar.f355b = 1;
        faVar.d((int) (System.currentTimeMillis() / 1000));
        return faVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    synchronized fb m340a() {
        fb fbVarA;
        fbVarA = null;
        if (b()) {
            fbVarA = a(bj.e(this.f379a.f374a) ? 750 : 375);
        }
        return fbVarA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m341a(int i) {
        if (i > 0) {
            int i2 = i * 1000;
            if (i2 > 604800000) {
                i2 = 604800000;
            }
            if (this.f8154a == i2 && this.f381a) {
                return;
            }
            this.f381a = true;
            this.f377a = System.currentTimeMillis();
            this.f8154a = i2;
            com.xiaomi.channel.commonutils.logger.b.c("enable dot duration = " + i2 + " start = " + this.f377a);
        }
    }

    synchronized void a(fa faVar) {
        this.f378a.a(faVar);
    }

    public synchronized void a(XMPushService xMPushService) {
        this.f379a = new fg(xMPushService);
        this.f380a = "";
        com.xiaomi.push.service.bv.a().a(new fi(this));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m342a() {
        return this.f381a;
    }

    boolean b() {
        m338a();
        return this.f381a && this.f378a.m155a() > 0;
    }
}
