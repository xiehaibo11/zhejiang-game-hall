package android.support.v4.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.os.Bundle;
import android.os.Parcelable;
import android.support.annotation.RequiresApi;
import android.support.v4.app.NotificationCompat;
import android.util.Log;
import android.util.SparseArray;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

@RequiresApi(16)
class NotificationCompatJellybean {
    static final String EXTRA_ALLOW_GENERATED_REPLIES = "android.support.allowGeneratedReplies";
    static final String EXTRA_DATA_ONLY_REMOTE_INPUTS = "android.support.dataRemoteInputs";
    private static final String KEY_ACTION_INTENT = "actionIntent";
    private static final String KEY_ALLOWED_DATA_TYPES = "allowedDataTypes";
    private static final String KEY_ALLOW_FREE_FORM_INPUT = "allowFreeFormInput";
    private static final String KEY_CHOICES = "choices";
    private static final String KEY_DATA_ONLY_REMOTE_INPUTS = "dataOnlyRemoteInputs";
    private static final String KEY_EXTRAS = "extras";
    private static final String KEY_ICON = "icon";
    private static final String KEY_LABEL = "label";
    private static final String KEY_REMOTE_INPUTS = "remoteInputs";
    private static final String KEY_RESULT_KEY = "resultKey";
    private static final String KEY_SEMANTIC_ACTION = "semanticAction";
    private static final String KEY_SHOWS_USER_INTERFACE = "showsUserInterface";
    private static final String KEY_TITLE = "title";
    public static final String TAG = "NotificationCompat";
    private static Class<?> sActionClass;
    private static Field sActionIconField;
    private static Field sActionIntentField;
    private static Field sActionTitleField;
    private static boolean sActionsAccessFailed;
    private static Field sActionsField;
    private static final Object sActionsLock = null;
    private static Field sExtrasField;
    private static boolean sExtrasFieldAccessFailed;
    private static final Object sExtrasLock = null;

    static {
        sExtrasLock = new Object();
        sActionsLock = new Object();
    }

    public static SparseArray<Bundle> buildActionExtrasMap(List<Bundle> r4) {
        int r0 = r4.size();
        SparseArray<Bundle> r1 = null;
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L10;
        Bundle r3 = r4.get(r2);
        if (r3 == null) goto L9;
        if (r1 != null) goto L8;
        r1 = new SparseArray();
    L8:
        r1.put(r2, r3);
    L9:
        r2 = r2 + 1;
        goto L3
    L10:
        return r1;
    }

    public static Bundle getExtras(Notification r6) {
        Object r0 = sExtrasLock;
        monitor-enter(r0);
    L29:
        th = move-exception;
        throw th;
    L5:
        if (sExtrasFieldAccessFailed == false) goto L33;
        monitor-exit(r0);     // Catch: Throwable -> L29
        return null;
    L33:
    L24:
        e = move-exception;
        Log.e(TAG, "Unable to access notification extras", e);     // Catch: Throwable -> L29
    L26:
        sExtrasFieldAccessFailed = true;     // Catch: Throwable -> L29
        monitor-exit(r0);     // Catch: Throwable -> L29
        return null;
    L22:
        e = move-exception;
        Log.e(TAG, "Unable to access notification extras", e);     // Catch: Throwable -> L29
        goto L26
    L10:
        if (sExtrasField != null) goto L17;
        Field r3 = Notification.class.getDeclaredField(KEY_EXTRAS);     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        if (Bundle.class.isAssignableFrom(r3.getType()) == true) goto L16;
        Log.e(TAG, "Notification.extras field is not of type Bundle");     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        sExtrasFieldAccessFailed = true;     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        monitor-exit(r0);     // Catch: Throwable -> L29
        return null;
    L16:
        r3.setAccessible(true);     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        sExtrasField = r3;     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
    L17:
        Bundle r32 = (Bundle) sExtrasField.get(r6);     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        if (r32 != null) goto L20;
        r32 = new Bundle();     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
        sExtrasField.set(r6, r32);     // Catch: NoSuchFieldException -> L22 IllegalAccessException -> L24 Throwable -> L29
    L20:
        monitor-exit(r0);     // Catch: Throwable -> L29
        return r32;
    }

    public static NotificationCompat.Action readAction(int r11, CharSequence r12, PendingIntent r13, Bundle r14) {
        if (r14 == null) goto L5;
        RemoteInput[] r0 = fromBundleArray(getBundleArrayFromBundle(r14, NotificationCompatExtras.EXTRA_REMOTE_INPUTS));
        RemoteInput[] r5 = r0;
        RemoteInput[] r6 = fromBundleArray(getBundleArrayFromBundle(r14, EXTRA_DATA_ONLY_REMOTE_INPUTS));
        boolean r7 = r14.getBoolean(EXTRA_ALLOW_GENERATED_REPLIES);
    L7:
        return new NotificationCompat.Action(r11, r12, r13, r14, r5, r6, r7, 0, true);
    L5:
        r5 = null;
        r6 = null;
        r7 = false;
        goto L7
    }

    public static Bundle writeActionAndGetExtras(Notification.Builder r3, NotificationCompat.Action r4) {
        r3.addAction(r4.getIcon(), r4.getTitle(), r4.getActionIntent());
        Bundle r32 = new Bundle(r4.getExtras());
        if (r4.getRemoteInputs() == null) goto L6;
        r32.putParcelableArray(NotificationCompatExtras.EXTRA_REMOTE_INPUTS, toBundleArray(r4.getRemoteInputs()));
    L6:
        if (r4.getDataOnlyRemoteInputs() == null) goto L8;
        r32.putParcelableArray(EXTRA_DATA_ONLY_REMOTE_INPUTS, toBundleArray(r4.getDataOnlyRemoteInputs()));
    L8:
        r32.putBoolean(EXTRA_ALLOW_GENERATED_REPLIES, r4.getAllowGeneratedReplies());
        return r32;
    }

    public static int getActionCount(Notification r1) {
        Object r0 = sActionsLock;
        monitor-enter(r0);
        Object[] r12 = getActionObjectsLocked(r1);     // Catch: Throwable -> L10
        if (r12 == null) goto L7;
        int r13 = r12.length;     // Catch: Throwable -> L10
    L8:
        monitor-exit(r0);     // Catch: Throwable -> L10
        return r13;
    L7:
        r13 = 0;
    L10:
        th = move-exception;
        throw th;
    }

    public static NotificationCompat.Action getAction(Notification r5, int r6) {
        Object r0 = sActionsLock;
        monitor-enter(r0);
        Object[] r2 = getActionObjectsLocked(r5);     // Catch: Throwable -> L16 IllegalAccessException -> L18
        if (r2 == null) goto L20;
        Object r22 = r2[r6];     // Catch: Throwable -> L16 IllegalAccessException -> L18
        Bundle r52 = getExtras(r5);     // Catch: Throwable -> L16 IllegalAccessException -> L18
        if (r52 == null) goto L12;
        SparseArray r53 = r52.getSparseParcelableArray(NotificationCompatExtras.EXTRA_ACTION_EXTRAS);     // Catch: Throwable -> L16 IllegalAccessException -> L18
        if (r53 == null) goto L12;
        Bundle r54 = (Bundle) r53.get(r6);     // Catch: Throwable -> L16 IllegalAccessException -> L18
    L13:
        NotificationCompat.Action r55 = readAction(sActionIconField.getInt(r22), (CharSequence) sActionTitleField.get(r22), (PendingIntent) sActionIntentField.get(r22), r54);     // Catch: Throwable -> L16 IllegalAccessException -> L18
        monitor-exit(r0);     // Catch: Throwable -> L16
        return r55;
    L12:
        r54 = null;
    L20:
        monitor-exit(r0);     // Catch: Throwable -> L16
        return null;
    L18:
        e = move-exception;
        Log.e(TAG, "Unable to access notification actions", e);     // Catch: Throwable -> L16
        sActionsAccessFailed = true;     // Catch: Throwable -> L16
    L16:
        th = move-exception;
        throw th;
    }

    private static Object[] getActionObjectsLocked(Notification r4) {
        Object r0 = sActionsLock;
        monitor-enter(r0);
    L15:
        th = move-exception;
        throw th;
    L5:
        if (ensureActionReflectionReadyLocked() == true) goto L19;
        monitor-exit(r0);     // Catch: Throwable -> L15
        return null;
    L19:
        Object[] r42 = (Object[]) sActionsField.get(r4);     // Catch: IllegalAccessException -> L11 Throwable -> L15
        monitor-exit(r0);     // Catch: Throwable -> L15
        return r42;
    L11:
        e = move-exception;
        Log.e(TAG, "Unable to access notification actions", e);     // Catch: Throwable -> L15
        sActionsAccessFailed = true;     // Catch: Throwable -> L15
        return null;
    }

    private static boolean ensureActionReflectionReadyLocked() {
        /*  JADX ERROR: Simple mode code generation failed
            java.lang.IndexOutOfBoundsException: Index 0 out of bounds for length 0
            	at java.base/jdk.internal.util.Preconditions.outOfBounds(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.outOfBoundsCheckIndex(Unknown Source)
            	at java.base/jdk.internal.util.Preconditions.checkIndex(Unknown Source)
            	at java.base/java.util.Objects.checkIndex(Unknown Source)
            	at java.base/java.util.ArrayList.get(Unknown Source)
            	at jadx.core.codegen.MethodGen.generateSimpleCode(MethodGen.java:368)
            	at jadx.core.codegen.MethodGen.addSimpleMethodCode(MethodGen.java:330)
            	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:293)
            	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:412)
            	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:337)
            	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$2(ClassGen.java:303)
            	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(Unknown Source)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.stream.SortedOps$RefSortingSink.end(Unknown Source)
            	at java.base/java.util.stream.Sink$ChainedReference.end(Unknown Source)
            */
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: android.support.v4.app.NotificationCompatJellybean.ensureActionReflectionReadyLocked():boolean");
    }

    static NotificationCompat.Action getActionFromBundle(Bundle r13) {
        Bundle r1 = r13.getBundle(KEY_EXTRAS);
        if (r1 == null) goto L5;
        boolean r10 = r1.getBoolean(EXTRA_ALLOW_GENERATED_REPLIES, false);
    L7:
        return new NotificationCompat.Action(r13.getInt(KEY_ICON), r13.getCharSequence(KEY_TITLE), (PendingIntent) r13.getParcelable(KEY_ACTION_INTENT), r13.getBundle(KEY_EXTRAS), fromBundleArray(getBundleArrayFromBundle(r13, KEY_REMOTE_INPUTS)), fromBundleArray(getBundleArrayFromBundle(r13, KEY_DATA_ONLY_REMOTE_INPUTS)), r10, r13.getInt(KEY_SEMANTIC_ACTION), r13.getBoolean(KEY_SHOWS_USER_INTERFACE));
    L5:
        r10 = false;
        goto L7
    }

    static Bundle getBundleForAction(NotificationCompat.Action r4) {
        Bundle r0 = new Bundle();
        r0.putInt(KEY_ICON, r4.getIcon());
        r0.putCharSequence(KEY_TITLE, r4.getTitle());
        r0.putParcelable(KEY_ACTION_INTENT, r4.getActionIntent());
        if (r4.getExtras() == null) goto L5;
        Bundle r1 = new Bundle(r4.getExtras());
    L6:
        r1.putBoolean(EXTRA_ALLOW_GENERATED_REPLIES, r4.getAllowGeneratedReplies());
        r0.putBundle(KEY_EXTRAS, r1);
        r0.putParcelableArray(KEY_REMOTE_INPUTS, toBundleArray(r4.getRemoteInputs()));
        r0.putBoolean(KEY_SHOWS_USER_INTERFACE, r4.getShowsUserInterface());
        r0.putInt(KEY_SEMANTIC_ACTION, r4.getSemanticAction());
        return r0;
    L5:
        r1 = new Bundle();
        goto L6
    }

    private static RemoteInput fromBundle(Bundle r8) {
        ArrayList<String> r0 = r8.getStringArrayList(KEY_ALLOWED_DATA_TYPES);
        HashSet r7 = new HashSet();
        if (r0 == null) goto L9;
        Iterator<String> r02 = r0.iterator();
    L6:
        if (r02.hasNext() == false) goto L9;
        r7.add(r02.next());
    L9:
        return new RemoteInput(r8.getString(KEY_RESULT_KEY), r8.getCharSequence(KEY_LABEL), r8.getCharSequenceArray(KEY_CHOICES), r8.getBoolean(KEY_ALLOW_FREE_FORM_INPUT), r8.getBundle(KEY_EXTRAS), r7);
    }

    private static Bundle toBundle(RemoteInput r3) {
        Bundle r0 = new Bundle();
        r0.putString(KEY_RESULT_KEY, r3.getResultKey());
        r0.putCharSequence(KEY_LABEL, r3.getLabel());
        r0.putCharSequenceArray(KEY_CHOICES, r3.getChoices());
        r0.putBoolean(KEY_ALLOW_FREE_FORM_INPUT, r3.getAllowFreeFormInput());
        r0.putBundle(KEY_EXTRAS, r3.getExtras());
        Set<String> r32 = r3.getAllowedDataTypes();
        if (r32 != null) goto L5;
    L11:
        return r0;
    L5:
        if (r32.isEmpty() == true) goto L11;
        ArrayList<String> r1 = new ArrayList(r32.size());
        Iterator<String> r33 = r32.iterator();
    L8:
        if (r33.hasNext() == false) goto L10;
        r1.add(r33.next());
        goto L8
    L10:
        r0.putStringArrayList(KEY_ALLOWED_DATA_TYPES, r1);
        goto L11
    }

    private static RemoteInput[] fromBundleArray(Bundle[] r3) {
        if (r3 != null) goto L5;
        return null;
    L5:
        RemoteInput[] r0 = new RemoteInput[r3.length];
        int r1 = 0;
    L7:
        if (r1 >= r3.length) goto L9;
        r0[r1] = fromBundle(r3[r1]);
        r1 = r1 + 1;
        goto L7
    L9:
        return r0;
    }

    private static Bundle[] toBundleArray(RemoteInput[] r3) {
        if (r3 != null) goto L5;
        return null;
    L5:
        Bundle[] r0 = new Bundle[r3.length];
        int r1 = 0;
    L7:
        if (r1 >= r3.length) goto L9;
        r0[r1] = toBundle(r3[r1]);
        r1 = r1 + 1;
        goto L7
    L9:
        return r0;
    }

    private static Bundle[] getBundleArrayFromBundle(Bundle r3, String r4) {
        Parcelable[] r0 = r3.getParcelableArray(r4);
        if ((r0 instanceof Bundle[]) == true) goto L9;
        if (r0 == null) goto L9;
        Bundle[] r02 = (Bundle[]) Arrays.copyOf(r0, r0.length, Bundle[].class);
        r3.putParcelableArray(r4, r02);
        return r02;
    L9:
        return (Bundle[]) r0;
    }

    private NotificationCompatJellybean() {
    }
}
