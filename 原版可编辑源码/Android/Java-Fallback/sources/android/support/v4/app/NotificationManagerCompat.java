package android.support.v4.app;

public final class NotificationManagerCompat {
    public static final java.lang.String ACTION_BIND_SIDE_CHANNEL = "android.support.BIND_NOTIFICATION_SIDE_CHANNEL";
    private static final java.lang.String CHECK_OP_NO_THROW = "checkOpNoThrow";
    public static final java.lang.String EXTRA_USE_SIDE_CHANNEL = "android.support.useSideChannel";
    public static final int IMPORTANCE_DEFAULT = 3;
    public static final int IMPORTANCE_HIGH = 4;
    public static final int IMPORTANCE_LOW = 2;
    public static final int IMPORTANCE_MAX = 5;
    public static final int IMPORTANCE_MIN = 1;
    public static final int IMPORTANCE_NONE = 0;
    public static final int IMPORTANCE_UNSPECIFIED = -1000;
    static final int MAX_SIDE_CHANNEL_SDK_VERSION = 19;
    private static final java.lang.String OP_POST_NOTIFICATION = "OP_POST_NOTIFICATION";
    private static final java.lang.String SETTING_ENABLED_NOTIFICATION_LISTENERS = "enabled_notification_listeners";
    private static final int SIDE_CHANNEL_RETRY_BASE_INTERVAL_MS = 1000;
    private static final int SIDE_CHANNEL_RETRY_MAX_COUNT = 6;
    private static final java.lang.String TAG = "NotifManCompat";
    private static java.util.Set<java.lang.String> sEnabledNotificationListenerPackages;
    private static java.lang.String sEnabledNotificationListeners;
    private static final java.lang.Object sEnabledNotificationListenersLock = null;
    private static final java.lang.Object sLock = null;
    private static android.support.v4.app.NotificationManagerCompat.SideChannelManager sSideChannelManager;
    private final android.content.Context mContext;
    private final android.app.NotificationManager mNotificationManager;

    private static class CancelTask implements android.support.v4.app.NotificationManagerCompat.Task {
        final boolean all;
        final int id;
        final java.lang.String packageName;
        final java.lang.String tag;

        CancelTask(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.packageName = r1
                r1 = 0
                r0.id = r1
                r1 = 0
                r0.tag = r1
                r1 = 1
                r0.all = r1
                return
        }

        CancelTask(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.packageName = r1
                r0.id = r2
                r0.tag = r3
                r1 = 0
                r0.all = r1
                return
        }

        @Override
        public void send(android.support.v4.app.INotificationSideChannel r4) throws android.os.RemoteException {
                r3 = this;
                boolean r0 = r3.all
                if (r0 == 0) goto La
                java.lang.String r0 = r3.packageName
                r4.cancelAll(r0)
                goto L13
            La:
                java.lang.String r0 = r3.packageName
                int r1 = r3.id
                java.lang.String r2 = r3.tag
                r4.cancel(r0, r1, r2)
            L13:
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "CancelTask["
                r0.<init>(r1)
                java.lang.String r1 = "packageName:"
                r0.append(r1)
                java.lang.String r1 = r2.packageName
                r0.append(r1)
                java.lang.String r1 = ", id:"
                r0.append(r1)
                int r1 = r2.id
                r0.append(r1)
                java.lang.String r1 = ", tag:"
                r0.append(r1)
                java.lang.String r1 = r2.tag
                r0.append(r1)
                java.lang.String r1 = ", all:"
                r0.append(r1)
                boolean r1 = r2.all
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static class NotifyTask implements android.support.v4.app.NotificationManagerCompat.Task {
        final int id;
        final android.app.Notification notif;
        final java.lang.String packageName;
        final java.lang.String tag;

        NotifyTask(java.lang.String r1, int r2, java.lang.String r3, android.app.Notification r4) {
                r0 = this;
                r0.<init>()
                r0.packageName = r1
                r0.id = r2
                r0.tag = r3
                r0.notif = r4
                return
        }

        @Override
        public void send(android.support.v4.app.INotificationSideChannel r5) throws android.os.RemoteException {
                r4 = this;
                java.lang.String r0 = r4.packageName
                int r1 = r4.id
                java.lang.String r2 = r4.tag
                android.app.Notification r3 = r4.notif
                r5.notify(r0, r1, r2, r3)
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "NotifyTask["
                r0.<init>(r1)
                java.lang.String r1 = "packageName:"
                r0.append(r1)
                java.lang.String r1 = r2.packageName
                r0.append(r1)
                java.lang.String r1 = ", id:"
                r0.append(r1)
                int r1 = r2.id
                r0.append(r1)
                java.lang.String r1 = ", tag:"
                r0.append(r1)
                java.lang.String r1 = r2.tag
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static class ServiceConnectedEvent {
        final android.content.ComponentName componentName;
        final android.os.IBinder iBinder;

        ServiceConnectedEvent(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                r0.<init>()
                r0.componentName = r1
                r0.iBinder = r2
                return
        }
    }

    private static class SideChannelManager implements android.os.Handler.Callback, android.content.ServiceConnection {
        private static final int MSG_QUEUE_TASK = 0;
        private static final int MSG_RETRY_LISTENER_QUEUE = 3;
        private static final int MSG_SERVICE_CONNECTED = 1;
        private static final int MSG_SERVICE_DISCONNECTED = 2;
        private java.util.Set<java.lang.String> mCachedEnabledPackages;
        private final android.content.Context mContext;
        private final android.os.Handler mHandler;
        private final android.os.HandlerThread mHandlerThread;
        private final java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord> mRecordMap;

        private static class ListenerRecord {
            boolean bound;
            final android.content.ComponentName componentName;
            int retryCount;
            android.support.v4.app.INotificationSideChannel service;
            java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat.Task> taskQueue;

            ListenerRecord(android.content.ComponentName r3) {
                    r2 = this;
                    r2.<init>()
                    r0 = 0
                    r2.bound = r0
                    java.util.ArrayDeque r1 = new java.util.ArrayDeque
                    r1.<init>()
                    r2.taskQueue = r1
                    r2.retryCount = r0
                    r2.componentName = r3
                    return
            }
        }

        SideChannelManager(android.content.Context r2) {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.mRecordMap = r0
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                r1.mCachedEnabledPackages = r0
                r1.mContext = r2
                android.os.HandlerThread r2 = new android.os.HandlerThread
                java.lang.String r0 = "NotificationManagerCompat"
                r2.<init>(r0)
                r1.mHandlerThread = r2
                r2.start()
                android.os.Handler r2 = new android.os.Handler
                android.os.HandlerThread r0 = r1.mHandlerThread
                android.os.Looper r0 = r0.getLooper()
                r2.<init>(r0, r1)
                r1.mHandler = r2
                return
        }

        private boolean ensureServiceBound(android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord r4) {
                r3 = this;
                boolean r0 = r4.bound
                if (r0 == 0) goto L6
                r4 = 1
                return r4
            L6:
                android.content.Intent r0 = new android.content.Intent
                java.lang.String r1 = "android.support.BIND_NOTIFICATION_SIDE_CHANNEL"
                r0.<init>(r1)
                android.content.ComponentName r1 = r4.componentName
                android.content.Intent r0 = r0.setComponent(r1)
                android.content.Context r1 = r3.mContext
                r2 = 33
                boolean r0 = r1.bindService(r0, r3, r2)
                r4.bound = r0
                boolean r0 = r4.bound
                if (r0 == 0) goto L25
                r0 = 0
                r4.retryCount = r0
                goto L42
            L25:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unable to bind to listener "
                r0.append(r1)
                android.content.ComponentName r1 = r4.componentName
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "NotifManCompat"
                android.util.Log.w(r1, r0)
                android.content.Context r0 = r3.mContext
                r0.unbindService(r3)
            L42:
                boolean r4 = r4.bound
                return r4
        }

        private void ensureServiceUnbound(android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord r2) {
                r1 = this;
                boolean r0 = r2.bound
                if (r0 == 0) goto Lc
                android.content.Context r0 = r1.mContext
                r0.unbindService(r1)
                r0 = 0
                r2.bound = r0
            Lc:
                r0 = 0
                r2.service = r0
                return
        }

        private void handleQueueTask(android.support.v4.app.NotificationManagerCompat.Task r4) {
                r3 = this;
                r3.updateListenerMap()
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r0 = r3.mRecordMap
                java.util.Collection r0 = r0.values()
                java.util.Iterator r0 = r0.iterator()
            Ld:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L22
                java.lang.Object r1 = r0.next()
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r1 = (android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord) r1
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r2 = r1.taskQueue
                r2.add(r4)
                r3.processListenerQueue(r1)
                goto Ld
            L22:
                return
        }

        private void handleRetryListenerQueue(android.content.ComponentName r2) {
                r1 = this;
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r0 = r1.mRecordMap
                java.lang.Object r2 = r0.get(r2)
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r2 = (android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord) r2
                if (r2 == 0) goto Ld
                r1.processListenerQueue(r2)
            Ld:
                return
        }

        private void handleServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
                r1 = this;
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r0 = r1.mRecordMap
                java.lang.Object r2 = r0.get(r2)
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r2 = (android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord) r2
                if (r2 == 0) goto L16
                android.support.v4.app.INotificationSideChannel r3 = android.support.v4.app.INotificationSideChannel.Stub.asInterface(r3)
                r2.service = r3
                r3 = 0
                r2.retryCount = r3
                r1.processListenerQueue(r2)
            L16:
                return
        }

        private void handleServiceDisconnected(android.content.ComponentName r2) {
                r1 = this;
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r0 = r1.mRecordMap
                java.lang.Object r2 = r0.get(r2)
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r2 = (android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord) r2
                if (r2 == 0) goto Ld
                r1.ensureServiceUnbound(r2)
            Ld:
                return
        }

        private void processListenerQueue(android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord r6) {
                r5 = this;
                r0 = 3
                java.lang.String r1 = "NotifManCompat"
                boolean r2 = android.util.Log.isLoggable(r1, r0)
                if (r2 == 0) goto L32
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Processing component "
                r2.append(r3)
                android.content.ComponentName r3 = r6.componentName
                r2.append(r3)
                java.lang.String r3 = ", "
                r2.append(r3)
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r3 = r6.taskQueue
                int r3 = r3.size()
                r2.append(r3)
                java.lang.String r3 = " queued tasks"
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                android.util.Log.d(r1, r2)
            L32:
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r2 = r6.taskQueue
                boolean r2 = r2.isEmpty()
                if (r2 == 0) goto L3b
                return
            L3b:
                boolean r2 = r5.ensureServiceBound(r6)
                if (r2 == 0) goto Lb6
                android.support.v4.app.INotificationSideChannel r2 = r6.service
                if (r2 != 0) goto L46
                goto Lb6
            L46:
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r2 = r6.taskQueue
                java.lang.Object r2 = r2.peek()
                android.support.v4.app.NotificationManagerCompat$Task r2 = (android.support.v4.app.NotificationManagerCompat.Task) r2
                if (r2 != 0) goto L51
                goto Laa
            L51:
                boolean r3 = android.util.Log.isLoggable(r1, r0)     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                if (r3 == 0) goto L6b
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                r3.<init>()     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                java.lang.String r4 = "Sending task "
                r3.append(r4)     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                r3.append(r2)     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                java.lang.String r3 = r3.toString()     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                android.util.Log.d(r1, r3)     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
            L6b:
                android.support.v4.app.INotificationSideChannel r3 = r6.service     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                r2.send(r3)     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r2 = r6.taskQueue     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                r2.remove()     // Catch: android.os.RemoteException -> L76 android.os.DeadObjectException -> L8e
                goto L46
            L76:
                r0 = move-exception
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "RemoteException communicating with "
                r2.append(r3)
                android.content.ComponentName r3 = r6.componentName
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                android.util.Log.w(r1, r2, r0)
                goto Laa
            L8e:
                boolean r0 = android.util.Log.isLoggable(r1, r0)
                if (r0 == 0) goto Laa
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "Remote service has died: "
                r0.append(r2)
                android.content.ComponentName r2 = r6.componentName
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                android.util.Log.d(r1, r0)
            Laa:
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r0 = r6.taskQueue
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto Lb5
                r5.scheduleListenerRetry(r6)
            Lb5:
                return
            Lb6:
                r5.scheduleListenerRetry(r6)
                return
        }

        private void scheduleListenerRetry(android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord r6) {
                r5 = this;
                android.os.Handler r0 = r5.mHandler
                android.content.ComponentName r1 = r6.componentName
                r2 = 3
                boolean r0 = r0.hasMessages(r2, r1)
                if (r0 == 0) goto Lc
                return
            Lc:
                int r0 = r6.retryCount
                r1 = 1
                int r0 = r0 + r1
                r6.retryCount = r0
                int r0 = r6.retryCount
                r3 = 6
                java.lang.String r4 = "NotifManCompat"
                if (r0 <= r3) goto L52
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Giving up on delivering "
                r0.append(r1)
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r1 = r6.taskQueue
                int r1 = r1.size()
                r0.append(r1)
                java.lang.String r1 = " tasks to "
                r0.append(r1)
                android.content.ComponentName r1 = r6.componentName
                r0.append(r1)
                java.lang.String r1 = " after "
                r0.append(r1)
                int r1 = r6.retryCount
                r0.append(r1)
                java.lang.String r1 = " retries"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                android.util.Log.w(r4, r0)
                java.util.ArrayDeque<android.support.v4.app.NotificationManagerCompat$Task> r6 = r6.taskQueue
                r6.clear()
                return
            L52:
                int r0 = r6.retryCount
                int r0 = r0 - r1
                int r0 = r1 << r0
                int r0 = r0 * 1000
                boolean r1 = android.util.Log.isLoggable(r4, r2)
                if (r1 == 0) goto L78
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r3 = "Scheduling retry for "
                r1.append(r3)
                r1.append(r0)
                java.lang.String r3 = " ms"
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                android.util.Log.d(r4, r1)
            L78:
                android.os.Handler r1 = r5.mHandler
                android.content.ComponentName r6 = r6.componentName
                android.os.Message r6 = r1.obtainMessage(r2, r6)
                android.os.Handler r1 = r5.mHandler
                long r2 = (long) r0
                r1.sendMessageDelayed(r6, r2)
                return
        }

        private void updateListenerMap() {
                r8 = this;
                android.content.Context r0 = r8.mContext
                java.util.Set r0 = android.support.v4.app.NotificationManagerCompat.getEnabledListenerPackages(r0)
                java.util.Set<java.lang.String> r1 = r8.mCachedEnabledPackages
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto Lf
                return
            Lf:
                r8.mCachedEnabledPackages = r0
                android.content.Context r1 = r8.mContext
                android.content.pm.PackageManager r1 = r1.getPackageManager()
                android.content.Intent r2 = new android.content.Intent
                r2.<init>()
                java.lang.String r3 = "android.support.BIND_NOTIFICATION_SIDE_CHANNEL"
                android.content.Intent r2 = r2.setAction(r3)
                r3 = 0
                java.util.List r1 = r1.queryIntentServices(r2, r3)
                java.util.HashSet r2 = new java.util.HashSet
                r2.<init>()
                java.util.Iterator r1 = r1.iterator()
            L30:
                boolean r3 = r1.hasNext()
                java.lang.String r4 = "NotifManCompat"
                if (r3 == 0) goto L7a
                java.lang.Object r3 = r1.next()
                android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
                android.content.pm.ServiceInfo r5 = r3.serviceInfo
                java.lang.String r5 = r5.packageName
                boolean r5 = r0.contains(r5)
                if (r5 != 0) goto L49
                goto L30
            L49:
                android.content.ComponentName r5 = new android.content.ComponentName
                android.content.pm.ServiceInfo r6 = r3.serviceInfo
                java.lang.String r6 = r6.packageName
                android.content.pm.ServiceInfo r7 = r3.serviceInfo
                java.lang.String r7 = r7.name
                r5.<init>(r6, r7)
                android.content.pm.ServiceInfo r3 = r3.serviceInfo
                java.lang.String r3 = r3.permission
                if (r3 == 0) goto L76
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r6 = "Permission present on component "
                r3.append(r6)
                r3.append(r5)
                java.lang.String r5 = ", not adding listener record."
                r3.append(r5)
                java.lang.String r3 = r3.toString()
                android.util.Log.w(r4, r3)
                goto L30
            L76:
                r2.add(r5)
                goto L30
            L7a:
                java.util.Iterator r0 = r2.iterator()
            L7e:
                boolean r1 = r0.hasNext()
                r3 = 3
                if (r1 == 0) goto Lb8
                java.lang.Object r1 = r0.next()
                android.content.ComponentName r1 = (android.content.ComponentName) r1
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r5 = r8.mRecordMap
                boolean r5 = r5.containsKey(r1)
                if (r5 != 0) goto L7e
                boolean r3 = android.util.Log.isLoggable(r4, r3)
                if (r3 == 0) goto Lad
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r5 = "Adding listener record for "
                r3.append(r5)
                r3.append(r1)
                java.lang.String r3 = r3.toString()
                android.util.Log.d(r4, r3)
            Lad:
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r3 = r8.mRecordMap
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r5 = new android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord
                r5.<init>(r1)
                r3.put(r1, r5)
                goto L7e
            Lb8:
                java.util.Map<android.content.ComponentName, android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord> r0 = r8.mRecordMap
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Lc2:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L103
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r5 = r1.getKey()
                boolean r5 = r2.contains(r5)
                if (r5 != 0) goto Lc2
                boolean r5 = android.util.Log.isLoggable(r4, r3)
                if (r5 == 0) goto Lf6
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r6 = "Removing listener record for "
                r5.append(r6)
                java.lang.Object r6 = r1.getKey()
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                android.util.Log.d(r4, r5)
            Lf6:
                java.lang.Object r1 = r1.getValue()
                android.support.v4.app.NotificationManagerCompat$SideChannelManager$ListenerRecord r1 = (android.support.v4.app.NotificationManagerCompat.SideChannelManager.ListenerRecord) r1
                r8.ensureServiceUnbound(r1)
                r0.remove()
                goto Lc2
            L103:
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r4) {
                r3 = this;
                int r0 = r4.what
                r1 = 1
                if (r0 == 0) goto L2b
                if (r0 == r1) goto L1f
                r2 = 2
                if (r0 == r2) goto L17
                r2 = 3
                if (r0 == r2) goto Lf
                r4 = 0
                return r4
            Lf:
                java.lang.Object r4 = r4.obj
                android.content.ComponentName r4 = (android.content.ComponentName) r4
                r3.handleRetryListenerQueue(r4)
                return r1
            L17:
                java.lang.Object r4 = r4.obj
                android.content.ComponentName r4 = (android.content.ComponentName) r4
                r3.handleServiceDisconnected(r4)
                return r1
            L1f:
                java.lang.Object r4 = r4.obj
                android.support.v4.app.NotificationManagerCompat$ServiceConnectedEvent r4 = (android.support.v4.app.NotificationManagerCompat.ServiceConnectedEvent) r4
                android.content.ComponentName r0 = r4.componentName
                android.os.IBinder r4 = r4.iBinder
                r3.handleServiceConnected(r0, r4)
                return r1
            L2b:
                java.lang.Object r4 = r4.obj
                android.support.v4.app.NotificationManagerCompat$Task r4 = (android.support.v4.app.NotificationManagerCompat.Task) r4
                r3.handleQueueTask(r4)
                return r1
        }

        @Override
        public void onServiceConnected(android.content.ComponentName r4, android.os.IBinder r5) {
                r3 = this;
                java.lang.String r0 = "NotifManCompat"
                r1 = 3
                boolean r1 = android.util.Log.isLoggable(r0, r1)
                if (r1 == 0) goto L1d
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Connected to service "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.d(r0, r1)
            L1d:
                android.os.Handler r0 = r3.mHandler
                r1 = 1
                android.support.v4.app.NotificationManagerCompat$ServiceConnectedEvent r2 = new android.support.v4.app.NotificationManagerCompat$ServiceConnectedEvent
                r2.<init>(r4, r5)
                android.os.Message r4 = r0.obtainMessage(r1, r2)
                r4.sendToTarget()
                return
        }

        @Override
        public void onServiceDisconnected(android.content.ComponentName r4) {
                r3 = this;
                java.lang.String r0 = "NotifManCompat"
                r1 = 3
                boolean r1 = android.util.Log.isLoggable(r0, r1)
                if (r1 == 0) goto L1d
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Disconnected from service "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                android.util.Log.d(r0, r1)
            L1d:
                android.os.Handler r0 = r3.mHandler
                r1 = 2
                android.os.Message r4 = r0.obtainMessage(r1, r4)
                r4.sendToTarget()
                return
        }

        public void queueTask(android.support.v4.app.NotificationManagerCompat.Task r3) {
                r2 = this;
                android.os.Handler r0 = r2.mHandler
                r1 = 0
                android.os.Message r3 = r0.obtainMessage(r1, r3)
                r3.sendToTarget()
                return
        }
    }

    private interface Task {
        void send(android.support.v4.app.INotificationSideChannel r1) throws android.os.RemoteException;
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListenersLock = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListenerPackages = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.app.NotificationManagerCompat.sLock = r0
            return
    }

    private NotificationManagerCompat(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.mContext = r2
            java.lang.String r0 = "notification"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            r1.mNotificationManager = r2
            return
    }

    public static android.support.v4.app.NotificationManagerCompat from(android.content.Context r1) {
            android.support.v4.app.NotificationManagerCompat r0 = new android.support.v4.app.NotificationManagerCompat
            r0.<init>(r1)
            return r0
    }

    public static java.util.Set<java.lang.String> getEnabledListenerPackages(android.content.Context r6) {
            android.content.ContentResolver r6 = r6.getContentResolver()
            java.lang.String r0 = "enabled_notification_listeners"
            java.lang.String r6 = android.provider.Settings.Secure.getString(r6, r0)
            java.lang.Object r0 = android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListenersLock
            monitor-enter(r0)
            if (r6 == 0) goto L3e
            java.lang.String r1 = android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListeners     // Catch: java.lang.Throwable -> L42
            boolean r1 = r6.equals(r1)     // Catch: java.lang.Throwable -> L42
            if (r1 != 0) goto L3e
            java.lang.String r1 = ":"
            r2 = -1
            java.lang.String[] r1 = r6.split(r1, r2)     // Catch: java.lang.Throwable -> L42
            java.util.HashSet r2 = new java.util.HashSet     // Catch: java.lang.Throwable -> L42
            int r3 = r1.length     // Catch: java.lang.Throwable -> L42
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L42
            int r3 = r1.length     // Catch: java.lang.Throwable -> L42
            r4 = 0
        L26:
            if (r4 >= r3) goto L3a
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L42
            android.content.ComponentName r5 = android.content.ComponentName.unflattenFromString(r5)     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L37
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L42
            r2.add(r5)     // Catch: java.lang.Throwable -> L42
        L37:
            int r4 = r4 + 1
            goto L26
        L3a:
            android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListenerPackages = r2     // Catch: java.lang.Throwable -> L42
            android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListeners = r6     // Catch: java.lang.Throwable -> L42
        L3e:
            java.util.Set<java.lang.String> r6 = android.support.v4.app.NotificationManagerCompat.sEnabledNotificationListenerPackages     // Catch: java.lang.Throwable -> L42
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            return r6
        L42:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L42
            throw r6
    }

    private void pushSideChannelQueue(android.support.v4.app.NotificationManagerCompat.Task r4) {
            r3 = this;
            java.lang.Object r0 = android.support.v4.app.NotificationManagerCompat.sLock
            monitor-enter(r0)
            android.support.v4.app.NotificationManagerCompat$SideChannelManager r1 = android.support.v4.app.NotificationManagerCompat.sSideChannelManager     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L14
            android.support.v4.app.NotificationManagerCompat$SideChannelManager r1 = new android.support.v4.app.NotificationManagerCompat$SideChannelManager     // Catch: java.lang.Throwable -> L1b
            android.content.Context r2 = r3.mContext     // Catch: java.lang.Throwable -> L1b
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1b
            android.support.v4.app.NotificationManagerCompat.sSideChannelManager = r1     // Catch: java.lang.Throwable -> L1b
        L14:
            android.support.v4.app.NotificationManagerCompat$SideChannelManager r1 = android.support.v4.app.NotificationManagerCompat.sSideChannelManager     // Catch: java.lang.Throwable -> L1b
            r1.queueTask(r4)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r4
    }

    private static boolean useSideChannelForNotification(android.app.Notification r1) {
            android.os.Bundle r1 = android.support.v4.app.NotificationCompat.getExtras(r1)
            if (r1 == 0) goto L10
            java.lang.String r0 = "android.support.useSideChannel"
            boolean r1 = r1.getBoolean(r0)
            if (r1 == 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public boolean areNotificationsEnabled() {
            r11 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Ld
            android.app.NotificationManager r0 = r11.mNotificationManager
            boolean r0 = r0.areNotificationsEnabled()
            return r0
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 1
            if (r0 < r1) goto L81
            android.content.Context r0 = r11.mContext
            java.lang.String r1 = "appops"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.AppOpsManager r0 = (android.app.AppOpsManager) r0
            android.content.Context r1 = r11.mContext
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            android.content.Context r3 = r11.mContext
            android.content.Context r3 = r3.getApplicationContext()
            java.lang.String r3 = r3.getPackageName()
            int r1 = r1.uid
            java.lang.Class<android.app.AppOpsManager> r4 = android.app.AppOpsManager.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L81
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L81
            java.lang.String r5 = "checkOpNoThrow"
            r6 = 3
            java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> L81
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L81
            r9 = 0
            r7[r9] = r8     // Catch: java.lang.Throwable -> L81
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L81
            r7[r2] = r8     // Catch: java.lang.Throwable -> L81
            java.lang.Class<java.lang.String> r8 = java.lang.String.class
            r10 = 2
            r7[r10] = r8     // Catch: java.lang.Throwable -> L81
            java.lang.reflect.Method r5 = r4.getMethod(r5, r7)     // Catch: java.lang.Throwable -> L81
            java.lang.String r7 = "OP_POST_NOTIFICATION"
            java.lang.reflect.Field r4 = r4.getDeclaredField(r7)     // Catch: java.lang.Throwable -> L81
            java.lang.Class<java.lang.Integer> r7 = java.lang.Integer.class
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L81
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L81
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L81
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L81
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L81
            r6[r9] = r4     // Catch: java.lang.Throwable -> L81
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L81
            r6[r2] = r1     // Catch: java.lang.Throwable -> L81
            r6[r10] = r3     // Catch: java.lang.Throwable -> L81
            java.lang.Object r0 = r5.invoke(r0, r6)     // Catch: java.lang.Throwable -> L81
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L81
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L81
            if (r0 != 0) goto L80
            goto L81
        L80:
            r2 = r9
        L81:
            return r2
    }

    public void cancel(int r2) {
            r1 = this;
            r0 = 0
            r1.cancel(r0, r2)
            return
    }

    public void cancel(java.lang.String r3, int r4) {
            r2 = this;
            android.app.NotificationManager r0 = r2.mNotificationManager
            r0.cancel(r3, r4)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 > r1) goto L19
            android.support.v4.app.NotificationManagerCompat$CancelTask r0 = new android.support.v4.app.NotificationManagerCompat$CancelTask
            android.content.Context r1 = r2.mContext
            java.lang.String r1 = r1.getPackageName()
            r0.<init>(r1, r4, r3)
            r2.pushSideChannelQueue(r0)
        L19:
            return
    }

    public void cancelAll() {
            r2 = this;
            android.app.NotificationManager r0 = r2.mNotificationManager
            r0.cancelAll()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 > r1) goto L19
            android.support.v4.app.NotificationManagerCompat$CancelTask r0 = new android.support.v4.app.NotificationManagerCompat$CancelTask
            android.content.Context r1 = r2.mContext
            java.lang.String r1 = r1.getPackageName()
            r0.<init>(r1)
            r2.pushSideChannelQueue(r0)
        L19:
            return
    }

    public int getImportance() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Ld
            android.app.NotificationManager r0 = r2.mNotificationManager
            int r0 = r0.getImportance()
            return r0
        Ld:
            r0 = -1000(0xfffffffffffffc18, float:NaN)
            return r0
    }

    public void notify(int r2, android.app.Notification r3) {
            r1 = this;
            r0 = 0
            r1.notify(r0, r2, r3)
            return
    }

    public void notify(java.lang.String r3, int r4, android.app.Notification r5) {
            r2 = this;
            boolean r0 = useSideChannelForNotification(r5)
            if (r0 == 0) goto L1a
            android.support.v4.app.NotificationManagerCompat$NotifyTask r0 = new android.support.v4.app.NotificationManagerCompat$NotifyTask
            android.content.Context r1 = r2.mContext
            java.lang.String r1 = r1.getPackageName()
            r0.<init>(r1, r4, r3, r5)
            r2.pushSideChannelQueue(r0)
            android.app.NotificationManager r5 = r2.mNotificationManager
            r5.cancel(r3, r4)
            goto L1f
        L1a:
            android.app.NotificationManager r0 = r2.mNotificationManager
            r0.notify(r3, r4, r5)
        L1f:
            return
    }
}
