package com.xiaomi.push.service;

import android.content.Context;
import android.os.Messenger;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.Cif;
import com.xiaomi.push.db;
import com.xiaomi.push.fl;
import com.xiaomi.push.fw;
import com.xiaomi.push.gh;
import com.xiaomi.push.gn;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hy;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.bg;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes4.dex */
final class ah {
    static fl a(XMPushService xMPushService, byte[] bArr) {
        Cif cif = new Cif();
        try {
            it.a(cif, bArr);
            return a(u.m694a((Context) xMPushService), xMPushService, cif);
        } catch (iz e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return null;
        }
    }

    static fl a(t tVar, Context context, Cif cif) {
        try {
            fl flVar = new fl();
            flVar.a(5);
            flVar.c(tVar.f1018a);
            flVar.b(a(cif));
            flVar.a("SECMSG", "message");
            String str = tVar.f1018a;
            cif.f641a.f568a = str.substring(0, str.indexOf("@"));
            cif.f641a.f572c = str.substring(str.indexOf("/") + 1);
            flVar.a(it.a(cif), tVar.c);
            flVar.a((short) 1);
            com.xiaomi.channel.commonutils.logger.b.m43a("try send mi push message. packagename:" + cif.f646b + " action:" + cif.f639a);
            return flVar;
        } catch (NullPointerException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return null;
        }
    }

    static Cif a(String str, String str2) {
        ii iiVar = new ii();
        iiVar.b(str2);
        iiVar.c("package uninstalled");
        iiVar.a(gn.i());
        iiVar.a(false);
        return a(str, str2, iiVar, hj.Notification);
    }

    static <T extends iu<T, ?>> Cif a(String str, String str2, T t, hj hjVar) {
        return a(str, str2, t, hjVar, true);
    }

    private static <T extends iu<T, ?>> Cif a(String str, String str2, T t, hj hjVar, boolean z) {
        byte[] bArrA = it.a(t);
        Cif cif = new Cif();
        hy hyVar = new hy();
        hyVar.f567a = 5L;
        hyVar.f568a = "fakeid";
        cif.a(hyVar);
        cif.a(ByteBuffer.wrap(bArrA));
        cif.a(hjVar);
        cif.b(z);
        cif.b(str);
        cif.a(false);
        cif.a(str2);
        return cif;
    }

    private static String a(Cif cif) {
        if (cif.f640a != null && cif.f640a.f558b != null) {
            String str = cif.f640a.f558b.get("ext_traffic_source_pkg");
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
        }
        return cif.f646b;
    }

    static String a(String str) {
        return str + ".permission.MIPUSH_RECEIVE";
    }

    static void a(XMPushService xMPushService) {
        t tVarM694a = u.m694a(xMPushService.getApplicationContext());
        if (tVarM694a != null) {
            bg.b bVarA = u.m694a(xMPushService.getApplicationContext()).a(xMPushService);
            com.xiaomi.channel.commonutils.logger.b.m43a("prepare account. " + bVarA.f947a);
            a(xMPushService, bVarA);
            bg.a().a(bVarA);
            bx.a(xMPushService).a(new ai("GAID", 172800L, xMPushService, tVarM694a));
            a(xMPushService, tVarM694a, 172800);
        }
    }

    static void a(XMPushService xMPushService, Cif cif) {
        db.a(cif.b(), xMPushService.getApplicationContext(), cif, -1);
        fw fwVarM603a = xMPushService.m603a();
        if (fwVarM603a == null) {
            throw new gh("try send msg while connection is null.");
        }
        if (!fwVarM603a.mo358a()) {
            throw new gh("Don't support XMPP connection.");
        }
        fl flVarA = a(u.m694a((Context) xMPushService), xMPushService, cif);
        if (flVarA != null) {
            fwVarM603a.b(flVarA);
        }
    }

    static void a(XMPushService xMPushService, bg.b bVar) {
        bVar.a((Messenger) null);
        bVar.a(new ak(xMPushService));
    }

    private static void a(XMPushService xMPushService, t tVar, int i) {
        bx.a(xMPushService).a(new aj("MSAID", i, xMPushService, tVar));
    }

    static void a(XMPushService xMPushService, String str, byte[] bArr) {
        db.a(str, xMPushService.getApplicationContext(), bArr);
        fw fwVarM603a = xMPushService.m603a();
        if (fwVarM603a == null) {
            throw new gh("try send msg while connection is null.");
        }
        if (!fwVarM603a.mo358a()) {
            throw new gh("Don't support XMPP connection.");
        }
        fl flVarA = a(xMPushService, bArr);
        if (flVarA != null) {
            fwVarM603a.b(flVarA);
        } else {
            x.a(xMPushService, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, "not a valid message");
        }
    }

    static Cif b(String str, String str2) {
        ii iiVar = new ii();
        iiVar.b(str2);
        iiVar.c(ht.AppDataCleared.f519a);
        iiVar.a(bd.a());
        iiVar.a(false);
        return a(str, str2, iiVar, hj.Notification);
    }

    static <T extends iu<T, ?>> Cif b(String str, String str2, T t, hj hjVar) {
        return a(str, str2, t, hjVar, false);
    }
}
