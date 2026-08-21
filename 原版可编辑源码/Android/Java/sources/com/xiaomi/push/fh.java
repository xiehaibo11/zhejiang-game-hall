package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.bl;
import com.xiaomi.push.jl;
import com.xiaomi.push.service.XMPushService;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.NoSuchElementException;

public class fh {
    private int a;
    private long a;
    private fg a;
    private String a;
    private boolean a = false;
    private bl a = bl.a();

    class a {
        static final fh a = new fh();
    }

    private fa a(bl.a aVar) {
        if (aVar.a == 0) {
            if (aVar.a instanceof fa) {
                return (fa) aVar.a;
            }
            return null;
        }
        fa faVarA = a();
        faVarA.a(ez.k.a());
        faVarA.c(aVar.a);
        faVarA.c(aVar.a);
        return faVarA;
    }

    private fb a(int i) {
        ArrayList arrayList = new ArrayList();
        fb fbVar = new fb(this.a, arrayList);
        if (!bj.e(this.a.a)) {
            fbVar.a(j.k(this.a.a));
        }
        jn jnVar = new jn(i);
        jf jfVarA = new jl.a().a(jnVar);
        try {
            fbVar.b(jfVarA);
        } catch (iz unused) {
        }
        LinkedList<bl.a> linkedListA = this.a.a();
        while (linkedListA.size() > 0) {
            try {
                fa faVarA = a(linkedListA.getLast());
                if (faVarA != null) {
                    faVarA.b(jfVarA);
                }
                if (jnVar.a_() > i) {
                    break;
                }
                if (faVarA != null) {
                    arrayList.add(faVarA);
                }
                linkedListA.removeLast();
            } catch (iz | NoSuchElementException unused2) {
            }
        }
        return fbVar;
    }

    public static fg a() {
        fg fgVar;
        synchronized (a.a) {
            fgVar = a.a.a;
        }
        return fgVar;
    }

    public static fh a() {
        return a.a;
    }

    private void a() {
        if (!this.a || System.currentTimeMillis() - this.a <= this.a) {
            return;
        }
        this.a = false;
        this.a = 0L;
    }

    synchronized fa a() {
        fa faVar;
        faVar = new fa();
        faVar.a(bj.a((Context) this.a.a));
        faVar.a = (byte) 0;
        faVar.b = 1;
        faVar.d((int) (System.currentTimeMillis() / 1000));
        return faVar;
    }

    synchronized fb a() {
        fb fbVarA;
        fbVarA = null;
        if (b()) {
            fbVarA = a(bj.e(this.a.a) ? 750 : 375);
        }
        return fbVarA;
    }

    public void a(int i) {
        if (i > 0) {
            int i2 = i * 1000;
            if (i2 > 604800000) {
                i2 = 604800000;
            }
            if (this.a == i2 && this.a) {
                return;
            }
            this.a = true;
            this.a = System.currentTimeMillis();
            this.a = i2;
            com.xiaomi.channel.commonutils.logger.b.c("enable dot duration = " + i2 + " start = " + this.a);
        }
    }

    synchronized void a(fa faVar) {
        this.a.a(faVar);
    }

    public synchronized void a(XMPushService xMPushService) {
        this.a = new fg(xMPushService);
        this.a = "";
        com.xiaomi.push.service.bv.a().a(new fi(this));
    }

    public boolean a() {
        return this.a;
    }

    boolean b() {
        a();
        return this.a && this.a.a() > 0;
    }
}
