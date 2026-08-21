package com.xiaomi.push;

import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.os.SystemClock;
import com.xiaomi.push.eu;
import com.xiaomi.push.service.XMJobService;

public class ew implements eu.a {
    JobScheduler a;
    Context a;
    private boolean a = false;

    ew(Context context) {
        this.a = context;
        this.a = (JobScheduler) context.getSystemService("jobscheduler");
    }

    @Override
    public void a() {
        this.a = false;
        this.a.cancel(1);
    }

    void a(long j) {
        JobInfo.Builder builder = new JobInfo.Builder(1, new ComponentName(this.a.getPackageName(), XMJobService.class.getName()));
        builder.setMinimumLatency(j);
        builder.setOverrideDeadline(j);
        builder.setRequiredNetworkType(1);
        builder.setPersisted(false);
        com.xiaomi.channel.commonutils.logger.b.c("schedule Job = " + builder.build().getId() + " in " + j);
        this.a.schedule(builder.build());
    }

    @Override
    public void a(boolean z) {
        if (z || this.a) {
            long jB = gc.b();
            if (z) {
                a();
                jB -= SystemClock.elapsedRealtime() % jB;
            }
            this.a = true;
            a(jB);
        }
    }

    @Override
    public boolean a() {
        return this.a;
    }
}
