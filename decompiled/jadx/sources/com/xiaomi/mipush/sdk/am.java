package com.xiaomi.mipush.sdk;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.PushMessageHandler;
import com.xiaomi.push.Cif;
import com.xiaomi.push.bp;
import com.xiaomi.push.bx;
import com.xiaomi.push.eo;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.hv;
import com.xiaomi.push.hw;
import com.xiaomi.push.hx;
import com.xiaomi.push.hz;
import com.xiaomi.push.ia;
import com.xiaomi.push.ii;
import com.xiaomi.push.im;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.ay;
import com.xiaomi.push.service.br;
import com.xiaomi.push.w;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes4.dex */
public class am {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static am f7994a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Object f66a = new Object();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Queue<String> f67a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f68a;

    private am(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f68a = applicationContext;
        if (applicationContext == null) {
            this.f68a = context;
        }
    }

    public static Intent a(Context context, String str, Map<String, String> map, int i) {
        return com.xiaomi.push.service.al.b(context, str, map, i);
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x016c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.xiaomi.mipush.sdk.PushMessageHandler.a a(com.xiaomi.push.Cif r21, boolean r22, byte[] r23, java.lang.String r24, int r25, android.content.Intent r26) {
        /*
            Method dump skipped, instruction units count: 2804
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.mipush.sdk.am.a(com.xiaomi.push.if, boolean, byte[], java.lang.String, int, android.content.Intent):com.xiaomi.mipush.sdk.PushMessageHandler$a");
    }

    private PushMessageHandler.a a(Cif cif, byte[] bArr) {
        String str;
        String str2 = null;
        try {
            iu iuVarA = ai.a(this.f68a, cif);
            if (iuVarA == null) {
                com.xiaomi.channel.commonutils.logger.b.d("message arrived: receiving an un-recognized message. " + cif.f639a);
                return null;
            }
            hj hjVarA = cif.a();
            com.xiaomi.channel.commonutils.logger.b.m43a("message arrived: processing an arrived message, action=" + hjVarA);
            if (an.f7995a[hjVarA.ordinal()] != 1) {
                return null;
            }
            if (cif.m486b()) {
                im imVar = (im) iuVarA;
                hv hvVarA = imVar.a();
                if (hvVarA != null) {
                    if (cif.f640a != null && cif.f640a.m445a() != null) {
                        str2 = cif.f640a.f554a.get("jobkey");
                    }
                    MiPushMessage miPushMessageGenerateMessage = PushMessageHelper.generateMessage(imVar, cif.m478a(), false);
                    miPushMessageGenerateMessage.setArrivedMessage(true);
                    com.xiaomi.channel.commonutils.logger.b.m43a("message arrived: receive a message, msgid=" + hvVarA.m436a() + ", jobkey=" + str2);
                    return miPushMessageGenerateMessage;
                }
                str = "message arrived: receive an empty message without push content, drop it";
            } else {
                str = "message arrived: receiving an un-encrypt message(SendMessage).";
            }
        } catch (u e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            str = "message arrived: receive a message but decrypt failed. report when click.";
        } catch (iz e2) {
            com.xiaomi.channel.commonutils.logger.b.a(e2);
            str = "message arrived: receive a message which action string is not valid. is the reg expired?";
        }
        com.xiaomi.channel.commonutils.logger.b.d(str);
        return null;
    }

    public static am a(Context context) {
        if (f7994a == null) {
            f7994a = new am(context);
        }
        return f7994a;
    }

    private void a() {
        SharedPreferences sharedPreferences = this.f68a.getSharedPreferences("mipush_extra", 0);
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (Math.abs(jCurrentTimeMillis - sharedPreferences.getLong(Constants.SP_KEY_LAST_REINITIALIZE, 0L)) > 1800000) {
            MiPushClient.reInitialize(this.f68a, hx.PackageUnregistered);
            sharedPreferences.edit().putLong(Constants.SP_KEY_LAST_REINITIALIZE, jCurrentTimeMillis).commit();
        }
    }

    public static void a(Context context, String str) {
        synchronized (f66a) {
            f67a.remove(str);
            b.m85a(context);
            SharedPreferences sharedPreferencesA = b.a(context);
            String strA = bp.a(f67a, Constants.ACCEPT_TIME_SEPARATOR_SP);
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            editorEdit.putString("pref_msg_ids", strA);
            com.xiaomi.push.t.a(editorEdit);
        }
    }

    private void a(ia iaVar) {
        String strA = iaVar.a();
        com.xiaomi.channel.commonutils.logger.b.b("receive ack " + strA);
        Map<String, String> mapM459a = iaVar.m459a();
        if (mapM459a != null) {
            String str = mapM459a.get("real_source");
            if (TextUtils.isEmpty(str)) {
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.b("receive ack : messageId = " + strA + "  realSource = " + str);
            bx.a(this.f68a).a(strA, str, Boolean.valueOf(iaVar.f597a == 0));
        }
    }

    private void a(Cif cif) {
        com.xiaomi.channel.commonutils.logger.b.m43a("receive a message but decrypt failed. report now.");
        ii iiVar = new ii(cif.m478a().f552a, false);
        iiVar.c(ht.DecryptMessageFail.f519a);
        iiVar.b(cif.m479a());
        iiVar.d(cif.f646b);
        iiVar.f658a = new HashMap();
        iiVar.f658a.put("regid", MiPushClient.getRegId(this.f68a));
        ao.a(this.f68a).a(iiVar, hj.Notification, false, (hw) null);
    }

    private void a(ii iiVar) {
        ia iaVar = new ia();
        iaVar.c(ht.CancelPushMessageACK.f519a);
        iaVar.a(iiVar.m493a());
        iaVar.a(iiVar.a());
        iaVar.b(iiVar.b());
        iaVar.e(iiVar.c());
        iaVar.a(0L);
        iaVar.d("success clear push message.");
        ao.a(this.f68a).a(iaVar, hj.Notification, false, true, null, false, this.f68a.getPackageName(), b.m85a(this.f68a).m86a(), false);
    }

    private void a(im imVar, Cif cif) {
        hw hwVarM478a = cif.m478a();
        if (hwVarM478a != null) {
            hwVarM478a = br.a(hwVarM478a.m443a());
        }
        hz hzVar = new hz();
        hzVar.b(imVar.b());
        hzVar.a(imVar.m516a());
        hzVar.a(imVar.a().a());
        if (!TextUtils.isEmpty(imVar.c())) {
            hzVar.c(imVar.c());
        }
        if (!TextUtils.isEmpty(imVar.d())) {
            hzVar.d(imVar.d());
        }
        hzVar.a(it.a(this.f68a, cif));
        ao.a(this.f68a).a(hzVar, hj.AckMessage, hwVarM478a);
    }

    private void a(String str, long j, e eVar) {
        au auVarA = l.a(eVar);
        if (auVarA == null) {
            return;
        }
        if (j == 0) {
            synchronized (af.class) {
                if (af.a(this.f68a).m65a(str)) {
                    af.a(this.f68a).c(str);
                    if ("syncing".equals(af.a(this.f68a).a(auVarA))) {
                        af.a(this.f68a).a(auVarA, "synced");
                    }
                }
            }
            return;
        }
        if (!"syncing".equals(af.a(this.f68a).a(auVarA))) {
            af.a(this.f68a).c(str);
            return;
        }
        synchronized (af.class) {
            if (af.a(this.f68a).m65a(str)) {
                if (af.a(this.f68a).a(str) < 10) {
                    af.a(this.f68a).b(str);
                    ao.a(this.f68a).a(str, auVarA, eVar);
                } else {
                    af.a(this.f68a).c(str);
                }
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static boolean m66a(Context context, String str) {
        synchronized (f66a) {
            b.m85a(context);
            SharedPreferences sharedPreferencesA = b.a(context);
            if (f67a == null) {
                String[] strArrSplit = sharedPreferencesA.getString("pref_msg_ids", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                f67a = new LinkedList();
                for (String str2 : strArrSplit) {
                    f67a.add(str2);
                }
            }
            if (f67a.contains(str)) {
                return true;
            }
            f67a.add(str);
            if (f67a.size() > 25) {
                f67a.poll();
            }
            String strA = bp.a(f67a, Constants.ACCEPT_TIME_SEPARATOR_SP);
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            editorEdit.putString("pref_msg_ids", strA);
            com.xiaomi.push.t.a(editorEdit);
            return false;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private boolean m67a(Cif cif) {
        Map<String, String> mapM445a = cif.m478a() == null ? null : cif.m478a().m445a();
        if (mapM445a == null) {
            return false;
        }
        String str = mapM445a.get(Constants.EXTRA_KEY_PUSH_SERVER_ACTION);
        return TextUtils.equals(str, Constants.EXTRA_VALUE_HYBRID_MESSAGE) || TextUtils.equals(str, Constants.EXTRA_VALUE_PLATFORM_MESSAGE);
    }

    private void b(ia iaVar) {
        long j;
        e eVar;
        com.xiaomi.channel.commonutils.logger.b.c("ASSEMBLE_PUSH : " + iaVar.toString());
        String strA = iaVar.a();
        Map<String, String> mapM459a = iaVar.m459a();
        if (mapM459a != null) {
            String str = mapM459a.get(Constants.ASSEMBLE_PUSH_REG_INFO);
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (str.contains("brand:" + ag.FCM.name())) {
                com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive fcm token sync ack");
                i.b(this.f68a, e.ASSEMBLE_PUSH_FCM, str);
                j = iaVar.f597a;
                eVar = e.ASSEMBLE_PUSH_FCM;
            } else {
                if (str.contains("brand:" + ag.HUAWEI.name())) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive hw token sync ack");
                    i.b(this.f68a, e.ASSEMBLE_PUSH_HUAWEI, str);
                    j = iaVar.f597a;
                    eVar = e.ASSEMBLE_PUSH_HUAWEI;
                } else {
                    if (str.contains("brand:" + ag.OPPO.name())) {
                        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive COS token sync ack");
                        i.b(this.f68a, e.ASSEMBLE_PUSH_COS, str);
                        j = iaVar.f597a;
                        eVar = e.ASSEMBLE_PUSH_COS;
                    } else {
                        if (!str.contains("brand:" + ag.VIVO.name())) {
                            return;
                        }
                        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : receive FTOS token sync ack");
                        i.b(this.f68a, e.ASSEMBLE_PUSH_FTOS, str);
                        j = iaVar.f597a;
                        eVar = e.ASSEMBLE_PUSH_FTOS;
                    }
                }
            }
            a(strA, j, eVar);
        }
    }

    private void b(Cif cif) {
        hw hwVarM478a = cif.m478a();
        if (hwVarM478a != null) {
            hwVarM478a = br.a(hwVarM478a.m443a());
        }
        hz hzVar = new hz();
        hzVar.b(cif.m479a());
        hzVar.a(hwVarM478a.m444a());
        hzVar.a(hwVarM478a.m442a());
        if (!TextUtils.isEmpty(hwVarM478a.m449b())) {
            hzVar.c(hwVarM478a.m449b());
        }
        hzVar.a(it.a(this.f68a, cif));
        ao.a(this.f68a).a(hzVar, hj.AckMessage, false, hwVarM478a);
    }

    private void b(ii iiVar) {
        String str;
        Map<String, String> mapM494a = iiVar.m494a();
        if (mapM494a == null) {
            str = "detect failed because null";
        } else {
            String str2 = (String) ay.a(mapM494a, "pkgList", (Object) null);
            if (!TextUtils.isEmpty(str2)) {
                try {
                    List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) this.f68a.getSystemService("activity")).getRunningAppProcesses();
                    if (com.xiaomi.push.w.a(runningAppProcesses)) {
                        com.xiaomi.channel.commonutils.logger.b.m43a("detect failed because params illegal");
                        return;
                    }
                    String[] strArrSplit = str2.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    HashMap map = new HashMap();
                    for (String str3 : strArrSplit) {
                        String[] strArrSplit2 = str3.split(Constants.WAVE_SEPARATOR);
                        if (strArrSplit2.length >= 2) {
                            map.put(strArrSplit2[1], strArrSplit2[0]);
                        }
                    }
                    w.a aVar = new w.a(Constants.WAVE_SEPARATOR, Constants.ACCEPT_TIME_SEPARATOR_SP);
                    for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
                        if (map.containsKey(runningAppProcessInfo.processName)) {
                            aVar.a((String) map.get(runningAppProcessInfo.processName), String.valueOf(runningAppProcessInfo.importance));
                            map.remove(runningAppProcessInfo.processName);
                        }
                    }
                    if (aVar.toString().length() <= 0) {
                        com.xiaomi.channel.commonutils.logger.b.b("detect failed because no alive process");
                        return;
                    }
                    ii iiVar2 = new ii();
                    iiVar2.a(iiVar.m493a());
                    iiVar2.b(iiVar.b());
                    iiVar2.d(iiVar.c());
                    iiVar2.c(ht.DetectAppAliveResult.f519a);
                    iiVar2.f658a = new HashMap();
                    iiVar2.f658a.put("alive", aVar.toString());
                    if (Boolean.parseBoolean((String) ay.a(mapM494a, "reportNotAliveApp", "false")) && map.size() > 0) {
                        w.a aVar2 = new w.a("", Constants.ACCEPT_TIME_SEPARATOR_SP);
                        Iterator it = map.keySet().iterator();
                        while (it.hasNext()) {
                            aVar2.a((String) map.get((String) it.next()), "");
                        }
                        iiVar2.f658a.put("notAlive", aVar2.toString());
                    }
                    ao.a(this.f68a).a(iiVar2, hj.Notification, false, (hw) null);
                    return;
                } catch (Throwable th) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("detect failed " + th);
                    return;
                }
            }
            str = "detect failed because empty";
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(str);
    }

    public PushMessageHandler.a a(Intent intent) {
        String str;
        eo eoVarA;
        String packageName;
        String str2;
        eo eoVarA2;
        String packageName2;
        String str3;
        String action = intent.getAction();
        com.xiaomi.channel.commonutils.logger.b.m43a("receive an intent from server, action=" + action);
        String stringExtra = intent.getStringExtra("mrt");
        if (stringExtra == null) {
            stringExtra = Long.toString(System.currentTimeMillis());
        }
        String stringExtra2 = intent.getStringExtra("messageId");
        int intExtra = intent.getIntExtra("eventMessageType", -1);
        if ("com.xiaomi.mipush.RECEIVE_MESSAGE".equals(action)) {
            byte[] byteArrayExtra = intent.getByteArrayExtra("mipush_payload");
            boolean booleanExtra = intent.getBooleanExtra("mipush_notified", false);
            if (byteArrayExtra == null) {
                com.xiaomi.channel.commonutils.logger.b.d("receiving an empty message, drop");
                eo.a(this.f68a).a(this.f68a.getPackageName(), intent, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_SET_AVATAR);
                return null;
            }
            Cif cif = new Cif();
            try {
                it.a(cif, byteArrayExtra);
                b bVarM85a = b.m85a(this.f68a);
                hw hwVarM478a = cif.m478a();
                if (cif.a() == hj.SendMessage && hwVarM478a != null && !bVarM85a.m96e() && !booleanExtra) {
                    hwVarM478a.a("mrt", stringExtra);
                    hwVarM478a.a("mat", Long.toString(System.currentTimeMillis()));
                    if (m67a(cif)) {
                        com.xiaomi.channel.commonutils.logger.b.b("this is a mina's message, ack later");
                        hwVarM478a.a(Constants.EXTRA_KEY_HYBRID_MESSAGE_TS, String.valueOf(hwVarM478a.m442a()));
                        hwVarM478a.a(Constants.EXTRA_KEY_HYBRID_DEVICE_STATUS, String.valueOf((int) it.a(this.f68a, cif)));
                    } else {
                        b(cif);
                    }
                }
                if (cif.a() == hj.SendMessage && !cif.m486b()) {
                    if (com.xiaomi.push.service.al.m623a(cif)) {
                        Object[] objArr = new Object[2];
                        objArr[0] = cif.b();
                        objArr[1] = hwVarM478a != null ? hwVarM478a.m444a() : "";
                        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("drop an un-encrypted wake-up messages. %1$s, %2$s", objArr));
                        eoVarA2 = eo.a(this.f68a);
                        packageName2 = this.f68a.getPackageName();
                        str3 = String.format("13: %1$s", cif.b());
                    } else {
                        Object[] objArr2 = new Object[2];
                        objArr2[0] = cif.b();
                        objArr2[1] = hwVarM478a != null ? hwVarM478a.m444a() : "";
                        com.xiaomi.channel.commonutils.logger.b.m43a(String.format("drop an un-encrypted messages. %1$s, %2$s", objArr2));
                        eoVarA2 = eo.a(this.f68a);
                        packageName2 = this.f68a.getPackageName();
                        str3 = String.format("14: %1$s", cif.b());
                    }
                    eoVarA2.a(packageName2, intent, str3);
                    s.a(this.f68a, cif, booleanExtra);
                    return null;
                }
                if (cif.a() == hj.SendMessage && cif.m486b() && com.xiaomi.push.service.al.m623a(cif) && (!booleanExtra || hwVarM478a == null || hwVarM478a.m445a() == null || !hwVarM478a.m445a().containsKey("notify_effect"))) {
                    Object[] objArr3 = new Object[2];
                    objArr3[0] = cif.b();
                    objArr3[1] = hwVarM478a != null ? hwVarM478a.m444a() : "";
                    com.xiaomi.channel.commonutils.logger.b.m43a(String.format("drop a wake-up messages which not has 'notify_effect' attr. %1$s, %2$s", objArr3));
                    eo.a(this.f68a).a(this.f68a.getPackageName(), intent, String.format("25: %1$s", cif.b()));
                    s.b(this.f68a, cif, booleanExtra);
                    return null;
                }
                if (bVarM85a.m94c() || cif.f639a == hj.Registration) {
                    if (!bVarM85a.m94c() || !bVarM85a.m97f()) {
                        return a(cif, booleanExtra, byteArrayExtra, stringExtra2, intExtra, intent);
                    }
                    if (cif.f639a != hj.UnRegistration) {
                        s.e(this.f68a, cif, booleanExtra);
                        MiPushClient.unregisterPush(this.f68a);
                    } else if (cif.m486b()) {
                        bVarM85a.m87a();
                        MiPushClient.clearExtras(this.f68a);
                        PushMessageHandler.a();
                    } else {
                        com.xiaomi.channel.commonutils.logger.b.d("receiving an un-encrypt unregistration message");
                    }
                } else {
                    if (com.xiaomi.push.service.al.m623a(cif)) {
                        return a(cif, booleanExtra, byteArrayExtra, stringExtra2, intExtra, intent);
                    }
                    s.e(this.f68a, cif, booleanExtra);
                    boolean zM95d = bVarM85a.m95d();
                    com.xiaomi.channel.commonutils.logger.b.d("receive message without registration. need re-register!registered?" + zM95d);
                    eo.a(this.f68a).a(this.f68a.getPackageName(), intent, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_WPA_STATE);
                    if (zM95d) {
                        a();
                    }
                }
            } catch (iz e) {
                e = e;
                eoVarA = eo.a(this.f68a);
                packageName = this.f68a.getPackageName();
                str2 = com.tencent.connect.common.Constants.VIA_REPORT_TYPE_START_WAP;
                eoVarA.a(packageName, intent, str2);
                com.xiaomi.channel.commonutils.logger.b.a(e);
            } catch (Exception e2) {
                e = e2;
                eoVarA = eo.a(this.f68a);
                packageName = this.f68a.getPackageName();
                str2 = com.tencent.connect.common.Constants.VIA_REPORT_TYPE_START_GROUP;
                eoVarA.a(packageName, intent, str2);
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        } else {
            if ("com.xiaomi.mipush.ERROR".equals(action)) {
                MiPushCommandMessage miPushCommandMessage = new MiPushCommandMessage();
                Cif cif2 = new Cif();
                try {
                    byte[] byteArrayExtra2 = intent.getByteArrayExtra("mipush_payload");
                    if (byteArrayExtra2 != null) {
                        it.a(cif2, byteArrayExtra2);
                    }
                } catch (iz unused) {
                }
                miPushCommandMessage.setCommand(String.valueOf(cif2.a()));
                miPushCommandMessage.setResultCode(intent.getIntExtra("mipush_error_code", 0));
                miPushCommandMessage.setReason(intent.getStringExtra("mipush_error_msg"));
                com.xiaomi.channel.commonutils.logger.b.d("receive a error message. code = " + intent.getIntExtra("mipush_error_code", 0) + ", msg= " + intent.getStringExtra("mipush_error_msg"));
                return miPushCommandMessage;
            }
            if ("com.xiaomi.mipush.MESSAGE_ARRIVED".equals(action)) {
                byte[] byteArrayExtra3 = intent.getByteArrayExtra("mipush_payload");
                if (byteArrayExtra3 == null) {
                    com.xiaomi.channel.commonutils.logger.b.d("message arrived: receiving an empty message, drop");
                    return null;
                }
                Cif cif3 = new Cif();
                try {
                    it.a(cif3, byteArrayExtra3);
                    b bVarM85a2 = b.m85a(this.f68a);
                    if (com.xiaomi.push.service.al.m623a(cif3)) {
                        str = "message arrived: receive ignore reg message, ignore!";
                    } else if (!bVarM85a2.m94c()) {
                        str = "message arrived: receive message without registration. need unregister or re-register!";
                    } else {
                        if (!bVarM85a2.m94c() || !bVarM85a2.m97f()) {
                            return a(cif3, byteArrayExtra3);
                        }
                        str = "message arrived: app info is invalidated";
                    }
                    com.xiaomi.channel.commonutils.logger.b.d(str);
                } catch (Exception e3) {
                    com.xiaomi.channel.commonutils.logger.b.d("fail to deal with arrived message. " + e3);
                }
            }
        }
        return null;
    }

    public List<String> a(TimeZone timeZone, TimeZone timeZone2, List<String> list) {
        if (timeZone.equals(timeZone2)) {
            return list;
        }
        long rawOffset = ((timeZone.getRawOffset() - timeZone2.getRawOffset()) / 1000) / 60;
        long j = ((((Long.parseLong(list.get(0).split(Constants.COLON_SEPARATOR)[0]) * 60) + Long.parseLong(list.get(0).split(Constants.COLON_SEPARATOR)[1])) - rawOffset) + 1440) % 1440;
        long j2 = ((((Long.parseLong(list.get(1).split(Constants.COLON_SEPARATOR)[0]) * 60) + Long.parseLong(list.get(1).split(Constants.COLON_SEPARATOR)[1])) - rawOffset) + 1440) % 1440;
        ArrayList arrayList = new ArrayList();
        arrayList.add(String.format("%1$02d:%2$02d", Long.valueOf(j / 60), Long.valueOf(j % 60)));
        arrayList.add(String.format("%1$02d:%2$02d", Long.valueOf(j2 / 60), Long.valueOf(j2 % 60)));
        return arrayList;
    }
}
