package com.ss.android.socialbase.appdownloader;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.os.IBinder;
import android.text.TextUtils;
import android.widget.Toast;
import com.igexin.sdk.PushConsts;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.depend.INotificationClickCallback;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.File;
import java.util.ArrayList;

public class DownloadHandlerService extends Service {
    private static final String rg = DownloadHandlerService.class.getSimpleName();

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        DownloadComponentManager.setAppContext(this);
    }

    @Override
    public int onStartCommand(Intent intent, int i, int i2) {
        super.onStartCommand(intent, i, i2);
        if (Logger.debug()) {
            Logger.d(rg, "onStartCommand");
        }
        rg(intent);
        stopSelf();
        return 2;
    }

    private boolean rg(Intent intent) {
        if (intent == null) {
            return false;
        }
        String action = intent.getAction();
        if (TextUtils.isEmpty(action)) {
            return false;
        }
        int intExtra = intent.getIntExtra("extra_click_download_ids", 0);
        intent.getIntExtra("extra_click_download_type", 0);
        com.ss.android.socialbase.appdownloader.q.pt ptVarDf = pt.bm().df();
        IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(this).getDownloadNotificationEventListener(intExtra);
        if (intent.getBooleanExtra("extra_from_notification", false) && DownloadSetting.obtain(intExtra).optInt("notification_opt_2") == 1) {
            DownloadNotificationManager.getInstance().cancelNotification(intExtra);
        }
        DownloadInfo downloadInfo = Downloader.getInstance(this).getDownloadInfo(intExtra);
        if (downloadInfo == null) {
            return false;
        }
        if (action.equals("android.ss.intent.action.DOWNLOAD_CLICK_CONTENT")) {
            rg(downloadInfo, ptVarDf, downloadNotificationEventListener);
        } else if (action.equals("android.ss.intent.action.DOWNLOAD_OPEN")) {
            rg(this, downloadInfo, ptVarDf, downloadNotificationEventListener);
        } else if (action.equals("android.ss.intent.action.DOWNLOAD_CLICK_BTN")) {
            if (downloadInfo.getStatus() == 0) {
                return false;
            }
            rg(this, downloadInfo, ptVarDf, downloadNotificationEventListener);
            if (downloadInfo.isDownloadOverStatus() && DownloadSetting.obtain(intExtra).optInt(DownloadSettingKeys.NO_HIDE_NOTIFICATION, 0) == 0) {
                if (!(DownloadSetting.obtain(intExtra).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2 && downloadInfo.getStatus() == -1)) {
                    DownloadNotificationManager.getInstance().hideNotification(intExtra);
                    DownloadNotificationManager.getInstance().cancelNotification(intExtra);
                }
            }
        } else if (action.equals("android.ss.intent.action.DOWNLOAD_DELETE")) {
            df(downloadInfo, ptVarDf, downloadNotificationEventListener);
        } else if (action.equals("android.ss.intent.action.DOWNLOAD_HIDE")) {
            DownloadNotificationManager.getInstance().hideNotification(intExtra);
        } else if (action.equals(PushConsts.ACTION_BROADCAST_TO_BOOT) || action.equals("android.intent.action.MEDIA_MOUNTED")) {
            DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
                @Override
                public void run() {
                    try {
                        ArrayList arrayList = new ArrayList();
                        arrayList.add(AdBaseConstants.MIME_APK);
                        arrayList.add(DownloadConstants.MIME_PLG);
                        Downloader.getInstance(DownloadComponentManager.getAppContext()).restartAllFailedDownloadTasks(arrayList);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
            return true;
        }
        return false;
    }

    private static void rg(Context context, DownloadInfo downloadInfo) {
        if (DownloadUtils.isWifi(context.getApplicationContext()) && downloadInfo.isPauseReserveOnWifi()) {
            downloadInfo.stopPauseReserveOnWifi();
        }
    }

    private static void rg(Context context, final com.ss.android.socialbase.appdownloader.q.pt ptVar, final DownloadInfo downloadInfo) {
        if (downloadInfo == null) {
            return;
        }
        final IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(context).getDownloadNotificationEventListener(downloadInfo.getId());
        if (ptVar == null && downloadNotificationEventListener == null) {
            return;
        }
        DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
            @Override
            public void run() {
                File file;
                PackageInfo packageInfoRg;
                try {
                    file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (file.exists()) {
                    try {
                        String str = (DownloadComponentManager.getAppContext() == null || (packageInfoRg = q.rg(downloadInfo, file)) == null) ? "" : packageInfoRg.packageName;
                        if (ptVar != null) {
                            ptVar.rg(downloadInfo.getId(), 3, str, -3, downloadInfo.getDownloadTime());
                        }
                        if (downloadNotificationEventListener != null) {
                            downloadNotificationEventListener.onNotificationEvent(3, downloadInfo, str, "");
                            return;
                        }
                        return;
                    } catch (Exception e2) {
                        e2.printStackTrace();
                        return;
                    }
                    e.printStackTrace();
                }
            }
        });
    }

    private void rg(DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.q.pt ptVar, IDownloadNotificationEventListener iDownloadNotificationEventListener) {
        boolean zOnClickWhenUnSuccess;
        int id = downloadInfo.getId();
        INotificationClickCallback notificationClickCallback = DownloadProcessDispatcher.getInstance().getNotificationClickCallback(id);
        if (notificationClickCallback != null) {
            try {
                zOnClickWhenUnSuccess = notificationClickCallback.onClickWhenUnSuccess(downloadInfo);
            } catch (Throwable th) {
                th.printStackTrace();
                zOnClickWhenUnSuccess = false;
            }
        } else {
            zOnClickWhenUnSuccess = false;
        }
        if (zOnClickWhenUnSuccess) {
            return;
        }
        Intent intent = new Intent(this, (Class<?>) DownloadTaskDeleteActivity.class);
        intent.putExtra("extra_click_download_ids", id);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        startActivity(intent);
        DownloadNotificationManager.getInstance().hideNotification(id);
        downloadInfo.updateDownloadTime();
        if (ptVar != null) {
            ptVar.rg(id, 7, "", downloadInfo.getStatus(), downloadInfo.getDownloadTime());
        }
        if (iDownloadNotificationEventListener != null) {
            iDownloadNotificationEventListener.onNotificationEvent(7, downloadInfo, "", "");
        }
    }

    private void df(DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.q.pt ptVar, IDownloadNotificationEventListener iDownloadNotificationEventListener) {
        int id = downloadInfo.getId();
        Intent intent = new Intent(this, (Class<?>) DownloadTaskDeleteActivity.class);
        intent.putExtra("extra_click_download_ids", id);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        startActivity(intent);
        DownloadNotificationManager.getInstance().hideNotification(id);
        downloadInfo.updateDownloadTime();
        if (ptVar != null) {
            ptVar.rg(id, 7, "", downloadInfo.getStatus(), downloadInfo.getDownloadTime());
        }
        if (iDownloadNotificationEventListener != null) {
            iDownloadNotificationEventListener.onNotificationEvent(7, downloadInfo, "", "");
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void rg(Context context, int i, boolean z) {
        boolean zOnClickWhenSuccess;
        INotificationClickCallback notificationClickCallback;
        if (!z || (notificationClickCallback = DownloadProcessDispatcher.getInstance().getNotificationClickCallback(i)) == null) {
            zOnClickWhenSuccess = false;
        } else {
            try {
                DownloadInfo downloadInfo = Downloader.getInstance(context).getDownloadInfo(i);
                if (downloadInfo != null) {
                    zOnClickWhenSuccess = notificationClickCallback.onClickWhenSuccess(downloadInfo);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (!zOnClickWhenSuccess && q.rg(context, i, true) == 0) {
            Toast.makeText(context, "Open Fail!", 0).show();
        }
    }

    public static void rg(Context context, DownloadInfo downloadInfo, com.ss.android.socialbase.appdownloader.q.pt ptVar, IDownloadNotificationEventListener iDownloadNotificationEventListener) {
        AbsNotificationItem notificationItem;
        int id = downloadInfo.getId();
        INotificationClickCallback notificationClickCallback = DownloadProcessDispatcher.getInstance().getNotificationClickCallback(id);
        if (AdBaseConstants.MIME_APK.equals(downloadInfo.getMimeType()) && notificationClickCallback != null && q.rg(context, downloadInfo) && notificationClickCallback.onClickWhenInstalled(downloadInfo)) {
        }
        boolean z = false;
        switch (downloadInfo.getStatus()) {
            case -4:
            case -1:
                if (DownloadSetting.obtain(id).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2 && downloadInfo.isOnlyWifi()) {
                    downloadInfo.setOnlyWifi(false);
                }
                Downloader.getInstance(context).restart(id);
                break;
            case -3:
                rg(DownloadComponentManager.getAppContext(), id, true);
                rg(context, ptVar, downloadInfo);
                if (DownloadSetting.obtain(id).optInt("notification_click_install_auto_cancel", 1) != 0 || (notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(id)) == null) {
                    z = true;
                } else {
                    notificationItem.recordClickInstall();
                    notificationItem.refreshStatus(-3, null, false, true);
                }
                if (z) {
                    DownloadNotificationManager.getInstance().hideNotification(id);
                }
                break;
            case -2:
                if (DownloadProcessDispatcher.getInstance().canResume(id)) {
                    Downloader.getInstance(context).resume(id);
                } else {
                    q.rg(downloadInfo, true, false);
                }
                if (ptVar != null) {
                    ptVar.rg(id, 6, "", downloadInfo.getStatus(), downloadInfo.getDownloadTime());
                }
                if (iDownloadNotificationEventListener != null) {
                    iDownloadNotificationEventListener.onNotificationEvent(6, downloadInfo, "", "");
                }
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                Downloader.getInstance(context).pause(id);
                rg(context, downloadInfo);
                if (ptVar != null) {
                    ptVar.rg(id, 5, "", downloadInfo.getStatus(), downloadInfo.getDownloadTime());
                }
                if (iDownloadNotificationEventListener != null) {
                    iDownloadNotificationEventListener.onNotificationEvent(5, downloadInfo, "", "");
                }
                break;
        }
    }
}
