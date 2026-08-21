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

public class a {
    private static final int a;
    private static volatile a a;
    private Context a;
    private Config a;
    private IEventProcessor a;
    private IPerfProcessor a;
    private String a;
    private ExecutorService a = Executors.newSingleThreadExecutor();
    private HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> a = new HashMap<>();
    private HashMap<String, ArrayList<com.xiaomi.clientreport.data.a>> b = new HashMap<>();

    static {
        a = m.a() ? 30 : 10;
    }

    private a(Context context) {
        this.a = context;
    }

    private int a() {
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
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a(context);
                }
            }
        }
        return a;
    }

    private void a(al.a aVar, int i) {
        al.a(this.a).b(aVar, i);
    }

    private int b() {
        HashMap<String, HashMap<String, com.xiaomi.clientreport.data.a>> map = this.a;
        int i = 0;
        if (map != null) {
            Iterator<String> it = map.keySet().iterator();
            while (it.hasNext()) {
                HashMap<String, com.xiaomi.clientreport.data.a> map2 = this.a.get(it.next());
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

    private void b(EventClientReport eventClientReport) {
        IEventProcessor iEventProcessor = this.a;
        if (iEventProcessor != null) {
            iEventProcessor.a(eventClientReport);
            if (a() < 10) {
                a(new d(this), a);
            } else {
                d();
                al.a(this.a).a("100888");
            }
        }
    }

    private void b(PerfClientReport perfClientReport) {
        IPerfProcessor iPerfProcessor = this.a;
        if (iPerfProcessor != null) {
            iPerfProcessor.a(perfClientReport);
            if (b() < 10) {
                a(new f(this), a);
            } else {
                e();
                al.a(this.a).a("100889");
            }
        }
    }

    private void d() {
        try {
            this.a.b();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("we: " + e.getMessage());
        }
    }

    private void e() {
        try {
            this.a.b();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("wp: " + e.getMessage());
        }
    }

    private void f() {
        if (a(this.a).a().isEventUploadSwitchOpen()) {
            bq bqVar = new bq(this.a);
            int eventUploadFrequency = (int) a(this.a).a().getEventUploadFrequency();
            if (eventUploadFrequency < 1800) {
                eventUploadFrequency = 1800;
            }
            if (System.currentTimeMillis() - bw.a(this.a).a("sp_client_report_status", "event_last_upload_time", 0L) > eventUploadFrequency * 1000) {
                al.a(this.a).a(new h(this, bqVar), 10);
            }
            synchronized (a.class) {
                if (!al.a(this.a).a((al.a) bqVar, eventUploadFrequency)) {
                    al.a(this.a).a("100886");
                    al.a(this.a).a((al.a) bqVar, eventUploadFrequency);
                }
            }
        }
    }

    private void g() {
        if (a(this.a).a().isPerfUploadSwitchOpen()) {
            br brVar = new br(this.a);
            int perfUploadFrequency = (int) a(this.a).a().getPerfUploadFrequency();
            if (perfUploadFrequency < 1800) {
                perfUploadFrequency = 1800;
            }
            if (System.currentTimeMillis() - bw.a(this.a).a("sp_client_report_status", "perf_last_upload_time", 0L) > perfUploadFrequency * 1000) {
                al.a(this.a).a(new i(this, brVar), 15);
            }
            synchronized (a.class) {
                if (!al.a(this.a).a((al.a) brVar, perfUploadFrequency)) {
                    al.a(this.a).a("100887");
                    al.a(this.a).a((al.a) brVar, perfUploadFrequency);
                }
            }
        }
    }

    public synchronized Config a() {
        if (this.a == null) {
            this.a = Config.defaultConfig(this.a);
        }
        return this.a;
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
        eventClientReport.setAppPackageName(this.a.getPackageName());
        eventClientReport.setSdkVersion(this.a);
        return eventClientReport;
    }

    public void a() {
        a(this.a).f();
        a(this.a).g();
    }

    public void a(Config config, IEventProcessor iEventProcessor, IPerfProcessor iPerfProcessor) {
        this.a = config;
        this.a = iEventProcessor;
        this.a = iPerfProcessor;
        iEventProcessor.setEventMap(this.b);
        this.a.setPerfMap(this.a);
    }

    public void a(EventClientReport eventClientReport) {
        if (a().isEventUploadSwitchOpen()) {
            this.a.execute(new b(this, eventClientReport));
        }
    }

    public void a(PerfClientReport perfClientReport) {
        if (a().isPerfUploadSwitchOpen()) {
            this.a.execute(new c(this, perfClientReport));
        }
    }

    public void a(String str) {
        this.a = str;
    }

    public void a(boolean z, boolean z2, long j, long j2) {
        Config config = this.a;
        if (config != null) {
            if (z == config.isEventUploadSwitchOpen() && z2 == this.a.isPerfUploadSwitchOpen() && j == this.a.getEventUploadFrequency() && j2 == this.a.getPerfUploadFrequency()) {
                return;
            }
            long eventUploadFrequency = this.a.getEventUploadFrequency();
            long perfUploadFrequency = this.a.getPerfUploadFrequency();
            Config configBuild = Config.getBuilder().setAESKey(bt.a(this.a)).setEventEncrypted(this.a.isEventEncrypted()).setEventUploadSwitchOpen(z).setEventUploadFrequency(j).setPerfUploadSwitchOpen(z2).setPerfUploadFrequency(j2).build(this.a);
            this.a = configBuild;
            if (!configBuild.isEventUploadSwitchOpen()) {
                al.a(this.a).a("100886");
            } else if (eventUploadFrequency != configBuild.getEventUploadFrequency()) {
                com.xiaomi.channel.commonutils.logger.b.c(this.a.getPackageName() + "reset event job " + configBuild.getEventUploadFrequency());
                f();
            }
            if (!this.a.isPerfUploadSwitchOpen()) {
                al.a(this.a).a("100887");
                return;
            }
            if (perfUploadFrequency != configBuild.getPerfUploadFrequency()) {
                com.xiaomi.channel.commonutils.logger.b.c(this.a.getPackageName() + " reset perf job " + configBuild.getPerfUploadFrequency());
                g();
            }
        }
    }

    public void b() {
        if (a().isEventUploadSwitchOpen()) {
            bs bsVar = new bs();
            bsVar.a(this.a);
            bsVar.a(this.a);
            this.a.execute(bsVar);
        }
    }

    public void c() {
        if (a().isPerfUploadSwitchOpen()) {
            bs bsVar = new bs();
            bsVar.a(this.a);
            bsVar.a(this.a);
            this.a.execute(bsVar);
        }
    }
}
