package com.xiaomi.push.service;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.text.TextUtils;
import com.xiaomi.push.Cif;
import com.xiaomi.push.eo;
import com.xiaomi.push.fl;
import com.xiaomi.push.gh;
import com.xiaomi.push.gk;
import com.xiaomi.push.gm;
import com.xiaomi.push.gn;
import com.xiaomi.push.hb;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.hz;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import com.xiaomi.push.service.al;
import com.xiaomi.push.service.bg;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class y {
    public static Intent a(byte[] bArr, long j) {
        Cif cifA = a(bArr);
        if (cifA == null) {
            return null;
        }
        Intent intent = new Intent("com.xiaomi.mipush.RECEIVE_MESSAGE");
        intent.putExtra("mipush_payload", bArr);
        intent.putExtra("mrt", Long.toString(j));
        intent.setPackage(cifA.f646b);
        return intent;
    }

    public static Cif a(Context context, Cif cif) {
        return a(context, cif, (Map<String, String>) null);
    }

    public static Cif a(Context context, Cif cif, Map<String, String> map) {
        hz hzVar = new hz();
        hzVar.b(cif.m479a());
        hw hwVarM478a = cif.m478a();
        if (hwVarM478a != null) {
            hzVar.a(hwVarM478a.m444a());
            hzVar.a(hwVarM478a.m442a());
            if (!TextUtils.isEmpty(hwVarM478a.m449b())) {
                hzVar.c(hwVarM478a.m449b());
            }
        }
        hzVar.a(it.a(context, cif));
        Cif cifA = ah.a(cif.b(), cif.m479a(), hzVar, hj.AckMessage);
        hw hwVarM478a2 = cif.m478a();
        if (hwVarM478a2 != null) {
            hwVarM478a2 = br.a(hwVarM478a2.m443a());
        }
        hwVarM478a2.a("mat", Long.toString(System.currentTimeMillis()));
        if (map != null) {
            try {
                if (map.size() > 0) {
                    for (String str : map.keySet()) {
                        hwVarM478a2.a(str, map.get(str));
                    }
                }
            } catch (Throwable unused) {
            }
        }
        cifA.a(hwVarM478a2);
        return cifA;
    }

    public static Cif a(byte[] bArr) {
        Cif cif = new Cif();
        try {
            it.a(cif, bArr);
            return cif;
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a(th);
            return null;
        }
    }

    public static void a(Context context, Cif cif, byte[] bArr) {
        try {
            al.a(cif);
            cif.m478a();
            al.c cVarM619a = al.m619a(context, cif, bArr);
            if (cVarM619a.f8308a > 0 && !TextUtils.isEmpty(cVarM619a.f909a)) {
                hb.a(context, cVarM619a.f909a, cVarM619a.f8308a, true, false, System.currentTimeMillis());
            }
            if (!com.xiaomi.push.m.m575a(context) || !ag.a(context, cif, cVarM619a.f910a)) {
                b(context, cif, bArr);
            } else {
                ag.m614a(context, cif);
                com.xiaomi.channel.commonutils.logger.b.m43a("consume this broadcast by tts");
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("notify push msg error " + e);
            e.printStackTrace();
        }
    }

    private static void a(XMPushService xMPushService, Cif cif) {
        xMPushService.a(new z(4, xMPushService, cif));
    }

    private static void a(XMPushService xMPushService, Cif cif, ii iiVar) {
        xMPushService.a(new af(4, iiVar, cif, xMPushService));
    }

    private static void a(XMPushService xMPushService, Cif cif, String str) {
        xMPushService.a(new ad(4, xMPushService, cif, str));
    }

    private static void a(XMPushService xMPushService, Cif cif, String str, String str2) {
        xMPushService.a(new ae(4, xMPushService, cif, str, str2));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:149:0x042a  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x042d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(com.xiaomi.push.service.XMPushService r19, java.lang.String r20, byte[] r21, android.content.Intent r22) {
        /*
            Method dump skipped, instruction units count: 1211
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.y.a(com.xiaomi.push.service.XMPushService, java.lang.String, byte[], android.content.Intent):void");
    }

    private static void a(XMPushService xMPushService, byte[] bArr, long j) {
        Map<String, String> mapM445a;
        Cif cifA = a(bArr);
        if (cifA == null) {
            return;
        }
        if (TextUtils.isEmpty(cifA.f646b)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("receive a mipush message without package name");
            return;
        }
        Long lValueOf = Long.valueOf(System.currentTimeMillis());
        Intent intentA = a(bArr, lValueOf.longValue());
        String strA = al.a(cifA);
        hb.a(xMPushService, strA, j, true, true, System.currentTimeMillis());
        hw hwVarM478a = cifA.m478a();
        if (hwVarM478a != null && hwVarM478a.m444a() != null) {
            com.xiaomi.channel.commonutils.logger.b.e(String.format("receive a message. appid=%1$s, msgid= %2$s, action=%3$s", cifA.m479a(), hwVarM478a.m444a(), cifA.a()));
        }
        if (hwVarM478a != null) {
            hwVarM478a.a("mrt", Long.toString(lValueOf.longValue()));
        }
        String strM444a = "";
        if (hj.SendMessage == cifA.a() && v.a(xMPushService).m698a(cifA.f646b) && !al.m623a(cifA)) {
            if (hwVarM478a != null) {
                strM444a = hwVarM478a.m444a();
                if (al.e(cifA)) {
                    eo.a(xMPushService.getApplicationContext()).a(cifA.b(), al.b(cifA), strM444a, "1");
                }
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("Drop a message for unregistered, msgid=" + strM444a);
            a(xMPushService, cifA, cifA.f646b);
            return;
        }
        if (hj.SendMessage == cifA.a() && v.a(xMPushService).m700c(cifA.f646b) && !al.m623a(cifA)) {
            if (hwVarM478a != null) {
                strM444a = hwVarM478a.m444a();
                if (al.e(cifA)) {
                    eo.a(xMPushService.getApplicationContext()).a(cifA.b(), al.b(cifA), strM444a, "2");
                }
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("Drop a message for push closed, msgid=" + strM444a);
            a(xMPushService, cifA, cifA.f646b);
            return;
        }
        if (hj.SendMessage == cifA.a() && !TextUtils.equals(xMPushService.getPackageName(), "com.xiaomi.xmsf") && !TextUtils.equals(xMPushService.getPackageName(), cifA.f646b)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Receive a message with wrong package name, expect " + xMPushService.getPackageName() + ", received " + cifA.f646b);
            a(xMPushService, cifA, "unmatched_package", "package should be " + xMPushService.getPackageName() + ", but got " + cifA.f646b);
            if (hwVarM478a == null || !al.e(cifA)) {
                return;
            }
            eo.a(xMPushService.getApplicationContext()).a(cifA.b(), al.b(cifA), hwVarM478a.m444a(), "3");
            return;
        }
        if (hj.SendMessage != cifA.a() || com.xiaomi.push.j.a() != 999 || !com.xiaomi.push.j.a(xMPushService, strA)) {
            if (hwVarM478a == null || (mapM445a = hwVarM478a.m445a()) == null || !mapM445a.containsKey("hide") || !"true".equalsIgnoreCase(mapM445a.get("hide"))) {
                a(xMPushService, strA, bArr, intentA);
                return;
            } else {
                b(xMPushService, cifA);
                return;
            }
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("Receive the uninstalled dual app message");
        try {
            ah.a(xMPushService, ah.a(strA, cifA.m479a()));
            com.xiaomi.channel.commonutils.logger.b.m43a("uninstall " + strA + " msg sent");
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("Fail to send Message: " + e.getMessage());
            xMPushService.a(10, e);
        }
        al.m620a((Context) xMPushService, strA);
    }

    private static boolean a(Context context, Intent intent) {
        try {
            List<ResolveInfo> listQueryBroadcastReceivers = context.getPackageManager().queryBroadcastReceivers(intent, 32);
            if (listQueryBroadcastReceivers != null) {
                if (!listQueryBroadcastReceivers.isEmpty()) {
                    return true;
                }
            }
            return false;
        } catch (Exception unused) {
            return true;
        }
    }

    private static boolean a(Context context, String str) {
        Intent intent = new Intent("com.xiaomi.mipush.miui.CLICK_MESSAGE");
        intent.setPackage(str);
        Intent intent2 = new Intent("com.xiaomi.mipush.miui.RECEIVE_MESSAGE");
        intent2.setPackage(str);
        PackageManager packageManager = context.getPackageManager();
        try {
            List<ResolveInfo> listQueryBroadcastReceivers = packageManager.queryBroadcastReceivers(intent2, 32);
            List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 32);
            if (listQueryBroadcastReceivers.isEmpty()) {
                if (listQueryIntentServices.isEmpty()) {
                    return false;
                }
            }
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            return false;
        }
    }

    public static boolean a(Context context, String str, byte[] bArr) {
        if (!com.xiaomi.push.h.m399a(context, str)) {
            return false;
        }
        Intent intent = new Intent("com.xiaomi.mipush.MESSAGE_ARRIVED");
        intent.putExtra("mipush_payload", bArr);
        intent.setPackage(str);
        try {
            if (context.getPackageManager().queryBroadcastReceivers(intent, 0).isEmpty()) {
                return false;
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("broadcast message arrived.");
            context.sendBroadcast(intent, ah.a(str));
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("meet error when broadcast message arrived. " + e);
            return false;
        }
    }

    private static boolean a(Cif cif) {
        return "com.xiaomi.xmsf".equals(cif.f646b) && cif.m478a() != null && cif.m478a().m445a() != null && cif.m478a().m445a().containsKey("miui_package_name");
    }

    private static boolean a(XMPushService xMPushService, String str, Cif cif, hw hwVar) {
        boolean z = true;
        if (hwVar != null && hwVar.m445a() != null && hwVar.m445a().containsKey("__check_alive") && hwVar.m445a().containsKey("__awake")) {
            ii iiVar = new ii();
            iiVar.b(cif.m479a());
            iiVar.d(str);
            iiVar.c(ht.AwakeSystemApp.f519a);
            iiVar.a(hwVar.m444a());
            iiVar.f658a = new HashMap();
            boolean zM399a = com.xiaomi.push.h.m399a(xMPushService.getApplicationContext(), str);
            iiVar.f658a.put("app_running", Boolean.toString(zM399a));
            if (!zM399a) {
                boolean z2 = Boolean.parseBoolean(hwVar.m445a().get("__awake"));
                iiVar.f658a.put("awaked", Boolean.toString(z2));
                if (!z2) {
                    z = false;
                }
            }
            try {
                ah.a(xMPushService, ah.a(cif.b(), cif.m479a(), iiVar, hj.Notification));
            } catch (gh e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        return z;
    }

    private static void b(Context context, Cif cif, byte[] bArr) {
        if (al.m623a(cif)) {
            return;
        }
        String strA = al.a(cif);
        if (TextUtils.isEmpty(strA) || a(context, strA, bArr)) {
            return;
        }
        eo.a(context).b(strA, al.b(cif), cif.m478a().m444a(), "1");
    }

    private static void b(XMPushService xMPushService, Cif cif) {
        xMPushService.a(new aa(4, xMPushService, cif));
    }

    private static boolean b(Cif cif) {
        Map<String, String> mapM445a = cif.m478a().m445a();
        return mapM445a != null && mapM445a.containsKey("notify_effect");
    }

    private static void c(XMPushService xMPushService, Cif cif) {
        xMPushService.a(new ab(4, xMPushService, cif));
    }

    private static boolean c(Cif cif) {
        if (cif.m478a() == null || cif.m478a().m445a() == null) {
            return false;
        }
        return "1".equals(cif.m478a().m445a().get("obslete_ads_message"));
    }

    private static void d(XMPushService xMPushService, Cif cif) {
        xMPushService.a(new ac(4, xMPushService, cif));
    }

    public void a(Context context, bg.b bVar, boolean z, int i, String str) {
        t tVarM694a;
        if (z || (tVarM694a = u.m694a(context)) == null || !"token-expired".equals(str)) {
            return;
        }
        u.a(context, tVarM694a.f, tVarM694a.d, tVarM694a.e);
    }

    public void a(XMPushService xMPushService, fl flVar, bg.b bVar) {
        try {
            a(xMPushService, flVar.m349a(bVar.h), flVar.c());
        } catch (IllegalArgumentException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    public void a(XMPushService xMPushService, gn gnVar, bg.b bVar) {
        if (!(gnVar instanceof gm)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("not a mipush message");
            return;
        }
        gm gmVar = (gm) gnVar;
        gk gkVarA = gmVar.a("s");
        if (gkVarA != null) {
            try {
                a(xMPushService, bp.a(bp.a(bVar.h, gmVar.j()), gkVarA.c()), hb.a(gnVar.mo382a()));
            } catch (IllegalArgumentException e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
    }
}
