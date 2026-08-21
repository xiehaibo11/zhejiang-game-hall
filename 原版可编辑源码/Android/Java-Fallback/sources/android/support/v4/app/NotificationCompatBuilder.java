package android.support.v4.app;

class NotificationCompatBuilder implements android.support.v4.app.NotificationBuilderWithBuilderAccessor {
    private final java.util.List<android.os.Bundle> mActionExtrasList;
    private android.widget.RemoteViews mBigContentView;
    private final android.app.Notification.Builder mBuilder;
    private final android.support.v4.app.NotificationCompat.Builder mBuilderCompat;
    private android.widget.RemoteViews mContentView;
    private final android.os.Bundle mExtras;
    private int mGroupAlertBehavior;
    private android.widget.RemoteViews mHeadsUpContentView;

    NotificationCompatBuilder(android.support.v4.app.NotificationCompat.Builder r10) {
            r9 = this;
            r9.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r9.mActionExtrasList = r0
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r9.mExtras = r0
            r9.mBuilderCompat = r10
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L25
            android.app.Notification$Builder r0 = new android.app.Notification$Builder
            android.content.Context r2 = r10.mContext
            java.lang.String r3 = r10.mChannelId
            r0.<init>(r2, r3)
            r9.mBuilder = r0
            goto L2e
        L25:
            android.app.Notification$Builder r0 = new android.app.Notification$Builder
            android.content.Context r2 = r10.mContext
            r0.<init>(r2)
            r9.mBuilder = r0
        L2e:
            android.app.Notification r0 = r10.mNotification
            android.app.Notification$Builder r2 = r9.mBuilder
            long r3 = r0.when
            android.app.Notification$Builder r2 = r2.setWhen(r3)
            int r3 = r0.icon
            int r4 = r0.iconLevel
            android.app.Notification$Builder r2 = r2.setSmallIcon(r3, r4)
            android.widget.RemoteViews r3 = r0.contentView
            android.app.Notification$Builder r2 = r2.setContent(r3)
            java.lang.CharSequence r3 = r0.tickerText
            android.widget.RemoteViews r4 = r10.mTickerView
            android.app.Notification$Builder r2 = r2.setTicker(r3, r4)
            long[] r3 = r0.vibrate
            android.app.Notification$Builder r2 = r2.setVibrate(r3)
            int r3 = r0.ledARGB
            int r4 = r0.ledOnMS
            int r5 = r0.ledOffMS
            android.app.Notification$Builder r2 = r2.setLights(r3, r4, r5)
            int r3 = r0.flags
            r3 = r3 & 2
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L68
            r3 = r4
            goto L69
        L68:
            r3 = r5
        L69:
            android.app.Notification$Builder r2 = r2.setOngoing(r3)
            int r3 = r0.flags
            r3 = r3 & 8
            if (r3 == 0) goto L75
            r3 = r4
            goto L76
        L75:
            r3 = r5
        L76:
            android.app.Notification$Builder r2 = r2.setOnlyAlertOnce(r3)
            int r3 = r0.flags
            r6 = 16
            r3 = r3 & r6
            if (r3 == 0) goto L83
            r3 = r4
            goto L84
        L83:
            r3 = r5
        L84:
            android.app.Notification$Builder r2 = r2.setAutoCancel(r3)
            int r3 = r0.defaults
            android.app.Notification$Builder r2 = r2.setDefaults(r3)
            java.lang.CharSequence r3 = r10.mContentTitle
            android.app.Notification$Builder r2 = r2.setContentTitle(r3)
            java.lang.CharSequence r3 = r10.mContentText
            android.app.Notification$Builder r2 = r2.setContentText(r3)
            java.lang.CharSequence r3 = r10.mContentInfo
            android.app.Notification$Builder r2 = r2.setContentInfo(r3)
            android.app.PendingIntent r3 = r10.mContentIntent
            android.app.Notification$Builder r2 = r2.setContentIntent(r3)
            android.app.PendingIntent r3 = r0.deleteIntent
            android.app.Notification$Builder r2 = r2.setDeleteIntent(r3)
            android.app.PendingIntent r3 = r10.mFullScreenIntent
            int r7 = r0.flags
            r7 = r7 & 128(0x80, float:1.8E-43)
            if (r7 == 0) goto Lb6
            r7 = r4
            goto Lb7
        Lb6:
            r7 = r5
        Lb7:
            android.app.Notification$Builder r2 = r2.setFullScreenIntent(r3, r7)
            android.graphics.Bitmap r3 = r10.mLargeIcon
            android.app.Notification$Builder r2 = r2.setLargeIcon(r3)
            int r3 = r10.mNumber
            android.app.Notification$Builder r2 = r2.setNumber(r3)
            int r3 = r10.mProgressMax
            int r7 = r10.mProgress
            boolean r8 = r10.mProgressIndeterminate
            r2.setProgress(r3, r7, r8)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 21
            if (r2 >= r3) goto Ldf
            android.app.Notification$Builder r2 = r9.mBuilder
            android.net.Uri r7 = r0.sound
            int r8 = r0.audioStreamType
            r2.setSound(r7, r8)
        Ldf:
            int r2 = android.os.Build.VERSION.SDK_INT
            r7 = 20
            if (r2 < r6) goto L15d
            android.app.Notification$Builder r2 = r9.mBuilder
            java.lang.CharSequence r6 = r10.mSubText
            android.app.Notification$Builder r2 = r2.setSubText(r6)
            boolean r6 = r10.mUseChronometer
            android.app.Notification$Builder r2 = r2.setUsesChronometer(r6)
            int r6 = r10.mPriority
            r2.setPriority(r6)
            java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r2 = r10.mActions
            java.util.Iterator r2 = r2.iterator()
        Lfe:
            boolean r6 = r2.hasNext()
            if (r6 == 0) goto L10e
            java.lang.Object r6 = r2.next()
            android.support.v4.app.NotificationCompat$Action r6 = (android.support.v4.app.NotificationCompat.Action) r6
            r9.addAction(r6)
            goto Lfe
        L10e:
            android.os.Bundle r2 = r10.mExtras
            if (r2 == 0) goto L119
            android.os.Bundle r2 = r9.mExtras
            android.os.Bundle r6 = r10.mExtras
            r2.putAll(r6)
        L119:
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 >= r7) goto L155
            boolean r2 = r10.mLocalOnly
            if (r2 == 0) goto L128
            android.os.Bundle r2 = r9.mExtras
            java.lang.String r6 = "android.support.localOnly"
            r2.putBoolean(r6, r4)
        L128:
            java.lang.String r2 = r10.mGroupKey
            if (r2 == 0) goto L148
            android.os.Bundle r2 = r9.mExtras
            java.lang.String r6 = r10.mGroupKey
            java.lang.String r8 = "android.support.groupKey"
            r2.putString(r8, r6)
            boolean r2 = r10.mGroupSummary
            if (r2 == 0) goto L141
            android.os.Bundle r2 = r9.mExtras
            java.lang.String r6 = "android.support.isGroupSummary"
            r2.putBoolean(r6, r4)
            goto L148
        L141:
            android.os.Bundle r2 = r9.mExtras
            java.lang.String r6 = "android.support.useSideChannel"
            r2.putBoolean(r6, r4)
        L148:
            java.lang.String r2 = r10.mSortKey
            if (r2 == 0) goto L155
            android.os.Bundle r2 = r9.mExtras
            java.lang.String r4 = r10.mSortKey
            java.lang.String r6 = "android.support.sortKey"
            r2.putString(r6, r4)
        L155:
            android.widget.RemoteViews r2 = r10.mContentView
            r9.mContentView = r2
            android.widget.RemoteViews r2 = r10.mBigContentView
            r9.mBigContentView = r2
        L15d:
            int r2 = android.os.Build.VERSION.SDK_INT
            r4 = 19
            if (r2 < r4) goto L191
            android.app.Notification$Builder r2 = r9.mBuilder
            boolean r4 = r10.mShowWhen
            r2.setShowWhen(r4)
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 >= r3) goto L191
            java.util.ArrayList<java.lang.String> r2 = r10.mPeople
            if (r2 == 0) goto L191
            java.util.ArrayList<java.lang.String> r2 = r10.mPeople
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L191
            android.os.Bundle r2 = r9.mExtras
            java.util.ArrayList<java.lang.String> r4 = r10.mPeople
            java.util.ArrayList<java.lang.String> r6 = r10.mPeople
            int r6 = r6.size()
            java.lang.String[] r6 = new java.lang.String[r6]
            java.lang.Object[] r4 = r4.toArray(r6)
            java.lang.String[] r4 = (java.lang.String[]) r4
            java.lang.String r6 = "android.people"
            r2.putStringArray(r6, r4)
        L191:
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r7) goto L1b2
            android.app.Notification$Builder r2 = r9.mBuilder
            boolean r4 = r10.mLocalOnly
            android.app.Notification$Builder r2 = r2.setLocalOnly(r4)
            java.lang.String r4 = r10.mGroupKey
            android.app.Notification$Builder r2 = r2.setGroup(r4)
            boolean r4 = r10.mGroupSummary
            android.app.Notification$Builder r2 = r2.setGroupSummary(r4)
            java.lang.String r4 = r10.mSortKey
            r2.setSortKey(r4)
            int r2 = r10.mGroupAlertBehavior
            r9.mGroupAlertBehavior = r2
        L1b2:
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r3) goto L241
            android.app.Notification$Builder r2 = r9.mBuilder
            java.lang.String r3 = r10.mCategory
            android.app.Notification$Builder r2 = r2.setCategory(r3)
            int r3 = r10.mColor
            android.app.Notification$Builder r2 = r2.setColor(r3)
            int r3 = r10.mVisibility
            android.app.Notification$Builder r2 = r2.setVisibility(r3)
            android.app.Notification r3 = r10.mPublicVersion
            android.app.Notification$Builder r2 = r2.setPublicVersion(r3)
            android.net.Uri r3 = r0.sound
            android.media.AudioAttributes r0 = r0.audioAttributes
            r2.setSound(r3, r0)
            java.util.ArrayList<java.lang.String> r0 = r10.mPeople
            java.util.Iterator r0 = r0.iterator()
        L1dd:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1ef
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            android.app.Notification$Builder r3 = r9.mBuilder
            r3.addPerson(r2)
            goto L1dd
        L1ef:
            android.widget.RemoteViews r0 = r10.mHeadsUpContentView
            r9.mHeadsUpContentView = r0
            java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r10.mInvisibleActions
            int r0 = r0.size()
            if (r0 <= 0) goto L241
            android.os.Bundle r0 = r10.getExtras()
            java.lang.String r2 = "android.car.EXTENSIONS"
            android.os.Bundle r0 = r0.getBundle(r2)
            if (r0 != 0) goto L20c
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
        L20c:
            android.os.Bundle r3 = new android.os.Bundle
            r3.<init>()
            r4 = r5
        L212:
            java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r6 = r10.mInvisibleActions
            int r6 = r6.size()
            if (r4 >= r6) goto L230
            java.lang.String r6 = java.lang.Integer.toString(r4)
            java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r7 = r10.mInvisibleActions
            java.lang.Object r7 = r7.get(r4)
            android.support.v4.app.NotificationCompat$Action r7 = (android.support.v4.app.NotificationCompat.Action) r7
            android.os.Bundle r7 = android.support.v4.app.NotificationCompatJellybean.getBundleForAction(r7)
            r3.putBundle(r6, r7)
            int r4 = r4 + 1
            goto L212
        L230:
            java.lang.String r4 = "invisible_actions"
            r0.putBundle(r4, r3)
            android.os.Bundle r3 = r10.getExtras()
            r3.putBundle(r2, r0)
            android.os.Bundle r3 = r9.mExtras
            r3.putBundle(r2, r0)
        L241:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r0 < r2) goto L275
            android.app.Notification$Builder r0 = r9.mBuilder
            android.os.Bundle r2 = r10.mExtras
            android.app.Notification$Builder r0 = r0.setExtras(r2)
            java.lang.CharSequence[] r2 = r10.mRemoteInputHistory
            r0.setRemoteInputHistory(r2)
            android.widget.RemoteViews r0 = r10.mContentView
            if (r0 == 0) goto L25f
            android.app.Notification$Builder r0 = r9.mBuilder
            android.widget.RemoteViews r2 = r10.mContentView
            r0.setCustomContentView(r2)
        L25f:
            android.widget.RemoteViews r0 = r10.mBigContentView
            if (r0 == 0) goto L26a
            android.app.Notification$Builder r0 = r9.mBuilder
            android.widget.RemoteViews r2 = r10.mBigContentView
            r0.setCustomBigContentView(r2)
        L26a:
            android.widget.RemoteViews r0 = r10.mHeadsUpContentView
            if (r0 == 0) goto L275
            android.app.Notification$Builder r0 = r9.mBuilder
            android.widget.RemoteViews r2 = r10.mHeadsUpContentView
            r0.setCustomHeadsUpContentView(r2)
        L275:
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L2b7
            android.app.Notification$Builder r0 = r9.mBuilder
            int r1 = r10.mBadgeIcon
            android.app.Notification$Builder r0 = r0.setBadgeIconType(r1)
            java.lang.String r1 = r10.mShortcutId
            android.app.Notification$Builder r0 = r0.setShortcutId(r1)
            long r1 = r10.mTimeout
            android.app.Notification$Builder r0 = r0.setTimeoutAfter(r1)
            int r1 = r10.mGroupAlertBehavior
            r0.setGroupAlertBehavior(r1)
            boolean r0 = r10.mColorizedSet
            if (r0 == 0) goto L29d
            android.app.Notification$Builder r0 = r9.mBuilder
            boolean r1 = r10.mColorized
            r0.setColorized(r1)
        L29d:
            java.lang.String r10 = r10.mChannelId
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto L2b7
            android.app.Notification$Builder r10 = r9.mBuilder
            r0 = 0
            android.app.Notification$Builder r10 = r10.setSound(r0)
            android.app.Notification$Builder r10 = r10.setDefaults(r5)
            android.app.Notification$Builder r10 = r10.setLights(r5, r5, r5)
            r10.setVibrate(r0)
        L2b7:
            return
    }

    private void addAction(android.support.v4.app.NotificationCompat.Action r6) {
            r5 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto L88
            android.app.Notification$Action$Builder r0 = new android.app.Notification$Action$Builder
            int r1 = r6.getIcon()
            java.lang.CharSequence r2 = r6.getTitle()
            android.app.PendingIntent r3 = r6.getActionIntent()
            r0.<init>(r1, r2, r3)
            android.support.v4.app.RemoteInput[] r1 = r6.getRemoteInputs()
            if (r1 == 0) goto L31
            android.support.v4.app.RemoteInput[] r1 = r6.getRemoteInputs()
            android.app.RemoteInput[] r1 = android.support.v4.app.RemoteInput.fromCompat(r1)
            int r2 = r1.length
            r3 = 0
        L27:
            if (r3 >= r2) goto L31
            r4 = r1[r3]
            r0.addRemoteInput(r4)
            int r3 = r3 + 1
            goto L27
        L31:
            android.os.Bundle r1 = r6.getExtras()
            if (r1 == 0) goto L41
            android.os.Bundle r1 = new android.os.Bundle
            android.os.Bundle r2 = r6.getExtras()
            r1.<init>(r2)
            goto L46
        L41:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
        L46:
            boolean r2 = r6.getAllowGeneratedReplies()
            java.lang.String r3 = "android.support.allowGeneratedReplies"
            r1.putBoolean(r3, r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            if (r2 < r3) goto L5c
            boolean r2 = r6.getAllowGeneratedReplies()
            r0.setAllowGeneratedReplies(r2)
        L5c:
            int r2 = r6.getSemanticAction()
            java.lang.String r3 = "android.support.action.semanticAction"
            r1.putInt(r3, r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 28
            if (r2 < r3) goto L72
            int r2 = r6.getSemanticAction()
            r0.setSemanticAction(r2)
        L72:
            boolean r6 = r6.getShowsUserInterface()
            java.lang.String r2 = "android.support.action.showsUserInterface"
            r1.putBoolean(r2, r6)
            r0.addExtras(r1)
            android.app.Notification$Builder r6 = r5.mBuilder
            android.app.Notification$Action r0 = r0.build()
            r6.addAction(r0)
            goto L99
        L88:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L99
            java.util.List<android.os.Bundle> r0 = r5.mActionExtrasList
            android.app.Notification$Builder r1 = r5.mBuilder
            android.os.Bundle r6 = android.support.v4.app.NotificationCompatJellybean.writeActionAndGetExtras(r1, r6)
            r0.add(r6)
        L99:
            return
    }

    private void removeSoundAndVibration(android.app.Notification r2) {
            r1 = this;
            r0 = 0
            r2.sound = r0
            r2.vibrate = r0
            int r0 = r2.defaults
            r0 = r0 & (-2)
            r2.defaults = r0
            int r0 = r2.defaults
            r0 = r0 & (-3)
            r2.defaults = r0
            return
    }

    public android.app.Notification build() {
            r5 = this;
            android.support.v4.app.NotificationCompat$Builder r0 = r5.mBuilderCompat
            android.support.v4.app.NotificationCompat$Style r0 = r0.mStyle
            if (r0 == 0) goto L9
            r0.apply(r5)
        L9:
            if (r0 == 0) goto L10
            android.widget.RemoteViews r1 = r0.makeContentView(r5)
            goto L11
        L10:
            r1 = 0
        L11:
            android.app.Notification r2 = r5.buildInternal()
            if (r1 == 0) goto L1a
            r2.contentView = r1
            goto L26
        L1a:
            android.support.v4.app.NotificationCompat$Builder r1 = r5.mBuilderCompat
            android.widget.RemoteViews r1 = r1.mContentView
            if (r1 == 0) goto L26
            android.support.v4.app.NotificationCompat$Builder r1 = r5.mBuilderCompat
            android.widget.RemoteViews r1 = r1.mContentView
            r2.contentView = r1
        L26:
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r1 < r3) goto L36
            if (r0 == 0) goto L36
            android.widget.RemoteViews r1 = r0.makeBigContentView(r5)
            if (r1 == 0) goto L36
            r2.bigContentView = r1
        L36:
            int r1 = android.os.Build.VERSION.SDK_INT
            r4 = 21
            if (r1 < r4) goto L4a
            if (r0 == 0) goto L4a
            android.support.v4.app.NotificationCompat$Builder r1 = r5.mBuilderCompat
            android.support.v4.app.NotificationCompat$Style r1 = r1.mStyle
            android.widget.RemoteViews r1 = r1.makeHeadsUpContentView(r5)
            if (r1 == 0) goto L4a
            r2.headsUpContentView = r1
        L4a:
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 < r3) goto L59
            if (r0 == 0) goto L59
            android.os.Bundle r1 = android.support.v4.app.NotificationCompat.getExtras(r2)
            if (r1 == 0) goto L59
            r0.addCompatExtras(r1)
        L59:
            return r2
    }

    protected android.app.Notification buildInternal() {
            r7 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Ld
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            return r0
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            r2 = 1
            r3 = 2
            if (r0 < r1) goto L46
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            int r1 = r7.mGroupAlertBehavior
            if (r1 == 0) goto L45
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto L32
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 == 0) goto L32
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r3) goto L32
            r7.removeSoundAndVibration(r0)
        L32:
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto L45
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 != 0) goto L45
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r2) goto L45
            r7.removeSoundAndVibration(r0)
        L45:
            return r0
        L46:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L96
            android.app.Notification$Builder r0 = r7.mBuilder
            android.os.Bundle r1 = r7.mExtras
            r0.setExtras(r1)
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            android.widget.RemoteViews r1 = r7.mContentView
            if (r1 == 0) goto L5f
            r0.contentView = r1
        L5f:
            android.widget.RemoteViews r1 = r7.mBigContentView
            if (r1 == 0) goto L65
            r0.bigContentView = r1
        L65:
            android.widget.RemoteViews r1 = r7.mHeadsUpContentView
            if (r1 == 0) goto L6b
            r0.headsUpContentView = r1
        L6b:
            int r1 = r7.mGroupAlertBehavior
            if (r1 == 0) goto L95
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto L82
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 == 0) goto L82
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r3) goto L82
            r7.removeSoundAndVibration(r0)
        L82:
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto L95
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 != 0) goto L95
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r2) goto L95
            r7.removeSoundAndVibration(r0)
        L95:
            return r0
        L96:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Le0
            android.app.Notification$Builder r0 = r7.mBuilder
            android.os.Bundle r1 = r7.mExtras
            r0.setExtras(r1)
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            android.widget.RemoteViews r1 = r7.mContentView
            if (r1 == 0) goto Laf
            r0.contentView = r1
        Laf:
            android.widget.RemoteViews r1 = r7.mBigContentView
            if (r1 == 0) goto Lb5
            r0.bigContentView = r1
        Lb5:
            int r1 = r7.mGroupAlertBehavior
            if (r1 == 0) goto Ldf
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto Lcc
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 == 0) goto Lcc
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r3) goto Lcc
            r7.removeSoundAndVibration(r0)
        Lcc:
            java.lang.String r1 = r0.getGroup()
            if (r1 == 0) goto Ldf
            int r1 = r0.flags
            r1 = r1 & 512(0x200, float:7.17E-43)
            if (r1 != 0) goto Ldf
            int r1 = r7.mGroupAlertBehavior
            if (r1 != r2) goto Ldf
            r7.removeSoundAndVibration(r0)
        Ldf:
            return r0
        Le0:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            java.lang.String r2 = "android.support.actionExtras"
            if (r0 < r1) goto L10f
            java.util.List<android.os.Bundle> r0 = r7.mActionExtrasList
            android.util.SparseArray r0 = android.support.v4.app.NotificationCompatJellybean.buildActionExtrasMap(r0)
            if (r0 == 0) goto Lf5
            android.os.Bundle r1 = r7.mExtras
            r1.putSparseParcelableArray(r2, r0)
        Lf5:
            android.app.Notification$Builder r0 = r7.mBuilder
            android.os.Bundle r1 = r7.mExtras
            r0.setExtras(r1)
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            android.widget.RemoteViews r1 = r7.mContentView
            if (r1 == 0) goto L108
            r0.contentView = r1
        L108:
            android.widget.RemoteViews r1 = r7.mBigContentView
            if (r1 == 0) goto L10e
            r0.bigContentView = r1
        L10e:
            return r0
        L10f:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L165
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.build()
            android.os.Bundle r1 = android.support.v4.app.NotificationCompat.getExtras(r0)
            android.os.Bundle r3 = new android.os.Bundle
            android.os.Bundle r4 = r7.mExtras
            r3.<init>(r4)
            android.os.Bundle r4 = r7.mExtras
            java.util.Set r4 = r4.keySet()
            java.util.Iterator r4 = r4.iterator()
        L130:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L146
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            boolean r6 = r1.containsKey(r5)
            if (r6 == 0) goto L130
            r3.remove(r5)
            goto L130
        L146:
            r1.putAll(r3)
            java.util.List<android.os.Bundle> r1 = r7.mActionExtrasList
            android.util.SparseArray r1 = android.support.v4.app.NotificationCompatJellybean.buildActionExtrasMap(r1)
            if (r1 == 0) goto L158
            android.os.Bundle r3 = android.support.v4.app.NotificationCompat.getExtras(r0)
            r3.putSparseParcelableArray(r2, r1)
        L158:
            android.widget.RemoteViews r1 = r7.mContentView
            if (r1 == 0) goto L15e
            r0.contentView = r1
        L15e:
            android.widget.RemoteViews r1 = r7.mBigContentView
            if (r1 == 0) goto L164
            r0.bigContentView = r1
        L164:
            return r0
        L165:
            android.app.Notification$Builder r0 = r7.mBuilder
            android.app.Notification r0 = r0.getNotification()
            return r0
    }

    @Override
    public android.app.Notification.Builder getBuilder() {
            r1 = this;
            android.app.Notification$Builder r0 = r1.mBuilder
            return r0
    }
}
