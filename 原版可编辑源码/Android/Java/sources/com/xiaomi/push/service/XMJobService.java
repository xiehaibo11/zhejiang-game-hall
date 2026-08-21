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

public class XMJobService extends Service {
    static Service a;
    private IBinder a = null;

    class a extends JobService {
        Binder a;
        private Handler a;

        class a extends Handler {
            JobService a;

            a(JobService jobService) {
                super(jobService.getMainLooper());
                this.a = jobService;
            }

            @Override
            public void handleMessage(Message message) {
                if (message.what != 1) {
                    return;
                }
                JobParameters jobParameters = (JobParameters) message.obj;
                com.xiaomi.channel.commonutils.logger.b.a("Job finished " + jobParameters.getJobId());
                this.a.jobFinished(jobParameters, false);
                if (jobParameters.getJobId() == 1) {
                    eu.a(false);
                }
            }
        }

        a(Service service) {
            this.a = null;
            this.a = (Binder) com.xiaomi.push.bk.a((Object) this, "onBind", new Intent());
            com.xiaomi.push.bk.a((Object) this, "attachBaseContext", service);
        }

        @Override
        public boolean onStartJob(JobParameters jobParameters) {
            com.xiaomi.channel.commonutils.logger.b.a("Job started " + jobParameters.getJobId());
            Intent intent = new Intent(this, (Class<?>) XMPushService.class);
            intent.setAction("com.xiaomi.push.timer");
            intent.setPackage(getPackageName());
            startService(intent);
            if (this.a == null) {
                this.a = new a(this);
            }
            Handler handler = this.a;
            handler.sendMessage(Message.obtain(handler, 1, jobParameters));
            return true;
        }

        @Override
        public boolean onStopJob(JobParameters jobParameters) {
            com.xiaomi.channel.commonutils.logger.b.a("Job stop " + jobParameters.getJobId());
            return false;
        }
    }

    @Override
    public IBinder onBind(Intent intent) {
        IBinder iBinder = this.a;
        return iBinder != null ? iBinder : new Binder();
    }

    @Override
    public void onCreate() {
        super.onCreate();
        if (Build.VERSION.SDK_INT >= 21) {
            this.a = new a(this).a;
        }
        a = this;
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        a = null;
    }
}
