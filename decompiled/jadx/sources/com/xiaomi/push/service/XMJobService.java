package com.xiaomi.push.service;

import android.app.Service;
import android.app.job.JobParameters;
import android.app.job.JobService;
import android.content.Intent;
import android.os.Binder;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import com.xiaomi.push.eu;

/* JADX INFO: loaded from: classes4.dex */
public class XMJobService extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static Service f8272a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private IBinder f852a = null;

    class a extends JobService {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Binder f8273a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private Handler f853a;

        /* JADX INFO: renamed from: com.xiaomi.push.service.XMJobService$a$a, reason: collision with other inner class name */
        class HandlerC0520a extends Handler {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            JobService f8274a;

            HandlerC0520a(JobService jobService) {
                super(jobService.getMainLooper());
                this.f8274a = jobService;
            }

            @Override // android.os.Handler
            public void handleMessage(Message message) {
                if (message.what != 1) {
                    return;
                }
                JobParameters jobParameters = (JobParameters) message.obj;
                com.xiaomi.channel.commonutils.logger.b.m43a("Job finished " + jobParameters.getJobId());
                this.f8274a.jobFinished(jobParameters, false);
                if (jobParameters.getJobId() == 1) {
                    eu.a(false);
                }
            }
        }

        a(Service service) {
            this.f8273a = null;
            this.f8273a = (Binder) com.xiaomi.push.bk.a((Object) this, "onBind", new Intent());
            com.xiaomi.push.bk.a((Object) this, "attachBaseContext", service);
        }

        @Override // android.app.job.JobService
        public boolean onStartJob(JobParameters jobParameters) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Job started " + jobParameters.getJobId());
            Intent intent = new Intent(this, (Class<?>) XMPushService.class);
            intent.setAction("com.xiaomi.push.timer");
            intent.setPackage(getPackageName());
            startService(intent);
            if (this.f853a == null) {
                this.f853a = new HandlerC0520a(this);
            }
            Handler handler = this.f853a;
            handler.sendMessage(Message.obtain(handler, 1, jobParameters));
            return true;
        }

        @Override // android.app.job.JobService
        public boolean onStopJob(JobParameters jobParameters) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Job stop " + jobParameters.getJobId());
            return false;
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        IBinder iBinder = this.f852a;
        return iBinder != null ? iBinder : new Binder();
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        if (Build.VERSION.SDK_INT >= 21) {
            this.f852a = new a(this).f8273a;
        }
        f8272a = this;
    }

    @Override // android.app.Service
    public void onDestroy() {
        super.onDestroy();
        f8272a = null;
    }
}
