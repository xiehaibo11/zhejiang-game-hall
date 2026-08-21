package com.xiaomi.push.service;

import android.content.Context;
import android.content.Intent;
import android.util.Pair;
import com.xiaomi.push.gh;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class x {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Map<String, byte[]> f1024a = new HashMap();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ArrayList<Pair<String, byte[]>> f8395a = new ArrayList<>();

    public static void a(Context context, int i, String str) {
        synchronized (f1024a) {
            for (String str2 : f1024a.keySet()) {
                com.xiaomi.channel.commonutils.logger.b.m43a("notify registration error. " + str2);
                a(context, str2, f1024a.get(str2), i, str);
            }
            f1024a.clear();
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
            synchronized (f8395a) {
                arrayList = f8395a;
                f8395a = new ArrayList<>();
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
            synchronized (f1024a) {
                for (String str : f1024a.keySet()) {
                    com.xiaomi.channel.commonutils.logger.b.m43a("processing pending registration request. " + str);
                    ah.a(xMPushService, str, f1024a.get(str));
                    if (z && !com.xiaomi.push.w.a()) {
                        try {
                            Thread.sleep(200L);
                        } catch (Exception unused) {
                        }
                    }
                }
                f1024a.clear();
            }
        } catch (gh e) {
            com.xiaomi.channel.commonutils.logger.b.d("fail to deal with pending register request. " + e);
            xMPushService.a(10, e);
        }
    }

    public static void a(String str, byte[] bArr) {
        synchronized (f1024a) {
            com.xiaomi.channel.commonutils.logger.b.m43a("pending registration request. " + str);
            f1024a.put(str, bArr);
        }
    }

    public static void b(String str, byte[] bArr) {
        synchronized (f8395a) {
            f8395a.add(new Pair<>(str, bArr));
            if (f8395a.size() > 50) {
                f8395a.remove(0);
            }
        }
    }
}
