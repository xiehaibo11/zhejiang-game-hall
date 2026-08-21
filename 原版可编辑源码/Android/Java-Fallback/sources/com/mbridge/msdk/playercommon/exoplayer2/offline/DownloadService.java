package com.mbridge.msdk.playercommon.exoplayer2.offline;

public abstract class DownloadService extends android.app.Service {
    public static final java.lang.String ACTION_ADD = "com.google.android.exoplayer.downloadService.action.ADD";
    public static final java.lang.String ACTION_INIT = "com.google.android.exoplayer.downloadService.action.INIT";
    private static final java.lang.String ACTION_RESTART = "com.google.android.exoplayer.downloadService.action.RESTART";
    private static final java.lang.String ACTION_START_DOWNLOADS = "com.google.android.exoplayer.downloadService.action.START_DOWNLOADS";
    private static final java.lang.String ACTION_STOP_DOWNLOADS = "com.google.android.exoplayer.downloadService.action.STOP_DOWNLOADS";
    private static final boolean DEBUG = false;
    public static final long DEFAULT_FOREGROUND_NOTIFICATION_UPDATE_INTERVAL = 1000;
    public static final java.lang.String KEY_DOWNLOAD_ACTION = "download_action";
    public static final java.lang.String KEY_FOREGROUND = "foreground";
    private static final java.lang.String TAG = "DownloadService";
    private static final java.util.HashMap<java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService>, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.RequirementsHelper> requirementsHelpers = null;
    private final java.lang.String channelId;
    private final int channelName;
    private com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager downloadManager;
    private com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.DownloadManagerListener downloadManagerListener;
    private final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.ForegroundNotificationUpdater foregroundNotificationUpdater;
    private int lastStartId;
    private boolean startedInForeground;
    private boolean taskRemoved;

    static class 1 {
    }

    private final class DownloadManagerListener implements com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener {
        final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService this$0;

        private DownloadManagerListener(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        DownloadManagerListener(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onIdle(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.access$400(r1)
                return
        }

        @Override
        public final void onInitialized(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.access$200(r1)
                return
        }

        @Override
        public final void onTaskStateChanged(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState r2) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r0.this$0
                r1.onTaskStateChanged(r2)
                int r1 = r2.state
                r2 = 1
                if (r1 != r2) goto L14
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.access$300(r1)
                r1.startPeriodicUpdates()
                goto L1d
            L14:
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.access$300(r1)
                r1.update()
            L1d:
                return
        }
    }

    private final class ForegroundNotificationUpdater implements java.lang.Runnable {
        private final android.os.Handler handler;
        private boolean notificationDisplayed;
        private final int notificationId;
        private boolean periodicUpdatesStarted;
        final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService this$0;
        private final long updateInterval;

        public ForegroundNotificationUpdater(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1, int r2, long r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.notificationId = r2
                r0.updateInterval = r3
                android.os.Handler r1 = new android.os.Handler
                android.os.Looper r2 = android.os.Looper.getMainLooper()
                r1.<init>(r2)
                r0.handler = r1
                return
        }

        @Override
        public final void run() {
                r0 = this;
                r0.update()
                return
        }

        public final void showNotificationIfNotAlready() {
                r1 = this;
                boolean r0 = r1.notificationDisplayed
                if (r0 != 0) goto L7
                r1.update()
            L7:
                return
        }

        public final void startPeriodicUpdates() {
                r1 = this;
                r0 = 1
                r1.periodicUpdatesStarted = r0
                r1.update()
                return
        }

        public final void stopPeriodicUpdates() {
                r1 = this;
                r0 = 0
                r1.periodicUpdatesStarted = r0
                android.os.Handler r0 = r1.handler
                r0.removeCallbacks(r1)
                return
        }

        public final void update() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r0 = r3.this$0
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.access$500(r0)
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState[] r0 = r0.getAllTaskStates()
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r1 = r3.this$0
                int r2 = r3.notificationId
                android.app.Notification r0 = r1.getForegroundNotification(r0)
                r1.startForeground(r2, r0)
                r0 = 1
                r3.notificationDisplayed = r0
                boolean r0 = r3.periodicUpdatesStarted
                if (r0 == 0) goto L28
                android.os.Handler r0 = r3.handler
                r0.removeCallbacks(r3)
                android.os.Handler r0 = r3.handler
                long r1 = r3.updateInterval
                r0.postDelayed(r3, r1)
            L28:
                return
        }
    }

    private static final class RequirementsHelper implements com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher.Listener {
        private final android.content.Context context;
        private final com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements requirements;
        private final com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher requirementsWatcher;
        private final com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler scheduler;
        private final java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> serviceClass;

        private RequirementsHelper(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r2, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r3, java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r4) {
                r0 = this;
                r0.<init>()
                r0.context = r1
                r0.requirements = r2
                r0.scheduler = r3
                r0.serviceClass = r4
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r3 = new com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher
                r3.<init>(r1, r0, r2)
                r0.requirementsWatcher = r3
                return
        }

        RequirementsHelper(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r2, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r3, java.lang.Class r4, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        private void startServiceWithAction(java.lang.String r4) {
                r3 = this;
                android.content.Intent r0 = new android.content.Intent
                android.content.Context r1 = r3.context
                java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r2 = r3.serviceClass
                r0.<init>(r1, r2)
                android.content.Intent r4 = r0.setAction(r4)
                java.lang.String r0 = "foreground"
                r1 = 1
                android.content.Intent r4 = r4.putExtra(r0, r1)
                android.content.Context r0 = r3.context
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.startForegroundService(r0, r4)
                return
        }

        @Override
        public final void requirementsMet(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r1) {
                r0 = this;
                java.lang.String r1 = "com.google.android.exoplayer.downloadService.action.START_DOWNLOADS"
                r0.startServiceWithAction(r1)
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r1 = r0.scheduler
                if (r1 == 0) goto Lc
                r1.cancel()
            Lc:
                return
        }

        @Override
        public final void requirementsNotMet(com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r4) {
                r3 = this;
                java.lang.String r4 = "com.google.android.exoplayer.downloadService.action.STOP_DOWNLOADS"
                r3.startServiceWithAction(r4)
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r4 = r3.scheduler
                if (r4 == 0) goto L22
                android.content.Context r4 = r3.context
                java.lang.String r4 = r4.getPackageName()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r0 = r3.scheduler
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1 = r3.requirements
                java.lang.String r2 = "com.google.android.exoplayer.downloadService.action.RESTART"
                boolean r4 = r0.schedule(r1, r4, r2)
                if (r4 != 0) goto L22
                java.lang.String r4 = "DownloadService"
                java.lang.String r0 = "Scheduling downloads failed."
                android.util.Log.e(r4, r0)
            L22:
                return
        }

        public final void start() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0 = r1.requirementsWatcher
                r0.start()
                return
        }

        public final void stop() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.RequirementsWatcher r0 = r1.requirementsWatcher
                r0.stop()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r0 = r1.scheduler
                if (r0 == 0) goto Lc
                r0.cancel()
            Lc:
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.requirementsHelpers = r0
            return
    }

    protected DownloadService(int r3) {
            r2 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.<init>(r3, r0)
            return
    }

    protected DownloadService(int r7, long r8) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.<init>(r1, r2, r4, r5)
            return
    }

    protected DownloadService(int r2, long r3, java.lang.String r5, int r6) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater
            r0.<init>(r1, r2, r3)
            r1.foregroundNotificationUpdater = r0
            r1.channelId = r5
            r1.channelName = r6
            return
    }

    static void access$200(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r0) {
            r0.maybeStartWatchingRequirements()
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.ForegroundNotificationUpdater access$300(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r0) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r0 = r0.foregroundNotificationUpdater
            return r0
    }

    static void access$400(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r0) {
            r0.stop()
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager access$500(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService r0) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r0.downloadManager
            return r0
    }

    public static android.content.Intent buildAddActionIntent(android.content.Context r1, java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r2, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r3, boolean r4) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r1, r2)
            java.lang.String r1 = "com.google.android.exoplayer.downloadService.action.ADD"
            android.content.Intent r1 = r0.setAction(r1)
            byte[] r2 = r3.toByteArray()
            java.lang.String r3 = "download_action"
            android.content.Intent r1 = r1.putExtra(r3, r2)
            java.lang.String r2 = "foreground"
            android.content.Intent r1 = r1.putExtra(r2, r4)
            return r1
    }

    private void logd(java.lang.String r1) {
            r0 = this;
            return
    }

    private void maybeStartWatchingRequirements() {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r8.downloadManager
            int r0 = r0.getDownloadCount()
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.Class r0 = r8.getClass()
            java.util.HashMap<java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService>, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper> r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.requirementsHelpers
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.RequirementsHelper) r1
            if (r1 != 0) goto L35
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper r7 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r3 = r8.getRequirements()
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler r4 = r8.getScheduler()
            r6 = 0
            r1 = r7
            r2 = r8
            r5 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            java.util.HashMap<java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService>, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper> r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.requirementsHelpers
            r1.put(r0, r7)
            r7.start()
            java.lang.String r0 = "started watching requirements"
            r8.logd(r0)
        L35:
            return
    }

    private void maybeStopWatchingRequirements() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r2.downloadManager
            int r0 = r0.getDownloadCount()
            if (r0 <= 0) goto L9
            return
        L9:
            java.util.HashMap<java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService>, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper> r0 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.requirementsHelpers
            java.lang.Class r1 = r2.getClass()
            java.lang.Object r0 = r0.remove(r1)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$RequirementsHelper r0 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService.RequirementsHelper) r0
            if (r0 == 0) goto L1f
            r0.stop()
            java.lang.String r0 = "stopped watching requirements"
            r2.logd(r0)
        L1f:
            return
    }

    public static void start(android.content.Context r1, java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r2) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r1, r2)
            java.lang.String r2 = "com.google.android.exoplayer.downloadService.action.INIT"
            android.content.Intent r2 = r0.setAction(r2)
            r1.startService(r2)
            return
    }

    public static void startForeground(android.content.Context r2, java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r2, r3)
            java.lang.String r3 = "com.google.android.exoplayer.downloadService.action.INIT"
            android.content.Intent r3 = r0.setAction(r3)
            java.lang.String r0 = "foreground"
            r1 = 1
            android.content.Intent r3 = r3.putExtra(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.startForegroundService(r2, r3)
            return
    }

    public static void startWithAction(android.content.Context r0, java.lang.Class<? extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService> r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2, boolean r3) {
            android.content.Intent r1 = buildAddActionIntent(r0, r1, r2, r3)
            if (r3 == 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.startForegroundService(r0, r1)
            goto Ld
        La:
            r0.startService(r1)
        Ld:
            return
    }

    private void stop() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r0 = r3.foregroundNotificationUpdater
            r0.stopPeriodicUpdates()
            boolean r0 = r3.startedInForeground
            if (r0 == 0) goto L14
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 26
            if (r0 < r1) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r0 = r3.foregroundNotificationUpdater
            r0.showNotificationIfNotAlready()
        L14:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L27
            boolean r0 = r3.taskRemoved
            if (r0 == 0) goto L27
            r3.stopSelf()
            java.lang.String r0 = "stopSelf()"
            r3.logd(r0)
            goto L4b
        L27:
            int r0 = r3.lastStartId
            boolean r0 = r3.stopSelfResult(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "stopSelf("
            r1.append(r2)
            int r2 = r3.lastStartId
            r1.append(r2)
            java.lang.String r2 = ") result: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.logd(r0)
        L4b:
            return
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager getDownloadManager();

    protected abstract android.app.Notification getForegroundNotification(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState[] r1);

    protected com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements getRequirements() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r0 = new com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements
            r1 = 0
            r2 = 1
            r0.<init>(r2, r1, r1)
            return r0
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler getScheduler();

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r3 = this;
            java.lang.String r0 = "onCreate"
            r3.logd(r0)
            java.lang.String r0 = r3.channelId
            if (r0 == 0) goto Lf
            int r1 = r3.channelName
            r2 = 2
            com.mbridge.msdk.playercommon.exoplayer2.util.NotificationUtil.createNotificationChannel(r3, r0, r1, r2)
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r3.getDownloadManager()
            r3.downloadManager = r0
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$DownloadManagerListener r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$DownloadManagerListener
            r1 = 0
            r0.<init>(r3, r1)
            r3.downloadManagerListener = r0
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1 = r3.downloadManager
            r1.addListener(r0)
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            java.lang.String r0 = "onDestroy"
            r2.logd(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$ForegroundNotificationUpdater r0 = r2.foregroundNotificationUpdater
            r0.stopPeriodicUpdates()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r2.downloadManager
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadService$DownloadManagerListener r1 = r2.downloadManagerListener
            r0.removeListener(r1)
            r2.maybeStopWatchingRequirements()
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r9, int r10, int r11) {
            r8 = this;
            r8.lastStartId = r11
            r10 = 0
            r8.taskRemoved = r10
            java.lang.String r0 = "com.google.android.exoplayer.downloadService.action.RESTART"
            r1 = 1
            if (r9 == 0) goto L26
            java.lang.String r2 = r9.getAction()
            boolean r3 = r8.startedInForeground
            java.lang.String r4 = "foreground"
            boolean r4 = r9.getBooleanExtra(r4, r10)
            if (r4 != 0) goto L21
            boolean r4 = r0.equals(r2)
            if (r4 == 0) goto L1f
            goto L21
        L1f:
            r4 = r10
            goto L22
        L21:
            r4 = r1
        L22:
            r3 = r3 | r4
            r8.startedInForeground = r3
            goto L27
        L26:
            r2 = 0
        L27:
            java.lang.String r3 = "com.google.android.exoplayer.downloadService.action.INIT"
            if (r2 != 0) goto L2c
            r2 = r3
        L2c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "onStartCommand action: "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r5 = " startId: "
            r4.append(r5)
            r4.append(r11)
            java.lang.String r11 = r4.toString()
            r8.logd(r11)
            r11 = -1
            int r4 = r2.hashCode()
            r5 = 4
            r6 = 3
            r7 = 2
            switch(r4) {
                case -871181424: goto L79;
                case -382886238: goto L6f;
                case -337334865: goto L65;
                case 1015676687: goto L5e;
                case 1286088717: goto L54;
                default: goto L53;
            }
        L53:
            goto L81
        L54:
            java.lang.String r10 = "com.google.android.exoplayer.downloadService.action.STOP_DOWNLOADS"
            boolean r10 = r2.equals(r10)
            if (r10 == 0) goto L81
            r10 = r6
            goto L82
        L5e:
            boolean r0 = r2.equals(r3)
            if (r0 == 0) goto L81
            goto L82
        L65:
            java.lang.String r10 = "com.google.android.exoplayer.downloadService.action.START_DOWNLOADS"
            boolean r10 = r2.equals(r10)
            if (r10 == 0) goto L81
            r10 = r5
            goto L82
        L6f:
            java.lang.String r10 = "com.google.android.exoplayer.downloadService.action.ADD"
            boolean r10 = r2.equals(r10)
            if (r10 == 0) goto L81
            r10 = r7
            goto L82
        L79:
            boolean r10 = r2.equals(r0)
            if (r10 == 0) goto L81
            r10 = r1
            goto L82
        L81:
            r10 = r11
        L82:
            if (r10 == 0) goto Lc9
            if (r10 == r1) goto Lc9
            java.lang.String r11 = "DownloadService"
            if (r10 == r7) goto Laf
            if (r10 == r6) goto La9
            if (r10 == r5) goto La3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Ignoring unrecognized action: "
            r9.append(r10)
            r9.append(r2)
            java.lang.String r9 = r9.toString()
            android.util.Log.e(r11, r9)
            goto Lc9
        La3:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r9 = r8.downloadManager
            r9.startDownloads()
            goto Lc9
        La9:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r9 = r8.downloadManager
            r9.stopDownloads()
            goto Lc9
        Laf:
            java.lang.String r10 = "download_action"
            byte[] r9 = r9.getByteArrayExtra(r10)
            if (r9 != 0) goto Lbd
            java.lang.String r9 = "Ignoring ADD action with no action data"
            android.util.Log.e(r11, r9)
            goto Lc9
        Lbd:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r10 = r8.downloadManager     // Catch: java.io.IOException -> Lc3
            r10.handleAction(r9)     // Catch: java.io.IOException -> Lc3
            goto Lc9
        Lc3:
            r9 = move-exception
            java.lang.String r10 = "Failed to handle ADD action"
            android.util.Log.e(r11, r10, r9)
        Lc9:
            r8.maybeStartWatchingRequirements()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r9 = r8.downloadManager
            boolean r9 = r9.isIdle()
            if (r9 == 0) goto Ld7
            r8.stop()
        Ld7:
            return r1
    }

    @Override
    public void onTaskRemoved(android.content.Intent r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onTaskRemoved rootIntent: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.logd(r3)
            r3 = 1
            r2.taskRemoved = r3
            return
    }

    protected void onTaskStateChanged(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState r1) {
            r0 = this;
            return
    }
}
