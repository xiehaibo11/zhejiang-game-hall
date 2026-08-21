package com.xiaomi.push;

import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.os.SystemClock;
import com.xiaomi.push.eu;
import com.xiaomi.push.service.XMJobService;

/* JADX INFO: loaded from: classes4.dex */
public class ew implements eu.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    JobScheduler f8142a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    Context f344a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f345a = false;

    ew(Context context) {
        this.f344a = context;
        this.f8142a = (JobScheduler) context.getSystemService("jobscheduler");
    }

    @Override // com.xiaomi.push.eu.a
    public void a() {
        this.f345a = false;
        this.f8142a.cancel(1);
    }

    void a(long j) {
        JobInfo.Builder builder = new JobInfo.Builder(1, new ComponentName(this.f344a.getPackageName(), XMJobService.class.getName()));
        builder.setMinimumLatency(j);
        builder.setOverrideDeadline(j);
        builder.setRequiredNetworkType(1);
        builder.setPersisted(false);
        com.xiaomi.channel.commonutils.logger.b.c("schedule Job = " + builder.build().getId() + " in " + j);
        this.f8142a.schedule(builder.build());
    }

    @Override // com.xiaomi.push.eu.a
    public void a(boolean z) {
        if (z || this.f345a) {
            long jB = gc.b();
            if (z) {
                a();
                jB -= SystemClock.elapsedRealtime() % jB;
            }
            this.f345a = true;
            a(jB);
        }
    }

    @Override // com.xiaomi.push.eu.a
    /* JADX INFO: renamed from: a */
    public boolean mo329a() {
        return this.f345a;
    }
}
