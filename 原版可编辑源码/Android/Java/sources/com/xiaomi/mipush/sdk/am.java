package com.xiaomi.mipush.sdk;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.huawei.hms.support.api.entity.auth.AuthCode;
import com.kwad.library.solder.lib.ext.PluginError;
import com.xiaomi.mipush.sdk.PushMessageHandler;
import com.xiaomi.push.bp;
import com.xiaomi.push.bx;
import com.xiaomi.push.db;
import com.xiaomi.push.en;
import com.xiaomi.push.eo;
import com.xiaomi.push.ey;
import com.xiaomi.push.hj;
import com.xiaomi.push.ho;
import com.xiaomi.push.ht;
import com.xiaomi.push.hv;
import com.xiaomi.push.hw;
import com.xiaomi.push.hx;
import com.xiaomi.push.hz;
import com.xiaomi.push.ia;
import com.xiaomi.push.ie;
import com.xiaomi.push.if;
import com.xiaomi.push.ig;
import com.xiaomi.push.ih;
import com.xiaomi.push.ii;
import com.xiaomi.push.ik;
import com.xiaomi.push.im;
import com.xiaomi.push.io;
import com.xiaomi.push.iq;
import com.xiaomi.push.is;
import com.xiaomi.push.it;
import com.xiaomi.push.iu;
import com.xiaomi.push.iz;
import com.xiaomi.push.service.ay;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.service.bb;
import com.xiaomi.push.service.bk;
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

public class am {
    private static am a;
    private static Object a = new Object();
    private static Queue<String> a;
    private Context a;

    private am(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.a = applicationContext;
        if (applicationContext == null) {
            this.a = context;
        }
    }

    public static Intent a(Context context, String str, Map<String, String> map, int i) {
        return com.xiaomi.push.service.al.b(context, str, map, i);
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x016c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private PushMessageHandler.a a(if ifVar, boolean z, byte[] bArr, String str, int i, Intent intent) {
        eo eoVarA;
        String packageName;
        String strA;
        String str2;
        String strA2;
        String str3;
        MiPushMessage miPushMessage;
        eo eoVarA2;
        String packageName2;
        String strA3;
        int i2;
        String str4;
        ArrayList arrayList = null;
        try {
            iu iuVarA = ai.a(this.a, ifVar);
            if (iuVarA == null) {
                com.xiaomi.channel.commonutils.logger.b.d("receiving an un-recognized message. " + ifVar.a);
                eo.a(this.a).b(this.a.getPackageName(), en.a(i), str, "18");
                s.c(this.a, ifVar, z);
                return null;
            }
            hj hjVarA = ifVar.a();
            com.xiaomi.channel.commonutils.logger.b.a("processing a message, action=" + hjVarA);
            switch (an.a[hjVarA.ordinal()]) {
                case 1:
                    if (!ifVar.b()) {
                        com.xiaomi.channel.commonutils.logger.b.d("receiving an un-encrypt message(SendMessage).");
                        return null;
                    }
                    if (b.a(this.a).e() && !z) {
                        com.xiaomi.channel.commonutils.logger.b.a("receive a message in pause state. drop it");
                        eo.a(this.a).a(this.a.getPackageName(), en.a(i), str, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_SET_AVATAR);
                        return null;
                    }
                    im imVar = (im) iuVarA;
                    hv hvVarA = imVar.a();
                    if (hvVarA == null) {
                        com.xiaomi.channel.commonutils.logger.b.d("receive an empty message without push content, drop it");
                        eo.a(this.a).b(this.a.getPackageName(), en.a(i), str, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_DATALINE);
                        s.d(this.a, ifVar, z);
                        return null;
                    }
                    int intExtra = intent.getIntExtra("notification_click_button", 0);
                    if (z) {
                        if (com.xiaomi.push.service.al.a(ifVar)) {
                            MiPushClient.reportIgnoreRegMessageClicked(this.a, hvVarA.a(), ifVar.a(), ifVar.b, hvVarA.b());
                        } else {
                            hw hwVar = ifVar.a() != null ? new hw(ifVar.a()) : new hw();
                            if (hwVar.a() == null) {
                                hwVar.a(new HashMap());
                            }
                            hwVar.a().put("notification_click_button", String.valueOf(intExtra));
                            MiPushClient.reportMessageClicked(this.a, hvVarA.a(), hwVar, hvVarA.b());
                        }
                    }
                    if (!z) {
                        if (!TextUtils.isEmpty(imVar.d()) && MiPushClient.aliasSetTime(this.a, imVar.d()) < 0) {
                            MiPushClient.addAlias(this.a, imVar.d());
                        } else if (!TextUtils.isEmpty(imVar.c()) && MiPushClient.topicSubscribedTime(this.a, imVar.c()) < 0) {
                            MiPushClient.addTopic(this.a, imVar.c());
                        }
                    }
                    if (ifVar.a == null || ifVar.a.a() == null) {
                        strA2 = null;
                        str3 = null;
                    } else {
                        strA2 = ifVar.a.a.get("jobkey");
                        str3 = strA2;
                    }
                    if (TextUtils.isEmpty(strA2)) {
                        strA2 = hvVarA.a();
                    }
                    if (z || !a(this.a, strA2)) {
                        MiPushMessage miPushMessageGenerateMessage = PushMessageHelper.generateMessage(imVar, ifVar.a(), z);
                        if (miPushMessageGenerateMessage.getPassThrough() == 0 && !z && com.xiaomi.push.service.al.a(miPushMessageGenerateMessage.getExtra())) {
                            com.xiaomi.push.service.al.a(this.a, ifVar, bArr);
                            return null;
                        }
                        com.xiaomi.channel.commonutils.logger.b.a("receive a message, msgid=" + hvVarA.a() + ", jobkey=" + strA2 + ", btn=" + intExtra);
                        String strA4 = com.xiaomi.push.service.al.a(miPushMessageGenerateMessage.getExtra(), intExtra);
                        if (z && miPushMessageGenerateMessage.getExtra() != null && !TextUtils.isEmpty(strA4)) {
                            Map<String, String> extra = miPushMessageGenerateMessage.getExtra();
                            if (intExtra != 0 && ifVar.a() != null) {
                                ao.a(this.a).a(ifVar.a().c(), intExtra);
                            }
                            if (com.xiaomi.push.service.al.a(ifVar)) {
                                Intent intentA = a(this.a, ifVar.b, extra, intExtra);
                                intentA.putExtra("eventMessageType", i);
                                intentA.putExtra("messageId", str);
                                intentA.putExtra("jobkey", str3);
                                if (intentA == null) {
                                    com.xiaomi.channel.commonutils.logger.b.a("Getting Intent fail from ignore reg message. ");
                                    eo.a(this.a).b(this.a.getPackageName(), en.a(i), str, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_SHARE_TO_TROOPBAR);
                                    return null;
                                }
                                String strC = hvVarA.c();
                                if (!TextUtils.isEmpty(strC)) {
                                    intentA.putExtra("payload", strC);
                                }
                                this.a.startActivity(intentA);
                                s.a(this.a, ifVar);
                                eo.a(this.a).a(this.a.getPackageName(), en.a(i), str, PluginError.ERROR_INS_INSTALL_PATH, strA4);
                                return null;
                            }
                            Context context = this.a;
                            Intent intentA2 = a(context, context.getPackageName(), extra, intExtra);
                            if (intentA2 == null) {
                                return null;
                            }
                            if (!strA4.equals(bk.c)) {
                                intentA2.putExtra(PushMessageHelper.KEY_MESSAGE, miPushMessageGenerateMessage);
                                intentA2.putExtra("eventMessageType", i);
                                intentA2.putExtra("messageId", str);
                                intentA2.putExtra("jobkey", str3);
                            }
                            this.a.startActivity(intentA2);
                            s.a(this.a, ifVar);
                            com.xiaomi.channel.commonutils.logger.b.a("start activity succ");
                            eo.a(this.a).a(this.a.getPackageName(), en.a(i), str, 1006, strA4);
                            if (!strA4.equals(bk.c)) {
                                return null;
                            }
                            eo.a(this.a).a(this.a.getPackageName(), en.a(i), str, "13");
                            return null;
                        }
                        miPushMessage = miPushMessageGenerateMessage;
                    } else {
                        com.xiaomi.channel.commonutils.logger.b.a("drop a duplicate message, key=" + strA2);
                        eo.a(this.a).c(this.a.getPackageName(), en.a(i), str, "2:" + strA2);
                        miPushMessage = null;
                    }
                    if (ifVar.a() == null && !z) {
                        a(imVar, ifVar);
                    }
                    return miPushMessage;
                case 2:
                    ik ikVar = (ik) iuVarA;
                    String str5 = b.a(this.a).a;
                    if (TextUtils.isEmpty(str5) || !TextUtils.equals(str5, ikVar.a())) {
                        com.xiaomi.channel.commonutils.logger.b.a("bad Registration result:");
                        eo.a(this.a).b(this.a.getPackageName(), en.a(i), str, "21");
                        return null;
                    }
                    b.a(this.a).a = null;
                    if (ikVar.a == 0) {
                        b.a(this.a).b(ikVar.e, ikVar.f, ikVar.l);
                        FCMPushHelper.persistIfXmsfSupDecrypt(this.a);
                        eoVarA2 = eo.a(this.a);
                        packageName2 = this.a.getPackageName();
                        strA3 = en.a(i);
                        i2 = AuthCode.StatusCode.PERMISSION_EXPIRED;
                        str4 = "1";
                    } else {
                        eoVarA2 = eo.a(this.a);
                        packageName2 = this.a.getPackageName();
                        strA3 = en.a(i);
                        i2 = AuthCode.StatusCode.PERMISSION_EXPIRED;
                        str4 = "2";
                    }
                    eoVarA2.a(packageName2, strA3, str, i2, str4);
                    if (!TextUtils.isEmpty(ikVar.e)) {
                        arrayList = new ArrayList();
                        arrayList.add(ikVar.e);
                    }
                    MiPushCommandMessage miPushCommandMessageGenerateCommandMessage = PushMessageHelper.generateCommandMessage(ey.a.a, arrayList, ikVar.a, ikVar.d, null, ikVar.a());
                    ao.a(this.a).d();
                    return miPushCommandMessageGenerateCommandMessage;
                case 3:
                    if (!ifVar.b()) {
                        com.xiaomi.channel.commonutils.logger.b.d("receiving an un-encrypt message(UnRegistration).");
                        return null;
                    }
                    if (((iq) iuVarA).a == 0) {
                        b.a(this.a).a();
                        MiPushClient.clearExtras(this.a);
                    }
                    PushMessageHandler.a();
                    break;
                    break;
                case 4:
                    io ioVar = (io) iuVarA;
                    if (ioVar.a == 0) {
                        MiPushClient.addTopic(this.a, ioVar.b());
                    }
                    if (!TextUtils.isEmpty(ioVar.b())) {
                        arrayList = new ArrayList();
                        arrayList.add(ioVar.b());
                    }
                    com.xiaomi.channel.commonutils.logger.b.e("resp-cmd:" + ey.g + ", " + ioVar.a());
                    return PushMessageHelper.generateCommandMessage(ey.g.a, arrayList, ioVar.a, ioVar.d, ioVar.c(), null);
                case 5:
                    is isVar = (is) iuVarA;
                    if (isVar.a == 0) {
                        MiPushClient.removeTopic(this.a, isVar.b());
                    }
                    if (!TextUtils.isEmpty(isVar.b())) {
                        arrayList = new ArrayList();
                        arrayList.add(isVar.b());
                    }
                    com.xiaomi.channel.commonutils.logger.b.e("resp-cmd:" + ey.h + ", " + isVar.a());
                    return PushMessageHelper.generateCommandMessage(ey.h.a, arrayList, isVar.a, isVar.d, isVar.c(), null);
                case 6:
                    db.a(this.a.getPackageName(), this.a, iuVarA, hj.j, bArr.length);
                    ie ieVar = (ie) iuVarA;
                    String strB = ieVar.b();
                    List<String> listA = ieVar.a();
                    if (ieVar.a == 0) {
                        if (TextUtils.equals(strB, ey.i.a) && listA != null && listA.size() > 1) {
                            MiPushClient.addAcceptTime(this.a, listA.get(0), listA.get(1));
                            if ("00:00".equals(listA.get(0)) && "00:00".equals(listA.get(1))) {
                                b.a(this.a).a(true);
                            } else {
                                b.a(this.a).a(false);
                            }
                            listA = a(TimeZone.getTimeZone("GMT+08"), TimeZone.getDefault(), listA);
                        } else if (TextUtils.equals(strB, ey.c.a) && listA != null && listA.size() > 0) {
                            MiPushClient.addAlias(this.a, listA.get(0));
                        } else if (TextUtils.equals(strB, ey.d.a) && listA != null && listA.size() > 0) {
                            MiPushClient.removeAlias(this.a, listA.get(0));
                        } else if (TextUtils.equals(strB, ey.e.a) && listA != null && listA.size() > 0) {
                            MiPushClient.addAccount(this.a, listA.get(0));
                        } else if (TextUtils.equals(strB, ey.f.a) && listA != null && listA.size() > 0) {
                            MiPushClient.removeAccount(this.a, listA.get(0));
                        } else if (TextUtils.equals(strB, ey.j.a)) {
                            return null;
                        }
                    }
                    List<String> list = listA;
                    com.xiaomi.channel.commonutils.logger.b.e("resp-cmd:" + strB + ", " + ieVar.a());
                    return PushMessageHelper.generateCommandMessage(strB, list, ieVar.a, ieVar.d, ieVar.c(), null);
                case 7:
                    db.a(this.a.getPackageName(), this.a, iuVarA, hj.i, bArr.length);
                    if (!(iuVarA instanceof ia)) {
                        if (iuVarA instanceof ii) {
                            ii iiVar = (ii) iuVarA;
                            if ("registration id expired".equalsIgnoreCase(iiVar.d)) {
                                List<String> allAlias = MiPushClient.getAllAlias(this.a);
                                List<String> allTopic = MiPushClient.getAllTopic(this.a);
                                List<String> allUserAccount = MiPushClient.getAllUserAccount(this.a);
                                String acceptTime = MiPushClient.getAcceptTime(this.a);
                                com.xiaomi.channel.commonutils.logger.b.e("resp-type:" + iiVar.d + ", " + iiVar.a());
                                MiPushClient.reInitialize(this.a, hx.a);
                                for (String str6 : allAlias) {
                                    MiPushClient.removeAlias(this.a, str6);
                                    MiPushClient.setAlias(this.a, str6, null);
                                }
                                for (String str7 : allTopic) {
                                    MiPushClient.removeTopic(this.a, str7);
                                    MiPushClient.subscribe(this.a, str7, null);
                                }
                                for (String str8 : allUserAccount) {
                                    MiPushClient.removeAccount(this.a, str8);
                                    MiPushClient.setUserAccount(this.a, str8, null);
                                }
                                String[] strArrSplit = acceptTime.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                                if (strArrSplit.length == 2) {
                                    MiPushClient.removeAcceptTime(this.a);
                                    MiPushClient.addAcceptTime(this.a, strArrSplit[0], strArrSplit[1]);
                                }
                            } else if (ht.h.a.equalsIgnoreCase(iiVar.d)) {
                                if (iiVar.a() != null && iiVar.a().containsKey("app_version")) {
                                    b.a(this.a).a(iiVar.a().get("app_version"));
                                }
                            } else if (!ht.m.a.equalsIgnoreCase(iiVar.d)) {
                                try {
                                    if (ht.n.a.equalsIgnoreCase(iiVar.d)) {
                                        ih ihVar = new ih();
                                        it.a(ihVar, iiVar.a());
                                        bb.a(ba.a(this.a), ihVar);
                                    } else if (ht.o.a.equalsIgnoreCase(iiVar.d)) {
                                        ig igVar = new ig();
                                        it.a(igVar, iiVar.a());
                                        bb.a(ba.a(this.a), igVar);
                                    } else if (ht.w.a.equalsIgnoreCase(iiVar.d)) {
                                        av.a(this.a, iiVar);
                                    } else if (ht.x.a.equalsIgnoreCase(iiVar.d)) {
                                        com.xiaomi.channel.commonutils.logger.b.a("receive force sync notification");
                                        av.a(this.a, false);
                                    } else if (ht.C.a.equals(iiVar.d)) {
                                        com.xiaomi.channel.commonutils.logger.b.e("resp-type:" + iiVar.d + ", " + iiVar.a());
                                        if (iiVar.a() != null) {
                                            int i3 = -2;
                                            if (iiVar.a().containsKey(bk.M)) {
                                                String str9 = iiVar.a().get(bk.M);
                                                if (!TextUtils.isEmpty(str9)) {
                                                    try {
                                                        i3 = Integer.parseInt(str9);
                                                    } catch (NumberFormatException e) {
                                                        e.printStackTrace();
                                                    }
                                                }
                                            }
                                            if (i3 >= -1) {
                                                MiPushClient.clearNotification(this.a, i3);
                                            } else {
                                                MiPushClient.clearNotification(this.a, iiVar.a().containsKey(bk.K) ? iiVar.a().get(bk.K) : "", iiVar.a().containsKey(bk.L) ? iiVar.a().get(bk.L) : "");
                                            }
                                        }
                                        a(iiVar);
                                    } else {
                                        try {
                                            if (ht.K.a.equals(iiVar.d)) {
                                                ik ikVar2 = new ik();
                                                it.a(ikVar2, iiVar.a());
                                                MiPushClient4Hybrid.onReceiveRegisterResult(this.a, ikVar2);
                                            } else if (ht.M.a.equals(iiVar.d)) {
                                                iq iqVar = new iq();
                                                it.a(iqVar, iiVar.a());
                                                MiPushClient4Hybrid.onReceiveUnregisterResult(this.a, iqVar);
                                            } else if (!ht.P.a.equals(iiVar.d)) {
                                                if (ht.af.a.equals(iiVar.d)) {
                                                    com.xiaomi.channel.commonutils.logger.b.b("receive detect msg");
                                                    b(iiVar);
                                                } else if (com.xiaomi.push.service.i.a(iiVar)) {
                                                    com.xiaomi.channel.commonutils.logger.b.b("receive notification handle by cpra");
                                                }
                                            }
                                        } catch (iz e2) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e2);
                                        }
                                    }
                                    break;
                                } catch (iz unused) {
                                }
                            } else if (ifVar.b() && iiVar.a() != null && iiVar.a().containsKey("awake_info")) {
                                String str10 = iiVar.a().get("awake_info");
                                Context context2 = this.a;
                                o.a(context2, b.a(context2).a(), ba.a(this.a).a(ho.aF.a(), 0), str10);
                            }
                        }
                        break;
                    } else {
                        ia iaVar = (ia) iuVarA;
                        String strA5 = iaVar.a();
                        com.xiaomi.channel.commonutils.logger.b.e("resp-type:" + iaVar.b() + ", code:" + iaVar.a + ", " + strA5);
                        if (ht.E.a.equalsIgnoreCase(iaVar.d)) {
                            if (iaVar.a == 0) {
                                synchronized (af.class) {
                                    if (af.a(this.a).a(strA5)) {
                                        af.a(this.a).c(strA5);
                                        if ("syncing".equals(af.a(this.a).a(au.a))) {
                                            af.a(this.a).a(au.a, "synced");
                                            MiPushClient.clearNotification(this.a);
                                            MiPushClient.clearLocalNotificationType(this.a);
                                            PushMessageHandler.a();
                                            ao.a(this.a).b();
                                        }
                                    }
                                }
                            } else if ("syncing".equals(af.a(this.a).a(au.a))) {
                                synchronized (af.class) {
                                    if (af.a(this.a).a(strA5)) {
                                        if (af.a(this.a).a(strA5) < 10) {
                                            af.a(this.a).b(strA5);
                                            ao.a(this.a).a(true, strA5);
                                        } else {
                                            af.a(this.a).c(strA5);
                                        }
                                    }
                                }
                            } else {
                                af.a(this.a).c(strA5);
                            }
                            break;
                        } else if (!ht.F.a.equalsIgnoreCase(iaVar.d)) {
                            if (ht.N.a.equalsIgnoreCase(iaVar.d)) {
                                b(iaVar);
                            } else if (ht.B.a.equalsIgnoreCase(iaVar.d)) {
                                a(iaVar);
                            }
                            break;
                        } else if (iaVar.a == 0) {
                            synchronized (af.class) {
                                if (af.a(this.a).a(strA5)) {
                                    af.a(this.a).c(strA5);
                                    if ("syncing".equals(af.a(this.a).a(au.b))) {
                                        af.a(this.a).a(au.b, "synced");
                                    }
                                }
                                break;
                            }
                            break;
                        } else if ("syncing".equals(af.a(this.a).a(au.b))) {
                            synchronized (af.class) {
                                if (af.a(this.a).a(strA5)) {
                                    if (af.a(this.a).a(strA5) < 10) {
                                        af.a(this.a).b(strA5);
                                        ao.a(this.a).a(false, strA5);
                                    } else {
                                        af.a(this.a).c(strA5);
                                    }
                                }
                                break;
                            }
                            break;
                        }
                    }
                    break;
            }
            return null;
        } catch (u e3) {
            com.xiaomi.channel.commonutils.logger.b.a(e3);
            a(ifVar);
            eoVarA = eo.a(this.a);
            packageName = this.a.getPackageName();
            strA = en.a(i);
            str2 = com.tencent.connect.common.Constants.VIA_ACT_TYPE_NINETEEN;
            eoVarA.b(packageName, strA, str, str2);
            s.c(this.a, ifVar, z);
            return null;
        } catch (iz e4) {
            com.xiaomi.channel.commonutils.logger.b.a(e4);
            com.xiaomi.channel.commonutils.logger.b.d("receive a message which action string is not valid. is the reg expired?");
            eoVarA = eo.a(this.a);
            packageName = this.a.getPackageName();
            strA = en.a(i);
            str2 = "20";
            eoVarA.b(packageName, strA, str, str2);
            s.c(this.a, ifVar, z);
            return null;
        }
    }

    private PushMessageHandler.a a(if ifVar, byte[] bArr) {
        String str;
        String str2 = null;
        try {
            iu iuVarA = ai.a(this.a, ifVar);
            if (iuVarA == null) {
                com.xiaomi.channel.commonutils.logger.b.d("message arrived: receiving an un-recognized message. " + ifVar.a);
                return null;
            }
            hj hjVarA = ifVar.a();
            com.xiaomi.channel.commonutils.logger.b.a("message arrived: processing an arrived message, action=" + hjVarA);
            if (an.a[hjVarA.ordinal()] != 1) {
                return null;
            }
            if (ifVar.b()) {
                im imVar = (im) iuVarA;
                hv hvVarA = imVar.a();
                if (hvVarA != null) {
                    if (ifVar.a != null && ifVar.a.a() != null) {
                        str2 = ifVar.a.a.get("jobkey");
                    }
                    MiPushMessage miPushMessageGenerateMessage = PushMessageHelper.generateMessage(imVar, ifVar.a(), false);
                    miPushMessageGenerateMessage.setArrivedMessage(true);
                    com.xiaomi.channel.commonutils.logger.b.a("message arrived: receive a message, msgid=" + hvVarA.a() + ", jobkey=" + str2);
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
        if (a == null) {
            a = new am(context);
        }
        return a;
    }

    private void a() {
        SharedPreferences sharedPreferences = this.a.getSharedPreferences("mipush_extra", 0);
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (Math.abs(jCurrentTimeMillis - sharedPreferences.getLong(Constants.SP_KEY_LAST_REINITIALIZE, 0L)) > 1800000) {
            MiPushClient.reInitialize(this.a, hx.b);
            sharedPreferences.edit().putLong(Constants.SP_KEY_LAST_REINITIALIZE, jCurrentTimeMillis).commit();
        }
    }

    public static void a(Context context, String str) {
        synchronized (a) {
            a.remove(str);
            b.a(context);
            SharedPreferences sharedPreferencesA = b.a(context);
            String strA = bp.a(a, Constants.ACCEPT_TIME_SEPARATOR_SP);
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            editorEdit.putString("pref_msg_ids", strA);
            com.xiaomi.push.t.a(editorEdit);
        }
    }

    private void a(ia iaVar) {
        String strA = iaVar.a();
        com.xiaomi.channel.commonutils.logger.b.b("receive ack " + strA);
        Map<String, String> mapA = iaVar.a();
        if (mapA != null) {
            String str = mapA.get("real_source");
            if (TextUtils.isEmpty(str)) {
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.b("receive ack : messageId = " + strA + "  realSource = " + str);
            bx.a(this.a).a(strA, str, Boolean.valueOf(iaVar.a == 0));
        }
    }

    private void a(if ifVar) {
        com.xiaomi.channel.commonutils.logger.b.a("receive a message but decrypt failed. report now.");
        ii iiVar = new ii(ifVar.a().a, false);
        iiVar.c(ht.u.a);
        iiVar.b(ifVar.a());
        iiVar.d(ifVar.b);
        iiVar.a = new HashMap();
        iiVar.a.put("regid", MiPushClient.getRegId(this.a));
        ao.a(this.a).a(iiVar, hj.i, false, (hw) null);
    }

    private void a(ii iiVar) {
        ia iaVar = new ia();
        iaVar.c(ht.D.a);
        iaVar.a(iiVar.a());
        iaVar.a(iiVar.a());
        iaVar.b(iiVar.b());
        iaVar.e(iiVar.c());
        iaVar.a(0L);
        iaVar.d("success clear push message.");
        ao.a(this.a).a(iaVar, hj.i, false, true, null, false, this.a.getPackageName(), b.a(this.a).a(), false);
    }

    private void a(im imVar, if ifVar) {
        hw hwVarA = ifVar.a();
        if (hwVarA != null) {
            hwVarA = br.a(hwVarA.a());
        }
        hz hzVar = new hz();
        hzVar.b(imVar.b());
        hzVar.a(imVar.a());
        hzVar.a(imVar.a().a());
        if (!TextUtils.isEmpty(imVar.c())) {
            hzVar.c(imVar.c());
        }
        if (!TextUtils.isEmpty(imVar.d())) {
            hzVar.d(imVar.d());
        }
        hzVar.a(it.a(this.a, ifVar));
        ao.a(this.a).a(hzVar, hj.f, hwVarA);
    }

    private void a(String str, long j, e eVar) {
        au auVarA = l.a(eVar);
        if (auVarA == null) {
            return;
        }
        if (j == 0) {
            synchronized (af.class) {
                if (af.a(this.a).a(str)) {
                    af.a(this.a).c(str);
                    if ("syncing".equals(af.a(this.a).a(auVarA))) {
                        af.a(this.a).a(auVarA, "synced");
                    }
                }
            }
            return;
        }
        if (!"syncing".equals(af.a(this.a).a(auVarA))) {
            af.a(this.a).c(str);
            return;
        }
        synchronized (af.class) {
            if (af.a(this.a).a(str)) {
                if (af.a(this.a).a(str) < 10) {
                    af.a(this.a).b(str);
                    ao.a(this.a).a(str, auVarA, eVar);
                } else {
                    af.a(this.a).c(str);
                }
            }
        }
    }

    private static boolean a(Context context, String str) {
        synchronized (a) {
            b.a(context);
            SharedPreferences sharedPreferencesA = b.a(context);
            if (a == null) {
                String[] strArrSplit = sharedPreferencesA.getString("pref_msg_ids", "").split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                a = new LinkedList();
                for (String str2 : strArrSplit) {
                    a.add(str2);
                }
            }
            if (a.contains(str)) {
                return true;
            }
            a.add(str);
            if (a.size() > 25) {
                a.poll();
            }
            String strA = bp.a(a, Constants.ACCEPT_TIME_SEPARATOR_SP);
            SharedPreferences.Editor editorEdit = sharedPreferencesA.edit();
            editorEdit.putString("pref_msg_ids", strA);
            com.xiaomi.push.t.a(editorEdit);
            return false;
        }
    }

    private boolean a(if ifVar) {
        Map<String, String> mapA = ifVar.a() == null ? null : ifVar.a().a();
        if (mapA == null) {
            return false;
        }
        String str = mapA.get(Constants.EXTRA_KEY_PUSH_SERVER_ACTION);
        return TextUtils.equals(str, Constants.EXTRA_VALUE_HYBRID_MESSAGE) || TextUtils.equals(str, Constants.EXTRA_VALUE_PLATFORM_MESSAGE);
    }

    private void b(ia iaVar) {
        long j;
        e eVar;
        com.xiaomi.channel.commonutils.logger.b.c("ASSEMBLE_PUSH : " + iaVar.toString());
        String strA = iaVar.a();
        Map<String, String> mapA = iaVar.a();
        if (mapA != null) {
            String str = mapA.get(Constants.ASSEMBLE_PUSH_REG_INFO);
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (str.contains("brand:" + ag.c.name())) {
                com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive fcm token sync ack");
                i.b(this.a, e.b, str);
                j = iaVar.a;
                eVar = e.b;
            } else {
                if (str.contains("brand:" + ag.a.name())) {
                    com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive hw token sync ack");
                    i.b(this.a, e.a, str);
                    j = iaVar.a;
                    eVar = e.a;
                } else {
                    if (str.contains("brand:" + ag.d.name())) {
                        com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive COS token sync ack");
                        i.b(this.a, e.c, str);
                        j = iaVar.a;
                        eVar = e.c;
                    } else {
                        if (!str.contains("brand:" + ag.e.name())) {
                            return;
                        }
                        com.xiaomi.channel.commonutils.logger.b.a("ASSEMBLE_PUSH : receive FTOS token sync ack");
                        i.b(this.a, e.d, str);
                        j = iaVar.a;
                        eVar = e.d;
                    }
                }
            }
            a(strA, j, eVar);
        }
    }

    private void b(if ifVar) {
        hw hwVarA = ifVar.a();
        if (hwVarA != null) {
            hwVarA = br.a(hwVarA.a());
        }
        hz hzVar = new hz();
        hzVar.b(ifVar.a());
        hzVar.a(hwVarA.a());
        hzVar.a(hwVarA.a());
        if (!TextUtils.isEmpty(hwVarA.b())) {
            hzVar.c(hwVarA.b());
        }
        hzVar.a(it.a(this.a, ifVar));
        ao.a(this.a).a(hzVar, hj.f, false, hwVarA);
    }

    private void b(ii iiVar) {
        String str;
        Map<String, String> mapA = iiVar.a();
        if (mapA == null) {
            str = "detect failed because null";
        } else {
            String str2 = (String) ay.a(mapA, "pkgList", (Object) null);
            if (!TextUtils.isEmpty(str2)) {
                try {
                    List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) this.a.getSystemService("activity")).getRunningAppProcesses();
                    if (com.xiaomi.push.w.a(runningAppProcesses)) {
                        com.xiaomi.channel.commonutils.logger.b.a("detect failed because params illegal");
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
                    iiVar2.a(iiVar.a());
                    iiVar2.b(iiVar.b());
                    iiVar2.d(iiVar.c());
                    iiVar2.c(ht.ag.a);
                    iiVar2.a = new HashMap();
                    iiVar2.a.put("alive", aVar.toString());
                    if (Boolean.parseBoolean((String) ay.a(mapA, "reportNotAliveApp", "false")) && map.size() > 0) {
                        w.a aVar2 = new w.a("", Constants.ACCEPT_TIME_SEPARATOR_SP);
                        Iterator it = map.keySet().iterator();
                        while (it.hasNext()) {
                            aVar2.a((String) map.get((String) it.next()), "");
                        }
                        iiVar2.a.put("notAlive", aVar2.toString());
                    }
                    ao.a(this.a).a(iiVar2, hj.i, false, (hw) null);
                    return;
                } catch (Throwable th) {
                    com.xiaomi.channel.commonutils.logger.b.a("detect failed " + th);
                    return;
                }
            }
            str = "detect failed because empty";
        }
        com.xiaomi.channel.commonutils.logger.b.a(str);
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
        com.xiaomi.channel.commonutils.logger.b.a("receive an intent from server, action=" + action);
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
                eo.a(this.a).a(this.a.getPackageName(), intent, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_SET_AVATAR);
                return null;
            }
            if ifVar = new if();
            try {
                it.a(ifVar, byteArrayExtra);
                b bVarA = b.a(this.a);
                hw hwVarA = ifVar.a();
                if (ifVar.a() == hj.e && hwVarA != null && !bVarA.e() && !booleanExtra) {
                    hwVarA.a("mrt", stringExtra);
                    hwVarA.a("mat", Long.toString(System.currentTimeMillis()));
                    if (a(ifVar)) {
                        com.xiaomi.channel.commonutils.logger.b.b("this is a mina's message, ack later");
                        hwVarA.a(Constants.EXTRA_KEY_HYBRID_MESSAGE_TS, String.valueOf(hwVarA.a()));
                        hwVarA.a(Constants.EXTRA_KEY_HYBRID_DEVICE_STATUS, String.valueOf((int) it.a(this.a, ifVar)));
                    } else {
                        b(ifVar);
                    }
                }
                if (ifVar.a() == hj.e && !ifVar.b()) {
                    if (com.xiaomi.push.service.al.a(ifVar)) {
                        Object[] objArr = new Object[2];
                        objArr[0] = ifVar.b();
                        objArr[1] = hwVarA != null ? hwVarA.a() : "";
                        com.xiaomi.channel.commonutils.logger.b.a(String.format("drop an un-encrypted wake-up messages. %1$s, %2$s", objArr));
                        eoVarA2 = eo.a(this.a);
                        packageName2 = this.a.getPackageName();
                        str3 = String.format("13: %1$s", ifVar.b());
                    } else {
                        Object[] objArr2 = new Object[2];
                        objArr2[0] = ifVar.b();
                        objArr2[1] = hwVarA != null ? hwVarA.a() : "";
                        com.xiaomi.channel.commonutils.logger.b.a(String.format("drop an un-encrypted messages. %1$s, %2$s", objArr2));
                        eoVarA2 = eo.a(this.a);
                        packageName2 = this.a.getPackageName();
                        str3 = String.format("14: %1$s", ifVar.b());
                    }
                    eoVarA2.a(packageName2, intent, str3);
                    s.a(this.a, ifVar, booleanExtra);
                    return null;
                }
                if (ifVar.a() == hj.e && ifVar.b() && com.xiaomi.push.service.al.a(ifVar) && (!booleanExtra || hwVarA == null || hwVarA.a() == null || !hwVarA.a().containsKey("notify_effect"))) {
                    Object[] objArr3 = new Object[2];
                    objArr3[0] = ifVar.b();
                    objArr3[1] = hwVarA != null ? hwVarA.a() : "";
                    com.xiaomi.channel.commonutils.logger.b.a(String.format("drop a wake-up messages which not has 'notify_effect' attr. %1$s, %2$s", objArr3));
                    eo.a(this.a).a(this.a.getPackageName(), intent, String.format("25: %1$s", ifVar.b()));
                    s.b(this.a, ifVar, booleanExtra);
                    return null;
                }
                if (bVarA.c() || ifVar.a == hj.a) {
                    if (!bVarA.c() || !bVarA.f()) {
                        return a(ifVar, booleanExtra, byteArrayExtra, stringExtra2, intExtra, intent);
                    }
                    if (ifVar.a != hj.b) {
                        s.e(this.a, ifVar, booleanExtra);
                        MiPushClient.unregisterPush(this.a);
                    } else if (ifVar.b()) {
                        bVarA.a();
                        MiPushClient.clearExtras(this.a);
                        PushMessageHandler.a();
                    } else {
                        com.xiaomi.channel.commonutils.logger.b.d("receiving an un-encrypt unregistration message");
                    }
                } else {
                    if (com.xiaomi.push.service.al.a(ifVar)) {
                        return a(ifVar, booleanExtra, byteArrayExtra, stringExtra2, intExtra, intent);
                    }
                    s.e(this.a, ifVar, booleanExtra);
                    boolean zD = bVarA.d();
                    com.xiaomi.channel.commonutils.logger.b.d("receive message without registration. need re-register!registered?" + zD);
                    eo.a(this.a).a(this.a.getPackageName(), intent, com.tencent.connect.common.Constants.VIA_REPORT_TYPE_WPA_STATE);
                    if (zD) {
                        a();
                    }
                }
            } catch (iz e) {
                e = e;
                eoVarA = eo.a(this.a);
                packageName = this.a.getPackageName();
                str2 = com.tencent.connect.common.Constants.VIA_REPORT_TYPE_START_WAP;
                eoVarA.a(packageName, intent, str2);
                com.xiaomi.channel.commonutils.logger.b.a(e);
            } catch (Exception e2) {
                e = e2;
                eoVarA = eo.a(this.a);
                packageName = this.a.getPackageName();
                str2 = com.tencent.connect.common.Constants.VIA_REPORT_TYPE_START_GROUP;
                eoVarA.a(packageName, intent, str2);
                com.xiaomi.channel.commonutils.logger.b.a(e);
            }
        } else {
            if ("com.xiaomi.mipush.ERROR".equals(action)) {
                MiPushCommandMessage miPushCommandMessage = new MiPushCommandMessage();
                if ifVar2 = new if();
                try {
                    byte[] byteArrayExtra2 = intent.getByteArrayExtra("mipush_payload");
                    if (byteArrayExtra2 != null) {
                        it.a(ifVar2, byteArrayExtra2);
                    }
                } catch (iz unused) {
                }
                miPushCommandMessage.setCommand(String.valueOf(ifVar2.a()));
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
                if ifVar3 = new if();
                try {
                    it.a(ifVar3, byteArrayExtra3);
                    b bVarA2 = b.a(this.a);
                    if (com.xiaomi.push.service.al.a(ifVar3)) {
                        str = "message arrived: receive ignore reg message, ignore!";
                    } else if (!bVarA2.c()) {
                        str = "message arrived: receive message without registration. need unregister or re-register!";
                    } else {
                        if (!bVarA2.c() || !bVarA2.f()) {
                            return a(ifVar3, byteArrayExtra3);
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
