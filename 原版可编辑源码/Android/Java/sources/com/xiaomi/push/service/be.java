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

public class be {
    private XMPushService a;

    be(XMPushService xMPushService) {
        this.a = xMPushService;
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
        this.a.a(20, (Exception) null);
        this.a.a(true);
    }

    private void b(gn gnVar) {
        bg.b bVarA;
        String strL = gnVar.l();
        String strK = gnVar.k();
        if (TextUtils.isEmpty(strL) || TextUtils.isEmpty(strK) || (bVarA = bg.a().a(strK, strL)) == null) {
            return;
        }
        hb.a(this.a, bVarA.a, hb.a(gnVar.a()), true, true, System.currentTimeMillis());
    }

    private void c(fl flVar) {
        bg.b bVarA;
        String strG = flVar.g();
        String string = Integer.toString(flVar.a());
        if (TextUtils.isEmpty(strG) || TextUtils.isEmpty(string) || (bVarA = bg.a().a(string, strG)) == null) {
            return;
        }
        hb.a(this.a, bVarA.a, flVar.c(), true, true, System.currentTimeMillis());
    }

    public void a(fl flVar) {
        if (5 != flVar.a()) {
            c(flVar);
        }
        try {
            b(flVar);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("handle Blob chid = " + flVar.a() + " cmd = " + flVar.a() + " packetid = " + flVar.e() + " failure ", e);
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
            com.xiaomi.channel.commonutils.logger.b.a("Received wrong packet with chid = 0 : " + gnVar.a());
        }
        if (gnVar instanceof gl) {
            gk gkVarA = gnVar.a("kick");
            if (gkVarA != null) {
                String strL = gnVar.l();
                String strA = gkVarA.a("type");
                String strA2 = gkVarA.a(com.tkay.expressad.foundation.d.r.ac);
                com.xiaomi.channel.commonutils.logger.b.a("kicked by server, chid=" + strK + " res=" + bg.b.a(strL) + " type=" + strA + " reason=" + strA2);
                if (!"wait".equals(strA)) {
                    this.a.a(strK, strL, 3, strA2, strA);
                    bg.a().a(strK, strL);
                    return;
                }
                bg.b bVarA = bg.a().a(strK, strL);
                if (bVarA != null) {
                    this.a.a(bVarA);
                    bVarA.a(bg.c.a, 3, 0, strA2, strA);
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
        this.a.b().a(this.a, strK, gnVar);
    }

    public void b(fl flVar) {
        StringBuilder sb;
        String strA;
        String string;
        bg.c cVar;
        int i;
        int i2;
        String strA2 = flVar.a();
        if (flVar.a() != 0) {
            String string2 = Integer.toString(flVar.a());
            if (!"SECMSG".equals(flVar.a())) {
                if (!"BIND".equals(strA2)) {
                    if ("KICK".equals(strA2)) {
                        dx.g gVarA = dx.g.a(flVar.a());
                        String strG = flVar.g();
                        String strA3 = gVarA.a();
                        String strB = gVarA.b();
                        com.xiaomi.channel.commonutils.logger.b.a("kicked by server, chid=" + string2 + " res= " + bg.b.a(strG) + " type=" + strA3 + " reason=" + strB);
                        if (!"wait".equals(strA3)) {
                            this.a.a(string2, strG, 3, strB, strA3);
                            bg.a().a(string2, strG);
                            return;
                        }
                        bg.b bVarA = bg.a().a(string2, strG);
                        if (bVarA != null) {
                            this.a.a(bVarA);
                            bVarA.a(bg.c.a, 3, 0, strB, strA3);
                            return;
                        }
                        return;
                    }
                    return;
                }
                dx.d dVarA = dx.d.a(flVar.a());
                String strG2 = flVar.g();
                bg.b bVarA2 = bg.a().a(string2, strG2);
                if (bVarA2 == null) {
                    return;
                }
                if (dVarA.a()) {
                    com.xiaomi.channel.commonutils.logger.b.a("SMACK: channel bind succeeded, chid=" + flVar.a());
                    bVarA2.a(bg.c.c, 1, 0, (String) null, (String) null);
                    return;
                }
                String strA4 = dVarA.a();
                if ("auth".equals(strA4)) {
                    if ("invalid-sig".equals(dVarA.b())) {
                        com.xiaomi.channel.commonutils.logger.b.a("SMACK: bind error invalid-sig token = " + bVarA2.c + " sec = " + bVarA2.h);
                        fj.a(0, ez.T.a(), 1, null, 0);
                    }
                    cVar = bg.c.a;
                    i = 1;
                    i2 = 5;
                } else {
                    if (!com.tkay.expressad.d.a.b.dO.equals(strA4)) {
                        if ("wait".equals(strA4)) {
                            this.a.a(bVarA2);
                            bVarA2.a(bg.c.a, 1, 7, dVarA.b(), strA4);
                        }
                        string = "SMACK: channel bind failed, chid=" + string2 + " reason=" + dVarA.b();
                        com.xiaomi.channel.commonutils.logger.b.a(string);
                    }
                    cVar = bg.c.a;
                    i = 1;
                    i2 = 7;
                }
                bVarA2.a(cVar, i, i2, dVarA.b(), strA4);
                bg.a().a(string2, strG2);
                string = "SMACK: channel bind failed, chid=" + string2 + " reason=" + dVarA.b();
                com.xiaomi.channel.commonutils.logger.b.a(string);
            }
            if (!flVar.a()) {
                this.a.b().a(this.a, string2, flVar);
                return;
            }
            sb = new StringBuilder();
            sb.append("Recv SECMSG errCode = ");
            sb.append(flVar.b());
            sb.append(" errStr = ");
            strA = flVar.c();
        } else {
            if ("PING".equals(strA2)) {
                byte[] bArrA = flVar.a();
                if (bArrA != null && bArrA.length > 0) {
                    dx.j jVarA = dx.j.a(bArrA);
                    if (jVarA.b()) {
                        bv.a().a(jVarA.a());
                    }
                }
                if (!"com.xiaomi.xmsf".equals(this.a.getPackageName())) {
                    this.a.a();
                }
                if ("1".equals(flVar.e())) {
                    com.xiaomi.channel.commonutils.logger.b.a("received a server ping");
                } else {
                    fj.b();
                }
                this.a.b();
                return;
            }
            if ("SYNC".equals(strA2)) {
                if ("CONF".equals(flVar.b())) {
                    bv.a().a(dx.b.a(flVar.a()));
                    return;
                }
                if (TextUtils.equals("U", flVar.b())) {
                    dx.k kVarA = dx.k.a(flVar.a());
                    df.a(this.a).a(kVarA.a(), kVarA.b(), new Date(kVarA.a()), new Date(kVarA.b()), kVarA.c() * 1024, kVarA.e());
                    fl flVar2 = new fl();
                    flVar2.a(0);
                    flVar2.a(flVar.a(), "UCA");
                    flVar2.a(flVar.e());
                    this.a.a(new bt(this.a, flVar2));
                    return;
                }
                if (!TextUtils.equals("P", flVar.b())) {
                    return;
                }
                dx.i iVarA = dx.i.a(flVar.a());
                fl flVar3 = new fl();
                flVar3.a(0);
                flVar3.a(flVar.a(), "PCA");
                flVar3.a(flVar.e());
                dx.i iVar = new dx.i();
                if (iVarA.a()) {
                    iVar.a(iVarA.a());
                }
                flVar3.a(iVar.a(), (String) null);
                this.a.a(new bt(this.a, flVar3));
                sb = new StringBuilder();
                sb.append("ACK msgP: id = ");
                strA = flVar.e();
            } else {
                if (!"NOTIFY".equals(flVar.a())) {
                    return;
                }
                dx.h hVarA = dx.h.a(flVar.a());
                sb = new StringBuilder();
                sb.append("notify by server err = ");
                sb.append(hVarA.c());
                sb.append(" desc = ");
                strA = hVarA.a();
            }
        }
        sb.append(strA);
        string = sb.toString();
        com.xiaomi.channel.commonutils.logger.b.a(string);
    }
}
