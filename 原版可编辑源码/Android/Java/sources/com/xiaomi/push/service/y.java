package com.xiaomi.push.service;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.text.TextUtils;
import com.huawei.hms.support.api.entity.auth.AuthCode;
import com.qq.e.comm.constants.ErrorCode;
import com.xiaomi.push.db;
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
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import com.xiaomi.push.ik;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.al;
import com.xiaomi.push.service.bg;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class y {
    public static Intent a(byte[] bArr, long j) {
        if ifVarA = a(bArr);
        if (ifVarA == null) {
            return null;
        }
        Intent intent = new Intent("com.xiaomi.mipush.RECEIVE_MESSAGE");
        intent.putExtra("mipush_payload", bArr);
        intent.putExtra("mrt", Long.toString(j));
        intent.setPackage(ifVarA.b);
        return intent;
    }

    public static if a(Context context, if ifVar) {
        return a(context, ifVar, (Map<String, String>) null);
    }

    public static if a(Context context, if ifVar, Map<String, String> map) {
        hz hzVar = new hz();
        hzVar.b(ifVar.a());
        hw hwVarA = ifVar.a();
        if (hwVarA != null) {
            hzVar.a(hwVarA.a());
            hzVar.a(hwVarA.a());
            if (!TextUtils.isEmpty(hwVarA.b())) {
                hzVar.c(hwVarA.b());
            }
        }
        hzVar.a(it.a(context, ifVar));
        if ifVarA = ah.a(ifVar.b(), ifVar.a(), hzVar, hj.f);
        hw hwVarA2 = ifVar.a();
        if (hwVarA2 != null) {
            hwVarA2 = br.a(hwVarA2.a());
        }
        hwVarA2.a("mat", Long.toString(System.currentTimeMillis()));
        if (map != null) {
            try {
                if (map.size() > 0) {
                    for (String str : map.keySet()) {
                        hwVarA2.a(str, map.get(str));
                    }
                }
            } catch (Throwable unused) {
            }
        }
        ifVarA.a(hwVarA2);
        return ifVarA;
    }

    public static if a(byte[] bArr) {
        if ifVar = new if();
        try {
            it.a(ifVar, bArr);
            return ifVar;
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a(th);
            return null;
        }
    }

    public static void a(Context context, if ifVar, byte[] bArr) {
        try {
            al.a(ifVar);
            ifVar.a();
            al.c cVarA = al.a(context, ifVar, bArr);
            if (cVarA.a > 0 && !TextUtils.isEmpty(cVarA.a)) {
                hb.a(context, cVarA.a, cVarA.a, true, false, System.currentTimeMillis());
            }
            if (!com.xiaomi.push.m.a(context) || !ag.a(context, ifVar, cVarA.a)) {
                b(context, ifVar, bArr);
            } else {
                ag.a(context, ifVar);
                com.xiaomi.channel.commonutils.logger.b.a("consume this broadcast by tts");
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("notify push msg error " + e);
            e.printStackTrace();
        }
    }

    private static void a(XMPushService xMPushService, if ifVar) {
        xMPushService.a(new z(4, xMPushService, ifVar));
    }

    private static void a(XMPushService xMPushService, if ifVar, ii iiVar) {
        xMPushService.a(new af(4, iiVar, ifVar, xMPushService));
    }

    private static void a(XMPushService xMPushService, if ifVar, String str) {
        xMPushService.a(new ad(4, xMPushService, ifVar, str));
    }

    private static void a(XMPushService xMPushService, if ifVar, String str, String str2) {
        xMPushService.a(new ae(4, xMPushService, ifVar, str, str2));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:149:0x042a  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x042d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(XMPushService xMPushService, String str, byte[] bArr, Intent intent) {
        Object[] objArr;
        eo eoVarA;
        String strB;
        String strA;
        int i;
        String str2;
        String strB2;
        eo eoVarA2;
        String strB3;
        String strB4;
        String strA2;
        String str3;
        String str4;
        if ifVarA = a(bArr);
        hw hwVarA = ifVarA.a();
        iu iuVarA = null;
        String strA3 = null;
        if (bArr != null) {
            db.a(ifVarA.b(), xMPushService.getApplicationContext(), null, ifVarA.a(), bArr.length);
        }
        if (c(ifVarA) && a(xMPushService, str)) {
            if (al.e(ifVarA)) {
                eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "5");
            }
            c(xMPushService, ifVarA);
            return;
        }
        if (a(ifVarA) && !a(xMPushService, str) && !b(ifVarA)) {
            if (al.e(ifVarA)) {
                eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "6");
            }
            d(xMPushService, ifVarA);
            return;
        }
        if ((!al.a(ifVarA) || !com.xiaomi.push.h.b((Context) xMPushService, ifVarA.b)) && !a(xMPushService, intent)) {
            if (!com.xiaomi.push.h.b((Context) xMPushService, ifVarA.b)) {
                if (al.e(ifVarA)) {
                    eo.a(xMPushService.getApplicationContext()).b(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "2");
                }
                a(xMPushService, ifVarA);
                return;
            } else {
                com.xiaomi.channel.commonutils.logger.b.a("receive a mipush message, we can see the app, but we can't see the receiver.");
                if (al.e(ifVarA)) {
                    eo.a(xMPushService.getApplicationContext()).b(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "3");
                    return;
                }
                return;
            }
        }
        boolean zA = false;
        if (hj.a == ifVarA.a()) {
            String strB5 = ifVarA.b();
            SharedPreferences.Editor editorEdit = xMPushService.getSharedPreferences("pref_registered_pkg_names", 0).edit();
            editorEdit.putString(strB5, ifVarA.a);
            editorEdit.commit();
            ik ikVarA = n.a(ifVarA);
            if (ikVarA.a() != 0 || TextUtils.isEmpty(ikVarA.b())) {
                com.xiaomi.channel.commonutils.logger.b.d("read regSecret failed");
            } else {
                n.a(xMPushService, strB5, ikVarA.b());
            }
            v.a(xMPushService).e(strB5);
            v.a(xMPushService).f(strB5);
            eo.a(xMPushService.getApplicationContext()).a(strB5, "E100003", hwVarA.a(), AuthCode.StatusCode.CERT_FINGERPRINT_ERROR, null);
            if (!TextUtils.isEmpty(hwVarA.a())) {
                intent.putExtra("messageId", hwVarA.a());
                intent.putExtra("eventMessageType", ErrorCode.UNKNOWN_ERROR);
            }
        }
        if (al.c(ifVarA)) {
            eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), 1001, System.currentTimeMillis(), null);
            if (!TextUtils.isEmpty(hwVarA.a())) {
                intent.putExtra("messageId", hwVarA.a());
                intent.putExtra("eventMessageType", 1000);
            }
        }
        if (al.b(ifVarA)) {
            eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), 2001, System.currentTimeMillis(), null);
            if (!TextUtils.isEmpty(hwVarA.a())) {
                intent.putExtra("messageId", hwVarA.a());
                intent.putExtra("eventMessageType", 2000);
            }
        }
        if (al.a(ifVarA)) {
            eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), 3001, System.currentTimeMillis(), null);
            if (!TextUtils.isEmpty(hwVarA.a())) {
                intent.putExtra("messageId", hwVarA.a());
                intent.putExtra("eventMessageType", 3000);
            }
        }
        if (hwVarA != null && !TextUtils.isEmpty(hwVarA.c()) && !TextUtils.isEmpty(hwVarA.d()) && hwVarA.b != 1 && !al.a((Context) xMPushService, ifVarA.b, al.a(hwVarA.a()))) {
            if (hwVarA != null) {
                strA3 = hwVarA.a != null ? hwVarA.a.get("jobkey") : null;
                if (TextUtils.isEmpty(strA3)) {
                    strA3 = hwVarA.a();
                }
                zA = an.a(xMPushService, ifVarA.b, strA3);
            }
            if (zA) {
                eo.a(xMPushService.getApplicationContext()).c(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "1:" + strA3);
                str4 = "drop a duplicate message, key=" + strA3;
            } else if (com.xiaomi.push.m.a((Context) xMPushService) && ag.a(ifVarA)) {
                str4 = "receive pull down message";
            } else {
                a(xMPushService, ifVarA, bArr);
                b(xMPushService, ifVarA);
            }
            com.xiaomi.channel.commonutils.logger.b.a(str4);
            b(xMPushService, ifVarA);
        } else if ("com.xiaomi.xmsf".contains(ifVarA.b) && !ifVarA.b() && hwVarA != null && hwVarA.a() != null && hwVarA.a().containsKey("ab")) {
            b(xMPushService, ifVarA);
            com.xiaomi.channel.commonutils.logger.b.c("receive abtest message. ack it." + hwVarA.a());
        } else if (a(xMPushService, str, ifVarA, hwVarA)) {
            if (hwVarA != null && !TextUtils.isEmpty(hwVarA.a())) {
                if (al.b(ifVarA)) {
                    eoVarA = eo.a(xMPushService.getApplicationContext());
                    strB = ifVarA.b();
                    strB2 = al.b(ifVarA);
                    strA = hwVarA.a();
                    i = 2002;
                    str2 = null;
                } else {
                    if (al.a(ifVarA)) {
                        eoVarA2 = eo.a(xMPushService.getApplicationContext());
                        strB3 = ifVarA.b();
                        strB4 = al.b(ifVarA);
                        strA2 = hwVarA.a();
                        str3 = "7";
                    } else if (al.c(ifVarA)) {
                        eoVarA2 = eo.a(xMPushService.getApplicationContext());
                        strB3 = ifVarA.b();
                        strB4 = al.b(ifVarA);
                        strA2 = hwVarA.a();
                        str3 = "8";
                    } else if (al.d(ifVarA)) {
                        eoVarA = eo.a(xMPushService.getApplicationContext());
                        strB = ifVarA.b();
                        strA = hwVarA.a();
                        i = AuthCode.StatusCode.PERMISSION_NOT_EXIST;
                        str2 = null;
                        strB2 = "E100003";
                    }
                    eoVarA2.a(strB3, strB4, strA2, str3);
                }
                eoVarA.a(strB, strB2, strA, i, str2);
            }
            if (hj.i == ifVarA.a) {
                try {
                    iuVarA = ce.a(xMPushService, ifVarA);
                } catch (iz e) {
                    com.xiaomi.channel.commonutils.logger.b.d("receive a message which action string is not valid. " + e);
                }
                if (iuVarA == null) {
                    com.xiaomi.channel.commonutils.logger.b.d("receiving an un-recognized notification message. " + ifVarA.a);
                } else {
                    objArr = true;
                    if (objArr == true || !(iuVarA instanceof ii)) {
                        zA = true;
                        if (zA) {
                            com.xiaomi.channel.commonutils.logger.b.a("broadcast passthrough message.");
                            xMPushService.sendBroadcast(intent, ah.a(ifVarA.b));
                        }
                    } else {
                        ii iiVar = (ii) iuVarA;
                        if (ht.C.a.equals(iiVar.d) && iiVar.a() != null) {
                            String str5 = iiVar.a().get(bk.M);
                            int i2 = -2;
                            if (!TextUtils.isEmpty(str5)) {
                                try {
                                    i2 = Integer.parseInt(str5);
                                } catch (NumberFormatException e2) {
                                    com.xiaomi.channel.commonutils.logger.b.a("parse notifyId from STRING to INT failed: " + e2);
                                }
                            }
                            if (i2 >= -1) {
                                com.xiaomi.channel.commonutils.logger.b.a("try to retract a message by notifyId=" + i2);
                                al.a(xMPushService, ifVarA.b, i2);
                            } else {
                                String str6 = iiVar.a().get(bk.K);
                                String str7 = iiVar.a().get(bk.L);
                                com.xiaomi.channel.commonutils.logger.b.a("try to retract a message by title&description.");
                                al.a(xMPushService, ifVarA.b, str6, str7);
                            }
                            if (hwVarA != null && hwVarA.a() != null && com.xiaomi.push.m.a((Context) xMPushService) && "pulldown".equals(ay.a((Object) hwVarA.a()))) {
                                ag.a(ifVarA);
                            }
                            a(xMPushService, ifVarA, iiVar);
                        }
                        if (zA) {
                        }
                    }
                }
                objArr = false;
                if (objArr == true) {
                    zA = true;
                    if (zA) {
                    }
                }
            }
        } else {
            eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "9");
        }
        if (ifVarA.a() != hj.b || "com.xiaomi.xmsf".equals(xMPushService.getPackageName())) {
            return;
        }
        xMPushService.stopSelf();
    }

    private static void a(XMPushService xMPushService, byte[] bArr, long j) {
        Map<String, String> mapA;
        if ifVarA = a(bArr);
        if (ifVarA == null) {
            return;
        }
        if (TextUtils.isEmpty(ifVarA.b)) {
            com.xiaomi.channel.commonutils.logger.b.a("receive a mipush message without package name");
            return;
        }
        Long lValueOf = Long.valueOf(System.currentTimeMillis());
        Intent intentA = a(bArr, lValueOf.longValue());
        String strA = al.a(ifVarA);
        hb.a(xMPushService, strA, j, true, true, System.currentTimeMillis());
        hw hwVarA = ifVarA.a();
        if (hwVarA != null && hwVarA.a() != null) {
            com.xiaomi.channel.commonutils.logger.b.e(String.format("receive a message. appid=%1$s, msgid= %2$s, action=%3$s", ifVarA.a(), hwVarA.a(), ifVarA.a()));
        }
        if (hwVarA != null) {
            hwVarA.a("mrt", Long.toString(lValueOf.longValue()));
        }
        String strA2 = "";
        if (hj.e == ifVarA.a() && v.a(xMPushService).a(ifVarA.b) && !al.a(ifVarA)) {
            if (hwVarA != null) {
                strA2 = hwVarA.a();
                if (al.e(ifVarA)) {
                    eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), strA2, "1");
                }
            }
            com.xiaomi.channel.commonutils.logger.b.a("Drop a message for unregistered, msgid=" + strA2);
            a(xMPushService, ifVarA, ifVarA.b);
            return;
        }
        if (hj.e == ifVarA.a() && v.a(xMPushService).c(ifVarA.b) && !al.a(ifVarA)) {
            if (hwVarA != null) {
                strA2 = hwVarA.a();
                if (al.e(ifVarA)) {
                    eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), strA2, "2");
                }
            }
            com.xiaomi.channel.commonutils.logger.b.a("Drop a message for push closed, msgid=" + strA2);
            a(xMPushService, ifVarA, ifVarA.b);
            return;
        }
        if (hj.e == ifVarA.a() && !TextUtils.equals(xMPushService.getPackageName(), "com.xiaomi.xmsf") && !TextUtils.equals(xMPushService.getPackageName(), ifVarA.b)) {
            com.xiaomi.channel.commonutils.logger.b.a("Receive a message with wrong package name, expect " + xMPushService.getPackageName() + ", received " + ifVarA.b);
            a(xMPushService, ifVarA, "unmatched_package", "package should be " + xMPushService.getPackageName() + ", but got " + ifVarA.b);
            if (hwVarA == null || !al.e(ifVarA)) {
                return;
            }
            eo.a(xMPushService.getApplicationContext()).a(ifVarA.b(), al.b(ifVarA), hwVarA.a(), "3");
            return;
        }
        if (hj.e != ifVarA.a() || com.xiaomi.push.j.a() != 999 || !com.xiaomi.push.j.a(xMPushService, strA)) {
            if (hwVarA == null || (mapA = hwVarA.a()) == null || !mapA.containsKey("hide") || !"true".equalsIgnoreCase(mapA.get("hide"))) {
                a(xMPushService, strA, bArr, intentA);
                return;
            } else {
                b(xMPushService, ifVarA);
                return;
            }
        }
        com.xiaomi.channel.commonutils.logger.b.a("Receive the uninstalled dual app message");
        try {
            ah.a(xMPushService, ah.a(strA, ifVarA.a()));
            com.xiaomi.channel.commonutils.logger.b.a("uninstall " + strA + " msg sent");
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("Fail to send Message: " + e.getMessage());
            xMPushService.a(10, e);
        }
        al.a((Context) xMPushService, strA);
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
        if (!com.xiaomi.push.h.a(context, str)) {
            return false;
        }
        Intent intent = new Intent("com.xiaomi.mipush.MESSAGE_ARRIVED");
        intent.putExtra("mipush_payload", bArr);
        intent.setPackage(str);
        try {
            if (context.getPackageManager().queryBroadcastReceivers(intent, 0).isEmpty()) {
                return false;
            }
            com.xiaomi.channel.commonutils.logger.b.a("broadcast message arrived.");
            context.sendBroadcast(intent, ah.a(str));
            return true;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("meet error when broadcast message arrived. " + e);
            return false;
        }
    }

    private static boolean a(if ifVar) {
        return "com.xiaomi.xmsf".equals(ifVar.b) && ifVar.a() != null && ifVar.a().a() != null && ifVar.a().a().containsKey("miui_package_name");
    }

    private static boolean a(XMPushService xMPushService, String str, if ifVar, hw hwVar) {
        boolean z = true;
        if (hwVar != null && hwVar.a() != null && hwVar.a().containsKey("__check_alive") && hwVar.a().containsKey("__awake")) {
            ii iiVar = new ii();
            iiVar.b(ifVar.a());
            iiVar.d(str);
            iiVar.c(ht.H.a);
            iiVar.a(hwVar.a());
            iiVar.a = new HashMap();
            boolean zA = com.xiaomi.push.h.a(xMPushService.getApplicationContext(), str);
            iiVar.a.put("app_running", Boolean.toString(zA));
            if (!zA) {
                boolean z2 = Boolean.parseBoolean(hwVar.a().get("__awake"));
                iiVar.a.put("awaked", Boolean.toString(z2));
                if (!z2) {
                    z = false;
                }
            }
            try {
                ah.a(xMPushService, ah.a(ifVar.b(), ifVar.a(), iiVar, hj.i));
            } catch (gh e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
        return z;
    }

    private static void b(Context context, if ifVar, byte[] bArr) {
        if (al.a(ifVar)) {
            return;
        }
        String strA = al.a(ifVar);
        if (TextUtils.isEmpty(strA) || a(context, strA, bArr)) {
            return;
        }
        eo.a(context).b(strA, al.b(ifVar), ifVar.a().a(), "1");
    }

    private static void b(XMPushService xMPushService, if ifVar) {
        xMPushService.a(new aa(4, xMPushService, ifVar));
    }

    private static boolean b(if ifVar) {
        Map<String, String> mapA = ifVar.a().a();
        return mapA != null && mapA.containsKey("notify_effect");
    }

    private static void c(XMPushService xMPushService, if ifVar) {
        xMPushService.a(new ab(4, xMPushService, ifVar));
    }

    private static boolean c(if ifVar) {
        if (ifVar.a() == null || ifVar.a().a() == null) {
            return false;
        }
        return "1".equals(ifVar.a().a().get("obslete_ads_message"));
    }

    private static void d(XMPushService xMPushService, if ifVar) {
        xMPushService.a(new ac(4, xMPushService, ifVar));
    }

    public void a(Context context, bg.b bVar, boolean z, int i, String str) {
        t tVarA;
        if (z || (tVarA = u.a(context)) == null || !"token-expired".equals(str)) {
            return;
        }
        u.a(context, tVarA.f, tVarA.d, tVarA.e);
    }

    public void a(XMPushService xMPushService, fl flVar, bg.b bVar) {
        try {
            a(xMPushService, flVar.a(bVar.h), flVar.c());
        } catch (IllegalArgumentException e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }

    public void a(XMPushService xMPushService, gn gnVar, bg.b bVar) {
        if (!(gnVar instanceof gm)) {
            com.xiaomi.channel.commonutils.logger.b.a("not a mipush message");
            return;
        }
        gm gmVar = (gm) gnVar;
        gk gkVarA = gmVar.a("s");
        if (gkVarA != null) {
            try {
                a(xMPushService, bp.a(bp.a(bVar.h, gmVar.j()), gkVarA.c()), hb.a(gnVar.a()));
            } catch (IllegalArgumentException e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        }
    }
}
