package com.tkay.expressad.out;

import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.mbbid.out.BidResponsed;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class e implements com.tkay.expressad.e.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f7023a = 6;
    public static final int b = 7;
    public static final int c = 8;
    private static String d = "CustomInfoManager";
    private static volatile e e;
    private ConcurrentHashMap<String, String> f = new ConcurrentHashMap<>();

    private e() {
    }

    public static e a() {
        if (e == null) {
            synchronized (e.class) {
                if (e == null) {
                    e = new e();
                }
            }
        }
        return e;
    }

    private void a(String str, int i, String str2) {
        if (TextUtils.isEmpty(str) || str2 == null) {
            return;
        }
        String strA = com.tkay.expressad.foundation.h.j.a(str2);
        if (i == 6) {
            this.f.put(str + "_bid", strA);
            return;
        }
        if (i != 7) {
            if (i != 8) {
                return;
            }
            this.f.put(str, strA);
        } else {
            this.f.put(str + "_bidload", strA);
        }
    }

    private String a(String str, int i) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        if (i == 6) {
            return this.f.get(str + "_bid");
        }
        if (i != 7) {
            return i != 8 ? "" : this.f.get(str);
        }
        return this.f.get(str + "_bidload");
    }

    public final String a(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return "";
        }
        try {
            Uri uri = Uri.parse(str2);
            if (uri != null) {
                String host = uri.getHost();
                String path = uri.getPath();
                if (!TextUtils.isEmpty(host) && host.contains("hb") && !TextUtils.isEmpty(path) && path.contains(BidResponsed.KEY_BID_ID)) {
                    return a(str, 6);
                }
                if (!TextUtils.isEmpty(host) && host.contains("hb") && !TextUtils.isEmpty(path) && path.contains(PointCategory.LOAD)) {
                    return a(str, 7);
                }
                if (!TextUtils.isEmpty(path) && path.contains(com.tkay.expressad.foundation.g.a.j)) {
                    return a(str, 8);
                }
            }
        } catch (Throwable unused) {
        }
        return "";
    }
}
