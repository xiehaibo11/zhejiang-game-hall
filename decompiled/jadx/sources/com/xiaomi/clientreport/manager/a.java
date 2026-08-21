package com.xiaomi.clientreport.manager;

import android.content.Context;
import com.xiaomi.clientreport.data.Config;
import com.xiaomi.clientreport.data.EventClientReport;
import com.xiaomi.clientreport.data.PerfClientReport;
import com.xiaomi.clientreport.processor.IEventProcessor;
import com.xiaomi.clientreport.processor.IPerfProcessor;
import com.xiaomi.push.al;
import com.xiaomi.push.bp;
import com.xiaomi.push.bq;
import com.xiaomi.push.br;
import com.xiaomi.push.bs;
import com.xiaomi.push.bt;
import com.xiaomi.push.bw;
import com.xiaomi.push.m;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f7962a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static volatile a f32a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f33a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Config f34a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private IEventProcessor f35a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private IPerfProcessor f36a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f37a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ExecutorService f39a = Executors.newSingleThreadExecutor();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> f38a = new HashMap<>();
    private HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> b = new HashMap<>();

    static {
        f7962a = m.m574a() ? 30 : 10;
    }

    private a(Context context) {
        this.f33a = context;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int a() {
        HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> map = this.b;
        if (map == null) {
            return 0;
        }
        Iterator<String> it = map.keySet().iterator();
        int size = 0;
        while (it.hasNext()) {
            ArrayList<com.xiaomi.clientreport.data.a> arrayList = this.b.get(it.next());
            size += arrayList != null ? arrayList.size() : 0;
        }
        return size;
    }

    public static a a(Context context) {
        if (f32a == null) {
            synchronized (a.class) {
                if (f32a == null) {
                    f32a = new a(context);
                }
            }
        }
        return f32a;
    }

    private void a(al.a aVar, int i) {
        al.a(this.f33a).b(aVar, i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int b() {
        HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> map = this.f38a;
        int i = 0;
        if (map != null) {
            Iterator<String> it = map.keySet().iterator();
            while (it.hasNext()) {
                HashMap<String, com.xiaomi.clientreport.data.a> map2 = this.f38a.get(it.next());
                if (map2 != null) {
                    Iterator<String> it2 = map2.keySet().iterator();
                    while (it2.hasNext()) {
                        com.xiaomi.clientreport.data.a aVar = map2.get(it2.next());
                        if (aVar instanceof PerfClientReport) {
                            i = (int) (((long) i) + ((PerfClientReport) aVar).perfCounts);
                        }
                    }
                }
            }
        }
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(EventClientReport eventClientReport) {
        IEventProcessor iEventProcessor = this.f35a;
        if (iEventProcessor != null) {
            iEventProcessor.mo51a(eventClientReport);
            if (a() < 10) {
                a(new d(this), f7962a);
            } else {
                d();
                al.a(this.f33a).m121a("100888");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(PerfClientReport perfClientReport) {
        IPerfProcessor iPerfProcessor = this.f36a;
        if (iPerfProcessor != null) {
            iPerfProcessor.mo51a(perfClientReport);
            if (b() < 10) {
                a(new f(this), f7962a);
            } else {
                e();
                al.a(this.f33a).m121a("100889");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        try {
            this.f35a.b();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("we: " + e.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        try {
            this.f36a.b();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("wp: " + e.getMessage());
        }
    }

    private void f() {
        if (a(this.f33a).m48a().isEventUploadSwitchOpen()) {
            bq bqVar = new bq(this.f33a);
            int eventUploadFrequency = (int) a(this.f33a).m48a().getEventUploadFrequency();
            if (eventUploadFrequency < 1800) {
                eventUploadFrequency = 1800;
            }
            if (System.currentTimeMillis() - bw.a(this.f33a).a("sp_client_report_status", "event_last_upload_time", 0L) > eventUploadFrequency * 1000) {
                al.a(this.f33a).a(new h(this, bqVar), 10);
            }
            synchronized (a.class) {
                if (!al.a(this.f33a).a((al.a) bqVar, eventUploadFrequency)) {
                    al.a(this.f33a).m121a("100886");
                    al.a(this.f33a).a((al.a) bqVar, eventUploadFrequency);
                }
            }
        }
    }

    private void g() {
        if (a(this.f33a).m48a().isPerfUploadSwitchOpen()) {
            br brVar = new br(this.f33a);
            int perfUploadFrequency = (int) a(this.f33a).m48a().getPerfUploadFrequency();
            if (perfUploadFrequency < 1800) {
                perfUploadFrequency = 1800;
            }
            if (System.currentTimeMillis() - bw.a(this.f33a).a("sp_client_report_status", "perf_last_upload_time", 0L) > perfUploadFrequency * 1000) {
                al.a(this.f33a).a(new i(this, brVar), 15);
            }
            synchronized (a.class) {
                if (!al.a(this.f33a).a((al.a) brVar, perfUploadFrequency)) {
                    al.a(this.f33a).m121a("100887");
                    al.a(this.f33a).a((al.a) brVar, perfUploadFrequency);
                }
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized Config m48a() {
        if (this.f34a == null) {
            this.f34a = Config.defaultConfig(this.f33a);
        }
        return this.f34a;
    }

    public EventClientReport a(int i, String str) {
        EventClientReport eventClientReport = new EventClientReport();
        eventClientReport.eventContent = str;
        eventClientReport.eventTime = System.currentTimeMillis();
        eventClientReport.eventType = i;
        eventClientReport.eventId = bp.a(6);
        eventClientReport.production = 1000;
        eventClientReport.reportType = 1001;
        eventClientReport.clientInterfaceId = "E100004";
        eventClientReport.setAppPackageName(this.f33a.getPackageName());
        eventClientReport.setSdkVersion(this.f37a);
        return eventClientReport;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m49a() {
        a(this.f33a).f();
        a(this.f33a).g();
    }

    public void a(Config config, IEventProcessor iEventProcessor, IPerfProcessor iPerfProcessor) {
        this.f34a = config;
        this.f35a = iEventProcessor;
        this.f36a = iPerfProcessor;
        iEventProcessor.setEventMap(this.b);
        this.f36a.setPerfMap(this.f38a);
    }

    public void a(EventClientReport eventClientReport) {
        if (m48a().isEventUploadSwitchOpen()) {
            this.f39a.execute(new b(this, eventClientReport));
        }
    }

    public void a(PerfClientReport perfClientReport) {
        if (m48a().isPerfUploadSwitchOpen()) {
            this.f39a.execute(new c(this, perfClientReport));
        }
    }

    public void a(String str) {
        this.f37a = str;
    }

    public void a(boolean z, boolean z2, long j, long j2) {
        Config config = this.f34a;
        if (config != null) {
            if (z == config.isEventUploadSwitchOpen() && z2 == this.f34a.isPerfUploadSwitchOpen() && j == this.f34a.getEventUploadFrequency() && j2 == this.f34a.getPerfUploadFrequency()) {
                return;
            }
            long eventUploadFrequency = this.f34a.getEventUploadFrequency();
            long perfUploadFrequency = this.f34a.getPerfUploadFrequency();
            Config configBuild = Config.getBuilder().setAESKey(bt.a(this.f33a)).setEventEncrypted(this.f34a.isEventEncrypted()).setEventUploadSwitchOpen(z).setEventUploadFrequency(j).setPerfUploadSwitchOpen(z2).setPerfUploadFrequency(j2).build(this.f33a);
            this.f34a = configBuild;
            if (!configBuild.isEventUploadSwitchOpen()) {
                al.a(this.f33a).m121a("100886");
            } else if (eventUploadFrequency != configBuild.getEventUploadFrequency()) {
                com.xiaomi.channel.commonutils.logger.b.c(this.f33a.getPackageName() + "reset event job " + configBuild.getEventUploadFrequency());
                f();
            }
            if (!this.f34a.isPerfUploadSwitchOpen()) {
                al.a(this.f33a).m121a("100887");
                return;
            }
            if (perfUploadFrequency != configBuild.getPerfUploadFrequency()) {
                com.xiaomi.channel.commonutils.logger.b.c(this.f33a.getPackageName() + " reset perf job " + configBuild.getPerfUploadFrequency());
                g();
            }
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m50b() {
        if (m48a().isEventUploadSwitchOpen()) {
            bs bsVar = new bs();
            bsVar.a(this.f33a);
            bsVar.a(this.f35a);
            this.f39a.execute(bsVar);
        }
    }

    public void c() {
        if (m48a().isPerfUploadSwitchOpen()) {
            bs bsVar = new bs();
            bsVar.a(this.f36a);
            bsVar.a(this.f33a);
            this.f39a.execute(bsVar);
        }
    }
}
