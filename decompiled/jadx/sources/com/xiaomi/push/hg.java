package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class hg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile hg f8204a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Context f479a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<String, hh> f480a = new HashMap();

    private hg(Context context) {
        this.f479a = context;
    }

    public static hg a(Context context) {
        if (context == null) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]:mContext is null, TinyDataManager.getInstance(Context) failed.");
            return null;
        }
        if (f8204a == null) {
            synchronized (hg.class) {
                if (f8204a == null) {
                    f8204a = new hg(context);
                }
            }
        }
        return f8204a;
    }

    private boolean a(String str, String str2, String str3, String str4, long j, String str5) {
        hn hnVar = new hn();
        hnVar.d(str3);
        hnVar.c(str4);
        hnVar.a(j);
        hnVar.b(str5);
        hnVar.a(true);
        hnVar.a("push_sdk_channel");
        hnVar.e(str2);
        return a(hnVar, str);
    }

    hh a() {
        hh hhVar = this.f480a.get("UPLOADER_PUSH_CHANNEL");
        if (hhVar != null) {
            return hhVar;
        }
        hh hhVar2 = this.f480a.get("UPLOADER_HTTP");
        if (hhVar2 != null) {
            return hhVar2;
        }
        return null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    Map<String, hh> m408a() {
        return this.f480a;
    }

    public void a(hh hhVar, String str) {
        if (hhVar == null) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]: please do not add null mUploader to TinyDataManager.");
        } else if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]: can not add a provider from unkown resource.");
        } else {
            m408a().put(str, hhVar);
        }
    }

    public boolean a(hn hnVar, String str) {
        if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("pkgName is null or empty, upload ClientUploadDataItem failed.");
            return false;
        }
        if (com.xiaomi.push.service.bz.a(hnVar, false)) {
            return false;
        }
        if (TextUtils.isEmpty(hnVar.d())) {
            hnVar.f(com.xiaomi.push.service.bz.a());
        }
        hnVar.g(str);
        com.xiaomi.push.service.ca.a(this.f479a, hnVar);
        return true;
    }

    public boolean a(String str, String str2, long j, String str3) {
        return a(this.f479a.getPackageName(), this.f479a.getPackageName(), str, str2, j, str3);
    }
}
