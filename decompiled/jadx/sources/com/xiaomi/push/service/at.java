package com.xiaomi.push.service;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.provider.Settings;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.xiaomi.push.hw;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public class at {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final boolean f8314a = Log.isLoggable("NCHelper", 3);

    private static int a(NotificationChannel notificationChannel) {
        int iIntValue = 0;
        try {
            iIntValue = ((Integer) com.xiaomi.push.bk.b((Object) notificationChannel, "getUserLockedFields", new Object[0])).intValue();
            if (f8314a) {
                a("isUserLockedChannel:" + iIntValue + " " + notificationChannel);
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m44a("NCHelper", "is user locked error" + e);
        }
        return iIntValue;
    }

    private static NotificationChannel a(String str, NotificationChannel notificationChannel) {
        NotificationChannel notificationChannel2 = new NotificationChannel(str, notificationChannel.getName(), notificationChannel.getImportance());
        notificationChannel2.setDescription(notificationChannel.getDescription());
        notificationChannel2.enableVibration(notificationChannel.shouldVibrate());
        notificationChannel2.enableLights(notificationChannel.shouldShowLights());
        notificationChannel2.setSound(notificationChannel.getSound(), notificationChannel.getAudioAttributes());
        notificationChannel2.setLockscreenVisibility(notificationChannel.getLockscreenVisibility());
        return notificationChannel2;
    }

    private static SharedPreferences a(Context context) {
        return context.getSharedPreferences("mipush_channel_copy_sp", 0);
    }

    public static String a(ax axVar, String str, CharSequence charSequence, String str2, int i, int i2, String str3, String str4) {
        String strM642a = axVar.m642a(str);
        if (f8314a) {
            a("createChannel: appChannelId:" + strM642a + " serverChannelId:" + str + " serverChannelName:" + ((Object) charSequence) + " serverChannelDesc:" + str2 + " serverChannelNotifyType:" + i + " serverChannelName:" + ((Object) charSequence) + " serverChannelImportance:" + i2 + " channelSoundStr:" + str3 + " channelPermissions:" + str4);
        }
        NotificationChannel notificationChannel = new NotificationChannel(strM642a, charSequence, i2);
        notificationChannel.setDescription(str2);
        notificationChannel.enableVibration((i & 2) != 0);
        notificationChannel.enableLights((i & 4) != 0);
        if ((i & 1) == 0) {
            notificationChannel.setSound(null, null);
        } else if (!TextUtils.isEmpty(str3)) {
            if (str3.startsWith("android.resource://" + axVar.m641a())) {
                notificationChannel.setSound(Uri.parse(str3), Notification.AUDIO_ATTRIBUTES_DEFAULT);
            }
        }
        if (f8314a) {
            a("create channel:" + notificationChannel);
        }
        a(axVar, notificationChannel, str4);
        return strM642a;
    }

    static void a(Context context, ax axVar, NotificationChannel notificationChannel, int i, String str) {
        if (i <= 0) {
            axVar.a(notificationChannel);
            return;
        }
        int iA = com.xiaomi.push.h.a(context) >= 2 ? e.a(context.getPackageName(), str) : 0;
        NotificationChannel notificationChannelA = a(notificationChannel.getId(), notificationChannel);
        if ((i & 32) != 0) {
            if (notificationChannel.getSound() != null) {
                notificationChannelA.setSound(null, null);
            } else {
                notificationChannelA.setSound(Settings.System.DEFAULT_NOTIFICATION_URI, Notification.AUDIO_ATTRIBUTES_DEFAULT);
            }
        }
        if ((i & 16) != 0) {
            if (notificationChannel.shouldVibrate()) {
                notificationChannelA.enableVibration(false);
            } else {
                notificationChannelA.enableVibration(true);
            }
        }
        if ((i & 8) != 0) {
            if (notificationChannel.shouldShowLights()) {
                notificationChannelA.enableLights(false);
            } else {
                notificationChannelA.enableLights(true);
            }
        }
        if ((i & 4) != 0) {
            int importance = notificationChannel.getImportance() - 1;
            if (importance <= 0) {
                importance = 2;
            }
            notificationChannelA.setImportance(importance);
        }
        if ((i & 2) != 0) {
            notificationChannelA.setLockscreenVisibility(notificationChannel.getLockscreenVisibility() - 1);
        }
        axVar.a(notificationChannelA);
        axVar.a(notificationChannel, true);
        e.a(axVar.m641a(), notificationChannel.getId(), iA, 0);
    }

    public static void a(Context context, String str) {
        if (!com.xiaomi.push.m.m575a(context) || TextUtils.isEmpty(str)) {
            return;
        }
        c(context, str);
        e.a(context, str);
    }

    private static void a(Context context, List<String> list) {
        if (f8314a) {
            a("deleteCopiedChannelRecord:" + list);
        }
        if (list.isEmpty()) {
            return;
        }
        SharedPreferences.Editor editorEdit = a(context).edit();
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            editorEdit.remove(it.next());
        }
        editorEdit.apply();
    }

    static void a(hw hwVar) {
        if (hwVar == null || hwVar.f554a == null || !hwVar.f554a.containsKey("REMOVE_CHANNEL_MARK")) {
            return;
        }
        hwVar.f550a = 0;
        hwVar.f554a.remove(IPaymentFeature.ARG_CHANNEL_ID);
        hwVar.f554a.remove("channel_importance");
        hwVar.f554a.remove("channel_name");
        hwVar.f554a.remove("channel_description");
        hwVar.f554a.remove("channel_perm");
        com.xiaomi.channel.commonutils.logger.b.m43a("delete channel info by:" + hwVar.f554a.get("REMOVE_CHANNEL_MARK"));
        hwVar.f554a.remove("REMOVE_CHANNEL_MARK");
    }

    private static void a(ax axVar, NotificationChannel notificationChannel, String str) {
        int iA;
        char c;
        Context contextM640a = axVar.m640a();
        String id = notificationChannel.getId();
        String strA = ax.a(id, axVar.m641a());
        if (f8314a) {
            a("appChannelId:" + id + " oldChannelId:" + strA);
        }
        boolean z = true;
        if (com.xiaomi.push.m.m575a(contextM640a) && !TextUtils.equals(id, strA)) {
            NotificationManager notificationManager = (NotificationManager) contextM640a.getSystemService(RemoteMessageConst.NOTIFICATION);
            NotificationChannel notificationChannel2 = notificationManager.getNotificationChannel(strA);
            NotificationChannel notificationChannelM639a = axVar.m639a(id);
            if (f8314a) {
                a("xmsfChannel:" + notificationChannel2);
                a("appChannel:" + notificationChannelM639a);
            }
            if (notificationChannel2 != null) {
                NotificationChannel notificationChannelA = a(id, notificationChannel2);
                if (f8314a) {
                    a("copyXmsf copyXmsfChannel:" + notificationChannelA);
                }
                if (notificationChannelM639a != null) {
                    iA = a(notificationChannelM639a);
                    axVar.a(notificationChannelA, iA == 0);
                    c = 3;
                } else {
                    int iA2 = a(notificationChannel2);
                    a(contextM640a, axVar, notificationChannelA, iA2, notificationChannel2.getId());
                    iA = iA2;
                    c = 4;
                }
                b(contextM640a, id);
                notificationManager.deleteNotificationChannel(strA);
            } else if (notificationChannelM639a == null) {
                if (f8314a) {
                    a("appHack createNotificationChannel:" + notificationChannel);
                }
                axVar.a(notificationChannel);
                c = 1;
                iA = 0;
            } else if (!m631a(contextM640a, id) && a(notificationChannel, notificationChannelM639a)) {
                if (f8314a) {
                    a("appHack updateNotificationChannel:" + notificationChannel);
                }
                iA = a(notificationChannelM639a);
                axVar.a(notificationChannel, iA == 0);
                c = 2;
            }
            if (c != 1 && c != 4 && c != 3) {
                z = false;
            }
            e.a(axVar.m640a(), axVar.m641a(), id, notificationChannel.getImportance(), str, z, iA);
        }
        NotificationChannel notificationChannelM639a2 = axVar.m639a(id);
        if (f8314a) {
            a("elseLogic getNotificationChannel:" + notificationChannelM639a2);
        }
        if (notificationChannelM639a2 == null) {
            axVar.a(notificationChannel);
        }
        iA = 0;
        c = 0;
        if (c != 1) {
            z = false;
        }
        e.a(axVar.m640a(), axVar.m641a(), id, notificationChannel.getImportance(), str, z, iA);
    }

    private static void a(String str) {
        com.xiaomi.channel.commonutils.logger.b.m44a("NCHelper", str);
    }

    private static boolean a(NotificationChannel notificationChannel, NotificationChannel notificationChannel2) {
        boolean z;
        if (notificationChannel == null || notificationChannel2 == null) {
            return false;
        }
        boolean z2 = true;
        if (TextUtils.equals(notificationChannel.getName(), notificationChannel2.getName())) {
            z = false;
        } else {
            if (f8314a) {
                a("appHack channelConfigLowerCompare:getName");
            }
            z = true;
        }
        if (!TextUtils.equals(notificationChannel.getDescription(), notificationChannel2.getDescription())) {
            if (f8314a) {
                a("appHack channelConfigLowerCompare:getDescription");
            }
            z = true;
        }
        if (notificationChannel.getImportance() != notificationChannel2.getImportance()) {
            notificationChannel.setImportance(Math.min(notificationChannel.getImportance(), notificationChannel2.getImportance()));
            if (f8314a) {
                a("appHack channelConfigLowerCompare:getImportance  " + notificationChannel.getImportance() + " " + notificationChannel2.getImportance());
            }
            z = true;
        }
        if (notificationChannel.shouldVibrate() != notificationChannel2.shouldVibrate()) {
            notificationChannel.enableVibration(false);
            if (f8314a) {
                a("appHack channelConfigLowerCompare:enableVibration");
            }
            z = true;
        }
        if (notificationChannel.shouldShowLights() != notificationChannel2.shouldShowLights()) {
            notificationChannel.enableLights(false);
            if (f8314a) {
                a("appHack channelConfigLowerCompare:enableLights");
            }
            z = true;
        }
        if ((notificationChannel.getSound() != null) != (notificationChannel2.getSound() != null)) {
            notificationChannel.setSound(null, null);
            if (f8314a) {
                a("appHack channelConfigLowerCompare:setSound");
            }
        } else {
            z2 = z;
        }
        if (f8314a) {
            a("appHack channelConfigLowerCompare:isDifferent:" + z2);
        }
        return z2;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static boolean m631a(Context context, String str) {
        if (f8314a) {
            a("checkCopeidChannel:newFullChannelId:" + str + "  " + a(context).getBoolean(str, false));
        }
        return a(context).getBoolean(str, false);
    }

    private static void b(Context context, String str) {
        if (f8314a) {
            a("recordCopiedChannel:" + str);
        }
        a(context).edit().putBoolean(str, true).apply();
    }

    private static void c(Context context, String str) {
        try {
            ax axVarA = ax.a(context, str);
            Set<String> setKeySet = a(context).getAll().keySet();
            ArrayList arrayList = new ArrayList();
            for (String str2 : setKeySet) {
                if (axVarA.m644a(str2)) {
                    arrayList.add(str2);
                    if (f8314a) {
                        a("delete channel copy record:" + str2);
                    }
                }
            }
            a(context, arrayList);
        } catch (Exception unused) {
        }
    }
}
