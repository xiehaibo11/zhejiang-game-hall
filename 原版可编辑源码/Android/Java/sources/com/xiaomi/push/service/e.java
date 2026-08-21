package com.xiaomi.push.service;

import android.app.NotificationChannel;
import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import android.util.SparseArray;
import com.huawei.hms.framework.common.ContainerUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.service.ay;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

class e {
    private static final int[] a = {1, 2, 4, 8, 16};
    private static final SparseArray<ay.a<String, String, String>> a = new f(5);
    private static final SparseArray<Integer> b = new g(5);

    e() {
    }

    static int a(String str, String str2) {
        int i = a(str, str2, 8) ? 8 : 0;
        if (a(str, str2, 16)) {
            i |= 16;
        }
        if (a(str, str2, 1)) {
            i |= 1;
        }
        if (a(str, str2, 2)) {
            i |= 2;
        }
        return a(str, str2, 4) ? i | 4 : i;
    }

    private static SharedPreferences a(Context context) {
        return context.getSharedPreferences("ch_permission_cache_file", 0);
    }

    static void a(Context context, String str) {
        List<NotificationChannel> listA;
        if (!com.xiaomi.push.m.a(context) || TextUtils.isEmpty(str) || (listA = ax.a(context, str).a()) == null) {
            return;
        }
        synchronized (e.class) {
            SharedPreferences sharedPreferencesA = a(context);
            ArrayList arrayList = new ArrayList();
            Iterator<NotificationChannel> it = listA.iterator();
            while (it.hasNext()) {
                String str2 = (String) com.xiaomi.push.bk.a(it.next(), "mId");
                if (!TextUtils.isEmpty(str2) && sharedPreferencesA.contains(str2)) {
                    arrayList.add(str2);
                }
            }
            if (arrayList.size() > 0) {
                a(sharedPreferencesA, arrayList);
            }
        }
    }

    static void a(Context context, String str, String str2, int i, String str3, boolean z, int i2) {
        if (!com.xiaomi.push.m.a(context) || TextUtils.isEmpty(str3) || TextUtils.isEmpty(str2) || TextUtils.isEmpty(str)) {
            if (com.xiaomi.push.m.a(context)) {
                com.xiaomi.channel.commonutils.logger.b.a("ChannelPC: can`t setup permission with permissionCode:" + String.valueOf(str3) + " channelId:" + String.valueOf(str2) + " targetPkg:" + str);
                return;
            }
            return;
        }
        int iA = com.xiaomi.push.w.a(str3, 0);
        boolean zA = a(i, iA);
        if (z) {
            a(str, str2, iA, i2);
            if (zA) {
                synchronized (e.class) {
                    a(a(context), iA, str2);
                }
                return;
            }
            return;
        }
        synchronized (e.class) {
            SharedPreferences sharedPreferencesA = a(context);
            if (zA || sharedPreferencesA.contains(str2)) {
                a(sharedPreferencesA, iA, str, str2, i2);
                if (zA) {
                    a(sharedPreferencesA, iA, str2);
                } else {
                    a(sharedPreferencesA, str2);
                }
            }
        }
    }

    private static void a(SharedPreferences sharedPreferences, int i, String str) {
        sharedPreferences.edit().putInt(str, i).commit();
    }

    private static void a(SharedPreferences sharedPreferences, int i, String str, String str2, int i2) {
        if (sharedPreferences.getInt(str2, 0) != i) {
            a(str, str2, i, i2);
        }
    }

    private static void a(SharedPreferences sharedPreferences, String str) {
        a(sharedPreferences, new h(str));
    }

    private static void a(SharedPreferences sharedPreferences, List<String> list) {
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            editorEdit.remove(it.next());
        }
        editorEdit.commit();
    }

    static void a(String str, String str2, int i, int i2) {
        for (int i3 : a) {
            if ((b.get(i3).intValue() & i2) == 0) {
                a(str, str2, i3, (i & i3) > 0);
            } else {
                com.xiaomi.channel.commonutils.logger.b.a("ChannelPermissions.grantPermission:" + str + Constants.COLON_SEPARATOR + str2 + ": <" + i3 + "> :stoped by userLock");
            }
        }
    }

    private static void a(String str, String str2, int i, boolean z) {
        com.xiaomi.channel.commonutils.logger.b.a("ChannelPermissions.grantPermission:" + str + Constants.COLON_SEPARATOR + str2 + ": <" + i + ContainerUtils.KEY_VALUE_DELIMITER + z + "> :" + ay.a(com.xiaomi.push.v.a(), str, str2, a.get(i), z));
    }

    private static boolean a(int i, int i2) {
        return i >= 4 || (i2 & 2) > 0 || (i2 & 1) > 0 || (i2 & 8) > 0 || (i2 & 16) > 0;
    }

    private static boolean a(String str, String str2, int i) {
        boolean z = ay.a(com.xiaomi.push.v.a(), str, str2, a.get(i)) == 1;
        com.xiaomi.channel.commonutils.logger.b.a("ChannelPermissions.checkPermission:" + str + Constants.COLON_SEPARATOR + str2 + ": <" + i + ContainerUtils.KEY_VALUE_DELIMITER + z + ">");
        return z;
    }
}
