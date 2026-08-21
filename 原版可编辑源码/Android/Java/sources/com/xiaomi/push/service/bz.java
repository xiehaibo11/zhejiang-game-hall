package com.xiaomi.push.service;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.qihoo360.replugin.RePlugin;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.hm;
import com.xiaomi.push.hn;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicLong;

public class bz {
    private static String a;
    private static SimpleDateFormat a;
    private static AtomicLong a = new AtomicLong(0);

    static {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy/MM/dd");
        a = simpleDateFormat;
        a = simpleDateFormat.format(Long.valueOf(System.currentTimeMillis()));
    }

    private static ii a(String str, String str2, hm hmVar) {
        return new ii(RePlugin.PROCESS_UI, false).d(str).b(str2).a(com.xiaomi.push.ab.a(it.a(hmVar))).c(ht.B.a);
    }

    public static synchronized String a() {
        String str;
        str = a.format(Long.valueOf(System.currentTimeMillis()));
        if (!TextUtils.equals(a, str)) {
            a.set(0L);
            a = str;
        }
        return str + Constants.ACCEPT_TIME_SEPARATOR_SERVER + a.incrementAndGet();
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0066  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ArrayList<ii> a(List<hn> list, String str, String str2, int i) {
        int length;
        String str3;
        if (list == null) {
            str3 = "requests can not be null in TinyDataHelper.transToThriftObj().";
        } else {
            if (list.size() != 0) {
                ArrayList<ii> arrayList = new ArrayList<>();
                hm hmVar = new hm();
                int i2 = 0;
                for (int i3 = 0; i3 < list.size(); i3++) {
                    hn hnVar = list.get(i3);
                    if (hnVar != null) {
                        if (hnVar.a() == null || !hnVar.a().containsKey("item_size")) {
                            length = 0;
                        } else {
                            String str4 = hnVar.a().get("item_size");
                            if (TextUtils.isEmpty(str4)) {
                                length = 0;
                                if (hnVar.a().size() != 1) {
                                }
                            } else {
                                try {
                                    length = Integer.parseInt(str4);
                                } catch (Exception unused) {
                                    length = 0;
                                }
                                if (hnVar.a().size() != 1) {
                                    hnVar.a((Map<String, String>) null);
                                } else {
                                    hnVar.a().remove("item_size");
                                }
                            }
                        }
                        if (length <= 0) {
                            length = it.a(hnVar).length;
                        }
                        if (length > i) {
                            com.xiaomi.channel.commonutils.logger.b.d("TinyData is too big, ignore upload request item:" + hnVar.d());
                        } else {
                            if (i2 + length > i) {
                                arrayList.add(a(str, str2, hmVar));
                                hmVar = new hm();
                                i2 = 0;
                            }
                            hmVar.a(hnVar);
                            i2 += length;
                        }
                    }
                }
                if (hmVar.a() != 0) {
                    arrayList.add(a(str, str2, hmVar));
                }
                return arrayList;
            }
            str3 = "requests.length is 0 in TinyDataHelper.transToThriftObj().";
        }
        com.xiaomi.channel.commonutils.logger.b.d(str3);
        return null;
    }

    public static void a(Context context, String str, String str2, long j, String str3) {
        hn hnVar = new hn();
        hnVar.d(str);
        hnVar.c(str2);
        hnVar.a(j);
        hnVar.b(str3);
        hnVar.a("push_sdk_channel");
        hnVar.g(context.getPackageName());
        hnVar.e(context.getPackageName());
        hnVar.a(true);
        hnVar.b(System.currentTimeMillis());
        hnVar.f(a());
        ca.a(context, hnVar);
    }

    public static void a(String str, String str2, String str3, ao aoVar) {
        if (aoVar == null) {
            return;
        }
        hn hnVar = new hn();
        hnVar.d(str);
        hnVar.c(str2);
        hnVar.g(str3);
        hnVar.e(str3);
        HashMap map = new HashMap();
        map.put("chid", String.valueOf(aoVar.a));
        map.put("screen_on", String.valueOf(aoVar.a));
        map.put(Device.NETWORN_WIFI, String.valueOf(aoVar.b));
        map.put("rx_msg", String.valueOf(aoVar.a));
        map.put("enqueue", String.valueOf(aoVar.b));
        map.put(com.tkay.expressad.foundation.d.l.d, String.valueOf(aoVar.b));
        map.put("run", String.valueOf(aoVar.c));
        map.put("send", String.valueOf(System.currentTimeMillis()));
        hnVar.a(map);
        ca.a(hnVar);
    }

    public static boolean a(hn hnVar, boolean z) {
        String str;
        if (hnVar == null) {
            str = "item is null, verfiy ClientUploadDataItem failed.";
        } else if (!z && TextUtils.isEmpty(hnVar.a)) {
            str = "item.channel is null or empty, verfiy ClientUploadDataItem failed.";
        } else if (TextUtils.isEmpty(hnVar.d)) {
            str = "item.category is null or empty, verfiy ClientUploadDataItem failed.";
        } else if (TextUtils.isEmpty(hnVar.c)) {
            str = "item.name is null or empty, verfiy ClientUploadDataItem failed.";
        } else if (!com.xiaomi.push.bp.a(hnVar.d)) {
            str = "item.category can only contain ascii char, verfiy ClientUploadDataItem failed.";
        } else if (!com.xiaomi.push.bp.a(hnVar.c)) {
            str = "item.name can only contain ascii char, verfiy ClientUploadDataItem failed.";
        } else {
            if (hnVar.b == null || hnVar.b.length() <= 10240) {
                return false;
            }
            str = "item.data is too large(" + hnVar.b.length() + "), max size for data is " + com.sigmob.sdk.archives.tar.d.b + " , verfiy ClientUploadDataItem failed.";
        }
        com.xiaomi.channel.commonutils.logger.b.a(str);
        return true;
    }

    public static boolean a(String str) {
        return !com.xiaomi.push.v.b() || Constants.HYBRID_PACKAGE_NAME.equals(str);
    }
}
