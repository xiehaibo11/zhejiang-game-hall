package com.ss.android.socialbase.downloader.impls;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.constants.DownloadConstants;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher;

public class DownloadHandleService extends Service {
    private static final String TAG = DownloadHandleService.class.getSimpleName();

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
        handleIntent(intent);
        return 2;
    }

    private void handleIntent(Intent intent) {
        final int intExtra;
        if (intent == null) {
            return;
        }
        String action = intent.getAction();
        if (TextUtils.isEmpty(action) || (intExtra = intent.getIntExtra(DownloadConstants.EXTRA_DOWNLOAD_ID, 0)) == 0) {
            return;
        }
        if (action.equals(DownloadConstants.ACTION_RETRY)) {
            DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
                @Override
                public void run() {
                    try {
                        DownloadProcessDispatcher.getInstance().retryDelayStart(intExtra);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
        } else if (action.equals(DownloadConstants.ACTION_DOWNLOAD_PROCESS_NOTIFY)) {
            DownloadProcessDispatcher.getInstance().recordTaskProcessIndependent(intExtra);
        } else if (action.equals(DownloadConstants.ACTION_DOWNLOAD_MULTI_PROCESS_NOTIFY)) {
            DownloadComponentManager.setDownloadInMultiProcess();
        }
    }
}
