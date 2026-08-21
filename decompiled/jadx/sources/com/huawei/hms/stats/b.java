package com.huawei.hms.stats;

import android.content.Context;
import com.huawei.hianalytics.process.HiAnalyticsInstance;
import com.huawei.hms.utils.HMSBIInitializer;
import java.util.LinkedHashMap;

/* JADX INFO: compiled from: HiAnalyticsOfCpUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static HiAnalyticsInstance f2172a;

    public static HiAnalyticsInstance a(Context context) {
        HiAnalyticsInstance analyticsInstance = HMSBIInitializer.getInstance(context).getAnalyticsInstance();
        f2172a = analyticsInstance;
        return analyticsInstance;
    }

    public static void a(Context context, String str, String str2) {
        if (a(context) != null) {
            f2172a.onEvent(context, str, str2);
        }
    }

    public static void a(Context context, int i, String str, LinkedHashMap<String, String> linkedHashMap) {
        if (a(context) != null) {
            f2172a.onEvent(i, str, linkedHashMap);
        }
    }

    public static void a(Context context, int i) {
        if (a(context) != null) {
            f2172a.onReport(i);
        }
    }
}
