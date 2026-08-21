package com.huawei.hms.availableupdate;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.view.KeyEvent;
import android.view.View;
import android.widget.ProgressBar;
import android.widget.TextView;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.ResourceLoaderUtil;
import java.text.NumberFormat;

/* JADX INFO: compiled from: DownloadProgress.java */
/* JADX INFO: loaded from: classes.dex */
public class y extends q {
    public ProgressBar c;
    public TextView d;
    public int e = 0;
    public DialogInterface.OnKeyListener f = new b();

    /* JADX INFO: compiled from: DownloadProgress.java */
    public static class b implements DialogInterface.OnKeyListener {
        public b() {
        }

        @Override // android.content.DialogInterface.OnKeyListener
        public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
            return i == 4 && keyEvent.getRepeatCount() == 0;
        }
    }

    public void a(int i) {
        this.e = i;
    }

    public void b(int i) {
        ProgressBar progressBar;
        Activity activityE = e();
        if (activityE == null || activityE.isFinishing()) {
            HMSLog.w("DownloadProgress", "In setDownloading, The activity is null or finishing.");
        } else {
            if (this.d == null || (progressBar = this.c) == null) {
                return;
            }
            progressBar.setProgress(i);
            this.d.setText(NumberFormat.getPercentInstance().format(i / 100.0f));
        }
    }

    @Override // com.huawei.hms.availableupdate.q
    public AlertDialog g() {
        AlertDialog.Builder builder = new AlertDialog.Builder(e(), f());
        View viewInflate = View.inflate(e(), ResourceLoaderUtil.getLayoutId("hms_download_progress"), null);
        builder.setView(viewInflate);
        builder.setCancelable(false);
        builder.setOnKeyListener(this.f);
        this.c = (ProgressBar) viewInflate.findViewById(ResourceLoaderUtil.getIdId("download_info_progress"));
        this.d = (TextView) viewInflate.findViewById(ResourceLoaderUtil.getIdId("hms_progress_text"));
        b(this.e);
        return builder.create();
    }
}
