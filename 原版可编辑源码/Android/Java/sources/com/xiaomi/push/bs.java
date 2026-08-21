package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.clientreport.processor.IEventProcessor;
import com.xiaomi.clientreport.processor.IPerfProcessor;

public class bs implements Runnable {
    private Context a;
    private com.xiaomi.clientreport.processor.c a;

    public void a(Context context) {
        this.a = context;
    }

    public void a(com.xiaomi.clientreport.processor.c cVar) {
        this.a = cVar;
    }

    @Override
    public void run() {
        bw bwVarA;
        String str;
        long jCurrentTimeMillis;
        try {
            if (this.a != null) {
                this.a.a();
            }
            com.xiaomi.channel.commonutils.logger.b.c("begin read and send perf / event");
            if (this.a instanceof IEventProcessor) {
                bwVarA = bw.a(this.a);
                str = "event_last_upload_time";
                jCurrentTimeMillis = System.currentTimeMillis();
            } else {
                if (!(this.a instanceof IPerfProcessor)) {
                    return;
                }
                bwVarA = bw.a(this.a);
                str = "perf_last_upload_time";
                jCurrentTimeMillis = System.currentTimeMillis();
            }
            bwVarA.a("sp_client_report_status", str, jCurrentTimeMillis);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
        }
    }
}
