package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.clientreport.processor.IEventProcessor;
import com.xiaomi.clientreport.processor.IPerfProcessor;

/* JADX INFO: loaded from: classes4.dex */
public class bs implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8067a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private com.xiaomi.clientreport.processor.c f161a;

    public void a(Context context) {
        this.f8067a = context;
    }

    public void a(com.xiaomi.clientreport.processor.c cVar) {
        this.f161a = cVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        bw bwVarA;
        String str;
        long jCurrentTimeMillis;
        try {
            if (this.f161a != null) {
                this.f161a.a();
            }
            com.xiaomi.channel.commonutils.logger.b.c("begin read and send perf / event");
            if (this.f161a instanceof IEventProcessor) {
                bwVarA = bw.a(this.f8067a);
                str = "event_last_upload_time";
                jCurrentTimeMillis = System.currentTimeMillis();
            } else {
                if (!(this.f161a instanceof IPerfProcessor)) {
                    return;
                }
                bwVarA = bw.a(this.f8067a);
                str = "perf_last_upload_time";
                jCurrentTimeMillis = System.currentTimeMillis();
            }
            bwVarA.m166a("sp_client_report_status", str, jCurrentTimeMillis);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }
}
