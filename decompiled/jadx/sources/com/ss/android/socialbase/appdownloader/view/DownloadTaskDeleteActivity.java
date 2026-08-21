package com.ss.android.socialbase.appdownloader.view;

import android.app.Activity;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;
import com.ss.android.socialbase.appdownloader.pt;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;
import com.ss.android.socialbase.appdownloader.q.q;
import com.ss.android.socialbase.appdownloader.rz;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;

/* JADX INFO: loaded from: classes3.dex */
public class DownloadTaskDeleteActivity extends Activity {
    private Intent df;
    private b rg;

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        rg();
    }

    private void rg() {
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        attributes.alpha = 0.0f;
        window.setAttributes(attributes);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.df = getIntent();
        df();
        b bVar = this.rg;
        if (bVar != null && !bVar.df()) {
            this.rg.rg();
        } else if (this.rg == null) {
            finish();
        }
    }

    private void df() {
        Intent intent;
        if (this.rg != null || (intent = this.df) == null) {
            return;
        }
        try {
            final boolean z = false;
            final int intExtra = intent.getIntExtra("extra_click_download_ids", 0);
            final DownloadInfo downloadInfo = Downloader.getInstance(getApplicationContext()).getDownloadInfo(intExtra);
            if (downloadInfo == null) {
                return;
            }
            String title = downloadInfo.getTitle();
            if (TextUtils.isEmpty(title)) {
                Log.w("DeleteActivity", "Missing appName; skipping handle");
                return;
            }
            String string = String.format(getString(rz.rg(this, "tt_appdownloader_notification_download_delete")), title);
            q qVarRg = pt.bm().rg();
            hq hqVarRg = qVarRg != null ? qVarRg.rg(this) : null;
            if (hqVarRg == null) {
                hqVarRg = new com.ss.android.socialbase.appdownloader.pt.rg(this);
            }
            if (hqVarRg != null) {
                int iRg = rz.rg(this, "tt_appdownloader_tip");
                int iRg2 = rz.rg(this, "tt_appdownloader_label_ok");
                int iRg3 = rz.rg(this, "tt_appdownloader_label_cancel");
                if (DownloadSetting.obtain(downloadInfo.getId()).optInt(DownloadSettingKeys.CANCEL_WITH_NET_OPT, 0) == 1 && DownloadUtils.isNoWifiAndInNet() && downloadInfo.getCurBytes() != downloadInfo.getTotalBytes()) {
                    z = true;
                }
                if (z) {
                    iRg2 = rz.rg(this, "tt_appdownloader_label_reserve_wifi");
                    iRg3 = rz.rg(this, "tt_appdownloader_label_cancel_directly");
                    string = getResources().getString(rz.rg(this, "tt_appdownloader_resume_in_wifi"));
                }
                hqVarRg.rg(iRg).rg(string).rg(iRg2, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.3
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i) {
                        if (!z) {
                            DownloadTaskDeleteActivity.this.rg(downloadInfo, intExtra);
                        } else {
                            downloadInfo.setOnlyWifi(true);
                            Downloader.getInstance(DownloadTaskDeleteActivity.this).pause(downloadInfo.getId());
                            new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.3.1
                                @Override // java.lang.Runnable
                                public void run() {
                                    Downloader.getInstance(DownloadTaskDeleteActivity.this).resume(downloadInfo.getId());
                                }
                            }, 100L);
                        }
                        DownloadTaskDeleteActivity.this.finish();
                    }
                }).df(iRg3, new DialogInterface.OnClickListener() { // from class: com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.2
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i) {
                        if (z) {
                            DownloadTaskDeleteActivity.this.rg(downloadInfo, intExtra);
                        }
                        DownloadTaskDeleteActivity.this.finish();
                    }
                }).rg(new DialogInterface.OnCancelListener() { // from class: com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.1
                    @Override // android.content.DialogInterface.OnCancelListener
                    public void onCancel(DialogInterface dialogInterface) {
                        DownloadTaskDeleteActivity.this.finish();
                    }
                });
                this.rg = hqVarRg.rg();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rg(DownloadInfo downloadInfo, int i) {
        com.ss.android.socialbase.appdownloader.q.pt ptVarDf = pt.bm().df();
        if (ptVarDf != null) {
            ptVarDf.rg(downloadInfo);
        }
        IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(DownloadComponentManager.getAppContext()).getDownloadNotificationEventListener(i);
        if (downloadNotificationEventListener != null) {
            downloadNotificationEventListener.onNotificationEvent(10, downloadInfo, "", "");
        }
        if (DownloadComponentManager.getAppContext() != null) {
            Downloader.getInstance(DownloadComponentManager.getAppContext()).cancel(i);
        }
    }
}
