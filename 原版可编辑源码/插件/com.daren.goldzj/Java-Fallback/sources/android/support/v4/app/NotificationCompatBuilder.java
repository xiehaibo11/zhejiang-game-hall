package android.support.v4.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.RestrictTo;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.SparseArray;
import android.widget.RemoteViews;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
class NotificationCompatBuilder implements NotificationBuilderWithBuilderAccessor {
    private final List<Bundle> mActionExtrasList;
    private RemoteViews mBigContentView;
    private final Notification.Builder mBuilder;
    private final NotificationCompat.Builder mBuilderCompat;
    private RemoteViews mContentView;
    private final Bundle mExtras;
    private int mGroupAlertBehavior;
    private RemoteViews mHeadsUpContentView;

    NotificationCompatBuilder(NotificationCompat.Builder r10) {
        this.mActionExtrasList = new ArrayList();
        this.mExtras = new Bundle();
        this.mBuilderCompat = r10;
        if (Build.VERSION.SDK_INT < 26) goto L5;
        this.mBuilder = new Notification.Builder(r10.mContext, r10.mChannelId);
    L6:
        Notification r0 = r10.mNotification;
        Notification.Builder r2 = this.mBuilder.setWhen(r0.when).setSmallIcon(r0.icon, r0.iconLevel).setContent(r0.contentView).setTicker(r0.tickerText, r10.mTickerView).setVibrate(r0.vibrate).setLights(r0.ledARGB, r0.ledOnMS, r0.ledOffMS);
        if ((r0.flags & 2) == 0) goto L9;
        boolean r3 = true;
    L10:
        Notification.Builder r22 = r2.setOngoing(r3);
        if ((r0.flags & 8) == 0) goto L13;
        boolean r32 = true;
    L14:
        Notification.Builder r23 = r22.setOnlyAlertOnce(r32);
        if ((r0.flags & 16) == 0) goto L17;
        boolean r33 = true;
    L18:
        Notification.Builder r24 = r23.setAutoCancel(r33).setDefaults(r0.defaults).setContentTitle(r10.mContentTitle).setContentText(r10.mContentText).setContentInfo(r10.mContentInfo).setContentIntent(r10.mContentIntent).setDeleteIntent(r0.deleteIntent);
        PendingIntent r34 = r10.mFullScreenIntent;
        if ((r0.flags & 128) == 0) goto L21;
        boolean r7 = true;
    L22:
        r24.setFullScreenIntent(r34, r7).setLargeIcon(r10.mLargeIcon).setNumber(r10.mNumber).setProgress(r10.mProgressMax, r10.mProgress, r10.mProgressIndeterminate);
        if (Build.VERSION.SDK_INT >= 21) goto L26;
        this.mBuilder.setSound(r0.sound, r0.audioStreamType);
    L26:
        if (Build.VERSION.SDK_INT < 16) goto L50;
        this.mBuilder.setSubText(r10.mSubText).setUsesChronometer(r10.mUseChronometer).setPriority(r10.mPriority);
        Iterator<NotificationCompat.Action> r25 = r10.mActions.iterator();
    L29:
        if (r25.hasNext() == false) goto L32;
        addAction(r25.next());
        goto L29
    L32:
        if (r10.mExtras == null) goto L35;
        this.mExtras.putAll(r10.mExtras);
    L35:
        if (Build.VERSION.SDK_INT < 20) goto L37;
    L48:
        this.mContentView = r10.mContentView;
        this.mBigContentView = r10.mBigContentView;
        goto L50
    L37:
        if (r10.mLocalOnly == false) goto L40;
        this.mExtras.putBoolean(NotificationCompatExtras.EXTRA_LOCAL_ONLY, true);
    L40:
        if (r10.mGroupKey == null) goto L46;
        this.mExtras.putString(NotificationCompatExtras.EXTRA_GROUP_KEY, r10.mGroupKey);
        if (r10.mGroupSummary == false) goto L44;
        this.mExtras.putBoolean(NotificationCompatExtras.EXTRA_GROUP_SUMMARY, true);
        goto L46
    L44:
        this.mExtras.putBoolean(NotificationManagerCompat.EXTRA_USE_SIDE_CHANNEL, true);
    L46:
        if (r10.mSortKey == null) goto L48;
        this.mExtras.putString(NotificationCompatExtras.EXTRA_SORT_KEY, r10.mSortKey);
    L50:
        if (Build.VERSION.SDK_INT < 19) goto L59;
        this.mBuilder.setShowWhen(r10.mShowWhen);
        if (Build.VERSION.SDK_INT >= 21) goto L59;
        if (r10.mPeople == null) goto L59;
        if (r10.mPeople.isEmpty() == true) goto L59;
        this.mExtras.putStringArray(NotificationCompat.EXTRA_PEOPLE, (String[]) r10.mPeople.toArray(new String[r10.mPeople.size()]));
    L59:
        if (Build.VERSION.SDK_INT < 20) goto L62;
        this.mBuilder.setLocalOnly(r10.mLocalOnly).setGroup(r10.mGroupKey).setGroupSummary(r10.mGroupSummary).setSortKey(r10.mSortKey);
        this.mGroupAlertBehavior = r10.mGroupAlertBehavior;
    L62:
        if (Build.VERSION.SDK_INT < 21) goto L78;
        this.mBuilder.setCategory(r10.mCategory).setColor(r10.mColor).setVisibility(r10.mVisibility).setPublicVersion(r10.mPublicVersion).setSound(r0.sound, r0.audioAttributes);
        Iterator<String> r02 = r10.mPeople.iterator();
    L65:
        if (r02.hasNext() == false) goto L67;
        String r26 = r02.next();
        this.mBuilder.addPerson(r26);
        goto L65
    L67:
        this.mHeadsUpContentView = r10.mHeadsUpContentView;
        if (r10.mInvisibleActions.size() <= 0) goto L78;
        Bundle r03 = r10.getExtras().getBundle("android.car.EXTENSIONS");
        if (r03 != null) goto L72;
        r03 = new Bundle();
    L72:
        Bundle r35 = new Bundle();
        int r4 = 0;
    L74:
        if (r4 >= r10.mInvisibleActions.size()) goto L76;
        r35.putBundle(Integer.toString(r4), NotificationCompatJellybean.getBundleForAction(r10.mInvisibleActions.get(r4)));
        r4 = r4 + 1;
        goto L74
    L76:
        r03.putBundle("invisible_actions", r35);
        r10.getExtras().putBundle("android.car.EXTENSIONS", r03);
        this.mExtras.putBundle("android.car.EXTENSIONS", r03);
    L78:
        if (Build.VERSION.SDK_INT < 24) goto L89;
        this.mBuilder.setExtras(r10.mExtras).setRemoteInputHistory(r10.mRemoteInputHistory);
        if (r10.mContentView == null) goto L83;
        this.mBuilder.setCustomContentView(r10.mContentView);
    L83:
        if (r10.mBigContentView == null) goto L86;
        this.mBuilder.setCustomBigContentView(r10.mBigContentView);
    L86:
        if (r10.mHeadsUpContentView == null) goto L89;
        this.mBuilder.setCustomHeadsUpContentView(r10.mHeadsUpContentView);
    L89:
        if (Build.VERSION.SDK_INT < 26) goto L100;
        this.mBuilder.setBadgeIconType(r10.mBadgeIcon).setShortcutId(r10.mShortcutId).setTimeoutAfter(r10.mTimeout).setGroupAlertBehavior(r10.mGroupAlertBehavior);
        if (r10.mColorizedSet == false) goto L94;
        this.mBuilder.setColorized(r10.mColorized);
    L94:
        if (TextUtils.isEmpty(r10.mChannelId) == true) goto L101;
        this.mBuilder.setSound(null).setDefaults(0).setLights(0, 0, 0).setVibrate(null);
        return;
    L101:
        return;
    L100:
        return;
    L21:
        r7 = false;
        goto L22
    L17:
        r33 = false;
        goto L18
    L13:
        r32 = false;
        goto L14
    L9:
        r3 = false;
        goto L10
    L5:
        this.mBuilder = new Notification.Builder(r10.mContext);
        goto L6
    }

    @Override
    public Notification.Builder getBuilder() {
        return this.mBuilder;
    }

    public Notification build() {
        NotificationCompat.Style r0 = this.mBuilderCompat.mStyle;
        if (r0 == null) goto L5;
        r0.apply(this);
    L5:
        if (r0 == null) goto L7;
        RemoteViews r1 = r0.makeContentView(this);
    L8:
        Notification r2 = buildInternal();
        if (r1 == null) goto L12;
        r2.contentView = r1;
    L15:
        if (Build.VERSION.SDK_INT < 16) goto L21;
        if (r0 == null) goto L21;
        RemoteViews r12 = r0.makeBigContentView(this);
        if (r12 == null) goto L21;
        r2.bigContentView = r12;
    L21:
        if (Build.VERSION.SDK_INT < 21) goto L27;
        if (r0 == null) goto L27;
        RemoteViews r13 = this.mBuilderCompat.mStyle.makeHeadsUpContentView(this);
        if (r13 == null) goto L27;
        r2.headsUpContentView = r13;
    L27:
        if (Build.VERSION.SDK_INT < 16) goto L32;
        if (r0 == null) goto L32;
        Bundle r14 = NotificationCompat.getExtras(r2);
        if (r14 == null) goto L32;
        r0.addCompatExtras(r14);
    L32:
        return r2;
    L12:
        if (this.mBuilderCompat.mContentView == null) goto L15;
        r2.contentView = this.mBuilderCompat.mContentView;
        goto L15
    L7:
        r1 = null;
        goto L8
    }

    private void addAction(NotificationCompat.Action r6) {
        if (Build.VERSION.SDK_INT < 20) goto L21;
        Notification.Action.Builder r0 = new Notification.Action.Builder(r6.getIcon(), r6.getTitle(), r6.getActionIntent());
        if (r6.getRemoteInputs() == null) goto L10;
        android.app.RemoteInput[] r1 = RemoteInput.fromCompat(r6.getRemoteInputs());
        int r2 = r1.length;
        int r3 = 0;
    L7:
        if (r3 >= r2) goto L10;
        r0.addRemoteInput(r1[r3]);
        r3 = r3 + 1;
    L10:
        if (r6.getExtras() == null) goto L12;
        Bundle r12 = new Bundle(r6.getExtras());
    L13:
        r12.putBoolean("android.support.allowGeneratedReplies", r6.getAllowGeneratedReplies());
        if (Build.VERSION.SDK_INT < 24) goto L16;
        r0.setAllowGeneratedReplies(r6.getAllowGeneratedReplies());
    L16:
        r12.putInt("android.support.action.semanticAction", r6.getSemanticAction());
        if (Build.VERSION.SDK_INT < 28) goto L19;
        r0.setSemanticAction(r6.getSemanticAction());
    L19:
        r12.putBoolean("android.support.action.showsUserInterface", r6.getShowsUserInterface());
        r0.addExtras(r12);
        this.mBuilder.addAction(r0.build());
        return;
    L12:
        r12 = new Bundle();
        goto L13
    L21:
        if (Build.VERSION.SDK_INT < 16) goto L26;
        this.mActionExtrasList.add(NotificationCompatJellybean.writeActionAndGetExtras(this.mBuilder, r6));
        return;
    }

    protected Notification buildInternal() {
        if (Build.VERSION.SDK_INT < 26) goto L7;
        return this.mBuilder.build();
    L7:
        if (Build.VERSION.SDK_INT < 24) goto L26;
        Notification r0 = this.mBuilder.build();
        if (this.mGroupAlertBehavior != 0) goto L11;
    L24:
        return r0;
    L11:
        if (r0.getGroup() == null) goto L18;
        if ((r0.flags & 512) == 0) goto L18;
        if (this.mGroupAlertBehavior != 2) goto L18;
        removeSoundAndVibration(r0);
    L18:
        if (r0.getGroup() == null) goto L24;
        if ((r0.flags & 512) != 0) goto L24;
        if (this.mGroupAlertBehavior != 1) goto L24;
        removeSoundAndVibration(r0);
        goto L24
    L26:
        if (Build.VERSION.SDK_INT < 21) goto L54;
        this.mBuilder.setExtras(this.mExtras);
        Notification r02 = this.mBuilder.build();
        RemoteViews r1 = this.mContentView;
        if (r1 == null) goto L30;
        r02.contentView = r1;
    L30:
        RemoteViews r12 = this.mBigContentView;
        if (r12 == null) goto L33;
        r02.bigContentView = r12;
    L33:
        RemoteViews r13 = this.mHeadsUpContentView;
        if (r13 == null) goto L37;
        r02.headsUpContentView = r13;
    L37:
        if (this.mGroupAlertBehavior != 0) goto L39;
    L52:
        return r02;
    L39:
        if (r02.getGroup() == null) goto L46;
        if ((r02.flags & 512) == 0) goto L46;
        if (this.mGroupAlertBehavior != 2) goto L46;
        removeSoundAndVibration(r02);
    L46:
        if (r02.getGroup() == null) goto L52;
        if ((r02.flags & 512) != 0) goto L52;
        if (this.mGroupAlertBehavior != 1) goto L52;
        removeSoundAndVibration(r02);
        goto L52
    L54:
        if (Build.VERSION.SDK_INT < 20) goto L79;
        this.mBuilder.setExtras(this.mExtras);
        Notification r03 = this.mBuilder.build();
        RemoteViews r14 = this.mContentView;
        if (r14 == null) goto L58;
        r03.contentView = r14;
    L58:
        RemoteViews r15 = this.mBigContentView;
        if (r15 == null) goto L62;
        r03.bigContentView = r15;
    L62:
        if (this.mGroupAlertBehavior != 0) goto L64;
    L77:
        return r03;
    L64:
        if (r03.getGroup() == null) goto L71;
        if ((r03.flags & 512) == 0) goto L71;
        if (this.mGroupAlertBehavior != 2) goto L71;
        removeSoundAndVibration(r03);
    L71:
        if (r03.getGroup() == null) goto L77;
        if ((r03.flags & 512) != 0) goto L77;
        if (this.mGroupAlertBehavior != 1) goto L77;
        removeSoundAndVibration(r03);
        goto L77
    L79:
        if (Build.VERSION.SDK_INT < 19) goto L91;
        SparseArray<Bundle> r04 = NotificationCompatJellybean.buildActionExtrasMap(this.mActionExtrasList);
        if (r04 == null) goto L83;
        this.mExtras.putSparseParcelableArray(NotificationCompatExtras.EXTRA_ACTION_EXTRAS, r04);
    L83:
        this.mBuilder.setExtras(this.mExtras);
        Notification r05 = this.mBuilder.build();
        RemoteViews r16 = this.mContentView;
        if (r16 == null) goto L86;
        r05.contentView = r16;
    L86:
        RemoteViews r17 = this.mBigContentView;
        if (r17 == null) goto L89;
        r05.bigContentView = r17;
    L89:
        return r05;
    L91:
        if (Build.VERSION.SDK_INT < 16) goto L109;
        Notification r06 = this.mBuilder.build();
        Bundle r18 = NotificationCompat.getExtras(r06);
        Bundle r3 = new Bundle(this.mExtras);
        Iterator<String> r4 = this.mExtras.keySet().iterator();
    L94:
        if (r4.hasNext() == false) goto L98;
        String r5 = r4.next();
        if (r18.containsKey(r5) == false) goto L94;
        r3.remove(r5);
        goto L94
    L98:
        r18.putAll(r3);
        SparseArray<Bundle> r19 = NotificationCompatJellybean.buildActionExtrasMap(this.mActionExtrasList);
        if (r19 == null) goto L101;
        NotificationCompat.getExtras(r06).putSparseParcelableArray(NotificationCompatExtras.EXTRA_ACTION_EXTRAS, r19);
    L101:
        RemoteViews r110 = this.mContentView;
        if (r110 == null) goto L104;
        r06.contentView = r110;
    L104:
        RemoteViews r111 = this.mBigContentView;
        if (r111 == null) goto L107;
        r06.bigContentView = r111;
    L107:
        return r06;
    L109:
        return this.mBuilder.getNotification();
    }

    private void removeSoundAndVibration(Notification r2) {
        r2.sound = null;
        r2.vibrate = null;
        r2.defaults &= -2;
        r2.defaults &= -3;
    }
}
