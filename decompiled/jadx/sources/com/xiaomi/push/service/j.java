package com.xiaomi.push.service;

import android.content.Context;
import android.content.Intent;
import android.os.Message;
import android.os.RemoteException;
import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.fl;
import com.xiaomi.push.gl;
import com.xiaomi.push.gm;
import com.xiaomi.push.gn;
import com.xiaomi.push.gp;
import com.xiaomi.push.hi;
import com.xiaomi.push.service.bg;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: loaded from: classes4.dex */
public class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private y f8378a = new y();

    public static String a(bg.b bVar) {
        StringBuilder sb;
        String str;
        if ("9".equals(bVar.g)) {
            sb = new StringBuilder();
            sb.append(bVar.f947a);
            str = ".permission.MIMC_RECEIVE";
        } else {
            sb = new StringBuilder();
            sb.append(bVar.f947a);
            str = ".permission.MIPUSH_RECEIVE";
        }
        sb.append(str);
        return sb.toString();
    }

    private static void a(Context context, Intent intent, bg.b bVar) {
        if ("com.xiaomi.xmsf".equals(context.getPackageName())) {
            context.sendBroadcast(intent);
        } else {
            context.sendBroadcast(intent, a(bVar));
        }
    }

    bg.b a(fl flVar) {
        Collection<bg.b> collectionM651a = bg.a().m651a(Integer.toString(flVar.a()));
        if (collectionM651a.isEmpty()) {
            return null;
        }
        Iterator<bg.b> it = collectionM651a.iterator();
        if (collectionM651a.size() == 1) {
            return it.next();
        }
        String strG = flVar.g();
        while (it.hasNext()) {
            bg.b next = it.next();
            if (TextUtils.equals(strG, next.f950b)) {
                return next;
            }
        }
        return null;
    }

    bg.b a(gn gnVar) {
        Collection<bg.b> collectionM651a = bg.a().m651a(gnVar.k());
        if (collectionM651a.isEmpty()) {
            return null;
        }
        Iterator<bg.b> it = collectionM651a.iterator();
        if (collectionM651a.size() == 1) {
            return it.next();
        }
        String strM = gnVar.m();
        String strL = gnVar.l();
        while (it.hasNext()) {
            bg.b next = it.next();
            if (TextUtils.equals(strM, next.f950b) || TextUtils.equals(strL, next.f950b)) {
                return next;
            }
        }
        return null;
    }

    public void a(Context context) {
        Intent intent = new Intent();
        intent.setAction("com.xiaomi.push.service_started");
        if (com.xiaomi.push.m.m579c()) {
            intent.addFlags(16777216);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("[Bcst] send ***.push.service_started broadcast to inform push service has started.");
        context.sendBroadcast(intent);
    }

    public void a(Context context, bg.b bVar, int i) {
        if ("5".equalsIgnoreCase(bVar.g)) {
            return;
        }
        Intent intent = new Intent();
        intent.setAction("com.xiaomi.push.channel_closed");
        intent.setPackage(bVar.f947a);
        intent.putExtra(bk.t, bVar.g);
        intent.putExtra("ext_reason", i);
        intent.putExtra(bk.q, bVar.f950b);
        intent.putExtra(bk.F, bVar.i);
        if (bVar.f941a == null || !"9".equals(bVar.g)) {
            com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[Bcst] notify channel closed. %s,%s,%d", bVar.g, bVar.f947a, Integer.valueOf(i)));
            a(context, intent, bVar);
            return;
        }
        try {
            bVar.f941a.send(Message.obtain(null, 17, intent));
        } catch (RemoteException unused) {
            bVar.f941a = null;
            com.xiaomi.channel.commonutils.logger.b.m43a("peer may died: " + bVar.f950b.substring(bVar.f950b.lastIndexOf(64)));
        }
    }

    public void a(Context context, bg.b bVar, String str, String str2) {
        if (bVar == null) {
            com.xiaomi.channel.commonutils.logger.b.d("error while notify kick by server!");
            return;
        }
        if ("5".equalsIgnoreCase(bVar.g)) {
            com.xiaomi.channel.commonutils.logger.b.d("mipush kicked by server");
            return;
        }
        Intent intent = new Intent();
        intent.setAction("com.xiaomi.push.kicked");
        intent.setPackage(bVar.f947a);
        intent.putExtra("ext_kick_type", str);
        intent.putExtra("ext_kick_reason", str2);
        intent.putExtra("ext_chid", bVar.g);
        intent.putExtra(bk.q, bVar.f950b);
        intent.putExtra(bk.F, bVar.i);
        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[Bcst] notify packet(blob) arrival. %s,%s,%s", bVar.g, bVar.f947a, str2));
        a(context, intent, bVar);
    }

    public void a(Context context, bg.b bVar, boolean z, int i, String str) {
        if ("5".equalsIgnoreCase(bVar.g)) {
            this.f8378a.a(context, bVar, z, i, str);
            return;
        }
        Intent intent = new Intent();
        intent.setAction("com.xiaomi.push.channel_opened");
        intent.setPackage(bVar.f947a);
        intent.putExtra("ext_succeeded", z);
        if (!z) {
            intent.putExtra("ext_reason", i);
        }
        if (!TextUtils.isEmpty(str)) {
            intent.putExtra("ext_reason_msg", str);
        }
        intent.putExtra("ext_chid", bVar.g);
        intent.putExtra(bk.q, bVar.f950b);
        intent.putExtra(bk.F, bVar.i);
        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[Bcst] notify channel open result. %s,%s,%b,%d", bVar.g, bVar.f947a, Boolean.valueOf(z), Integer.valueOf(i)));
        a(context, intent, bVar);
    }

    public void a(XMPushService xMPushService, String str, fl flVar) {
        bg.b bVarA = a(flVar);
        if (bVarA == null) {
            com.xiaomi.channel.commonutils.logger.b.d("error while notify channel closed! channel " + str + " not registered");
            return;
        }
        if ("5".equalsIgnoreCase(str)) {
            this.f8378a.a(xMPushService, flVar, bVarA);
            return;
        }
        String str2 = bVarA.f947a;
        Intent intent = new Intent();
        intent.setAction("com.xiaomi.push.new_msg");
        intent.setPackage(str2);
        intent.putExtra("ext_rcv_timestamp", SystemClock.elapsedRealtime());
        intent.putExtra("ext_chid", str);
        intent.putExtra("ext_raw_packet", flVar.m349a(bVarA.h));
        intent.putExtra(bk.F, bVarA.i);
        intent.putExtra(bk.x, bVarA.h);
        if (bVarA.f941a != null) {
            try {
                bVarA.f941a.send(Message.obtain(null, 17, intent));
                com.xiaomi.channel.commonutils.logger.b.m43a("message was sent by messenger for chid=" + str);
                return;
            } catch (RemoteException unused) {
                bVarA.f941a = null;
                com.xiaomi.channel.commonutils.logger.b.m43a("peer may died: " + bVarA.f950b.substring(bVarA.f950b.lastIndexOf(64)));
            }
        }
        if ("com.xiaomi.xmsf".equals(str2)) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[Bcst] notify packet(blob) arrival. %s,%s,%s", bVarA.g, bVarA.f947a, flVar.e()));
        a(xMPushService, intent, bVarA);
        if (!"10".equals(str) || flVar.f386a == null) {
            return;
        }
        flVar.f386a.d = System.currentTimeMillis();
        if (hi.a(xMPushService, 1)) {
            bz.a("category_coord_down", "coord_down", "com.xiaomi.xmsf", flVar.f386a);
        }
    }

    public void a(XMPushService xMPushService, String str, gn gnVar) {
        String str2;
        String str3;
        bg.b bVarA = a(gnVar);
        if (bVarA != null) {
            if ("5".equalsIgnoreCase(str)) {
                this.f8378a.a(xMPushService, gnVar, bVarA);
                return;
            }
            String str4 = bVarA.f947a;
            if (gnVar instanceof gm) {
                str3 = "com.xiaomi.push.new_msg";
            } else if (gnVar instanceof gl) {
                str3 = "com.xiaomi.push.new_iq";
            } else if (gnVar instanceof gp) {
                str3 = "com.xiaomi.push.new_pres";
            } else {
                str2 = "unknown packet type, drop it";
            }
            Intent intent = new Intent();
            intent.setAction(str3);
            intent.setPackage(str4);
            intent.putExtra("ext_chid", str);
            intent.putExtra("ext_packet", gnVar.a());
            intent.putExtra(bk.F, bVarA.i);
            intent.putExtra(bk.x, bVarA.h);
            com.xiaomi.channel.commonutils.logger.b.m43a(String.format("[Bcst] notify packet arrival. %s,%s,%s", bVarA.g, bVarA.f947a, gnVar.j()));
            a(xMPushService, intent, bVarA);
            return;
        }
        str2 = "error while notify channel closed! channel " + str + " not registered";
        com.xiaomi.channel.commonutils.logger.b.d(str2);
    }
}
