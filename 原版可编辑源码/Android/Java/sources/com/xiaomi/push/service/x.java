package com.xiaomi.push.service;

import android.content.Context;
import android.content.Intent;
import android.util.Pair;
import com.xiaomi.push.gh;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class x {
    private static final Map<String, byte[]> a = new HashMap();
    private static ArrayList<Pair<String, byte[]>> a = new ArrayList<>();

    public static void a(Context context, int i, String str) {
        synchronized (a) {
            for (String str2 : a.keySet()) {
                com.xiaomi.channel.commonutils.logger.b.a("notify registration error. " + str2);
                a(context, str2, a.get(str2), i, str);
            }
            a.clear();
        }
    }

    public static void a(Context context, String str, byte[] bArr, int i, String str2) {
        Intent intent = new Intent("com.xiaomi.mipush.ERROR");
        intent.setPackage(str);
        intent.putExtra("mipush_payload", bArr);
        intent.putExtra("mipush_error_code", i);
        intent.putExtra("mipush_error_msg", str2);
        context.sendBroadcast(intent, ah.a(str));
    }

    public static void a(XMPushService xMPushService) {
        ArrayList<Pair<String, byte[]>> arrayList;
        try {
            synchronized (a) {
                arrayList = a;
                a = new ArrayList<>();
            }
            boolean zA = com.xiaomi.push.w.a();
            for (Pair<String, byte[]> pair : arrayList) {
                ah.a(xMPushService, (String) pair.first, (byte[]) pair.second);
                if (!zA) {
                    try {
                        Thread.sleep(100L);
                    } catch (InterruptedException unused) {
                    }
                }
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("meet error when process pending message. " + e);
            xMPushService.a(10, e);
        }
    }

    public static void a(XMPushService xMPushService, boolean z) {
        try {
            synchronized (a) {
                for (String str : a.keySet()) {
                    com.xiaomi.channel.commonutils.logger.b.a("processing pending registration request. " + str);
                    ah.a(xMPushService, str, a.get(str));
                    if (z && !com.xiaomi.push.w.a()) {
                        try {
                            Thread.sleep(200L);
                        } catch (Exception unused) {
                        }
                    }
                }
                a.clear();
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("fail to deal with pending register request. " + e);
            xMPushService.a(10, e);
        }
    }

    public static void a(String str, byte[] bArr) {
        synchronized (a) {
            com.xiaomi.channel.commonutils.logger.b.a("pending registration request. " + str);
            a.put(str, bArr);
        }
    }

    public static void b(String str, byte[] bArr) {
        synchronized (a) {
            a.add(new Pair<>(str, bArr));
            if (a.size() > 50) {
                a.remove(0);
            }
        }
    }
}
