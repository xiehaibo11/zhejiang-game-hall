package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.clientreport.data.Config;
import com.xiaomi.clientreport.data.EventClientReport;
import com.xiaomi.clientreport.data.PerfClientReport;
import com.xiaomi.clientreport.manager.ClientReportClient;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class en {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f8133a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static Map<String, ht> f325a;

    public interface a {
        void uploader(Context context, hn hnVar);
    }

    public static int a(int i) {
        if (i > 0) {
            return i + 1000;
        }
        return -1;
    }

    public static int a(Enum r1) {
        if (r1 != null) {
            if (r1 instanceof hj) {
                return r1.ordinal() + 1001;
            }
            if (r1 instanceof ht) {
                return r1.ordinal() + 2001;
            }
            if (r1 instanceof ey) {
                return r1.ordinal() + 3001;
            }
        }
        return -1;
    }

    public static Config a(Context context) {
        boolean zA = com.xiaomi.push.service.ba.a(context).a(ho.PerfUploadSwitch.a(), false);
        boolean zA2 = com.xiaomi.push.service.ba.a(context).a(ho.EventUploadNewSwitch.a(), false);
        return Config.getBuilder().setEventUploadSwitchOpen(zA2).setEventUploadFrequency(com.xiaomi.push.service.ba.a(context).a(ho.EventUploadFrequency.a(), 86400)).setPerfUploadSwitchOpen(zA).setPerfUploadFrequency(com.xiaomi.push.service.ba.a(context).a(ho.PerfUploadFrequency.a(), 86400)).build(context);
    }

    public static EventClientReport a(Context context, String str, String str2, int i, long j, String str3) {
        EventClientReport eventClientReportA = a(str);
        eventClientReportA.eventId = str2;
        eventClientReportA.eventType = i;
        eventClientReportA.eventTime = j;
        eventClientReportA.eventContent = str3;
        return eventClientReportA;
    }

    public static EventClientReport a(String str) {
        EventClientReport eventClientReport = new EventClientReport();
        eventClientReport.production = 1000;
        eventClientReport.reportType = 1001;
        eventClientReport.clientInterfaceId = str;
        return eventClientReport;
    }

    public static PerfClientReport a() {
        PerfClientReport perfClientReport = new PerfClientReport();
        perfClientReport.production = 1000;
        perfClientReport.reportType = 1000;
        perfClientReport.clientInterfaceId = "P100000";
        return perfClientReport;
    }

    public static PerfClientReport a(Context context, int i, long j, long j2) {
        PerfClientReport perfClientReportA = a();
        perfClientReportA.code = i;
        perfClientReportA.perfCounts = j;
        perfClientReportA.perfLatencies = j2;
        return perfClientReportA;
    }

    public static hn a(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        hn hnVar = new hn();
        hnVar.d("category_client_report_data");
        hnVar.a("push_sdk_channel");
        hnVar.a(1L);
        hnVar.b(str);
        hnVar.a(true);
        hnVar.b(System.currentTimeMillis());
        hnVar.g(context.getPackageName());
        hnVar.e("com.xiaomi.xmsf");
        hnVar.f(com.xiaomi.push.service.bz.a());
        hnVar.c("quality_support");
        return hnVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static ht m313a(String str) {
        if (f325a == null) {
            synchronized (ht.class) {
                if (f325a == null) {
                    f325a = new HashMap();
                    for (ht htVar : ht.values()) {
                        f325a.put(htVar.f519a.toLowerCase(), htVar);
                    }
                }
            }
        }
        ht htVar2 = f325a.get(str.toLowerCase());
        return htVar2 != null ? htVar2 : ht.Invalid;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static String m314a(int i) {
        return i == 1000 ? "E100000" : i == 3000 ? "E100002" : i == 2000 ? "E100001" : i == 6000 ? "E100003" : "";
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m315a(Context context) {
        ClientReportClient.updateConfig(context, a(context));
    }

    public static void a(Context context, Config config) {
        ClientReportClient.init(context, config, new el(context), new em(context));
    }

    private static void a(Context context, hn hnVar) {
        if (m316a(context.getApplicationContext())) {
            com.xiaomi.push.service.ca.a(context.getApplicationContext(), hnVar);
            return;
        }
        a aVar = f8133a;
        if (aVar != null) {
            aVar.uploader(context, hnVar);
        }
    }

    public static void a(Context context, List<String> list) {
        if (list == null) {
            return;
        }
        try {
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                hn hnVarA = a(context, it.next());
                if (!com.xiaomi.push.service.bz.a(hnVarA, false)) {
                    a(context, hnVarA);
                }
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.d(th.getMessage());
        }
    }

    public static void a(a aVar) {
        f8133a = aVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m316a(Context context) {
        return (context == null || TextUtils.isEmpty(context.getPackageName()) || !"com.xiaomi.xmsf".equals(context.getPackageName())) ? false : true;
    }
}
