package com.mbridge.msdk.playercommon.exoplayer2.offline;

public final class DownloadManager {
    private static final boolean DEBUG = false;
    public static final int DEFAULT_MAX_SIMULTANEOUS_DOWNLOADS = 1;
    public static final int DEFAULT_MIN_RETRY_COUNT = 5;
    private static final java.lang.String TAG = "DownloadManager";
    private final com.mbridge.msdk.playercommon.exoplayer2.offline.ActionFile actionFile;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task> activeDownloadTasks;
    private final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer[] deserializers;
    private final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper downloaderConstructorHelper;
    private boolean downloadsStopped;
    private final android.os.Handler fileIOHandler;
    private final android.os.HandlerThread fileIOThread;
    private final android.os.Handler handler;
    private boolean initialized;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener> listeners;
    private final int maxActiveDownloadTasks;
    private final int minRetryCount;
    private int nextTaskId;
    private boolean released;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task> tasks;




    public interface Listener {
        void onIdle(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1);

        void onInitialized(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1);

        void onTaskStateChanged(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState r2);
    }

    private static final class Task implements java.lang.Runnable {
        public static final int STATE_QUEUED_CANCELING = 5;
        public static final int STATE_STARTED_CANCELING = 6;
        public static final int STATE_STARTED_STOPPING = 7;
        private final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction action;
        private volatile int currentState;
        private final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager downloadManager;
        private volatile com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader downloader;
        private java.lang.Throwable error;
        private final int id;
        private final int minRetryCount;
        private java.lang.Thread thread;



        public @interface InternalState {
        }

        private Task(int r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r2, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.id = r1
                r0.downloadManager = r2
                r0.action = r3
                r1 = 0
                r0.currentState = r1
                r0.minRetryCount = r4
                return
        }

        Task(int r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r2, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        static void access$000(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                r0.stop()
                return
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                int r0 = r0.currentState
                return r0
        }

        static int access$200(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                int r0 = r0.id
                return r0
        }

        static boolean access$2100(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0, int r1, int r2) {
                boolean r0 = r0.changeStateAndNotify(r1, r2)
                return r0
        }

        static boolean access$2500(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0, int r1, int r2, java.lang.Throwable r3) {
                boolean r0 = r0.changeStateAndNotify(r1, r2, r3)
                return r0
        }

        static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction access$300(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r0 = r0.action
                return r0
        }

        static boolean access$500(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                boolean r0 = r0.canStart()
                return r0
        }

        static void access$600(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                r0.cancel()
                return
        }

        static void access$700(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r0) {
                r0.start()
                return
        }

        private boolean canStart() {
                r1 = this;
                int r0 = r1.currentState
                if (r0 != 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        private void cancel() {
                r2 = this;
                r0 = 0
                r1 = 5
                boolean r0 = r2.changeStateAndNotify(r0, r1)
                if (r0 == 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0 = r2.downloadManager
                android.os.Handler r0 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$1900(r0)
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task$1
                r1.<init>(r2)
                r0.post(r1)
                goto L22
            L17:
                r0 = 1
                r1 = 6
                boolean r0 = r2.changeStateAndNotify(r0, r1)
                if (r0 == 0) goto L22
                r2.cancelDownload()
            L22:
                return
        }

        private void cancelDownload() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r1.downloader
                if (r0 == 0) goto L9
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r1.downloader
                r0.cancel()
            L9:
                java.lang.Thread r0 = r1.thread
                r0.interrupt()
                return
        }

        private boolean changeStateAndNotify(int r2, int r3) {
                r1 = this;
                r0 = 0
                boolean r2 = r1.changeStateAndNotify(r2, r3, r0)
                return r2
        }

        private boolean changeStateAndNotify(int r3, int r4, java.lang.Throwable r5) {
                r2 = this;
                int r0 = r2.currentState
                r1 = 0
                if (r0 == r3) goto L6
                return r1
            L6:
                r2.currentState = r4
                r2.error = r5
                int r3 = r2.currentState
                int r4 = r2.getExternalState()
                r5 = 1
                if (r3 == r4) goto L14
                r1 = r5
            L14:
                if (r1 != 0) goto L1b
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r3 = r2.downloadManager
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2300(r3, r2)
            L1b:
                return r5
        }

        private int getExternalState() {
                r2 = this;
                int r0 = r2.currentState
                r1 = 5
                if (r0 == r1) goto L10
                r1 = 6
                if (r0 == r1) goto Le
                r1 = 7
                if (r0 == r1) goto Le
                int r0 = r2.currentState
                return r0
            Le:
                r0 = 1
                return r0
            L10:
                r0 = 0
                return r0
        }

        private int getRetryDelayMillis(int r2) {
                r1 = this;
                int r2 = r2 + (-1)
                int r2 = r2 * 1000
                r0 = 5000(0x1388, float:7.006E-42)
                int r2 = java.lang.Math.min(r2, r0)
                return r2
        }

        private java.lang.String getStateString() {
                r2 = this;
                int r0 = r2.currentState
                r1 = 5
                if (r0 == r1) goto L15
                r1 = 6
                if (r0 == r1) goto L15
                r1 = 7
                if (r0 == r1) goto L12
                int r0 = r2.currentState
                java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState.getStateString(r0)
                return r0
            L12:
                java.lang.String r0 = "STOPPING"
                return r0
            L15:
                java.lang.String r0 = "CANCELING"
                return r0
        }

        private void start() {
                r2 = this;
                r0 = 0
                r1 = 1
                boolean r0 = r2.changeStateAndNotify(r0, r1)
                if (r0 == 0) goto L12
                java.lang.Thread r0 = new java.lang.Thread
                r0.<init>(r2)
                r2.thread = r0
                r0.start()
            L12:
                return
        }

        private void stop() {
                r2 = this;
                r0 = 1
                r1 = 7
                boolean r0 = r2.changeStateAndNotify(r0, r1)
                if (r0 == 0) goto L12
                java.lang.String r0 = "Stopping"
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2200(r0, r2)
                java.lang.Thread r0 = r2.thread
                r0.interrupt()
            L12:
                return
        }

        private static java.lang.String toString(byte[] r2) {
                int r0 = r2.length
                r1 = 100
                if (r0 <= r1) goto L8
                java.lang.String r2 = "<data is too long>"
                return r2
            L8:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r2)
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = r0.toString()
                return r2
        }

        public final float getDownloadPercentage() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r1.downloader
                if (r0 == 0) goto Lb
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r1.downloader
                float r0 = r0.getDownloadPercentage()
                goto Ld
            Lb:
                r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            Ld:
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState getDownloadState() {
                r10 = this;
                int r3 = r10.getExternalState()
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState r9 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState
                int r1 = r10.id
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2 = r10.action
                float r4 = r10.getDownloadPercentage()
                long r5 = r10.getDownloadedBytes()
                java.lang.Throwable r7 = r10.error
                r8 = 0
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r7, r8)
                return r9
        }

        public final long getDownloadedBytes() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r2.downloader
                if (r0 == 0) goto Lb
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r2.downloader
                long r0 = r0.getDownloadedBytes()
                goto Ld
            Lb:
                r0 = 0
            Ld:
                return r0
        }

        public final boolean isActive() {
                r3 = this;
                int r0 = r3.currentState
                r1 = 1
                r2 = 5
                if (r0 == r2) goto L16
                int r0 = r3.currentState
                if (r0 == r1) goto L16
                int r0 = r3.currentState
                r2 = 7
                if (r0 == r2) goto L16
                int r0 = r3.currentState
                r2 = 6
                if (r0 != r2) goto L15
                goto L16
            L15:
                r1 = 0
            L16:
                return r1
        }

        public final boolean isFinished() {
                r2 = this;
                int r0 = r2.currentState
                r1 = 4
                if (r0 == r1) goto L12
                int r0 = r2.currentState
                r1 = 2
                if (r0 == r1) goto L12
                int r0 = r2.currentState
                r1 = 3
                if (r0 != r1) goto L10
                goto L12
            L10:
                r0 = 0
                goto L13
            L12:
                r0 = 1
            L13:
                return r0
        }

        @Override
        public final void run() {
                r8 = this;
                java.lang.String r0 = "Task is started"
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2200(r0, r8)
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r0 = r8.action     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1 = r8.downloadManager     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2400(r1)     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r0.createDownloader(r1)     // Catch: java.lang.Throwable -> L7a
                r8.downloader = r0     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r0 = r8.action     // Catch: java.lang.Throwable -> L7a
                boolean r0 = r0.isRemoveAction     // Catch: java.lang.Throwable -> L7a
                if (r0 == 0) goto L1f
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r0 = r8.downloader     // Catch: java.lang.Throwable -> L7a
                r0.remove()     // Catch: java.lang.Throwable -> L7a
                goto L78
            L1f:
                r0 = -1
                r2 = 0
                r3 = r2
            L23:
                boolean r4 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L7a
                if (r4 != 0) goto L78
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r4 = r8.downloader     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L7a
                r4.download()     // Catch: java.io.IOException -> L2f java.lang.Throwable -> L7a
                goto L78
            L2f:
                r4 = move-exception
                com.mbridge.msdk.playercommon.exoplayer2.offline.Downloader r5 = r8.downloader     // Catch: java.lang.Throwable -> L7a
                long r5 = r5.getDownloadedBytes()     // Catch: java.lang.Throwable -> L7a
                int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r7 == 0) goto L50
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
                r0.<init>()     // Catch: java.lang.Throwable -> L7a
                java.lang.String r1 = "Reset error count. downloadedBytes = "
                r0.append(r1)     // Catch: java.lang.Throwable -> L7a
                r0.append(r5)     // Catch: java.lang.Throwable -> L7a
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2200(r0, r8)     // Catch: java.lang.Throwable -> L7a
                r3 = r2
                r0 = r5
            L50:
                int r5 = r8.currentState     // Catch: java.lang.Throwable -> L7a
                r6 = 1
                if (r5 != r6) goto L77
                int r3 = r3 + r6
                int r5 = r8.minRetryCount     // Catch: java.lang.Throwable -> L7a
                if (r3 > r5) goto L77
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
                r4.<init>()     // Catch: java.lang.Throwable -> L7a
                java.lang.String r5 = "Download error. Retry "
                r4.append(r5)     // Catch: java.lang.Throwable -> L7a
                r4.append(r3)     // Catch: java.lang.Throwable -> L7a
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L7a
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$2200(r4, r8)     // Catch: java.lang.Throwable -> L7a
                int r4 = r8.getRetryDelayMillis(r3)     // Catch: java.lang.Throwable -> L7a
                long r4 = (long) r4     // Catch: java.lang.Throwable -> L7a
                java.lang.Thread.sleep(r4)     // Catch: java.lang.Throwable -> L7a
                goto L23
            L77:
                throw r4     // Catch: java.lang.Throwable -> L7a
            L78:
                r0 = 0
                goto L7b
            L7a:
                r0 = move-exception
            L7b:
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r1 = r8.downloadManager
                android.os.Handler r1 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.access$1900(r1)
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task$2 r2 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task$2
                r2.<init>(r8, r0)
                r1.post(r2)
                return
        }

        public final java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = super.toString()
                return r0
        }
    }

    public static final class TaskState {
        public static final int STATE_CANCELED = 3;
        public static final int STATE_COMPLETED = 2;
        public static final int STATE_FAILED = 4;
        public static final int STATE_QUEUED = 0;
        public static final int STATE_STARTED = 1;
        public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction action;
        public final float downloadPercentage;
        public final long downloadedBytes;
        public final java.lang.Throwable error;
        public final int state;
        public final int taskId;

        public @interface State {
        }

        private TaskState(int r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2, int r3, float r4, long r5, java.lang.Throwable r7) {
                r0 = this;
                r0.<init>()
                r0.taskId = r1
                r0.action = r2
                r0.state = r3
                r0.downloadPercentage = r4
                r0.downloadedBytes = r5
                r0.error = r7
                return
        }

        TaskState(int r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2, int r3, float r4, long r5, java.lang.Throwable r7, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.1 r8) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4, r5, r7)
                return
        }

        public static java.lang.String getStateString(int r1) {
                if (r1 == 0) goto L20
                r0 = 1
                if (r1 == r0) goto L1d
                r0 = 2
                if (r1 == r0) goto L1a
                r0 = 3
                if (r1 == r0) goto L17
                r0 = 4
                if (r1 != r0) goto L11
                java.lang.String r1 = "FAILED"
                return r1
            L11:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                r1.<init>()
                throw r1
            L17:
                java.lang.String r1 = "CANCELED"
                return r1
            L1a:
                java.lang.String r1 = "COMPLETED"
                return r1
            L1d:
                java.lang.String r1 = "STARTED"
                return r1
            L20:
                java.lang.String r1 = "QUEUED"
                return r1
        }
    }

    public DownloadManager(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r4, int r5, int r6, java.io.File r7, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer... r8) {
            r3 = this;
            r3.<init>()
            int r0 = r8.length
            r1 = 1
            if (r0 <= 0) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            java.lang.String r2 = "At least one Deserializer is required."
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0, r2)
            r3.downloaderConstructorHelper = r4
            r3.maxActiveDownloadTasks = r5
            r3.minRetryCount = r6
            com.mbridge.msdk.playercommon.exoplayer2.offline.ActionFile r4 = new com.mbridge.msdk.playercommon.exoplayer2.offline.ActionFile
            r4.<init>(r7)
            r3.actionFile = r4
            r3.deserializers = r8
            r3.downloadsStopped = r1
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r3.tasks = r4
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r3.activeDownloadTasks = r4
            android.os.Looper r4 = android.os.Looper.myLooper()
            if (r4 != 0) goto L38
            android.os.Looper r4 = android.os.Looper.getMainLooper()
        L38:
            android.os.Handler r5 = new android.os.Handler
            r5.<init>(r4)
            r3.handler = r5
            android.os.HandlerThread r4 = new android.os.HandlerThread
            java.lang.String r5 = "DownloadManager file i/o"
            r4.<init>(r5)
            r3.fileIOThread = r4
            r4.start()
            android.os.Handler r4 = new android.os.Handler
            android.os.HandlerThread r5 = r3.fileIOThread
            android.os.Looper r5 = r5.getLooper()
            r4.<init>(r5)
            r3.fileIOHandler = r4
            java.util.concurrent.CopyOnWriteArraySet r4 = new java.util.concurrent.CopyOnWriteArraySet
            r4.<init>()
            r3.listeners = r4
            r3.loadActions()
            java.lang.String r4 = "Created"
            logd(r4)
            return
    }

    public DownloadManager(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r7, java.io.File r8, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer... r9) {
            r6 = this;
            r2 = 1
            r3 = 5
            r0 = r6
            r1 = r7
            r4 = r8
            r5 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DownloadManager(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r3, java.io.File r4, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer... r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper
            r0.<init>(r2, r3)
            r1.<init>(r0, r4, r5)
            return
    }

    static void access$1000(java.lang.String r0) {
            logd(r0)
            return
    }

    static boolean access$1100(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            boolean r0 = r0.released
            return r0
    }

    static java.util.ArrayList access$1200(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r0.tasks
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task access$1300(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r1) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r0 = r0.addTaskForAction(r1)
            return r0
    }

    static boolean access$1402(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0, boolean r1) {
            r0.initialized = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet access$1500(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener> r0 = r0.listeners
            return r0
    }

    static void access$1600(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            r0.saveActions()
            return
    }

    static void access$1700(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            r0.maybeStartTasks()
            return
    }

    static void access$1800(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r1) {
            r0.notifyListenersTaskStateChange(r1)
            return
    }

    static android.os.Handler access$1900(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            android.os.Handler r0 = r0.handler
            return r0
    }

    static void access$2200(java.lang.String r0, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r1) {
            logd(r0, r1)
            return
    }

    static void access$2300(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r1) {
            r0.onTaskStateChange(r1)
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper access$2400(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloaderConstructorHelper r0 = r0.downloaderConstructorHelper
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer[] access$800(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction$Deserializer[] r0 = r0.deserializers
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.offline.ActionFile access$900(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager r0) {
            com.mbridge.msdk.playercommon.exoplayer2.offline.ActionFile r0 = r0.actionFile
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task addTaskForAction(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r8) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r6 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task
            int r1 = r7.nextTaskId
            int r0 = r1 + 1
            r7.nextTaskId = r0
            int r4 = r7.minRetryCount
            r5 = 0
            r0 = r6
            r2 = r7
            r3 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r8 = r7.tasks
            r8.add(r6)
            java.lang.String r8 = "Task is added"
            logd(r8, r6)
            return r6
    }

    private void loadActions() {
            r2 = this;
            android.os.Handler r0 = r2.fileIOHandler
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$2 r1 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    private static void logd(java.lang.String r0) {
            return
    }

    private static void logd(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            logd(r1)
            return
    }

    private void maybeNotifyListenersIdle() {
            r2 = this;
            boolean r0 = r2.isIdle()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r0 = "Notify idle state"
            logd(r0)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener> r0 = r2.listeners
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener) r1
            r1.onIdle(r2)
            goto L12
        L22:
            return
    }

    private void maybeStartTasks() {
            r11 = this;
            boolean r0 = r11.initialized
            if (r0 == 0) goto La1
            boolean r0 = r11.released
            if (r0 == 0) goto La
            goto La1
        La:
            boolean r0 = r11.downloadsStopped
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L1d
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r11.activeDownloadTasks
            int r0 = r0.size()
            int r3 = r11.maxActiveDownloadTasks
            if (r0 != r3) goto L1b
            goto L1d
        L1b:
            r0 = r1
            goto L1e
        L1d:
            r0 = r2
        L1e:
            r3 = r1
        L1f:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r4 = r11.tasks
            int r4 = r4.size()
            if (r3 >= r4) goto La1
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r4 = r11.tasks
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r4 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r4
            boolean r5 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$500(r4)
            if (r5 != 0) goto L37
            goto L9d
        L37:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r5 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$300(r4)
            boolean r6 = r5.isRemoveAction
            if (r6 != 0) goto L42
            if (r0 == 0) goto L42
            goto L9d
        L42:
            r7 = r1
            r8 = r2
        L44:
            if (r7 >= r3) goto L84
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r9 = r11.tasks
            java.lang.Object r9 = r9.get(r7)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r9 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r9
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r10 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$300(r9)
            boolean r10 = r10.isSameMedia(r5)
            if (r10 == 0) goto L81
            if (r6 == 0) goto L76
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r4)
            java.lang.String r10 = " clashes with "
            r8.append(r10)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            logd(r8)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$600(r9)
            r8 = r1
            goto L81
        L76:
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r9 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$300(r9)
            boolean r9 = r9.isRemoveAction
            if (r9 == 0) goto L81
            r8 = r1
            r0 = r2
            goto L84
        L81:
            int r7 = r7 + 1
            goto L44
        L84:
            if (r8 == 0) goto L9d
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$700(r4)
            if (r6 != 0) goto L9d
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r11.activeDownloadTasks
            r0.add(r4)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r11.activeDownloadTasks
            int r0 = r0.size()
            int r4 = r11.maxActiveDownloadTasks
            if (r0 != r4) goto L9c
            r0 = r2
            goto L9d
        L9c:
            r0 = r1
        L9d:
            int r3 = r3 + 1
            goto L1f
        La1:
            return
    }

    private void notifyListenersTaskStateChange(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r3) {
            r2 = this;
            java.lang.String r0 = "Task state is changed"
            logd(r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState r3 = r3.getDownloadState()
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener> r0 = r2.listeners
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener) r1
            r1.onTaskStateChanged(r2, r3)
            goto Lf
        L1f:
            return
    }

    private void onTaskStateChange(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task r3) {
            r2 = this;
            boolean r0 = r2.released
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r3.isActive()
            r0 = r0 ^ 1
            if (r0 == 0) goto L12
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r2.activeDownloadTasks
            r1.remove(r3)
        L12:
            r2.notifyListenersTaskStateChange(r3)
            boolean r1 = r3.isFinished()
            if (r1 == 0) goto L23
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r2.tasks
            r1.remove(r3)
            r2.saveActions()
        L23:
            if (r0 == 0) goto L2b
            r2.maybeStartTasks()
            r2.maybeNotifyListenersIdle()
        L2b:
            return
    }

    private void saveActions() {
            r3 = this;
            boolean r0 = r3.released
            if (r0 == 0) goto L5
            return
        L5:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r3.tasks
            int r0 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction[r0]
            r1 = 0
        Le:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r2 = r3.tasks
            int r2 = r2.size()
            if (r1 >= r2) goto L27
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r2 = r3.tasks
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r2
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$300(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto Le
        L27:
            android.os.Handler r1 = r3.fileIOHandler
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$3 r2 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$3
            r2.<init>(r3, r0)
            r1.post(r2)
            return
    }

    public final void addListener(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener> r0 = r1.listeners
            r0.add(r2)
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState[] getAllTaskStates() {
            r4 = this;
            boolean r0 = r4.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r4.tasks
            int r0 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState[r0]
            r2 = 0
        L10:
            if (r2 >= r0) goto L23
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r3 = r4.tasks
            java.lang.Object r3 = r3.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r3 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r3
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState r3 = r3.getDownloadState()
            r1[r2] = r3
            int r2 = r2 + 1
            goto L10
        L23:
            return r1
    }

    public final int getDownloadCount() {
            r3 = this;
            r0 = 0
            r1 = r0
        L2:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r2 = r3.tasks
            int r2 = r2.size()
            if (r0 >= r2) goto L1f
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r2 = r3.tasks
            java.lang.Object r2 = r2.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r2
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$300(r2)
            boolean r2 = r2.isRemoveAction
            if (r2 != 0) goto L1c
            int r1 = r1 + 1
        L1c:
            int r0 = r0 + 1
            goto L2
        L1f:
            return r1
    }

    public final int getTaskCount() {
            r1 = this;
            boolean r0 = r1.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r0 = r1.tasks
            int r0 = r0.size()
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.TaskState getTaskState(int r4) {
            r3 = this;
            boolean r0 = r3.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r0 = 0
        L8:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r3.tasks
            int r1 = r1.size()
            if (r0 >= r1) goto L26
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r3.tasks
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r1
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$200(r1)
            if (r2 != r4) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$TaskState r4 = r1.getDownloadState()
            return r4
        L23:
            int r0 = r0 + 1
            goto L8
        L26:
            r4 = 0
            return r4
    }

    public final int handleAction(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2) {
            r1 = this;
            boolean r0 = r1.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r2 = r1.addTaskForAction(r2)
            boolean r0 = r1.initialized
            if (r0 == 0) goto L1e
            r1.saveActions()
            r1.maybeStartTasks()
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$100(r2)
            if (r0 != 0) goto L1e
            r1.notifyListenersTaskStateChange(r2)
        L1e:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$200(r2)
            return r2
    }

    public final int handleAction(byte[] r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction$Deserializer[] r2 = r1.deserializers
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r2 = com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.deserializeFromStream(r2, r0)
            int r2 = r1.handleAction(r2)
            return r2
    }

    public final boolean isIdle() {
            r4 = this;
            boolean r0 = r4.released
            r1 = 1
            r0 = r0 ^ r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r4.initialized
            r2 = 0
            if (r0 != 0) goto Ld
            return r2
        Ld:
            r0 = r2
        Le:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r3 = r4.tasks
            int r3 = r3.size()
            if (r0 >= r3) goto L28
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r3 = r4.tasks
            java.lang.Object r3 = r3.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r3 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r3
            boolean r3 = r3.isActive()
            if (r3 == 0) goto L25
            return r2
        L25:
            int r0 = r0 + 1
            goto Le
        L28:
            return r1
    }

    public final boolean isInitialized() {
            r1 = this;
            boolean r0 = r1.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r1.initialized
            return r0
    }

    public final void release() {
            r3 = this;
            boolean r0 = r3.released
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r3.released = r0
            r0 = 0
        L9:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r3.tasks
            int r1 = r1.size()
            if (r0 >= r1) goto L1f
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r3.tasks
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r1
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$000(r1)
            int r0 = r0 + 1
            goto L9
        L1f:
            android.os.ConditionVariable r0 = new android.os.ConditionVariable
            r0.<init>()
            android.os.Handler r1 = r3.fileIOHandler
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$1 r2 = new com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$1
            r2.<init>(r3, r0)
            r1.post(r2)
            r0.block()
            android.os.HandlerThread r0 = r3.fileIOThread
            r0.quit()
            java.lang.String r0 = "Released"
            logd(r0)
            return
    }

    public final void removeListener(com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Listener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Listener> r0 = r1.listeners
            r0.remove(r2)
            return
    }

    public final void startDownloads() {
            r1 = this;
            boolean r0 = r1.released
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r1.downloadsStopped
            if (r0 == 0) goto L16
            r0 = 0
            r1.downloadsStopped = r0
            r1.maybeStartTasks()
            java.lang.String r0 = "Downloads are started"
            logd(r0)
        L16:
            return
    }

    public final void stopDownloads() {
            r2 = this;
            boolean r0 = r2.released
            r1 = 1
            r0 = r0 ^ r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r2.downloadsStopped
            if (r0 != 0) goto L29
            r2.downloadsStopped = r1
            r0 = 0
        Le:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r2.activeDownloadTasks
            int r1 = r1.size()
            if (r0 >= r1) goto L24
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task> r1 = r2.activeDownloadTasks
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager$Task r1 = (com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task) r1
            com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadManager.Task.access$000(r1)
            int r0 = r0 + 1
            goto Le
        L24:
            java.lang.String r0 = "Downloads are stopping"
            logd(r0)
        L29:
            return
    }
}
