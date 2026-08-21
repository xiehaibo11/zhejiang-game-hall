package android.support.v4.app;

@android.support.annotation.RequiresApi(16)
class NotificationCompatJellybean {
    static final java.lang.String EXTRA_ALLOW_GENERATED_REPLIES = "android.support.allowGeneratedReplies";
    static final java.lang.String EXTRA_DATA_ONLY_REMOTE_INPUTS = "android.support.dataRemoteInputs";
    private static final java.lang.String KEY_ACTION_INTENT = "actionIntent";
    private static final java.lang.String KEY_ALLOWED_DATA_TYPES = "allowedDataTypes";
    private static final java.lang.String KEY_ALLOW_FREE_FORM_INPUT = "allowFreeFormInput";
    private static final java.lang.String KEY_CHOICES = "choices";
    private static final java.lang.String KEY_DATA_ONLY_REMOTE_INPUTS = "dataOnlyRemoteInputs";
    private static final java.lang.String KEY_EXTRAS = "extras";
    private static final java.lang.String KEY_ICON = "icon";
    private static final java.lang.String KEY_LABEL = "label";
    private static final java.lang.String KEY_REMOTE_INPUTS = "remoteInputs";
    private static final java.lang.String KEY_RESULT_KEY = "resultKey";
    private static final java.lang.String KEY_SEMANTIC_ACTION = "semanticAction";
    private static final java.lang.String KEY_SHOWS_USER_INTERFACE = "showsUserInterface";
    private static final java.lang.String KEY_TITLE = "title";
    public static final java.lang.String TAG = "NotificationCompat";
    private static java.lang.Class<?> sActionClass;
    private static java.lang.reflect.Field sActionIconField;
    private static java.lang.reflect.Field sActionIntentField;
    private static java.lang.reflect.Field sActionTitleField;
    private static boolean sActionsAccessFailed;
    private static java.lang.reflect.Field sActionsField;
    private static final java.lang.Object sActionsLock = null;
    private static java.lang.reflect.Field sExtrasField;
    private static boolean sExtrasFieldAccessFailed;
    private static final java.lang.Object sExtrasLock = null;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.app.NotificationCompatJellybean.sExtrasLock = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.app.NotificationCompatJellybean.sActionsLock = r0
            return
    }

    private NotificationCompatJellybean() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.util.SparseArray<android.os.Bundle> buildActionExtrasMap(java.util.List<android.os.Bundle> r4) {
            int r0 = r4.size()
            r1 = 0
            r2 = 0
        L6:
            if (r2 >= r0) goto L1d
            java.lang.Object r3 = r4.get(r2)
            android.os.Bundle r3 = (android.os.Bundle) r3
            if (r3 == 0) goto L1a
            if (r1 != 0) goto L17
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
        L17:
            r1.put(r2, r3)
        L1a:
            int r2 = r2 + 1
            goto L6
        L1d:
            return r1
    }

    private static boolean ensureActionReflectionReadyLocked() {
            java.lang.String r0 = "Unable to access notification actions"
            java.lang.String r1 = "NotificationCompat"
            boolean r2 = android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed
            if (r2 == 0) goto La
            r0 = 0
            return r0
        La:
            r2 = 1
            java.lang.reflect.Field r3 = android.support.v4.app.NotificationCompatJellybean.sActionsField     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            if (r3 != 0) goto L52
            java.lang.String r3 = "android.app.Notification$Action"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            android.support.v4.app.NotificationCompatJellybean.sActionClass = r3     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.Class<?> r3 = android.support.v4.app.NotificationCompatJellybean.sActionClass     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.String r4 = "icon"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            android.support.v4.app.NotificationCompatJellybean.sActionIconField = r3     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.Class<?> r3 = android.support.v4.app.NotificationCompatJellybean.sActionClass     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.String r4 = "title"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            android.support.v4.app.NotificationCompatJellybean.sActionTitleField = r3     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.Class<?> r3 = android.support.v4.app.NotificationCompatJellybean.sActionClass     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.String r4 = "actionIntent"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            android.support.v4.app.NotificationCompatJellybean.sActionIntentField = r3     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.Class<android.app.Notification> r3 = android.app.Notification.class
            java.lang.String r4 = "actions"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            android.support.v4.app.NotificationCompatJellybean.sActionsField = r3     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            java.lang.reflect.Field r3 = android.support.v4.app.NotificationCompatJellybean.sActionsField     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            r3.setAccessible(r2)     // Catch: java.lang.NoSuchFieldException -> L45 java.lang.ClassNotFoundException -> L4c
            goto L52
        L45:
            r3 = move-exception
            android.util.Log.e(r1, r0, r3)
            android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed = r2
            goto L52
        L4c:
            r3 = move-exception
            android.util.Log.e(r1, r0, r3)
            android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed = r2
        L52:
            boolean r0 = android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed
            r0 = r0 ^ r2
            return r0
    }

    private static android.support.v4.app.RemoteInput fromBundle(android.os.Bundle r8) {
            java.lang.String r0 = "allowedDataTypes"
            java.util.ArrayList r0 = r8.getStringArrayList(r0)
            java.util.HashSet r7 = new java.util.HashSet
            r7.<init>()
            if (r0 == 0) goto L21
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            r7.add(r1)
            goto L11
        L21:
            android.support.v4.app.RemoteInput r0 = new android.support.v4.app.RemoteInput
            java.lang.String r1 = "resultKey"
            java.lang.String r2 = r8.getString(r1)
            java.lang.String r1 = "label"
            java.lang.CharSequence r3 = r8.getCharSequence(r1)
            java.lang.String r1 = "choices"
            java.lang.CharSequence[] r4 = r8.getCharSequenceArray(r1)
            java.lang.String r1 = "allowFreeFormInput"
            boolean r5 = r8.getBoolean(r1)
            java.lang.String r1 = "extras"
            android.os.Bundle r6 = r8.getBundle(r1)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r0
    }

    private static android.support.v4.app.RemoteInput[] fromBundleArray(android.os.Bundle[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            android.support.v4.app.RemoteInput[] r0 = new android.support.v4.app.RemoteInput[r0]
            r1 = 0
        L8:
            int r2 = r3.length
            if (r1 >= r2) goto L16
            r2 = r3[r1]
            android.support.v4.app.RemoteInput r2 = fromBundle(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L16:
            return r0
    }

    public static android.support.v4.app.NotificationCompat.Action getAction(android.app.Notification r5, int r6) {
            java.lang.Object r0 = android.support.v4.app.NotificationCompatJellybean.sActionsLock
            monitor-enter(r0)
            r1 = 0
            java.lang.Object[] r2 = getActionObjectsLocked(r5)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            if (r2 == 0) goto L4b
            r2 = r2[r6]     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            android.os.Bundle r5 = getExtras(r5)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            if (r5 == 0) goto L21
            java.lang.String r3 = "android.support.actionExtras"
            android.util.SparseArray r5 = r5.getSparseParcelableArray(r3)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            if (r5 == 0) goto L21
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            android.os.Bundle r5 = (android.os.Bundle) r5     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            goto L22
        L21:
            r5 = r1
        L22:
            java.lang.reflect.Field r6 = android.support.v4.app.NotificationCompatJellybean.sActionIconField     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            int r6 = r6.getInt(r2)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            java.lang.reflect.Field r3 = android.support.v4.app.NotificationCompatJellybean.sActionTitleField     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            java.lang.CharSequence r3 = (java.lang.CharSequence) r3     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            java.lang.reflect.Field r4 = android.support.v4.app.NotificationCompatJellybean.sActionIntentField     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            java.lang.Object r2 = r4.get(r2)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            android.app.PendingIntent r2 = (android.app.PendingIntent) r2     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            android.support.v4.app.NotificationCompat$Action r5 = readAction(r6, r3, r2, r5)     // Catch: java.lang.Throwable -> L3e java.lang.IllegalAccessException -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return r5
        L3e:
            r5 = move-exception
            goto L4d
        L40:
            r5 = move-exception
            java.lang.String r6 = "NotificationCompat"
            java.lang.String r2 = "Unable to access notification actions"
            android.util.Log.e(r6, r2, r5)     // Catch: java.lang.Throwable -> L3e
            r5 = 1
            android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed = r5     // Catch: java.lang.Throwable -> L3e
        L4b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            return r1
        L4d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3e
            throw r5
    }

    public static int getActionCount(android.app.Notification r1) {
            java.lang.Object r0 = android.support.v4.app.NotificationCompatJellybean.sActionsLock
            monitor-enter(r0)
            java.lang.Object[] r1 = getActionObjectsLocked(r1)     // Catch: java.lang.Throwable -> Le
            if (r1 == 0) goto Lb
            int r1 = r1.length     // Catch: java.lang.Throwable -> Le
            goto Lc
        Lb:
            r1 = 0
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return r1
        Le:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r1
    }

    static android.support.v4.app.NotificationCompat.Action getActionFromBundle(android.os.Bundle r13) {
            java.lang.String r0 = "extras"
            android.os.Bundle r1 = r13.getBundle(r0)
            r2 = 0
            if (r1 == 0) goto L11
            java.lang.String r3 = "android.support.allowGeneratedReplies"
            boolean r2 = r1.getBoolean(r3, r2)
            r10 = r2
            goto L12
        L11:
            r10 = 0
        L12:
            android.support.v4.app.NotificationCompat$Action r1 = new android.support.v4.app.NotificationCompat$Action
            java.lang.String r2 = "icon"
            int r4 = r13.getInt(r2)
            java.lang.String r2 = "title"
            java.lang.CharSequence r5 = r13.getCharSequence(r2)
            java.lang.String r2 = "actionIntent"
            android.os.Parcelable r2 = r13.getParcelable(r2)
            r6 = r2
            android.app.PendingIntent r6 = (android.app.PendingIntent) r6
            android.os.Bundle r7 = r13.getBundle(r0)
            java.lang.String r0 = "remoteInputs"
            android.os.Bundle[] r0 = getBundleArrayFromBundle(r13, r0)
            android.support.v4.app.RemoteInput[] r8 = fromBundleArray(r0)
            java.lang.String r0 = "dataOnlyRemoteInputs"
            android.os.Bundle[] r0 = getBundleArrayFromBundle(r13, r0)
            android.support.v4.app.RemoteInput[] r9 = fromBundleArray(r0)
            java.lang.String r0 = "semanticAction"
            int r11 = r13.getInt(r0)
            java.lang.String r0 = "showsUserInterface"
            boolean r12 = r13.getBoolean(r0)
            r3 = r1
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return r1
    }

    private static java.lang.Object[] getActionObjectsLocked(android.app.Notification r4) {
            java.lang.Object r0 = android.support.v4.app.NotificationCompatJellybean.sActionsLock
            monitor-enter(r0)
            boolean r1 = ensureActionReflectionReadyLocked()     // Catch: java.lang.Throwable -> L25
            r2 = 0
            if (r1 != 0) goto Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return r2
        Lc:
            java.lang.reflect.Field r1 = android.support.v4.app.NotificationCompatJellybean.sActionsField     // Catch: java.lang.IllegalAccessException -> L18 java.lang.Throwable -> L25
            java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.IllegalAccessException -> L18 java.lang.Throwable -> L25
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.IllegalAccessException -> L18 java.lang.Throwable -> L25
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.IllegalAccessException -> L18 java.lang.Throwable -> L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return r4
        L18:
            r4 = move-exception
            java.lang.String r1 = "NotificationCompat"
            java.lang.String r3 = "Unable to access notification actions"
            android.util.Log.e(r1, r3, r4)     // Catch: java.lang.Throwable -> L25
            r4 = 1
            android.support.v4.app.NotificationCompatJellybean.sActionsAccessFailed = r4     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return r2
        L25:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            throw r4
    }

    private static android.os.Bundle[] getBundleArrayFromBundle(android.os.Bundle r3, java.lang.String r4) {
            android.os.Parcelable[] r0 = r3.getParcelableArray(r4)
            boolean r1 = r0 instanceof android.os.Bundle[]
            if (r1 != 0) goto L18
            if (r0 != 0) goto Lb
            goto L18
        Lb:
            int r1 = r0.length
            java.lang.Class<android.os.Bundle[]> r2 = android.os.Bundle[].class
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1, r2)
            android.os.Bundle[] r0 = (android.os.Bundle[]) r0
            r3.putParcelableArray(r4, r0)
            return r0
        L18:
            android.os.Bundle[] r0 = (android.os.Bundle[]) r0
            android.os.Bundle[] r0 = (android.os.Bundle[]) r0
            return r0
    }

    static android.os.Bundle getBundleForAction(android.support.v4.app.NotificationCompat.Action r4) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            int r1 = r4.getIcon()
            java.lang.String r2 = "icon"
            r0.putInt(r2, r1)
            java.lang.CharSequence r1 = r4.getTitle()
            java.lang.String r2 = "title"
            r0.putCharSequence(r2, r1)
            android.app.PendingIntent r1 = r4.getActionIntent()
            java.lang.String r2 = "actionIntent"
            r0.putParcelable(r2, r1)
            android.os.Bundle r1 = r4.getExtras()
            if (r1 == 0) goto L30
            android.os.Bundle r1 = new android.os.Bundle
            android.os.Bundle r2 = r4.getExtras()
            r1.<init>(r2)
            goto L35
        L30:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
        L35:
            boolean r2 = r4.getAllowGeneratedReplies()
            java.lang.String r3 = "android.support.allowGeneratedReplies"
            r1.putBoolean(r3, r2)
            java.lang.String r2 = "extras"
            r0.putBundle(r2, r1)
            android.support.v4.app.RemoteInput[] r1 = r4.getRemoteInputs()
            android.os.Bundle[] r1 = toBundleArray(r1)
            java.lang.String r2 = "remoteInputs"
            r0.putParcelableArray(r2, r1)
            boolean r1 = r4.getShowsUserInterface()
            java.lang.String r2 = "showsUserInterface"
            r0.putBoolean(r2, r1)
            int r4 = r4.getSemanticAction()
            java.lang.String r1 = "semanticAction"
            r0.putInt(r1, r4)
            return r0
    }

    public static android.os.Bundle getExtras(android.app.Notification r6) {
            java.lang.Object r0 = android.support.v4.app.NotificationCompatJellybean.sExtrasLock
            monitor-enter(r0)
            boolean r1 = android.support.v4.app.NotificationCompatJellybean.sExtrasFieldAccessFailed     // Catch: java.lang.Throwable -> L5e
            r2 = 0
            if (r1 == 0) goto La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            return r2
        La:
            r1 = 1
            java.lang.reflect.Field r3 = android.support.v4.app.NotificationCompatJellybean.sExtrasField     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            if (r3 != 0) goto L33
            java.lang.Class<android.app.Notification> r3 = android.app.Notification.class
            java.lang.String r4 = "extras"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            java.lang.Class<android.os.Bundle> r4 = android.os.Bundle.class
            java.lang.Class r5 = r3.getType()     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            boolean r4 = r4.isAssignableFrom(r5)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            if (r4 != 0) goto L2e
            java.lang.String r6 = "NotificationCompat"
            java.lang.String r3 = "Notification.extras field is not of type Bundle"
            android.util.Log.e(r6, r3)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            android.support.v4.app.NotificationCompatJellybean.sExtrasFieldAccessFailed = r1     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            return r2
        L2e:
            r3.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            android.support.v4.app.NotificationCompatJellybean.sExtrasField = r3     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
        L33:
            java.lang.reflect.Field r3 = android.support.v4.app.NotificationCompatJellybean.sExtrasField     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            java.lang.Object r3 = r3.get(r6)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            android.os.Bundle r3 = (android.os.Bundle) r3     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            if (r3 != 0) goto L47
            android.os.Bundle r3 = new android.os.Bundle     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            r3.<init>()     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            java.lang.reflect.Field r4 = android.support.v4.app.NotificationCompatJellybean.sExtrasField     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
            r4.set(r6, r3)     // Catch: java.lang.NoSuchFieldException -> L49 java.lang.IllegalAccessException -> L52 java.lang.Throwable -> L5e
        L47:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            return r3
        L49:
            r6 = move-exception
            java.lang.String r3 = "NotificationCompat"
            java.lang.String r4 = "Unable to access notification extras"
            android.util.Log.e(r3, r4, r6)     // Catch: java.lang.Throwable -> L5e
            goto L5a
        L52:
            r6 = move-exception
            java.lang.String r3 = "NotificationCompat"
            java.lang.String r4 = "Unable to access notification extras"
            android.util.Log.e(r3, r4, r6)     // Catch: java.lang.Throwable -> L5e
        L5a:
            android.support.v4.app.NotificationCompatJellybean.sExtrasFieldAccessFailed = r1     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            return r2
        L5e:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L5e
            throw r6
    }

    public static android.support.v4.app.NotificationCompat.Action readAction(int r11, java.lang.CharSequence r12, android.app.PendingIntent r13, android.os.Bundle r14) {
            r0 = 0
            if (r14 == 0) goto L21
            java.lang.String r0 = "android.support.remoteInputs"
            android.os.Bundle[] r0 = getBundleArrayFromBundle(r14, r0)
            android.support.v4.app.RemoteInput[] r0 = fromBundleArray(r0)
            java.lang.String r1 = "android.support.dataRemoteInputs"
            android.os.Bundle[] r1 = getBundleArrayFromBundle(r14, r1)
            android.support.v4.app.RemoteInput[] r1 = fromBundleArray(r1)
            java.lang.String r2 = "android.support.allowGeneratedReplies"
            boolean r2 = r14.getBoolean(r2)
            r5 = r0
            r6 = r1
            r7 = r2
            goto L25
        L21:
            r1 = 0
            r5 = r0
            r6 = r5
            r7 = 0
        L25:
            android.support.v4.app.NotificationCompat$Action r10 = new android.support.v4.app.NotificationCompat$Action
            r8 = 0
            r9 = 1
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r10
    }

    private static android.os.Bundle toBundle(android.support.v4.app.RemoteInput r3) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r3.getResultKey()
            java.lang.String r2 = "resultKey"
            r0.putString(r2, r1)
            java.lang.CharSequence r1 = r3.getLabel()
            java.lang.String r2 = "label"
            r0.putCharSequence(r2, r1)
            java.lang.CharSequence[] r1 = r3.getChoices()
            java.lang.String r2 = "choices"
            r0.putCharSequenceArray(r2, r1)
            boolean r1 = r3.getAllowFreeFormInput()
            java.lang.String r2 = "allowFreeFormInput"
            r0.putBoolean(r2, r1)
            android.os.Bundle r1 = r3.getExtras()
            java.lang.String r2 = "extras"
            r0.putBundle(r2, r1)
            java.util.Set r3 = r3.getAllowedDataTypes()
            if (r3 == 0) goto L60
            boolean r1 = r3.isEmpty()
            if (r1 != 0) goto L60
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r3.size()
            r1.<init>(r2)
            java.util.Iterator r3 = r3.iterator()
        L4b:
            boolean r2 = r3.hasNext()
            if (r2 == 0) goto L5b
            java.lang.Object r2 = r3.next()
            java.lang.String r2 = (java.lang.String) r2
            r1.add(r2)
            goto L4b
        L5b:
            java.lang.String r3 = "allowedDataTypes"
            r0.putStringArrayList(r3, r1)
        L60:
            return r0
    }

    private static android.os.Bundle[] toBundleArray(android.support.v4.app.RemoteInput[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            android.os.Bundle[] r0 = new android.os.Bundle[r0]
            r1 = 0
        L8:
            int r2 = r3.length
            if (r1 >= r2) goto L16
            r2 = r3[r1]
            android.os.Bundle r2 = toBundle(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L16:
            return r0
    }

    public static android.os.Bundle writeActionAndGetExtras(android.app.Notification.Builder r3, android.support.v4.app.NotificationCompat.Action r4) {
            int r0 = r4.getIcon()
            java.lang.CharSequence r1 = r4.getTitle()
            android.app.PendingIntent r2 = r4.getActionIntent()
            r3.addAction(r0, r1, r2)
            android.os.Bundle r3 = new android.os.Bundle
            android.os.Bundle r0 = r4.getExtras()
            r3.<init>(r0)
            android.support.v4.app.RemoteInput[] r0 = r4.getRemoteInputs()
            if (r0 == 0) goto L2b
            android.support.v4.app.RemoteInput[] r0 = r4.getRemoteInputs()
            android.os.Bundle[] r0 = toBundleArray(r0)
            java.lang.String r1 = "android.support.remoteInputs"
            r3.putParcelableArray(r1, r0)
        L2b:
            android.support.v4.app.RemoteInput[] r0 = r4.getDataOnlyRemoteInputs()
            if (r0 == 0) goto L3e
            android.support.v4.app.RemoteInput[] r0 = r4.getDataOnlyRemoteInputs()
            android.os.Bundle[] r0 = toBundleArray(r0)
            java.lang.String r1 = "android.support.dataRemoteInputs"
            r3.putParcelableArray(r1, r0)
        L3e:
            boolean r4 = r4.getAllowGeneratedReplies()
            java.lang.String r0 = "android.support.allowGeneratedReplies"
            r3.putBoolean(r0, r4)
            return r3
    }
}
