package com.ss.android.socialbase.appdownloader;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity;
import com.ss.android.socialbase.downloader.common.AppStatusManager;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.lang.ref.SoftReference;
import java.util.ArrayDeque;
import java.util.Queue;

public class ux {
    private Handler c;
    private boolean df;
    private Runnable fw;
    private SoftReference<JumpUnknownSourceActivity> pp;
    private long pt;
    private long q;
    private final Queue<Integer> rg;

    private ux() {
        this.rg = new ArrayDeque();
        this.df = false;
        this.c = new Handler(Looper.getMainLooper());
        this.fw = new Runnable() {
            @Override
            public void run() {
                ux.this.q();
            }
        };
        AppStatusManager.getInstance().registerAppSwitchListener(new AppStatusManager.AppStatusChangeListener() {
            @Override
            public void onAppBackground() {
            }

            @Override
            public void onAppForeground() {
                if (ux.this.rg.isEmpty()) {
                    return;
                }
                long jOptLong = DownloadSetting.obtainGlobal().optLong("install_on_resume_install_interval", 120000L);
                long jCurrentTimeMillis = System.currentTimeMillis() - ux.this.pt;
                if (jCurrentTimeMillis < jOptLong) {
                    if (ux.this.c.hasCallbacks(ux.this.fw)) {
                        return;
                    }
                    ux.this.c.postDelayed(ux.this.fw, jOptLong - jCurrentTimeMillis);
                } else {
                    ux.this.pt = System.currentTimeMillis();
                    ux.this.q();
                }
            }
        });
    }

    private void q() {
        final Integer numPoll;
        if (Build.VERSION.SDK_INT < 29 || AppStatusManager.getInstance().isAppForeground()) {
            synchronized (this.rg) {
                numPoll = this.rg.poll();
            }
            this.c.removeCallbacks(this.fw);
            if (numPoll != null) {
                final Context appContext = DownloadComponentManager.getAppContext();
                if (Looper.myLooper() != Looper.getMainLooper()) {
                    this.c.post(new Runnable() {
                        @Override
                        public void run() {
                            ux.this.df(appContext, numPoll.intValue(), false);
                        }
                    });
                } else {
                    df(appContext, numPoll.intValue(), false);
                }
                this.c.postDelayed(this.fw, 20000L);
                return;
            }
            this.df = false;
        }
    }

    void rg(DownloadInfo downloadInfo, String str) {
        if (downloadInfo == null || TextUtils.isEmpty(str)) {
            return;
        }
        q();
    }

    private static class rg {
        private static final ux rg = new ux();
    }

    public static ux rg() {
        return rg.rg;
    }

    public int rg(final Context context, final int i, final boolean z) {
        if (z) {
            return df(context, i, z);
        }
        if (pt()) {
            this.c.postDelayed(new Runnable() {
                @Override
                public void run() {
                    ux.this.rg(context, i, z);
                }
            }, 1000L);
            return 1;
        }
        if (AppStatusManager.getInstance().isAppForeground()) {
            Logger.i("leaves", "on Foreground");
            return df(context, i, z);
        }
        if (df.rg()) {
            return 1;
        }
        boolean z2 = Build.VERSION.SDK_INT < 29;
        if (this.rg.isEmpty() && !this.df && z2) {
            return df(context, i, z);
        }
        int iOptInt = DownloadSetting.obtainGlobal().optInt("install_queue_size", 3);
        synchronized (this.rg) {
            while (this.rg.size() > iOptInt) {
                this.rg.poll();
            }
        }
        if (z2) {
            this.c.removeCallbacks(this.fw);
            this.c.postDelayed(this.fw, DownloadSetting.obtain(i).optLong("install_queue_timeout", 20000L));
        }
        synchronized (this.rg) {
            if (!this.rg.contains(Integer.valueOf(i))) {
                this.rg.offer(Integer.valueOf(i));
            }
        }
        return 1;
    }

    private boolean pt() {
        return System.currentTimeMillis() - this.q < 1000;
    }

    private int df(Context context, int i, boolean z) {
        int iDf = q.df(context, i, z);
        if (iDf == 1) {
            this.df = true;
        }
        this.q = System.currentTimeMillis();
        return iDf;
    }

    public void rg(JumpUnknownSourceActivity jumpUnknownSourceActivity) {
        this.pp = new SoftReference<>(jumpUnknownSourceActivity);
    }

    public JumpUnknownSourceActivity df() {
        SoftReference<JumpUnknownSourceActivity> softReference = this.pp;
        JumpUnknownSourceActivity jumpUnknownSourceActivity = softReference == null ? null : softReference.get();
        this.pp = null;
        return jumpUnknownSourceActivity;
    }
}
