package com.xiaomi.push;

import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.dx;
import com.xiaomi.push.fw;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;
import java.util.Iterator;

public class fs extends gd {
    private fn a;
    private fo a;
    private Thread a;
    private byte[] a;

    public fs(XMPushService xMPushService, fx fxVar) {
        super(xMPushService, fxVar);
    }

    private fl a(boolean z) {
        fr frVar = new fr();
        if (z) {
            frVar.a("1");
        }
        byte[] bArrA = fj.a();
        if (bArrA != null) {
            dx.j jVar = new dx.j();
            jVar.a(a.a(bArrA));
            frVar.a(jVar.a(), (String) null);
        }
        return frVar;
    }

    private void h() throws gh {
        try {
            this.a = new fn(this.a.getInputStream(), this, this.a);
            this.a = new fo(this.a.getOutputStream(), this);
            ft ftVar = new ft(this, "Blob Reader (" + this.b + ")");
            this.a = ftVar;
            ftVar.start();
        } catch (Exception e) {
            throw new gh("Error to init reader and writer", e);
        }
    }

    @Override
    protected synchronized void a() {
        h();
        this.a.a();
    }

    @Override
    protected synchronized void a(int i, Exception exc) {
        if (this.a != null) {
            this.a.b();
            this.a = null;
        }
        if (this.a != null) {
            try {
                this.a.b();
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
            this.a = null;
            this.a = null;
            super.a(i, exc);
        } else {
            this.a = null;
            super.a(i, exc);
        }
    }

    void a(fl flVar) {
        if (flVar == null) {
            return;
        }
        if (flVar.a()) {
            com.xiaomi.channel.commonutils.logger.b.a("[Slim] RCV blob chid=" + flVar.a() + "; id=" + flVar.e() + "; errCode=" + flVar.b() + "; err=" + flVar.c());
        }
        if (flVar.a() == 0) {
            if ("PING".equals(flVar.a())) {
                com.xiaomi.channel.commonutils.logger.b.a("[Slim] RCV ping id=" + flVar.e());
                g();
            } else if ("CLOSE".equals(flVar.a())) {
                c(13, null);
            }
        }
        Iterator<fw.a> it = this.a.values().iterator();
        while (it.hasNext()) {
            it.next().a(flVar);
        }
    }

    @Override
    @Deprecated
    public void a(gn gnVar) throws gh {
        b(fl.a(gnVar, (String) null));
    }

    @Override
    public synchronized void a(bg.b bVar) {
        fk.a(bVar, c(), this);
    }

    @Override
    public synchronized void a(String str, String str2) {
        fk.a(str, str2, this);
    }

    @Override
    protected void a(boolean z) throws gh {
        if (this.a == null) {
            throw new gh("The BlobWriter is null.");
        }
        fl flVarA = a(z);
        com.xiaomi.channel.commonutils.logger.b.a("[Slim] SND ping id=" + flVarA.e());
        b(flVarA);
        f();
    }

    @Override
    public void a(fl[] flVarArr) throws gh {
        for (fl flVar : flVarArr) {
            b(flVar);
        }
    }

    @Override
    public boolean a() {
        return true;
    }

    synchronized byte[] a() {
        if (this.a == null && !TextUtils.isEmpty(this.a)) {
            String strA = com.xiaomi.push.service.bv.a();
            this.a = com.xiaomi.push.service.bp.a(this.a.getBytes(), (this.a.substring(this.a.length() / 2) + strA.substring(strA.length() / 2)).getBytes());
        }
        return this.a;
    }

    @Override
    public void b(fl flVar) throws gh {
        fo foVar = this.a;
        if (foVar == null) {
            throw new gh("the writer is null.");
        }
        try {
            int iA = foVar.a(flVar);
            this.d = SystemClock.elapsedRealtime();
            String strF = flVar.f();
            if (!TextUtils.isEmpty(strF)) {
                hb.a(this.a, strF, iA, false, true, System.currentTimeMillis());
            }
            Iterator<fw.a> it = this.b.values().iterator();
            while (it.hasNext()) {
                it.next().a(flVar);
            }
        } catch (Exception e) {
            throw new gh(e);
        }
    }

    void b(gn gnVar) {
        if (gnVar == null) {
            return;
        }
        Iterator<fw.a> it = this.a.values().iterator();
        while (it.hasNext()) {
            it.next().a(gnVar);
        }
    }
}
