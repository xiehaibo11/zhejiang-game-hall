package com.mbridge.msdk.playercommon.exoplayer2.offline;

import android.app.Notification;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.util.Log;
import com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager;
import com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements;
import com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher;
import com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler;
import com.mbridge.msdk.playercommon.exoplayer2.util.NotificationUtil;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import java.io.IOException;
import java.util.HashMap;

public abstract class DownloadService extends Service {
    public static final String ACTION_ADD = "com.google.android.exoplayer.downloadService.action.ADD";
    public static final String ACTION_INIT = "com.google.android.exoplayer.downloadService.action.INIT";
    private static final String ACTION_RESTART = "com.google.android.exoplayer.downloadService.action.RESTART";
    private static final String ACTION_START_DOWNLOADS = "com.google.android.exoplayer.downloadService.action.START_DOWNLOADS";
    private static final String ACTION_STOP_DOWNLOADS = "com.google.android.exoplayer.downloadService.action.STOP_DOWNLOADS";
    private static final boolean DEBUG = false;
    public static final long DEFAULT_FOREGROUND_NOTIFICATION_UPDATE_INTERVAL = 1000;
    public static final String KEY_DOWNLOAD_ACTION = "download_action";
    public static final String KEY_FOREGROUND = "foreground";
    private static final String TAG = "DownloadService";
    private static final HashMap<Class<? extends DownloadService>, RequirementsHelper> requirementsHelpers = new HashMap<>();
    private final String channelId;
    private final int channelName;
    private DownloadManager downloadManager;
    private DownloadManagerListener downloadManagerListener;
    private final ForegroundNotificationUpdater foregroundNotificationUpdater;
    private int lastStartId;
    private boolean startedInForeground;
    private boolean taskRemoved;

    private void logd(String str) {
    }

    protected abstract DownloadManager getDownloadManager();

    protected abstract Notification getForegroundNotification(DownloadManager.TaskState[] taskStateArr);

    protected abstract Scheduler getScheduler();

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    protected void onTaskStateChanged(DownloadManager.TaskState taskState) {
    }

    protected DownloadService(int i) {
        this(i, 1000L);
    }

    protected DownloadService(int i, long j) {
        this(i, j, null, 0);
    }

    protected DownloadService(int i, long j, String str, int i2) {
        this.foregroundNotificationUpdater = new ForegroundNotificationUpdater(i, j);
        this.channelId = str;
        this.channelName = i2;
    }

    public static Intent buildAddActionIntent(Context context, Class<? extends DownloadService> cls, DownloadAction downloadAction, boolean z) {
        return new Intent(context, cls).setAction(ACTION_ADD).putExtra(KEY_DOWNLOAD_ACTION, downloadAction.toByteArray()).putExtra(KEY_FOREGROUND, z);
    }

    public static void startWithAction(Context context, Class<? extends DownloadService> cls, DownloadAction downloadAction, boolean z) {
        Intent intentBuildAddActionIntent = buildAddActionIntent(context, cls, downloadAction, z);
        if (z) {
            Util.startForegroundService(context, intentBuildAddActionIntent);
        } else {
            context.startService(intentBuildAddActionIntent);
        }
    }

    public static void start(Context context, Class<? extends DownloadService> cls) {
        context.startService(new Intent(context, cls).setAction(ACTION_INIT));
    }

    public static void startForeground(Context context, Class<? extends DownloadService> cls) {
        Util.startForegroundService(context, new Intent(context, cls).setAction(ACTION_INIT).putExtra(KEY_FOREGROUND, true));
    }

    @Override
    public void onCreate() {
        logd("onCreate");
        String str = this.channelId;
        if (str != null) {
            NotificationUtil.createNotificationChannel(this, str, this.channelName, 2);
        }
        this.downloadManager = getDownloadManager();
        DownloadManagerListener downloadManagerListener = new DownloadManagerListener();
        this.downloadManagerListener = downloadManagerListener;
        this.downloadManager.addListener(downloadManagerListener);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public int onStartCommand(Intent intent, int i, int i2) {
        String action;
        this.lastStartId = i2;
        byte b = 0;
        this.taskRemoved = false;
        if (intent != null) {
            action = intent.getAction();
            this.startedInForeground |= intent.getBooleanExtra(KEY_FOREGROUND, false) || ACTION_RESTART.equals(action);
        } else {
            action = null;
        }
        if (action == null) {
            action = ACTION_INIT;
        }
        logd("onStartCommand action: " + action + " startId: " + i2);
        switch (action.hashCode()) {
            case -871181424:
                b = !action.equals(ACTION_RESTART) ? (byte) -1 : (byte) 1;
                break;
            case -382886238:
                b = !action.equals(ACTION_ADD) ? (byte) -1 : (byte) 2;
                break;
            case -337334865:
                b = !action.equals(ACTION_START_DOWNLOADS) ? (byte) -1 : (byte) 4;
                break;
            case 1015676687:
                if (!action.equals(ACTION_INIT)) {
                    b = -1;
                }
                break;
            case 1286088717:
                b = !action.equals(ACTION_STOP_DOWNLOADS) ? (byte) -1 : (byte) 3;
                break;
            default:
                b = -1;
                break;
        }
        if (b != 0 && b != 1) {
            if (b == 2) {
                byte[] byteArrayExtra = intent.getByteArrayExtra(KEY_DOWNLOAD_ACTION);
                if (byteArrayExtra == null) {
                    Log.e("DownloadService", "Ignoring ADD action with no action data");
                } else {
                    try {
                        this.downloadManager.handleAction(byteArrayExtra);
                    } catch (IOException e) {
                        Log.e("DownloadService", "Failed to handle ADD action", e);
                    }
                }
            } else if (b == 3) {
                this.downloadManager.stopDownloads();
            } else if (b == 4) {
                this.downloadManager.startDownloads();
            } else {
                Log.e("DownloadService", "Ignoring unrecognized action: " + action);
            }
        }
        maybeStartWatchingRequirements();
        if (this.downloadManager.isIdle()) {
            stop();
        }
        return 1;
    }

    @Override
    public void onTaskRemoved(Intent intent) {
        logd("onTaskRemoved rootIntent: " + intent);
        this.taskRemoved = true;
    }

    @Override
    public void onDestroy() {
        logd("onDestroy");
        this.foregroundNotificationUpdater.stopPeriodicUpdates();
        this.downloadManager.removeListener(this.downloadManagerListener);
        maybeStopWatchingRequirements();
    }

    protected Requirements getRequirements() {
        return new Requirements(1, false, false);
    }

    private void maybeStartWatchingRequirements() {
        if (this.downloadManager.getDownloadCount() == 0) {
            return;
        }
        Class<?> cls = getClass();
        if (requirementsHelpers.get(cls) == null) {
            RequirementsHelper requirementsHelper = new RequirementsHelper(this, getRequirements(), getScheduler(), cls);
            requirementsHelpers.put((Class<? extends DownloadService>) cls, requirementsHelper);
            requirementsHelper.start();
            logd("started watching requirements");
        }
    }

    private void maybeStopWatchingRequirements() {
        RequirementsHelper requirementsHelperRemove;
        if (this.downloadManager.getDownloadCount() <= 0 && (requirementsHelperRemove = requirementsHelpers.remove(getClass())) != null) {
            requirementsHelperRemove.stop();
            logd("stopped watching requirements");
        }
    }

    private void stop() {
        this.foregroundNotificationUpdater.stopPeriodicUpdates();
        if (this.startedInForeground && Util.SDK_INT >= 26) {
            this.foregroundNotificationUpdater.showNotificationIfNotAlready();
        }
        if (Util.SDK_INT < 28 && this.taskRemoved) {
            stopSelf();
            logd("stopSelf()");
            return;
        }
        logd("stopSelf(" + this.lastStartId + ") result: " + stopSelfResult(this.lastStartId));
    }

    private final class DownloadManagerListener implements DownloadManager.Listener {
        private DownloadManagerListener() {
        }

        @Override
        public final void onInitialized(DownloadManager downloadManager) {
            DownloadService.this.maybeStartWatchingRequirements();
        }

        @Override
        public final void onTaskStateChanged(DownloadManager downloadManager, DownloadManager.TaskState taskState) {
            DownloadService.this.onTaskStateChanged(taskState);
            if (taskState.state == 1) {
                DownloadService.this.foregroundNotificationUpdater.startPeriodicUpdates();
            } else {
                DownloadService.this.foregroundNotificationUpdater.update();
            }
        }

        @Override
        public final void onIdle(DownloadManager downloadManager) {
            DownloadService.this.stop();
        }
    }

    private final class ForegroundNotificationUpdater implements Runnable {
        private final Handler handler = new Handler(Looper.getMainLooper());
        private boolean notificationDisplayed;
        private final int notificationId;
        private boolean periodicUpdatesStarted;
        private final long updateInterval;

        public ForegroundNotificationUpdater(int i, long j) {
            this.notificationId = i;
            this.updateInterval = j;
        }

        public final void startPeriodicUpdates() {
            this.periodicUpdatesStarted = true;
            update();
        }

        public final void stopPeriodicUpdates() {
            this.periodicUpdatesStarted = false;
            this.handler.removeCallbacks(this);
        }

        public final void update() {
            DownloadManager.TaskState[] allTaskStates = DownloadService.this.downloadManager.getAllTaskStates();
            DownloadService downloadService = DownloadService.this;
            downloadService.startForeground(this.notificationId, downloadService.getForegroundNotification(allTaskStates));
            this.notificationDisplayed = true;
            if (this.periodicUpdatesStarted) {
                this.handler.removeCallbacks(this);
                this.handler.postDelayed(this, this.updateInterval);
            }
        }

        public final void showNotificationIfNotAlready() {
            if (this.notificationDisplayed) {
                return;
            }
            update();
        }

        @Override
        public final void run() {
            update();
        }
    }

    private static final class RequirementsHelper implements RequirementsWatcher.Listener {
        private final Context context;
        private final Requirements requirements;
        private final RequirementsWatcher requirementsWatcher;
        private final Scheduler scheduler;
        private final Class<? extends DownloadService> serviceClass;

        private RequirementsHelper(Context context, Requirements requirements, Scheduler scheduler, Class<? extends DownloadService> cls) {
            this.context = context;
            this.requirements = requirements;
            this.scheduler = scheduler;
            this.serviceClass = cls;
            this.requirementsWatcher = new RequirementsWatcher(context, this, requirements);
        }

        public final void start() {
            this.requirementsWatcher.start();
        }

        public final void stop() {
            this.requirementsWatcher.stop();
            Scheduler scheduler = this.scheduler;
            if (scheduler != null) {
                scheduler.cancel();
            }
        }

        @Override
        public final void requirementsMet(RequirementsWatcher requirementsWatcher) {
            startServiceWithAction(DownloadService.ACTION_START_DOWNLOADS);
            Scheduler scheduler = this.scheduler;
            if (scheduler != null) {
                scheduler.cancel();
            }
        }

        @Override
        public final void requirementsNotMet(RequirementsWatcher requirementsWatcher) {
            startServiceWithAction(DownloadService.ACTION_STOP_DOWNLOADS);
            if (this.scheduler != null) {
                if (this.scheduler.schedule(this.requirements, this.context.getPackageName(), DownloadService.ACTION_RESTART)) {
                    return;
                }
                Log.e("DownloadService", "Scheduling downloads failed.");
            }
        }

        private void startServiceWithAction(String str) {
            Util.startForegroundService(this.context, new Intent(this.context, this.serviceClass).setAction(str).putExtra(DownloadService.KEY_FOREGROUND, true));
        }
    }
}
