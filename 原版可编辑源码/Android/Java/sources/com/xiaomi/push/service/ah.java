package com.xiaomi.push.service;

import android.content.Context;
import android.os.Messenger;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.ErrorCode;
import com.xiaomi.push.db;
import com.xiaomi.push.fl;
import com.xiaomi.push.fw;
import com.xiaomi.push.gh;
import com.xiaomi.push.gn;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hy;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.bg;
import java.nio.ByteBuffer;

final class ah {
    static fl a(XMPushService xMPushService, byte[] bArr) {
        if ifVar = new if();
        try {
            it.a(ifVar, bArr);
            return a(u.a((Context) xMPushService), xMPushService, ifVar);
        } catch (iz e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return null;
        }
    }

    static fl a(t tVar, Context context, if ifVar) {
        try {
            fl flVar = new fl();
            flVar.a(5);
            flVar.c(tVar.a);
            flVar.b(a(ifVar));
            flVar.a("SECMSG", "message");
            String str = tVar.a;
            ifVar.a.a = str.substring(0, str.indexOf("@"));
            ifVar.a.c = str.substring(str.indexOf("/") + 1);
            flVar.a(it.a(ifVar), tVar.c);
            flVar.a((short) 1);
            com.xiaomi.channel.commonutils.logger.b.a("try send mi push message. packagename:" + ifVar.b + " action:" + ifVar.a);
            return flVar;
        } catch (NullPointerException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return null;
        }
    }

    static if a(String str, String str2) {
        ii iiVar = new ii();
        iiVar.b(str2);
        iiVar.c("package uninstalled");
        iiVar.a(gn.i());
        iiVar.a(false);
        return a(str, str2, iiVar, hj.i);
    }

    static <T extends iu<T, ?>> if a(String str, String str2, T t, hj hjVar) {
        return a(str, str2, t, hjVar, true);
    }

    private static <T extends iu<T, ?>> if a(String str, String str2, T t, hj hjVar, boolean z) {
        byte[] bArrA = it.a(t);
        if ifVar = new if();
        hy hyVar = new hy();
        hyVar.a = 5L;
        hyVar.a = "fakeid";
        ifVar.a(hyVar);
        ifVar.a(ByteBuffer.wrap(bArrA));
        ifVar.a(hjVar);
        ifVar.b(z);
        ifVar.b(str);
        ifVar.a(false);
        ifVar.a(str2);
        return ifVar;
    }

    private static String a(if ifVar) {
        if (ifVar.a != null && ifVar.a.b != null) {
            String str = ifVar.a.b.get("ext_traffic_source_pkg");
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
        }
        return ifVar.b;
    }

    static String a(String str) {
        return str + ".permission.MIPUSH_RECEIVE";
    }

    static void a(XMPushService xMPushService) {
        t tVarA = u.a(xMPushService.getApplicationContext());
        if (tVarA != null) {
            bg.b bVarA = u.a(xMPushService.getApplicationContext()).a(xMPushService);
            com.xiaomi.channel.commonutils.logger.b.a("prepare account. " + bVarA.a);
            a(xMPushService, bVarA);
            bg.a().a(bVarA);
            bx.a(xMPushService).a(new ai("GAID", 172800L, xMPushService, tVarA));
            a(xMPushService, tVarA, 172800);
        }
    }

    static void a(XMPushService xMPushService, if ifVar) {
        db.a(ifVar.b(), xMPushService.getApplicationContext(), ifVar, -1);
        fw fwVarA = xMPushService.a();
        if (fwVarA == null) {
            throw new gh("try send msg while connection is null.");
        }
        if (!fwVarA.a()) {
            throw new gh("Don't support XMPP connection.");
        }
        fl flVarA = a(u.a((Context) xMPushService), xMPushService, ifVar);
        if (flVarA != null) {
            fwVarA.b(flVarA);
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
        fw fwVarA = xMPushService.a();
        if (fwVarA == null) {
            throw new gh("try send msg while connection is null.");
        }
        if (!fwVarA.a()) {
            throw new gh("Don't support XMPP connection.");
        }
        fl flVarA = a(xMPushService, bArr);
        if (flVarA != null) {
            fwVarA.b(flVarA);
        } else {
            x.a(xMPushService, str, bArr, ErrorCode.ERROR_INVALID_PAYLOAD, "not a valid message");
        }
    }

    static if b(String str, String str2) {
        ii iiVar = new ii();
        iiVar.b(str2);
        iiVar.c(ht.ac.a);
        iiVar.a(bd.a());
        iiVar.a(false);
        return a(str, str2, iiVar, hj.i);
    }

    static <T extends iu<T, ?>> if b(String str, String str2, T t, hj hjVar) {
        return a(str, str2, t, hjVar, false);
    }
}
