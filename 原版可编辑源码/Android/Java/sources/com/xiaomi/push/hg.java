package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

public class hg {
    private static volatile hg a;
    private final Context a;
    private Map<String, hh> a = new HashMap();

    private hg(Context context) {
        this.a = context;
    }

    public static hg a(Context context) {
        if (context == null) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]:mContext is null, TinyDataManager.getInstance(Context) failed.");
            return null;
        }
        if (a == null) {
            synchronized (hg.class) {
                if (a == null) {
                    a = new hg(context);
                }
            }
        }
        return a;
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
        hh hhVar = this.a.get("UPLOADER_PUSH_CHANNEL");
        if (hhVar != null) {
            return hhVar;
        }
        hh hhVar2 = this.a.get("UPLOADER_HTTP");
        if (hhVar2 != null) {
            return hhVar2;
        }
        return null;
    }

    Map<String, hh> a() {
        return this.a;
    }

    public void a(hh hhVar, String str) {
        if (hhVar == null) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]: please do not add null mUploader to TinyDataManager.");
        } else if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.d("[TinyDataManager]: can not add a provider from unkown resource.");
        } else {
            a().put(str, hhVar);
        }
    }

    public boolean a(hn hnVar, String str) {
        if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.a("pkgName is null or empty, upload ClientUploadDataItem failed.");
            return false;
        }
        if (com.xiaomi.push.service.bz.a(hnVar, false)) {
            return false;
        }
        if (TextUtils.isEmpty(hnVar.d())) {
            hnVar.f(com.xiaomi.push.service.bz.a());
        }
        hnVar.g(str);
        com.xiaomi.push.service.ca.a(this.a, hnVar);
        return true;
    }

    public boolean a(String str, String str2, long j, String str3) {
        return a(this.a.getPackageName(), this.a.getPackageName(), str, str2, j, str3);
    }
}
