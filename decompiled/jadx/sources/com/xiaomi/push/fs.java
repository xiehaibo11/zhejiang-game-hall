package com.xiaomi.push;

import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.dx;
import com.xiaomi.push.fw;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
public class fs extends gd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private fn f8166a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private fo f407a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Thread f408a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f409a;

    public fs(XMPushService xMPushService, fx fxVar) {
        super(xMPushService, fxVar);
    }

    private fl a(boolean z) {
        fr frVar = new fr();
        if (z) {
            frVar.a("1");
        }
        byte[] bArrM343a = fj.m343a();
        if (bArrM343a != null) {
            dx.j jVar = new dx.j();
            jVar.a(a.a(bArrM343a));
            frVar.a(jVar.a(), (String) null);
        }
        return frVar;
    }

    private void h() throws gh {
        try {
            this.f8166a = new fn(this.f437a.getInputStream(), this, this.f422a);
            this.f407a = new fo(this.f437a.getOutputStream(), this);
            ft ftVar = new ft(this, "Blob Reader (" + this.b + ")");
            this.f408a = ftVar;
            ftVar.start();
        } catch (Exception e) {
            throw new gh("Error to init reader and writer", e);
        }
    }

    @Override // com.xiaomi.push.gd
    /* JADX INFO: renamed from: a */
    protected synchronized void mo377a() {
        h();
        this.f407a.a();
    }

    @Override // com.xiaomi.push.gd
    protected synchronized void a(int i, Exception exc) {
        if (this.f8166a != null) {
            this.f8166a.b();
            this.f8166a = null;
        }
        if (this.f407a != null) {
            try {
                this.f407a.b();
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
            this.f407a = null;
            this.f409a = null;
            super.a(i, exc);
        } else {
            this.f409a = null;
            super.a(i, exc);
        }
    }

    void a(fl flVar) {
        if (flVar == null) {
            return;
        }
        if (flVar.m347a()) {
            com.xiaomi.channel.commonutils.logger.b.m43a("[Slim] RCV blob chid=" + flVar.a() + "; id=" + flVar.e() + "; errCode=" + flVar.b() + "; err=" + flVar.m351c());
        }
        if (flVar.a() == 0) {
            if ("PING".equals(flVar.m344a())) {
                com.xiaomi.channel.commonutils.logger.b.m43a("[Slim] RCV ping id=" + flVar.e());
                g();
            } else if ("CLOSE".equals(flVar.m344a())) {
                c(13, null);
            }
        }
        Iterator<fw.a> it = this.f426a.values().iterator();
        while (it.hasNext()) {
            it.next().a(flVar);
        }
    }

    @Override // com.xiaomi.push.fw
    @Deprecated
    public void a(gn gnVar) throws gh {
        b(fl.a(gnVar, (String) null));
    }

    @Override // com.xiaomi.push.fw
    public synchronized void a(bg.b bVar) {
        fk.a(bVar, c(), this);
    }

    @Override // com.xiaomi.push.fw
    public synchronized void a(String str, String str2) {
        fk.a(str, str2, this);
    }

    @Override // com.xiaomi.push.gd
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected void mo357a(boolean z) throws gh {
        if (this.f407a == null) {
            throw new gh("The BlobWriter is null.");
        }
        fl flVarA = a(z);
        com.xiaomi.channel.commonutils.logger.b.m43a("[Slim] SND ping id=" + flVarA.e());
        b(flVarA);
        f();
    }

    @Override // com.xiaomi.push.gd, com.xiaomi.push.fw
    public void a(fl[] flVarArr) throws gh {
        for (fl flVar : flVarArr) {
            b(flVar);
        }
    }

    @Override // com.xiaomi.push.fw
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean mo358a() {
        return true;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    synchronized byte[] m359a() {
        if (this.f409a == null && !TextUtils.isEmpty(this.f423a)) {
            String strM662a = com.xiaomi.push.service.bv.m662a();
            this.f409a = com.xiaomi.push.service.bp.a(this.f423a.getBytes(), (this.f423a.substring(this.f423a.length() / 2) + strM662a.substring(strM662a.length() / 2)).getBytes());
        }
        return this.f409a;
    }

    @Override // com.xiaomi.push.fw
    public void b(fl flVar) throws gh {
        fo foVar = this.f407a;
        if (foVar == null) {
            throw new gh("the writer is null.");
        }
        try {
            int iA = foVar.a(flVar);
            this.d = SystemClock.elapsedRealtime();
            String strF = flVar.f();
            if (!TextUtils.isEmpty(strF)) {
                hb.a(this.f422a, strF, iA, false, true, System.currentTimeMillis());
            }
            Iterator<fw.a> it = this.f429b.values().iterator();
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
        Iterator<fw.a> it = this.f426a.values().iterator();
        while (it.hasNext()) {
            it.next().a(gnVar);
        }
    }
}
