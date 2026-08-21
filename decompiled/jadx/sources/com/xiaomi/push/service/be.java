package com.xiaomi.push.service;

import android.text.TextUtils;
import com.xiaomi.push.cv;
import com.xiaomi.push.df;
import com.xiaomi.push.dx;
import com.xiaomi.push.ez;
import com.xiaomi.push.fj;
import com.xiaomi.push.fl;
import com.xiaomi.push.fx;
import com.xiaomi.push.gk;
import com.xiaomi.push.gl;
import com.xiaomi.push.gm;
import com.xiaomi.push.gn;
import com.xiaomi.push.hb;
import com.xiaomi.push.service.bg;
import java.util.Date;

/* JADX INFO: loaded from: classes4.dex */
public class be {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private XMPushService f8328a;

    be(XMPushService xMPushService) {
        this.f8328a = xMPushService;
    }

    private void a(gk gkVar) {
        String strC = gkVar.c();
        if (TextUtils.isEmpty(strC)) {
            return;
        }
        String[] strArrSplit = strC.split(";");
        com.xiaomi.push.cr crVarA = cv.a().a(fx.a(), false);
        if (crVarA == null || strArrSplit.length <= 0) {
            return;
        }
        crVarA.a(strArrSplit);
        this.f8328a.a(20, (Exception) null);
        this.f8328a.a(true);
    }

    private void b(gn gnVar) {
        bg.b bVarA;
        String strL = gnVar.l();
        String strK = gnVar.k();
        if (TextUtils.isEmpty(strL) || TextUtils.isEmpty(strK) || (bVarA = bg.a().a(strK, strL)) == null) {
            return;
        }
        hb.a(this.f8328a, bVarA.f947a, hb.a(gnVar.mo382a()), true, true, System.currentTimeMillis());
    }

    private void c(fl flVar) {
        bg.b bVarA;
        String strG = flVar.g();
        String string = Integer.toString(flVar.a());
        if (TextUtils.isEmpty(strG) || TextUtils.isEmpty(string) || (bVarA = bg.a().a(string, strG)) == null) {
            return;
        }
        hb.a(this.f8328a, bVarA.f947a, flVar.c(), true, true, System.currentTimeMillis());
    }

    public void a(fl flVar) {
        if (5 != flVar.a()) {
            c(flVar);
        }
        try {
            b(flVar);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("handle Blob chid = " + flVar.a() + " cmd = " + flVar.m344a() + " packetid = " + flVar.e() + " failure ", e);
        }
    }

    public void a(gn gnVar) {
        if (!"5".equals(gnVar.k())) {
            b(gnVar);
        }
        String strK = gnVar.k();
        if (TextUtils.isEmpty(strK)) {
            strK = "1";
            gnVar.l("1");
        }
        if (strK.equals("0")) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Received wrong packet with chid = 0 : " + gnVar.mo382a());
        }
        if (gnVar instanceof gl) {
            gk gkVarA = gnVar.a("kick");
            if (gkVarA != null) {
                String strL = gnVar.l();
                String strA = gkVarA.a("type");
                String strA2 = gkVarA.a(com.tkay.expressad.foundation.d.r.ac);
                com.xiaomi.channel.commonutils.logger.b.m43a("kicked by server, chid=" + strK + " res=" + bg.b.a(strL) + " type=" + strA + " reason=" + strA2);
                if (!"wait".equals(strA)) {
                    this.f8328a.a(strK, strL, 3, strA2, strA);
                    bg.a().m655a(strK, strL);
                    return;
                }
                bg.b bVarA = bg.a().a(strK, strL);
                if (bVarA != null) {
                    this.f8328a.a(bVarA);
                    bVarA.a(bg.c.unbind, 3, 0, strA2, strA);
                    return;
                }
                return;
            }
        } else if (gnVar instanceof gm) {
            gm gmVar = (gm) gnVar;
            if ("redir".equals(gmVar.b())) {
                gk gkVarA2 = gmVar.a("hosts");
                if (gkVarA2 != null) {
                    a(gkVarA2);
                    return;
                }
                return;
            }
        }
        this.f8328a.m608b().a(this.f8328a, strK, gnVar);
    }

    public void b(fl flVar) {
        StringBuilder sb;
        String strM291a;
        String string;
        bg.c cVar;
        int i;
        int i2;
        String strM344a = flVar.m344a();
        if (flVar.a() != 0) {
            String string2 = Integer.toString(flVar.a());
            if (!"SECMSG".equals(flVar.m344a())) {
                if (!"BIND".equals(strM344a)) {
                    if ("KICK".equals(strM344a)) {
                        dx.g gVarA = dx.g.a(flVar.m348a());
                        String strG = flVar.g();
                        String strM286a = gVarA.m286a();
                        String strM288b = gVarA.m288b();
                        com.xiaomi.channel.commonutils.logger.b.m43a("kicked by server, chid=" + string2 + " res= " + bg.b.a(strG) + " type=" + strM286a + " reason=" + strM288b);
                        if (!"wait".equals(strM286a)) {
                            this.f8328a.a(string2, strG, 3, strM288b, strM286a);
                            bg.a().m655a(string2, strG);
                            return;
                        }
                        bg.b bVarA = bg.a().a(string2, strG);
                        if (bVarA != null) {
                            this.f8328a.a(bVarA);
                            bVarA.a(bg.c.unbind, 3, 0, strM288b, strM286a);
                            return;
                        }
                        return;
                    }
                    return;
                }
                dx.d dVarA = dx.d.a(flVar.m348a());
                String strG2 = flVar.g();
                bg.b bVarA2 = bg.a().a(string2, strG2);
                if (bVarA2 == null) {
                    return;
                }
                if (dVarA.m265a()) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("SMACK: channel bind succeeded, chid=" + flVar.a());
                    bVarA2.a(bg.c.binded, 1, 0, (String) null, (String) null);
                    return;
                }
                String strM264a = dVarA.m264a();
                if ("auth".equals(strM264a)) {
                    if ("invalid-sig".equals(dVarA.m266b())) {
                        com.xiaomi.channel.commonutils.logger.b.m43a("SMACK: bind error invalid-sig token = " + bVarA2.c + " sec = " + bVarA2.h);
                        fj.a(0, ez.BIND_INVALID_SIG.a(), 1, null, 0);
                    }
                    cVar = bg.c.unbind;
                    i = 1;
                    i2 = 5;
                } else {
                    if (!com.tkay.expressad.d.a.b.dO.equals(strM264a)) {
                        if ("wait".equals(strM264a)) {
                            this.f8328a.a(bVarA2);
                            bVarA2.a(bg.c.unbind, 1, 7, dVarA.m266b(), strM264a);
                        }
                        string = "SMACK: channel bind failed, chid=" + string2 + " reason=" + dVarA.m266b();
                        com.xiaomi.channel.commonutils.logger.b.m43a(string);
                    }
                    cVar = bg.c.unbind;
                    i = 1;
                    i2 = 7;
                }
                bVarA2.a(cVar, i, i2, dVarA.m266b(), strM264a);
                bg.a().m655a(string2, strG2);
                string = "SMACK: channel bind failed, chid=" + string2 + " reason=" + dVarA.m266b();
                com.xiaomi.channel.commonutils.logger.b.m43a(string);
            }
            if (!flVar.m347a()) {
                this.f8328a.m608b().a(this.f8328a, string2, flVar);
                return;
            }
            sb = new StringBuilder();
            sb.append("Recv SECMSG errCode = ");
            sb.append(flVar.b());
            sb.append(" errStr = ");
            strM291a = flVar.m351c();
        } else {
            if ("PING".equals(strM344a)) {
                byte[] bArrM348a = flVar.m348a();
                if (bArrM348a != null && bArrM348a.length > 0) {
                    dx.j jVarA = dx.j.a(bArrM348a);
                    if (jVarA.m299b()) {
                        bv.a().a(jVarA.m297a());
                    }
                }
                if (!"com.xiaomi.xmsf".equals(this.f8328a.getPackageName())) {
                    this.f8328a.m605a();
                }
                if ("1".equals(flVar.e())) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("received a server ping");
                } else {
                    fj.b();
                }
                this.f8328a.m609b();
                return;
            }
            if ("SYNC".equals(strM344a)) {
                if ("CONF".equals(flVar.m350b())) {
                    bv.a().a(dx.b.a(flVar.m348a()));
                    return;
                }
                if (TextUtils.equals("U", flVar.m350b())) {
                    dx.k kVarA = dx.k.a(flVar.m348a());
                    df.a(this.f8328a).a(kVarA.m301a(), kVarA.m304b(), new Date(kVarA.m300a()), new Date(kVarA.m303b()), kVarA.c() * 1024, kVarA.e());
                    fl flVar2 = new fl();
                    flVar2.a(0);
                    flVar2.a(flVar.m344a(), "UCA");
                    flVar2.a(flVar.e());
                    this.f8328a.a(new bt(this.f8328a, flVar2));
                    return;
                }
                if (!TextUtils.equals("P", flVar.m350b())) {
                    return;
                }
                dx.i iVarA = dx.i.a(flVar.m348a());
                fl flVar3 = new fl();
                flVar3.a(0);
                flVar3.a(flVar.m344a(), "PCA");
                flVar3.a(flVar.e());
                dx.i iVar = new dx.i();
                if (iVarA.m295a()) {
                    iVar.a(iVarA.m294a());
                }
                flVar3.a(iVar.a(), (String) null);
                this.f8328a.a(new bt(this.f8328a, flVar3));
                sb = new StringBuilder();
                sb.append("ACK msgP: id = ");
                strM291a = flVar.e();
            } else {
                if (!"NOTIFY".equals(flVar.m344a())) {
                    return;
                }
                dx.h hVarA = dx.h.a(flVar.m348a());
                sb = new StringBuilder();
                sb.append("notify by server err = ");
                sb.append(hVarA.c());
                sb.append(" desc = ");
                strM291a = hVarA.m291a();
            }
        }
        sb.append(strM291a);
        string = sb.toString();
        com.xiaomi.channel.commonutils.logger.b.m43a(string);
    }
}
