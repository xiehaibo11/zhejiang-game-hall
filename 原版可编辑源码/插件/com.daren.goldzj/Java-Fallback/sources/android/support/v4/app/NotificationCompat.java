package android.support.v4.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.app.RemoteInput;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.media.AudioAttributes;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.os.SystemClock;
import android.support.annotation.ColorInt;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.compat.R;
import android.support.v4.app.Person;
import android.support.v4.text.BidiFormatter;
import android.support.v4.view.ViewCompat;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import android.text.style.TextAppearanceSpan;
import android.util.SparseArray;
import android.widget.RemoteViews;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

public class NotificationCompat {
    public static final int BADGE_ICON_LARGE = 2;
    public static final int BADGE_ICON_NONE = 0;
    public static final int BADGE_ICON_SMALL = 1;
    public static final String CATEGORY_ALARM = "alarm";
    public static final String CATEGORY_CALL = "call";
    public static final String CATEGORY_EMAIL = "email";
    public static final String CATEGORY_ERROR = "err";
    public static final String CATEGORY_EVENT = "event";
    public static final String CATEGORY_MESSAGE = "msg";
    public static final String CATEGORY_PROGRESS = "progress";
    public static final String CATEGORY_PROMO = "promo";
    public static final String CATEGORY_RECOMMENDATION = "recommendation";
    public static final String CATEGORY_REMINDER = "reminder";
    public static final String CATEGORY_SERVICE = "service";
    public static final String CATEGORY_SOCIAL = "social";
    public static final String CATEGORY_STATUS = "status";
    public static final String CATEGORY_SYSTEM = "sys";
    public static final String CATEGORY_TRANSPORT = "transport";

    @ColorInt
    public static final int COLOR_DEFAULT = 0;
    public static final int DEFAULT_ALL = -1;
    public static final int DEFAULT_LIGHTS = 4;
    public static final int DEFAULT_SOUND = 1;
    public static final int DEFAULT_VIBRATE = 2;
    public static final String EXTRA_AUDIO_CONTENTS_URI = "android.audioContents";
    public static final String EXTRA_BACKGROUND_IMAGE_URI = "android.backgroundImageUri";
    public static final String EXTRA_BIG_TEXT = "android.bigText";
    public static final String EXTRA_COMPACT_ACTIONS = "android.compactActions";
    public static final String EXTRA_CONVERSATION_TITLE = "android.conversationTitle";
    public static final String EXTRA_HIDDEN_CONVERSATION_TITLE = "android.hiddenConversationTitle";
    public static final String EXTRA_INFO_TEXT = "android.infoText";
    public static final String EXTRA_IS_GROUP_CONVERSATION = "android.isGroupConversation";
    public static final String EXTRA_LARGE_ICON = "android.largeIcon";
    public static final String EXTRA_LARGE_ICON_BIG = "android.largeIcon.big";
    public static final String EXTRA_MEDIA_SESSION = "android.mediaSession";
    public static final String EXTRA_MESSAGES = "android.messages";
    public static final String EXTRA_MESSAGING_STYLE_USER = "android.messagingStyleUser";
    public static final String EXTRA_PEOPLE = "android.people";
    public static final String EXTRA_PICTURE = "android.picture";
    public static final String EXTRA_PROGRESS = "android.progress";
    public static final String EXTRA_PROGRESS_INDETERMINATE = "android.progressIndeterminate";
    public static final String EXTRA_PROGRESS_MAX = "android.progressMax";
    public static final String EXTRA_REMOTE_INPUT_HISTORY = "android.remoteInputHistory";
    public static final String EXTRA_SELF_DISPLAY_NAME = "android.selfDisplayName";
    public static final String EXTRA_SHOW_CHRONOMETER = "android.showChronometer";
    public static final String EXTRA_SHOW_WHEN = "android.showWhen";
    public static final String EXTRA_SMALL_ICON = "android.icon";
    public static final String EXTRA_SUB_TEXT = "android.subText";
    public static final String EXTRA_SUMMARY_TEXT = "android.summaryText";
    public static final String EXTRA_TEMPLATE = "android.template";
    public static final String EXTRA_TEXT = "android.text";
    public static final String EXTRA_TEXT_LINES = "android.textLines";
    public static final String EXTRA_TITLE = "android.title";
    public static final String EXTRA_TITLE_BIG = "android.title.big";
    public static final int FLAG_AUTO_CANCEL = 16;
    public static final int FLAG_FOREGROUND_SERVICE = 64;
    public static final int FLAG_GROUP_SUMMARY = 512;

    @Deprecated
    public static final int FLAG_HIGH_PRIORITY = 128;
    public static final int FLAG_INSISTENT = 4;
    public static final int FLAG_LOCAL_ONLY = 256;
    public static final int FLAG_NO_CLEAR = 32;
    public static final int FLAG_ONGOING_EVENT = 2;
    public static final int FLAG_ONLY_ALERT_ONCE = 8;
    public static final int FLAG_SHOW_LIGHTS = 1;
    public static final int GROUP_ALERT_ALL = 0;
    public static final int GROUP_ALERT_CHILDREN = 2;
    public static final int GROUP_ALERT_SUMMARY = 1;
    public static final int PRIORITY_DEFAULT = 0;
    public static final int PRIORITY_HIGH = 1;
    public static final int PRIORITY_LOW = -1;
    public static final int PRIORITY_MAX = 2;
    public static final int PRIORITY_MIN = -2;
    public static final int STREAM_DEFAULT = -1;
    public static final int VISIBILITY_PRIVATE = 0;
    public static final int VISIBILITY_PUBLIC = 1;
    public static final int VISIBILITY_SECRET = -1;

    public static class Action {
        static final String EXTRA_SEMANTIC_ACTION = "android.support.action.semanticAction";
        static final String EXTRA_SHOWS_USER_INTERFACE = "android.support.action.showsUserInterface";
        public static final int SEMANTIC_ACTION_ARCHIVE = 5;
        public static final int SEMANTIC_ACTION_CALL = 10;
        public static final int SEMANTIC_ACTION_DELETE = 4;
        public static final int SEMANTIC_ACTION_MARK_AS_READ = 2;
        public static final int SEMANTIC_ACTION_MARK_AS_UNREAD = 3;
        public static final int SEMANTIC_ACTION_MUTE = 6;
        public static final int SEMANTIC_ACTION_NONE = 0;
        public static final int SEMANTIC_ACTION_REPLY = 1;
        public static final int SEMANTIC_ACTION_THUMBS_DOWN = 9;
        public static final int SEMANTIC_ACTION_THUMBS_UP = 8;
        public static final int SEMANTIC_ACTION_UNMUTE = 7;
        public PendingIntent actionIntent;
        public int icon;
        private boolean mAllowGeneratedReplies;
        private final RemoteInput[] mDataOnlyRemoteInputs;
        final Bundle mExtras;
        private final RemoteInput[] mRemoteInputs;
        private final int mSemanticAction;
        boolean mShowsUserInterface;
        public CharSequence title;

        public static final class Builder {
            private boolean mAllowGeneratedReplies;
            private final Bundle mExtras;
            private final int mIcon;
            private final PendingIntent mIntent;
            private ArrayList<RemoteInput> mRemoteInputs;
            private int mSemanticAction;
            private boolean mShowsUserInterface;
            private final CharSequence mTitle;

            public Builder(int r10, CharSequence r11, PendingIntent r12) {
                this(r10, r11, r12, new Bundle(), null, true, 0, true);
            }

            public Builder(Action r10) {
                this(r10.icon, r10.title, r10.actionIntent, new Bundle(r10.mExtras), r10.getRemoteInputs(), r10.getAllowGeneratedReplies(), r10.getSemanticAction(), r10.mShowsUserInterface);
            }

            private Builder(int r2, CharSequence r3, PendingIntent r4, Bundle r5, RemoteInput[] r6, boolean r7, int r8, boolean r9) {
                this.mAllowGeneratedReplies = true;
                this.mShowsUserInterface = true;
                this.mIcon = r2;
                this.mTitle = Builder.limitCharSequenceLength(r3);
                this.mIntent = r4;
                this.mExtras = r5;
                if (r6 != null) goto L5;
                ArrayList<RemoteInput> r22 = null;
            L6:
                this.mRemoteInputs = r22;
                this.mAllowGeneratedReplies = r7;
                this.mSemanticAction = r8;
                this.mShowsUserInterface = r9;
                return;
            L5:
                r22 = new ArrayList(Arrays.asList(r6));
                goto L6
            }

            public Builder addExtras(Bundle r2) {
                if (r2 == null) goto L4;
                this.mExtras.putAll(r2);
            L4:
                return this;
            }

            public Bundle getExtras() {
                return this.mExtras;
            }

            public Builder addRemoteInput(RemoteInput r2) {
                if (this.mRemoteInputs != null) goto L5;
                this.mRemoteInputs = new ArrayList();
            L5:
                this.mRemoteInputs.add(r2);
                return this;
            }

            public Builder setAllowGeneratedReplies(boolean r1) {
                this.mAllowGeneratedReplies = r1;
                return this;
            }

            public Builder setSemanticAction(int r1) {
                this.mSemanticAction = r1;
                return this;
            }

            public Builder setShowsUserInterface(boolean r1) {
                this.mShowsUserInterface = r1;
                return this;
            }

            public Builder extend(Extender r1) {
                r1.extend(this);
                return this;
            }

            public Action build() {
                ArrayList r0 = new ArrayList();
                ArrayList r1 = new ArrayList();
                ArrayList<RemoteInput> r2 = this.mRemoteInputs;
                if (r2 == null) goto L11;
                Iterator<RemoteInput> r22 = r2.iterator();
            L6:
                if (r22.hasNext() == false) goto L11;
                RemoteInput r3 = r22.next();
                if (r3.isDataOnly() == true) goto L9;
                r1.add(r3);
                goto L6
            L9:
                r0.add(r3);
            L11:
                RemoteInput[] r32 = null;
                if (r0.isEmpty() == false) goto L14;
                RemoteInput[] r10 = null;
            L16:
                if (r1.isEmpty() == true) goto L20;
                r32 = (RemoteInput[]) r1.toArray(new RemoteInput[r1.size()]);
            L20:
                return new Action(this.mIcon, this.mTitle, this.mIntent, this.mExtras, r32, r10, this.mAllowGeneratedReplies, this.mSemanticAction, this.mShowsUserInterface);
            L14:
                r10 = (RemoteInput[]) r0.toArray(new RemoteInput[r0.size()]);
                goto L16
            }
        }

        public interface Extender {
            Builder extend(Builder r1);
        }

        @Retention(RetentionPolicy.SOURCE)
        public @interface SemanticAction {
        }

        public static final class WearableExtender implements Extender {
            private static final int DEFAULT_FLAGS = 1;
            private static final String EXTRA_WEARABLE_EXTENSIONS = "android.wearable.EXTENSIONS";
            private static final int FLAG_AVAILABLE_OFFLINE = 1;
            private static final int FLAG_HINT_DISPLAY_INLINE = 4;
            private static final int FLAG_HINT_LAUNCHES_ACTIVITY = 2;
            private static final String KEY_CANCEL_LABEL = "cancelLabel";
            private static final String KEY_CONFIRM_LABEL = "confirmLabel";
            private static final String KEY_FLAGS = "flags";
            private static final String KEY_IN_PROGRESS_LABEL = "inProgressLabel";
            private CharSequence mCancelLabel;
            private CharSequence mConfirmLabel;
            private int mFlags;
            private CharSequence mInProgressLabel;

            public Object clone() throws CloneNotSupportedException {
                return clone();
            }

            public WearableExtender() {
                this.mFlags = 1;
            }

            public WearableExtender(Action r3) {
                this.mFlags = 1;
                Bundle r32 = r3.getExtras().getBundle(EXTRA_WEARABLE_EXTENSIONS);
                if (r32 == null) goto L6;
                this.mFlags = r32.getInt(KEY_FLAGS, 1);
                this.mInProgressLabel = r32.getCharSequence(KEY_IN_PROGRESS_LABEL);
                this.mConfirmLabel = r32.getCharSequence(KEY_CONFIRM_LABEL);
                this.mCancelLabel = r32.getCharSequence(KEY_CANCEL_LABEL);
                return;
            }

            @Override
            public Builder extend(Builder r4) {
                Bundle r0 = new Bundle();
                int r1 = this.mFlags;
                if (r1 == 1) goto L5;
                r0.putInt(KEY_FLAGS, r1);
            L5:
                CharSequence r12 = this.mInProgressLabel;
                if (r12 == null) goto L8;
                r0.putCharSequence(KEY_IN_PROGRESS_LABEL, r12);
            L8:
                CharSequence r13 = this.mConfirmLabel;
                if (r13 == null) goto L11;
                r0.putCharSequence(KEY_CONFIRM_LABEL, r13);
            L11:
                CharSequence r14 = this.mCancelLabel;
                if (r14 == null) goto L14;
                r0.putCharSequence(KEY_CANCEL_LABEL, r14);
            L14:
                r4.getExtras().putBundle(EXTRA_WEARABLE_EXTENSIONS, r0);
                return r4;
            }

            public WearableExtender clone() {
                WearableExtender r0 = new WearableExtender();
                r0.mFlags = this.mFlags;
                r0.mInProgressLabel = this.mInProgressLabel;
                r0.mConfirmLabel = this.mConfirmLabel;
                r0.mCancelLabel = this.mCancelLabel;
                return r0;
            }

            public WearableExtender setAvailableOffline(boolean r2) {
                setFlag(1, r2);
                return this;
            }

            public boolean isAvailableOffline() {
                if ((this.mFlags & 1) != 0) goto L7;
                return false;
            L7:
                return true;
            }

            private void setFlag(int r1, boolean r2) {
                if (r2 == false) goto L4;
                this.mFlags = r1 | this.mFlags;
                return;
            L4:
                int r22 = this.mFlags;
                this.mFlags = (~r1) & r22;
            }

            @Deprecated
            public WearableExtender setInProgressLabel(CharSequence r1) {
                this.mInProgressLabel = r1;
                return this;
            }

            @Deprecated
            public CharSequence getInProgressLabel() {
                return this.mInProgressLabel;
            }

            @Deprecated
            public WearableExtender setConfirmLabel(CharSequence r1) {
                this.mConfirmLabel = r1;
                return this;
            }

            @Deprecated
            public CharSequence getConfirmLabel() {
                return this.mConfirmLabel;
            }

            @Deprecated
            public WearableExtender setCancelLabel(CharSequence r1) {
                this.mCancelLabel = r1;
                return this;
            }

            @Deprecated
            public CharSequence getCancelLabel() {
                return this.mCancelLabel;
            }

            public WearableExtender setHintLaunchesActivity(boolean r2) {
                setFlag(2, r2);
                return this;
            }

            public boolean getHintLaunchesActivity() {
                if ((this.mFlags & 2) == 0) goto L5;
                return true;
            L5:
                return false;
            }

            public WearableExtender setHintDisplayActionInline(boolean r2) {
                setFlag(4, r2);
                return this;
            }

            public boolean getHintDisplayActionInline() {
                if ((this.mFlags & 4) == 0) goto L5;
                return true;
            L5:
                return false;
            }
        }

        public Action(int r11, CharSequence r12, PendingIntent r13) {
            this(r11, r12, r13, new Bundle(), null, null, true, 0, true);
        }

        Action(int r2, CharSequence r3, PendingIntent r4, Bundle r5, RemoteInput[] r6, RemoteInput[] r7, boolean r8, int r9, boolean r10) {
            this.mShowsUserInterface = true;
            this.icon = r2;
            this.title = Builder.limitCharSequenceLength(r3);
            this.actionIntent = r4;
            if (r5 != null) goto L6;
            r5 = new Bundle();
        L6:
            this.mExtras = r5;
            this.mRemoteInputs = r6;
            this.mDataOnlyRemoteInputs = r7;
            this.mAllowGeneratedReplies = r8;
            this.mSemanticAction = r9;
            this.mShowsUserInterface = r10;
        }

        public int getIcon() {
            return this.icon;
        }

        public CharSequence getTitle() {
            return this.title;
        }

        public PendingIntent getActionIntent() {
            return this.actionIntent;
        }

        public Bundle getExtras() {
            return this.mExtras;
        }

        public boolean getAllowGeneratedReplies() {
            return this.mAllowGeneratedReplies;
        }

        public RemoteInput[] getRemoteInputs() {
            return this.mRemoteInputs;
        }

        public int getSemanticAction() {
            return this.mSemanticAction;
        }

        public RemoteInput[] getDataOnlyRemoteInputs() {
            return this.mDataOnlyRemoteInputs;
        }

        public boolean getShowsUserInterface() {
            return this.mShowsUserInterface;
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface BadgeIconType {
    }

    public static class BigPictureStyle extends Style {
        private Bitmap mBigLargeIcon;
        private boolean mBigLargeIconSet;
        private Bitmap mPicture;

        public BigPictureStyle() {
        }

        public BigPictureStyle(Builder r1) {
            setBuilder(r1);
        }

        public BigPictureStyle setBigContentTitle(CharSequence r1) {
            this.mBigContentTitle = Builder.limitCharSequenceLength(r1);
            return this;
        }

        public BigPictureStyle setSummaryText(CharSequence r1) {
            this.mSummaryText = Builder.limitCharSequenceLength(r1);
            this.mSummaryTextSet = true;
            return this;
        }

        public BigPictureStyle bigPicture(Bitmap r1) {
            this.mPicture = r1;
            return this;
        }

        public BigPictureStyle bigLargeIcon(Bitmap r1) {
            this.mBigLargeIcon = r1;
            this.mBigLargeIconSet = true;
            return this;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 16) goto L11;
            Notification.BigPictureStyle r32 = new Notification.BigPictureStyle(r3.getBuilder()).setBigContentTitle(this.mBigContentTitle).bigPicture(this.mPicture);
            if (this.mBigLargeIconSet == false) goto L8;
            r32.bigLargeIcon(this.mBigLargeIcon);
        L8:
            if (this.mSummaryTextSet == false) goto L12;
            r32.setSummaryText(this.mSummaryText);
            return;
        L12:
            return;
        }
    }

    public static class BigTextStyle extends Style {
        private CharSequence mBigText;

        public BigTextStyle() {
        }

        public BigTextStyle(Builder r1) {
            setBuilder(r1);
        }

        public BigTextStyle setBigContentTitle(CharSequence r1) {
            this.mBigContentTitle = Builder.limitCharSequenceLength(r1);
            return this;
        }

        public BigTextStyle setSummaryText(CharSequence r1) {
            this.mSummaryText = Builder.limitCharSequenceLength(r1);
            this.mSummaryTextSet = true;
            return this;
        }

        public BigTextStyle bigText(CharSequence r1) {
            this.mBigText = Builder.limitCharSequenceLength(r1);
            return this;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 16) goto L8;
            Notification.BigTextStyle r32 = new Notification.BigTextStyle(r3.getBuilder()).setBigContentTitle(this.mBigContentTitle).bigText(this.mBigText);
            if (this.mSummaryTextSet == false) goto L9;
            r32.setSummaryText(this.mSummaryText);
            return;
        L9:
            return;
        }
    }

    public static class Builder {
        private static final int MAX_CHARSEQUENCE_LENGTH = 5120;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public ArrayList<Action> mActions;
        int mBadgeIcon;
        RemoteViews mBigContentView;
        String mCategory;
        String mChannelId;
        int mColor;
        boolean mColorized;
        boolean mColorizedSet;
        CharSequence mContentInfo;
        PendingIntent mContentIntent;
        CharSequence mContentText;
        CharSequence mContentTitle;
        RemoteViews mContentView;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public Context mContext;
        Bundle mExtras;
        PendingIntent mFullScreenIntent;
        int mGroupAlertBehavior;
        String mGroupKey;
        boolean mGroupSummary;
        RemoteViews mHeadsUpContentView;
        ArrayList<Action> mInvisibleActions;
        Bitmap mLargeIcon;
        boolean mLocalOnly;
        Notification mNotification;
        int mNumber;

        @Deprecated
        public ArrayList<String> mPeople;
        int mPriority;
        int mProgress;
        boolean mProgressIndeterminate;
        int mProgressMax;
        Notification mPublicVersion;
        CharSequence[] mRemoteInputHistory;
        String mShortcutId;
        boolean mShowWhen;
        String mSortKey;
        Style mStyle;
        CharSequence mSubText;
        RemoteViews mTickerView;
        long mTimeout;
        boolean mUseChronometer;
        int mVisibility;

        public Builder(@NonNull Context r4, @NonNull String r5) {
            this.mActions = new ArrayList();
            this.mInvisibleActions = new ArrayList();
            this.mShowWhen = true;
            this.mLocalOnly = false;
            this.mColor = 0;
            this.mVisibility = 0;
            this.mBadgeIcon = 0;
            this.mGroupAlertBehavior = 0;
            this.mNotification = new Notification();
            this.mContext = r4;
            this.mChannelId = r5;
            Notification r42 = this.mNotification;
            r42.when = System.currentTimeMillis();
            this.mNotification.audioStreamType = -1;
            this.mPriority = 0;
            this.mPeople = new ArrayList();
        }

        @Deprecated
        public Builder(Context r2) {
            this(r2, null);
        }

        public Builder setWhen(long r2) {
            this.mNotification.when = r2;
            return this;
        }

        public Builder setShowWhen(boolean r1) {
            this.mShowWhen = r1;
            return this;
        }

        public Builder setUsesChronometer(boolean r1) {
            this.mUseChronometer = r1;
            return this;
        }

        public Builder setSmallIcon(int r2) {
            this.mNotification.icon = r2;
            return this;
        }

        public Builder setSmallIcon(int r2, int r3) {
            Notification r0 = this.mNotification;
            r0.icon = r2;
            r0.iconLevel = r3;
            return this;
        }

        public Builder setContentTitle(CharSequence r1) {
            this.mContentTitle = limitCharSequenceLength(r1);
            return this;
        }

        public Builder setContentText(CharSequence r1) {
            this.mContentText = limitCharSequenceLength(r1);
            return this;
        }

        public Builder setSubText(CharSequence r1) {
            this.mSubText = limitCharSequenceLength(r1);
            return this;
        }

        public Builder setRemoteInputHistory(CharSequence[] r1) {
            this.mRemoteInputHistory = r1;
            return this;
        }

        public Builder setNumber(int r1) {
            this.mNumber = r1;
            return this;
        }

        public Builder setContentInfo(CharSequence r1) {
            this.mContentInfo = limitCharSequenceLength(r1);
            return this;
        }

        public Builder setProgress(int r1, int r2, boolean r3) {
            this.mProgressMax = r1;
            this.mProgress = r2;
            this.mProgressIndeterminate = r3;
            return this;
        }

        public Builder setContent(RemoteViews r2) {
            this.mNotification.contentView = r2;
            return this;
        }

        public Builder setContentIntent(PendingIntent r1) {
            this.mContentIntent = r1;
            return this;
        }

        public Builder setDeleteIntent(PendingIntent r2) {
            this.mNotification.deleteIntent = r2;
            return this;
        }

        public Builder setFullScreenIntent(PendingIntent r1, boolean r2) {
            this.mFullScreenIntent = r1;
            setFlag(128, r2);
            return this;
        }

        public Builder setTicker(CharSequence r2) {
            Notification r0 = this.mNotification;
            r0.tickerText = limitCharSequenceLength(r2);
            return this;
        }

        public Builder setTicker(CharSequence r2, RemoteViews r3) {
            Notification r0 = this.mNotification;
            r0.tickerText = limitCharSequenceLength(r2);
            this.mTickerView = r3;
            return this;
        }

        public Builder setLargeIcon(Bitmap r1) {
            this.mLargeIcon = reduceLargeIconSize(r1);
            return this;
        }

        private Bitmap reduceLargeIconSize(Bitmap r10) {
            if (r10 != null) goto L4;
            return r10;
        L4:
            if (Build.VERSION.SDK_INT >= 27) goto L14;
            Resources r0 = this.mContext.getResources();
            int r1 = r0.getDimensionPixelSize(R.dimen.compat_notification_large_icon_max_width);
            int r02 = r0.getDimensionPixelSize(R.dimen.compat_notification_large_icon_max_height);
            if (r10.getWidth() <= r1) goto L9;
        L11:
            double r03 = Math.min(((double) r1) / ((double) Math.max(1, r10.getWidth())), ((double) r02) / ((double) Math.max(1, r10.getHeight())));
            return Bitmap.createScaledBitmap(r10, (int) Math.ceil(((double) r10.getWidth()) * r03), (int) Math.ceil(((double) r10.getHeight()) * r03), true);
        L9:
            if (r10.getHeight() > r02) goto L11;
            return r10;
        L14:
            return r10;
        }

        public Builder setSound(Uri r3) {
            Notification r0 = this.mNotification;
            r0.sound = r3;
            r0.audioStreamType = -1;
            if (Build.VERSION.SDK_INT < 21) goto L5;
            Notification r32 = this.mNotification;
            r32.audioAttributes = new AudioAttributes.Builder().setContentType(4).setUsage(5).build();
        L5:
            return this;
        }

        public Builder setSound(Uri r3, int r4) {
            Notification r0 = this.mNotification;
            r0.sound = r3;
            r0.audioStreamType = r4;
            if (Build.VERSION.SDK_INT < 21) goto L5;
            Notification r32 = this.mNotification;
            r32.audioAttributes = new AudioAttributes.Builder().setContentType(4).setLegacyStreamType(r4).build();
        L5:
            return this;
        }

        public Builder setVibrate(long[] r2) {
            this.mNotification.vibrate = r2;
            return this;
        }

        public Builder setLights(@ColorInt int r2, int r3, int r4) {
            Notification r0 = this.mNotification;
            r0.ledARGB = r2;
            r0.ledOnMS = r3;
            r0.ledOffMS = r4;
            if (r0.ledOnMS != 0) goto L5;
        L7:
            int r22 = 0;
        L8:
            Notification r32 = this.mNotification;
            r32.flags = r22 | (r32.flags & (-2));
            return this;
        L5:
            if (this.mNotification.ledOffMS == 0) goto L7;
            r22 = 1;
            goto L8
        }

        public Builder setOngoing(boolean r2) {
            setFlag(2, r2);
            return this;
        }

        public Builder setColorized(boolean r1) {
            this.mColorized = r1;
            this.mColorizedSet = true;
            return this;
        }

        public Builder setOnlyAlertOnce(boolean r2) {
            setFlag(8, r2);
            return this;
        }

        public Builder setAutoCancel(boolean r2) {
            setFlag(16, r2);
            return this;
        }

        public Builder setLocalOnly(boolean r1) {
            this.mLocalOnly = r1;
            return this;
        }

        public Builder setCategory(String r1) {
            this.mCategory = r1;
            return this;
        }

        public Builder setDefaults(int r2) {
            Notification r0 = this.mNotification;
            r0.defaults = r2;
            if ((r2 & 4) == 0) goto L5;
            r0.flags |= 1;
        L5:
            return this;
        }

        private void setFlag(int r2, boolean r3) {
            if (r3 == false) goto L4;
            Notification r32 = this.mNotification;
            r32.flags = r2 | r32.flags;
            return;
        L4:
            Notification r33 = this.mNotification;
            int r0 = r33.flags;
            r33.flags = (~r2) & r0;
        }

        public Builder setPriority(int r1) {
            this.mPriority = r1;
            return this;
        }

        public Builder addPerson(String r2) {
            this.mPeople.add(r2);
            return this;
        }

        public Builder setGroup(String r1) {
            this.mGroupKey = r1;
            return this;
        }

        public Builder setGroupSummary(boolean r1) {
            this.mGroupSummary = r1;
            return this;
        }

        public Builder setSortKey(String r1) {
            this.mSortKey = r1;
            return this;
        }

        public Builder addExtras(Bundle r2) {
            if (r2 == null) goto L7;
            Bundle r0 = this.mExtras;
            if (r0 != null) goto L6;
            this.mExtras = new Bundle(r2);
            goto L7
        L6:
            r0.putAll(r2);
        L7:
            return this;
        }

        public Builder setExtras(Bundle r1) {
            this.mExtras = r1;
            return this;
        }

        public Bundle getExtras() {
            if (this.mExtras != null) goto L6;
            this.mExtras = new Bundle();
        L6:
            return this.mExtras;
        }

        public Builder addAction(int r3, CharSequence r4, PendingIntent r5) {
            this.mActions.add(new Action(r3, r4, r5));
            return this;
        }

        public Builder addAction(Action r2) {
            this.mActions.add(r2);
            return this;
        }

        @RequiresApi(21)
        public Builder addInvisibleAction(int r2, CharSequence r3, PendingIntent r4) {
            return addInvisibleAction(new Action(r2, r3, r4));
        }

        @RequiresApi(21)
        public Builder addInvisibleAction(Action r2) {
            this.mInvisibleActions.add(r2);
            return this;
        }

        public Builder setStyle(Style r2) {
            if (this.mStyle == r2) goto L7;
            this.mStyle = r2;
            Style r22 = this.mStyle;
            if (r22 == null) goto L7;
            r22.setBuilder(this);
        L7:
            return this;
        }

        public Builder setColor(@ColorInt int r1) {
            this.mColor = r1;
            return this;
        }

        public Builder setVisibility(int r1) {
            this.mVisibility = r1;
            return this;
        }

        public Builder setPublicVersion(Notification r1) {
            this.mPublicVersion = r1;
            return this;
        }

        public Builder setCustomContentView(RemoteViews r1) {
            this.mContentView = r1;
            return this;
        }

        public Builder setCustomBigContentView(RemoteViews r1) {
            this.mBigContentView = r1;
            return this;
        }

        public Builder setCustomHeadsUpContentView(RemoteViews r1) {
            this.mHeadsUpContentView = r1;
            return this;
        }

        public Builder setChannelId(@NonNull String r1) {
            this.mChannelId = r1;
            return this;
        }

        public Builder setTimeoutAfter(long r1) {
            this.mTimeout = r1;
            return this;
        }

        public Builder setShortcutId(String r1) {
            this.mShortcutId = r1;
            return this;
        }

        public Builder setBadgeIconType(int r1) {
            this.mBadgeIcon = r1;
            return this;
        }

        public Builder setGroupAlertBehavior(int r1) {
            this.mGroupAlertBehavior = r1;
            return this;
        }

        public Builder extend(Extender r1) {
            r1.extend(this);
            return this;
        }

        @Deprecated
        public Notification getNotification() {
            return build();
        }

        public Notification build() {
            return new NotificationCompatBuilder(this).build();
        }

        protected static CharSequence limitCharSequenceLength(CharSequence r2) {
            if (r2 != null) goto L5;
            return r2;
        L5:
            if (r2.length() > MAX_CHARSEQUENCE_LENGTH) goto L7;
            return r2;
        L7:
            return r2.subSequence(0, MAX_CHARSEQUENCE_LENGTH);
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews getContentView() {
            return this.mContentView;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews getBigContentView() {
            return this.mBigContentView;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews getHeadsUpContentView() {
            return this.mHeadsUpContentView;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public long getWhenIfShowing() {
            if (this.mShowWhen == true) goto L7;
            return 0;
        L7:
            return this.mNotification.when;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public int getPriority() {
            return this.mPriority;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public int getColor() {
            return this.mColor;
        }
    }

    public static final class CarExtender implements Extender {

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        static final String EXTRA_CAR_EXTENDER = "android.car.EXTENSIONS";
        private static final String EXTRA_COLOR = "app_color";
        private static final String EXTRA_CONVERSATION = "car_conversation";

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        static final String EXTRA_INVISIBLE_ACTIONS = "invisible_actions";
        private static final String EXTRA_LARGE_ICON = "large_icon";
        private static final String KEY_AUTHOR = "author";
        private static final String KEY_MESSAGES = "messages";
        private static final String KEY_ON_READ = "on_read";
        private static final String KEY_ON_REPLY = "on_reply";
        private static final String KEY_PARTICIPANTS = "participants";
        private static final String KEY_REMOTE_INPUT = "remote_input";
        private static final String KEY_TEXT = "text";
        private static final String KEY_TIMESTAMP = "timestamp";
        private int mColor;
        private Bitmap mLargeIcon;
        private UnreadConversation mUnreadConversation;

        public static class UnreadConversation {
            private final long mLatestTimestamp;
            private final String[] mMessages;
            private final String[] mParticipants;
            private final PendingIntent mReadPendingIntent;
            private final RemoteInput mRemoteInput;
            private final PendingIntent mReplyPendingIntent;

            public static class Builder {
                private long mLatestTimestamp;
                private final List<String> mMessages;
                private final String mParticipant;
                private PendingIntent mReadPendingIntent;
                private RemoteInput mRemoteInput;
                private PendingIntent mReplyPendingIntent;

                public Builder(String r2) {
                    this.mMessages = new ArrayList();
                    this.mParticipant = r2;
                }

                public Builder addMessage(String r2) {
                    this.mMessages.add(r2);
                    return this;
                }

                public Builder setReplyAction(PendingIntent r1, RemoteInput r2) {
                    this.mRemoteInput = r2;
                    this.mReplyPendingIntent = r1;
                    return this;
                }

                public Builder setReadPendingIntent(PendingIntent r1) {
                    this.mReadPendingIntent = r1;
                    return this;
                }

                public Builder setLatestTimestamp(long r1) {
                    this.mLatestTimestamp = r1;
                    return this;
                }

                public UnreadConversation build() {
                    List<String> r0 = this.mMessages;
                    return new UnreadConversation((String[]) r0.toArray(new String[r0.size()]), this.mRemoteInput, this.mReplyPendingIntent, this.mReadPendingIntent, new String[]{this.mParticipant}, this.mLatestTimestamp);
                }
            }

            UnreadConversation(String[] r1, RemoteInput r2, PendingIntent r3, PendingIntent r4, String[] r5, long r6) {
                this.mMessages = r1;
                this.mRemoteInput = r2;
                this.mReadPendingIntent = r4;
                this.mReplyPendingIntent = r3;
                this.mParticipants = r5;
                this.mLatestTimestamp = r6;
            }

            public String[] getMessages() {
                return this.mMessages;
            }

            public RemoteInput getRemoteInput() {
                return this.mRemoteInput;
            }

            public PendingIntent getReplyPendingIntent() {
                return this.mReplyPendingIntent;
            }

            public PendingIntent getReadPendingIntent() {
                return this.mReadPendingIntent;
            }

            public String[] getParticipants() {
                return this.mParticipants;
            }

            public String getParticipant() {
                String[] r0 = this.mParticipants;
                if (r0.length > 0) goto L7;
                return null;
            L7:
                return r0[0];
            }

            public long getLatestTimestamp() {
                return this.mLatestTimestamp;
            }
        }

        public CarExtender() {
            this.mColor = 0;
        }

        public CarExtender(Notification r4) {
            this.mColor = 0;
            if (Build.VERSION.SDK_INT >= 21) goto L6;
            return;
        L6:
            if (NotificationCompat.getExtras(r4) != null) goto L8;
            Bundle r42 = null;
        L9:
            if (r42 == null) goto L12;
            this.mLargeIcon = (Bitmap) r42.getParcelable(EXTRA_LARGE_ICON);
            this.mColor = r42.getInt(EXTRA_COLOR, 0);
            this.mUnreadConversation = getUnreadConversationFromBundle(r42.getBundle(EXTRA_CONVERSATION));
            return;
        L12:
            return;
        L8:
            r42 = NotificationCompat.getExtras(r4).getBundle(EXTRA_CAR_EXTENDER);
            goto L9
        }

        @RequiresApi(21)
        private static UnreadConversation getUnreadConversationFromBundle(@Nullable Bundle r19) {
            RemoteInput r1 = null;
            if (r19 != null) goto L5;
            return null;
        L5:
            Parcelable[] r2 = r19.getParcelableArray(KEY_MESSAGES);
            if (r2 == null) goto L21;
            String[] r4 = new String[r2.length];
            boolean r5 = false;
            int r6 = 0;
        L9:
            if (r6 >= r4.length) goto L17;
            if ((r2[r6] instanceof Bundle) == false) goto L18;
            r4[r6] = ((Bundle) r2[r6]).getString(KEY_TEXT);
            if (r4[r6] == null) goto L18;
            r6 = r6 + 1;
        L18:
            if (r5 == false) goto L20;
            String[] r7 = r4;
        L22:
            PendingIntent r10 = (PendingIntent) r19.getParcelable(KEY_ON_READ);
            PendingIntent r9 = (PendingIntent) r19.getParcelable(KEY_ON_REPLY);
            android.app.RemoteInput r22 = (android.app.RemoteInput) r19.getParcelable(KEY_REMOTE_INPUT);
            String[] r11 = r19.getStringArray(KEY_PARTICIPANTS);
            if (r11 != null) goto L25;
            return null;
        L25:
            if (r11.length != 1) goto L35;
            if (r22 == null) goto L30;
            r1 = new RemoteInput(r22.getResultKey(), r22.getLabel(), r22.getChoices(), r22.getAllowFreeFormInput(), r22.getExtras(), null);
        L30:
            return new UnreadConversation(r7, r1, r9, r10, r11, r19.getLong(KEY_TIMESTAMP));
        L35:
            return null;
        L20:
            return null;
        L17:
            r5 = true;
            goto L18
        L21:
            r7 = null;
            goto L22
        }

        @RequiresApi(21)
        private static Bundle getBundleForUnreadConversation(@NonNull UnreadConversation r7) {
            Bundle r0 = new Bundle();
            int r2 = 0;
            if (r7.getParticipants() != null) goto L5;
        L7:
            String r1 = null;
        L8:
            Parcelable[] r3 = new Parcelable[r7.getMessages().length];
        L10:
            if (r2 >= r3.length) goto L12;
            Bundle r4 = new Bundle();
            r4.putString(KEY_TEXT, r7.getMessages()[r2]);
            r4.putString(KEY_AUTHOR, r1);
            r3[r2] = r4;
            r2 = r2 + 1;
            goto L10
        L12:
            r0.putParcelableArray(KEY_MESSAGES, r3);
            RemoteInput r12 = r7.getRemoteInput();
            if (r12 == null) goto L15;
            r0.putParcelable(KEY_REMOTE_INPUT, new RemoteInput.Builder(r12.getResultKey()).setLabel(r12.getLabel()).setChoices(r12.getChoices()).setAllowFreeFormInput(r12.getAllowFreeFormInput()).addExtras(r12.getExtras()).build());
        L15:
            r0.putParcelable(KEY_ON_REPLY, r7.getReplyPendingIntent());
            r0.putParcelable(KEY_ON_READ, r7.getReadPendingIntent());
            r0.putStringArray(KEY_PARTICIPANTS, r7.getParticipants());
            r0.putLong(KEY_TIMESTAMP, r7.getLatestTimestamp());
            return r0;
        L5:
            if (r7.getParticipants().length <= 1) goto L7;
            r1 = r7.getParticipants()[0];
            goto L8
        }

        @Override
        public Builder extend(Builder r4) {
            if (Build.VERSION.SDK_INT >= 21) goto L5;
            return r4;
        L5:
            Bundle r0 = new Bundle();
            Bitmap r1 = this.mLargeIcon;
            if (r1 == null) goto L8;
            r0.putParcelable(EXTRA_LARGE_ICON, r1);
        L8:
            int r12 = this.mColor;
            if (r12 == 0) goto L11;
            r0.putInt(EXTRA_COLOR, r12);
        L11:
            UnreadConversation r13 = this.mUnreadConversation;
            if (r13 == null) goto L14;
            r0.putBundle(EXTRA_CONVERSATION, getBundleForUnreadConversation(r13));
        L14:
            r4.getExtras().putBundle(EXTRA_CAR_EXTENDER, r0);
            return r4;
        }

        public CarExtender setColor(@ColorInt int r1) {
            this.mColor = r1;
            return this;
        }

        @ColorInt
        public int getColor() {
            return this.mColor;
        }

        public CarExtender setLargeIcon(Bitmap r1) {
            this.mLargeIcon = r1;
            return this;
        }

        public Bitmap getLargeIcon() {
            return this.mLargeIcon;
        }

        public CarExtender setUnreadConversation(UnreadConversation r1) {
            this.mUnreadConversation = r1;
            return this;
        }

        public UnreadConversation getUnreadConversation() {
            return this.mUnreadConversation;
        }
    }

    public static class DecoratedCustomViewStyle extends Style {
        private static final int MAX_ACTION_BUTTONS = 3;

        public DecoratedCustomViewStyle() {
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 24) goto L6;
            r3.getBuilder().setStyle(new Notification.DecoratedCustomViewStyle());
            return;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeContentView(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 24) goto L6;
            return null;
        L6:
            if (this.mBuilder.getContentView() != null) goto L9;
            return null;
        L9:
            return createRemoteViews(this.mBuilder.getContentView(), false);
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeBigContentView(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 24) goto L5;
            return null;
        L5:
            RemoteViews r32 = this.mBuilder.getBigContentView();
            if (r32 != null) goto L9;
            r32 = this.mBuilder.getContentView();
        L9:
            if (r32 != null) goto L12;
            return null;
        L12:
            return createRemoteViews(r32, true);
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeHeadsUpContentView(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 24) goto L5;
            return null;
        L5:
            RemoteViews r32 = this.mBuilder.getHeadsUpContentView();
            if (r32 == null) goto L8;
            RemoteViews r1 = r32;
        L9:
            if (r32 != null) goto L12;
            return null;
        L12:
            return createRemoteViews(r1, true);
        L8:
            r1 = this.mBuilder.getContentView();
            goto L9
        }

        private RemoteViews createRemoteViews(RemoteViews r7, boolean r8) {
            boolean r1 = true;
            int r2 = 0;
            RemoteViews r0 = applyStandardTemplate(true, R.layout.notification_template_custom_big, false);
            r0.removeAllViews(R.id.actions);
            if (r8 == true) goto L5;
        L11:
            r1 = false;
        L12:
            if (r1 == true) goto L15;
            r2 = 8;
        L15:
            r0.setViewVisibility(R.id.actions, r2);
            r0.setViewVisibility(R.id.action_divider, r2);
            buildIntoRemoteViews(r0, r7);
            return r0;
        L5:
            if (this.mBuilder.mActions == null) goto L11;
            int r82 = Math.min(this.mBuilder.mActions.size(), 3);
            if (r82 <= 0) goto L11;
            int r3 = 0;
        L9:
            if (r3 >= r82) goto L12;
            RemoteViews r4 = generateActionButton(this.mBuilder.mActions.get(r3));
            r0.addView(R.id.actions, r4);
            r3 = r3 + 1;
            goto L9
        }

        private RemoteViews generateActionButton(Action r7) {
            if (r7.actionIntent != null) goto L5;
            boolean r0 = true;
        L6:
            String r2 = this.mBuilder.mContext.getPackageName();
            if (r0 == false) goto L9;
            int r3 = R.layout.notification_action_tombstone;
        L10:
            RemoteViews r1 = new RemoteViews(r2, r3);
            r1.setImageViewBitmap(R.id.action_image, createColoredBitmap(r7.getIcon(), this.mBuilder.mContext.getResources().getColor(R.color.notification_action_color_filter)));
            r1.setTextViewText(R.id.action_text, r7.title);
            if (r0 == true) goto L14;
            r1.setOnClickPendingIntent(R.id.action_container, r7.actionIntent);
        L14:
            if (Build.VERSION.SDK_INT < 15) goto L16;
            r1.setContentDescription(R.id.action_container, r7.title);
        L16:
            return r1;
        L9:
            r3 = R.layout.notification_action;
            goto L10
        L5:
            r0 = false;
            goto L6
        }
    }

    public interface Extender {
        Builder extend(Builder r1);
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface GroupAlertBehavior {
    }

    public static class InboxStyle extends Style {
        private ArrayList<CharSequence> mTexts;

        public InboxStyle() {
            this.mTexts = new ArrayList();
        }

        public InboxStyle(Builder r2) {
            this.mTexts = new ArrayList();
            setBuilder(r2);
        }

        public InboxStyle setBigContentTitle(CharSequence r1) {
            this.mBigContentTitle = Builder.limitCharSequenceLength(r1);
            return this;
        }

        public InboxStyle setSummaryText(CharSequence r1) {
            this.mSummaryText = Builder.limitCharSequenceLength(r1);
            this.mSummaryTextSet = true;
            return this;
        }

        public InboxStyle addLine(CharSequence r2) {
            this.mTexts.add(Builder.limitCharSequenceLength(r2));
            return this;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r3) {
            if (Build.VERSION.SDK_INT < 16) goto L11;
            Notification.InboxStyle r32 = new Notification.InboxStyle(r3.getBuilder()).setBigContentTitle(this.mBigContentTitle);
            if (this.mSummaryTextSet == false) goto L7;
            r32.setSummaryText(this.mSummaryText);
        L7:
            Iterator<CharSequence> r0 = this.mTexts.iterator();
        L9:
            if (r0.hasNext() == false) goto L13;
            r32.addLine(r0.next());
            goto L9
        L13:
            return;
        }
    }

    public static class MessagingStyle extends Style {
        public static final int MAXIMUM_RETAINED_MESSAGES = 25;

        @Nullable
        private CharSequence mConversationTitle;

        @Nullable
        private Boolean mIsGroupConversation;
        private final List<Message> mMessages;
        private Person mUser;

        public static final class Message {
            static final String KEY_DATA_MIME_TYPE = "type";
            static final String KEY_DATA_URI = "uri";
            static final String KEY_EXTRAS_BUNDLE = "extras";
            static final String KEY_NOTIFICATION_PERSON = "sender_person";
            static final String KEY_PERSON = "person";
            static final String KEY_SENDER = "sender";
            static final String KEY_TEXT = "text";
            static final String KEY_TIMESTAMP = "time";

            @Nullable
            private String mDataMimeType;

            @Nullable
            private Uri mDataUri;
            private Bundle mExtras;

            @Nullable
            private final Person mPerson;
            private final CharSequence mText;
            private final long mTimestamp;

            public Message(CharSequence r2, long r3, @Nullable Person r5) {
                this.mExtras = new Bundle();
                this.mText = r2;
                this.mTimestamp = r3;
                this.mPerson = r5;
            }

            @Deprecated
            public Message(CharSequence r2, long r3, CharSequence r5) {
                this(r2, r3, new Person.Builder().setName(r5).build());
            }

            public Message setData(String r1, Uri r2) {
                this.mDataMimeType = r1;
                this.mDataUri = r2;
                return this;
            }

            @NonNull
            public CharSequence getText() {
                return this.mText;
            }

            public long getTimestamp() {
                return this.mTimestamp;
            }

            @NonNull
            public Bundle getExtras() {
                return this.mExtras;
            }

            @Nullable
            @Deprecated
            public CharSequence getSender() {
                Person r0 = this.mPerson;
                if (r0 != null) goto L6;
                return null;
            L6:
                return r0.getName();
            }

            @Nullable
            public Person getPerson() {
                return this.mPerson;
            }

            @Nullable
            public String getDataMimeType() {
                return this.mDataMimeType;
            }

            @Nullable
            public Uri getDataUri() {
                return this.mDataUri;
            }

            private Bundle toBundle() {
                Bundle r0 = new Bundle();
                CharSequence r1 = this.mText;
                if (r1 == null) goto L5;
                r0.putCharSequence(KEY_TEXT, r1);
            L5:
                r0.putLong(KEY_TIMESTAMP, this.mTimestamp);
                Person r12 = this.mPerson;
                if (r12 == null) goto L11;
                r0.putCharSequence(KEY_SENDER, r12.getName());
                if (Build.VERSION.SDK_INT < 28) goto L10;
                r0.putParcelable(KEY_NOTIFICATION_PERSON, this.mPerson.toAndroidPerson());
                goto L11
            L10:
                r0.putBundle(KEY_PERSON, this.mPerson.toBundle());
            L11:
                String r13 = this.mDataMimeType;
                if (r13 == null) goto L14;
                r0.putString(KEY_DATA_MIME_TYPE, r13);
            L14:
                Uri r14 = this.mDataUri;
                if (r14 == null) goto L17;
                r0.putParcelable(KEY_DATA_URI, r14);
            L17:
                Bundle r15 = this.mExtras;
                if (r15 == null) goto L20;
                r0.putBundle(KEY_EXTRAS_BUNDLE, r15);
            L20:
                return r0;
            }

            @NonNull
            static Bundle[] getBundleArrayForMessages(List<Message> r4) {
                Bundle[] r0 = new Bundle[r4.size()];
                int r1 = r4.size();
                int r2 = 0;
            L3:
                if (r2 >= r1) goto L5;
                r0[r2] = r4.get(r2).toBundle();
                r2 = r2 + 1;
                goto L3
            L5:
                return r0;
            }

            @NonNull
            static List<Message> getMessagesFromBundleArray(Parcelable[] r3) {
                ArrayList r0 = new ArrayList(r3.length);
                int r1 = 0;
            L4:
                if (r1 >= r3.length) goto L11;
                if ((r3[r1] instanceof Bundle) == false) goto L10;
                Message r2 = getMessageFromBundle((Bundle) r3[r1]);
                if (r2 == null) goto L10;
                r0.add(r2);
            L10:
                r1 = r1 + 1;
                goto L4
            L11:
                return r0;
            }

            @Nullable
            static Message getMessageFromBundle(Bundle r10) {
                if (r10.containsKey(KEY_TEXT) == false) goto L29;
                if (r10.containsKey(KEY_TIMESTAMP) == false) goto L29;
                if (r10.containsKey(KEY_PERSON) == false) goto L12;
                Person r3 = Person.fromBundle(r10.getBundle(KEY_PERSON));     // Catch: ClassCastException -> L30
            L20:
                Message r4 = new Message(r10.getCharSequence(KEY_TEXT), r10.getLong(KEY_TIMESTAMP), r3);     // Catch: ClassCastException -> L30
                if (r10.containsKey(KEY_DATA_MIME_TYPE) == false) goto L26;
                if (r10.containsKey(KEY_DATA_URI) == false) goto L26;
                r4.setData(r10.getString(KEY_DATA_MIME_TYPE), (Uri) r10.getParcelable(KEY_DATA_URI));     // Catch: ClassCastException -> L30
            L26:
                if (r10.containsKey(KEY_EXTRAS_BUNDLE) == false) goto L28;
                r4.getExtras().putAll(r10.getBundle(KEY_EXTRAS_BUNDLE));     // Catch: ClassCastException -> L30
            L28:
                return r4;
            L12:
                if (r10.containsKey(KEY_NOTIFICATION_PERSON) == false) goto L17;
                if (Build.VERSION.SDK_INT < 28) goto L17;
                r3 = Person.fromAndroidPerson((android.app.Person) r10.getParcelable(KEY_NOTIFICATION_PERSON));     // Catch: ClassCastException -> L30
            L17:
                if (r10.containsKey(KEY_SENDER) == false) goto L19;
                r3 = new Person.Builder().setName(r10.getCharSequence(KEY_SENDER)).build();     // Catch: ClassCastException -> L30
                goto L20
            L19:
                r3 = null;
            L29:
                return null;
            }
        }

        private MessagingStyle() {
            this.mMessages = new ArrayList();
        }

        @Deprecated
        public MessagingStyle(@NonNull CharSequence r2) {
            this.mMessages = new ArrayList();
            this.mUser = new Person.Builder().setName(r2).build();
        }

        public MessagingStyle(@NonNull Person r2) {
            this.mMessages = new ArrayList();
            if (TextUtils.isEmpty(r2.getName()) == true) goto L7;
            this.mUser = r2;
            return;
        L7:
            throw new IllegalArgumentException("User's name must not be empty.");
        }

        @Deprecated
        public CharSequence getUserDisplayName() {
            return this.mUser.getName();
        }

        public Person getUser() {
            return this.mUser;
        }

        public MessagingStyle setConversationTitle(@Nullable CharSequence r1) {
            this.mConversationTitle = r1;
            return this;
        }

        @Nullable
        public CharSequence getConversationTitle() {
            return this.mConversationTitle;
        }

        @Deprecated
        public MessagingStyle addMessage(CharSequence r4, long r5, CharSequence r7) {
            this.mMessages.add(new Message(r4, r5, new Person.Builder().setName(r7).build()));
            if (this.mMessages.size() <= 25) goto L5;
            this.mMessages.remove(0);
        L5:
            return this;
        }

        public MessagingStyle addMessage(CharSequence r2, long r3, Person r5) {
            addMessage(new Message(r2, r3, r5));
            return this;
        }

        public MessagingStyle addMessage(Message r2) {
            this.mMessages.add(r2);
            if (this.mMessages.size() <= 25) goto L5;
            this.mMessages.remove(0);
        L5:
            return this;
        }

        public List<Message> getMessages() {
            return this.mMessages;
        }

        public MessagingStyle setGroupConversation(boolean r1) {
            this.mIsGroupConversation = Boolean.valueOf(r1);
            return this;
        }

        public boolean isGroupConversation() {
            if (this.mBuilder != null) goto L5;
        L12:
            Boolean r0 = this.mIsGroupConversation;
            if (r0 != null) goto L15;
            return false;
        L15:
            return r0.booleanValue();
        L5:
            if (this.mBuilder.mContext.getApplicationInfo().targetSdkVersion >= 28) goto L12;
            if (this.mIsGroupConversation != null) goto L12;
            if (this.mConversationTitle == null) goto L16;
            return true;
        L16:
            return false;
        }

        @Nullable
        public static MessagingStyle extractMessagingStyleFromNotification(Notification r2) {
            Bundle r22 = NotificationCompat.getExtras(r2);
            if (r22 != null) goto L5;
        L12:
            MessagingStyle r1 = new MessagingStyle();     // Catch: ClassCastException -> L11
            r1.restoreFromCompatExtras(r22);     // Catch: ClassCastException -> L11
            return r1;
        L11:
            return null;
        L5:
            if (r22.containsKey(NotificationCompat.EXTRA_SELF_DISPLAY_NAME) == true) goto L12;
            if (r22.containsKey(NotificationCompat.EXTRA_MESSAGING_STYLE_USER) == true) goto L12;
            return null;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r11) {
            setGroupConversation(isGroupConversation());
            if (Build.VERSION.SDK_INT >= 24) goto L5;
            Message r0 = findLatestIncomingMessage();
            if (this.mConversationTitle != null) goto L39;
        L41:
            if (r0 == null) goto L45;
            r11.getBuilder().setContentTitle("");
            if (r0.getPerson() == null) goto L45;
            r11.getBuilder().setContentTitle(r0.getPerson().getName());
        L45:
            if (r0 == null) goto L52;
            Notification.Builder r2 = r11.getBuilder();
            if (this.mConversationTitle == null) goto L49;
            CharSequence r02 = makeMessageLine(r0);
        L50:
            r2.setContentText(r02);
            goto L52
        L49:
            r02 = r0.getText();
        L52:
            if (Build.VERSION.SDK_INT < 16) goto L79;
            SpannableStringBuilder r03 = new SpannableStringBuilder();
            if (this.mConversationTitle == null) goto L56;
        L59:
            boolean r22 = true;
        L60:
            int r5 = this.mMessages.size() - 1;
        L61:
            if (r5 < 0) goto L70;
            Message r6 = this.mMessages.get(r5);
            if (r22 == false) goto L65;
            CharSequence r62 = makeMessageLine(r6);
        L67:
            if (r5 == (this.mMessages.size() - 1)) goto L69;
            r03.insert(0, "\n");
        L69:
            r03.insert(0, r62);
            r5 = r5 - 1;
            goto L61
        L65:
            r62 = r6.getText();
            goto L67
        L70:
            new Notification.BigTextStyle(r11.getBuilder()).setBigContentTitle(null).bigText(r03);
            return;
        L56:
            if (hasMessagesWithoutSender() == true) goto L59;
            r22 = false;
            goto L60
        L79:
            return;
        L39:
            if (this.mIsGroupConversation.booleanValue() == false) goto L41;
            r11.getBuilder().setContentTitle(this.mConversationTitle);
            goto L45
        L5:
            if (Build.VERSION.SDK_INT < 28) goto L7;
            Notification.MessagingStyle r04 = new Notification.MessagingStyle(this.mUser.toAndroidPerson());
        L9:
            if (this.mIsGroupConversation.booleanValue() == false) goto L11;
        L12:
            r04.setConversationTitle(this.mConversationTitle);
        L14:
            if (Build.VERSION.SDK_INT < 28) goto L16;
            r04.setGroupConversation(this.mIsGroupConversation.booleanValue());
        L16:
            Iterator<Message> r3 = this.mMessages.iterator();
        L18:
            if (r3.hasNext() == false) goto L35;
            Message r4 = r3.next();
            if (Build.VERSION.SDK_INT < 28) goto L27;
            Person r52 = r4.getPerson();
            CharSequence r7 = r4.getText();
            long r8 = r4.getTimestamp();
            if (r52 != null) goto L24;
            android.app.Person r53 = null;
        L25:
            Notification.MessagingStyle.Message r63 = new Notification.MessagingStyle.Message(r7, r8, r53);
        L32:
            if (r4.getDataMimeType() == null) goto L34;
            r63.setData(r4.getDataMimeType(), r4.getDataUri());
        L34:
            r04.addMessage(r63);
            goto L18
        L24:
            r53 = r52.toAndroidPerson();
            goto L25
        L27:
            if (r4.getPerson() == null) goto L29;
            CharSequence r54 = r4.getPerson().getName();
        L30:
            r63 = new Notification.MessagingStyle.Message(r4.getText(), r4.getTimestamp(), r54);
            goto L32
        L29:
            r54 = null;
            goto L30
        L35:
            r04.setBuilder(r11.getBuilder());
            return;
        L11:
            if (Build.VERSION.SDK_INT < 28) goto L14;
        L7:
            r04 = new Notification.MessagingStyle(this.mUser.getName());
            goto L9
        }

        @Nullable
        private Message findLatestIncomingMessage() {
            int r0 = this.mMessages.size() - 1;
        L3:
            if (r0 < 0) goto L11;
            Message r1 = this.mMessages.get(r0);
            if (r1.getPerson() == null) goto L9;
            if (TextUtils.isEmpty(r1.getPerson().getName()) == true) goto L9;
            return r1;
        L9:
            r0 = r0 - 1;
            goto L3
        L11:
            if (this.mMessages.isEmpty() == false) goto L13;
            return null;
        L13:
            return this.mMessages.get(r0.size() - 1);
        }

        private boolean hasMessagesWithoutSender() {
            int r0 = this.mMessages.size() - 1;
        L3:
            if (r0 < 0) goto L10;
            Message r2 = this.mMessages.get(r0);
            if (r2.getPerson() == null) goto L9;
            if (r2.getPerson().getName() != null) goto L9;
            return true;
        L9:
            r0 = r0 - 1;
            goto L3
        L10:
            return false;
        }

        private CharSequence makeMessageLine(Message r8) {
            BidiFormatter r0 = BidiFormatter.getInstance();
            SpannableStringBuilder r1 = new SpannableStringBuilder();
            if (Build.VERSION.SDK_INT < 21) goto L5;
            boolean r2 = true;
        L6:
            if (r2 == false) goto L8;
            int r3 = ViewCompat.MEASURED_STATE_MASK;
        L9:
            CharSequence r5 = "";
            if (r8.getPerson() != null) goto L12;
            CharSequence r4 = "";
        L14:
            if (TextUtils.isEmpty(r4) == false) goto L20;
            r4 = this.mUser.getName();
            if (r2 == false) goto L20;
            if (this.mBuilder.getColor() == 0) goto L20;
            r3 = this.mBuilder.getColor();
        L20:
            CharSequence r22 = r0.unicodeWrap(r4);
            r1.append(r22);
            r1.setSpan(makeFontColorSpan(r3), r1.length() - r22.length(), r1.length(), 33);
            if (r8.getText() == null) goto L24;
            r5 = r8.getText();
        L24:
            r1.append("  ").append(r0.unicodeWrap(r5));
            return r1;
        L12:
            r4 = r8.getPerson().getName();
            goto L14
        L8:
            r3 = -1;
            goto L9
        L5:
            r2 = false;
            goto L6
        }

        @NonNull
        private TextAppearanceSpan makeFontColorSpan(int r8) {
            return new TextAppearanceSpan(null, 0, 0, ColorStateList.valueOf(r8), null);
        }

        @Override
        public void addCompatExtras(Bundle r3) {
            super.addCompatExtras(r3);
            r3.putCharSequence(NotificationCompat.EXTRA_SELF_DISPLAY_NAME, this.mUser.getName());
            r3.putBundle(NotificationCompat.EXTRA_MESSAGING_STYLE_USER, this.mUser.toBundle());
            r3.putCharSequence(NotificationCompat.EXTRA_HIDDEN_CONVERSATION_TITLE, this.mConversationTitle);
            if (this.mConversationTitle == null) goto L8;
            if (this.mIsGroupConversation.booleanValue() == false) goto L8;
            r3.putCharSequence(NotificationCompat.EXTRA_CONVERSATION_TITLE, this.mConversationTitle);
        L8:
            if (this.mMessages.isEmpty() == true) goto L10;
            r3.putParcelableArray(NotificationCompat.EXTRA_MESSAGES, Message.getBundleArrayForMessages(this.mMessages));
        L10:
            Boolean r0 = this.mIsGroupConversation;
            if (r0 == null) goto L14;
            r3.putBoolean(NotificationCompat.EXTRA_IS_GROUP_CONVERSATION, r0.booleanValue());
            return;
        }

        @Override
        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        protected void restoreFromCompatExtras(Bundle r3) {
            this.mMessages.clear();
            if (r3.containsKey(NotificationCompat.EXTRA_MESSAGING_STYLE_USER) == false) goto L5;
            this.mUser = Person.fromBundle(r3.getBundle(NotificationCompat.EXTRA_MESSAGING_STYLE_USER));
        L6:
            this.mConversationTitle = r3.getCharSequence(NotificationCompat.EXTRA_CONVERSATION_TITLE);
            if (this.mConversationTitle != null) goto L9;
            this.mConversationTitle = r3.getCharSequence(NotificationCompat.EXTRA_HIDDEN_CONVERSATION_TITLE);
        L9:
            Parcelable[] r0 = r3.getParcelableArray(NotificationCompat.EXTRA_MESSAGES);
            if (r0 == null) goto L13;
            this.mMessages.addAll(Message.getMessagesFromBundleArray(r0));
        L13:
            if (r3.containsKey(NotificationCompat.EXTRA_IS_GROUP_CONVERSATION) == false) goto L16;
            this.mIsGroupConversation = Boolean.valueOf(r3.getBoolean(NotificationCompat.EXTRA_IS_GROUP_CONVERSATION));
            return;
        L16:
            return;
        L5:
            this.mUser = new Person.Builder().setName(r3.getString(NotificationCompat.EXTRA_SELF_DISPLAY_NAME)).build();
            goto L6
        }
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface NotificationVisibility {
    }

    @Retention(RetentionPolicy.SOURCE)
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public @interface StreamType {
    }

    public static abstract class Style {
        CharSequence mBigContentTitle;

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        protected Builder mBuilder;
        CharSequence mSummaryText;
        boolean mSummaryTextSet;

        private static float constrain(float r1, float r2, float r3) {
            if (r1 >= r2) goto L6;
            return r2;
        L6:
            if (r1 > r3) goto L8;
            return r1;
        L8:
            return r3;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void addCompatExtras(Bundle r1) {
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void apply(NotificationBuilderWithBuilderAccessor r1) {
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeBigContentView(NotificationBuilderWithBuilderAccessor r1) {
            return null;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeContentView(NotificationBuilderWithBuilderAccessor r1) {
            return null;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews makeHeadsUpContentView(NotificationBuilderWithBuilderAccessor r1) {
            return null;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        protected void restoreFromCompatExtras(Bundle r1) {
        }

        public Style() {
            this.mSummaryTextSet = false;
        }

        public void setBuilder(Builder r2) {
            if (this.mBuilder == r2) goto L8;
            this.mBuilder = r2;
            Builder r22 = this.mBuilder;
            if (r22 == null) goto L9;
            r22.setStyle(this);
            return;
        L9:
            return;
        }

        public Notification build() {
            Builder r0 = this.mBuilder;
            if (r0 != null) goto L7;
            return null;
        L7:
            return r0.build();
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public RemoteViews applyStandardTemplate(boolean r13, int r14, boolean r15) {
            Resources r0 = this.mBuilder.mContext.getResources();
            RemoteViews r7 = new RemoteViews(this.mBuilder.mContext.getPackageName(), r14);
            int r9 = 0;
            if (this.mBuilder.getPriority() >= (-1)) goto L5;
            boolean r142 = true;
        L7:
            if (Build.VERSION.SDK_INT < 16) goto L15;
            if (Build.VERSION.SDK_INT >= 21) goto L15;
            if (r142 == false) goto L13;
            r7.setInt(R.id.notification_background, "setBackgroundResource", R.drawable.notification_bg_low);
            r7.setInt(R.id.icon, "setBackgroundResource", R.drawable.notification_template_icon_low_bg);
            goto L15
        L13:
            r7.setInt(R.id.notification_background, "setBackgroundResource", R.drawable.notification_bg);
            r7.setInt(R.id.icon, "setBackgroundResource", R.drawable.notification_template_icon_bg);
        L15:
            if (this.mBuilder.mLargeIcon != null) goto L17;
            if (r13 == true) goto L30;
        L36:
            if (this.mBuilder.mContentTitle == null) goto L39;
            r7.setTextViewText(R.id.title, this.mBuilder.mContentTitle);
        L39:
            if (this.mBuilder.mContentText == null) goto L41;
            r7.setTextViewText(R.id.text, this.mBuilder.mContentText);
            boolean r132 = true;
        L43:
            if (Build.VERSION.SDK_INT < 21) goto L45;
        L47:
            boolean r143 = false;
        L49:
            if (this.mBuilder.mContentInfo == null) goto L53;
            r7.setTextViewText(R.id.info, this.mBuilder.mContentInfo);
            r7.setViewVisibility(R.id.info, 0);
        L51:
            r132 = true;
            r143 = true;
        L61:
            if (this.mBuilder.mSubText != null) goto L63;
        L68:
            boolean r1 = false;
        L69:
            if (r1 == false) goto L76;
            if (Build.VERSION.SDK_INT < 16) goto L76;
            if (r15 == false) goto L74;
            r7.setTextViewTextSize(R.id.text, 0, r0.getDimensionPixelSize(R.dimen.notification_subtext_size));
        L74:
            r7.setViewPadding(R.id.line1, 0, 0, 0, 0);
        L76:
            if (this.mBuilder.getWhenIfShowing() != 0) goto L78;
        L84:
            int r152 = R.id.right_side;
            if (r143 == false) goto L87;
            int r144 = 0;
        L88:
            r7.setViewVisibility(r152, r144);
            int r145 = R.id.line3;
            if (r132 == true) goto L92;
            r9 = 8;
        L92:
            r7.setViewVisibility(r145, r9);
            return r7;
        L87:
            r144 = 8;
            goto L88
        L78:
            if (this.mBuilder.mUseChronometer == true) goto L80;
        L82:
            r7.setViewVisibility(R.id.time, 0);
            r7.setLong(R.id.time, "setTime", this.mBuilder.getWhenIfShowing());
        L83:
            r143 = true;
            goto L84
        L80:
            if (Build.VERSION.SDK_INT < 16) goto L82;
            r7.setViewVisibility(R.id.chronometer, 0);
            r7.setLong(R.id.chronometer, "setBase", this.mBuilder.getWhenIfShowing() + (SystemClock.elapsedRealtime() - System.currentTimeMillis()));
            r7.setBoolean(R.id.chronometer, "setStarted", true);
            goto L83
        L63:
            if (Build.VERSION.SDK_INT < 16) goto L68;
            r7.setTextViewText(R.id.text, this.mBuilder.mSubText);
            if (this.mBuilder.mContentText == null) goto L67;
            r7.setTextViewText(R.id.text2, this.mBuilder.mContentText);
            r7.setViewVisibility(R.id.text2, 0);
            r1 = true;
            goto L69
        L67:
            r7.setViewVisibility(R.id.text2, 8);
            goto L68
        L53:
            if (this.mBuilder.mNumber > 0) goto L55;
            r7.setViewVisibility(R.id.info, 8);
            goto L61
        L55:
            if (this.mBuilder.mNumber <= r0.getInteger(R.integer.status_bar_notification_info_maxnum)) goto L57;
            r7.setTextViewText(R.id.info, r0.getString(R.string.status_bar_notification_info_overflow));
        L58:
            r7.setViewVisibility(R.id.info, 0);
            goto L51
        L57:
            r7.setTextViewText(R.id.info, NumberFormat.getIntegerInstance().format(this.mBuilder.mNumber));
            goto L58
        L45:
            if (this.mBuilder.mLargeIcon == null) goto L47;
            r143 = true;
            goto L49
        L41:
            r132 = false;
            goto L43
        L30:
            if (this.mBuilder.mNotification.icon == 0) goto L36;
            r7.setViewVisibility(R.id.icon, 0);
            if (Build.VERSION.SDK_INT < 21) goto L34;
            r7.setImageViewBitmap(R.id.icon, createIconWithBackground(this.mBuilder.mNotification.icon, r0.getDimensionPixelSize(R.dimen.notification_large_icon_width) - r0.getDimensionPixelSize(R.dimen.notification_big_circle_margin), r0.getDimensionPixelSize(R.dimen.notification_small_icon_size_as_large), this.mBuilder.getColor()));
            goto L36
        L34:
            r7.setImageViewBitmap(R.id.icon, createColoredBitmap(this.mBuilder.mNotification.icon, -1));
            goto L36
        L17:
            if (Build.VERSION.SDK_INT < 16) goto L19;
            r7.setViewVisibility(R.id.icon, 0);
            r7.setImageViewBitmap(R.id.icon, this.mBuilder.mLargeIcon);
        L20:
            if (r13 == false) goto L36;
            if (this.mBuilder.mNotification.icon == 0) goto L36;
            int r133 = r0.getDimensionPixelSize(R.dimen.notification_right_icon_size);
            int r146 = r133 - (r0.getDimensionPixelSize(R.dimen.notification_small_icon_background_padding) * 2);
            if (Build.VERSION.SDK_INT < 21) goto L26;
            r7.setImageViewBitmap(R.id.right_icon, createIconWithBackground(this.mBuilder.mNotification.icon, r133, r146, this.mBuilder.getColor()));
        L27:
            r7.setViewVisibility(R.id.right_icon, 0);
            goto L36
        L26:
            r7.setImageViewBitmap(R.id.right_icon, createColoredBitmap(this.mBuilder.mNotification.icon, -1));
            goto L27
        L19:
            r7.setViewVisibility(R.id.icon, 8);
            goto L20
        L5:
            r142 = false;
            goto L7
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public Bitmap createColoredBitmap(int r2, int r3) {
            return createColoredBitmap(r2, r3, 0);
        }

        private Bitmap createColoredBitmap(int r4, int r5, int r6) {
            Drawable r42 = this.mBuilder.mContext.getResources().getDrawable(r4);
            if (r6 != 0) goto L5;
            int r0 = r42.getIntrinsicWidth();
        L6:
            if (r6 != 0) goto L8;
            r6 = r42.getIntrinsicHeight();
        L8:
            Bitmap r1 = Bitmap.createBitmap(r0, r6, Bitmap.Config.ARGB_8888);
            r42.setBounds(0, 0, r0, r6);
            if (r5 == 0) goto L11;
            r42.mutate().setColorFilter(new PorterDuffColorFilter(r5, PorterDuff.Mode.SRC_IN));
        L11:
            r42.draw(new Canvas(r1));
            return r1;
        L5:
            r0 = r6;
            goto L6
        }

        private Bitmap createIconWithBackground(int r3, int r4, int r5, int r6) {
            int r0 = R.drawable.notification_icon_background;
            if (r6 != 0) goto L5;
            r6 = 0;
        L5:
            Bitmap r62 = createColoredBitmap(r0, r6, r4);
            Canvas r02 = new Canvas(r62);
            Drawable r32 = this.mBuilder.mContext.getResources().getDrawable(r3).mutate();
            r32.setFilterBitmap(true);
            int r42 = (r4 - r5) / 2;
            int r52 = r5 + r42;
            r32.setBounds(r42, r42, r52, r52);
            r32.setColorFilter(new PorterDuffColorFilter(-1, PorterDuff.Mode.SRC_ATOP));
            r32.draw(r02);
            return r62;
        }

        @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
        public void buildIntoRemoteViews(RemoteViews r8, RemoteViews r9) {
            hideNormalContent(r8);
            r8.removeAllViews(R.id.notification_main_column);
            r8.addView(R.id.notification_main_column, r9.clone());
            r8.setViewVisibility(R.id.notification_main_column, 0);
            if (Build.VERSION.SDK_INT < 21) goto L6;
            r8.setViewPadding(R.id.notification_main_column_container, 0, calculateTopPadding(), 0, 0);
            return;
        }

        private void hideNormalContent(RemoteViews r3) {
            r3.setViewVisibility(R.id.title, 8);
            r3.setViewVisibility(R.id.text2, 8);
            r3.setViewVisibility(R.id.text, 8);
        }

        private int calculateTopPadding() {
            Resources r0 = this.mBuilder.mContext.getResources();
            int r1 = r0.getDimensionPixelSize(R.dimen.notification_top_pad);
            int r2 = r0.getDimensionPixelSize(R.dimen.notification_top_pad_large_text);
            float r02 = (constrain(r0.getConfiguration().fontScale, 1.0f, 1.3f) - 1.0f) / 0.29999995f;
            return Math.round(((1.0f - r02) * r1) + (r02 * r2));
        }
    }

    public static final class WearableExtender implements Extender {
        private static final int DEFAULT_CONTENT_ICON_GRAVITY = 8388613;
        private static final int DEFAULT_FLAGS = 1;
        private static final int DEFAULT_GRAVITY = 80;
        private static final String EXTRA_WEARABLE_EXTENSIONS = "android.wearable.EXTENSIONS";
        private static final int FLAG_BIG_PICTURE_AMBIENT = 32;
        private static final int FLAG_CONTENT_INTENT_AVAILABLE_OFFLINE = 1;
        private static final int FLAG_HINT_AVOID_BACKGROUND_CLIPPING = 16;
        private static final int FLAG_HINT_CONTENT_INTENT_LAUNCHES_ACTIVITY = 64;
        private static final int FLAG_HINT_HIDE_ICON = 2;
        private static final int FLAG_HINT_SHOW_BACKGROUND_ONLY = 4;
        private static final int FLAG_START_SCROLL_BOTTOM = 8;
        private static final String KEY_ACTIONS = "actions";
        private static final String KEY_BACKGROUND = "background";
        private static final String KEY_BRIDGE_TAG = "bridgeTag";
        private static final String KEY_CONTENT_ACTION_INDEX = "contentActionIndex";
        private static final String KEY_CONTENT_ICON = "contentIcon";
        private static final String KEY_CONTENT_ICON_GRAVITY = "contentIconGravity";
        private static final String KEY_CUSTOM_CONTENT_HEIGHT = "customContentHeight";
        private static final String KEY_CUSTOM_SIZE_PRESET = "customSizePreset";
        private static final String KEY_DISMISSAL_ID = "dismissalId";
        private static final String KEY_DISPLAY_INTENT = "displayIntent";
        private static final String KEY_FLAGS = "flags";
        private static final String KEY_GRAVITY = "gravity";
        private static final String KEY_HINT_SCREEN_TIMEOUT = "hintScreenTimeout";
        private static final String KEY_PAGES = "pages";
        public static final int SCREEN_TIMEOUT_LONG = -1;
        public static final int SCREEN_TIMEOUT_SHORT = 0;
        public static final int SIZE_DEFAULT = 0;
        public static final int SIZE_FULL_SCREEN = 5;
        public static final int SIZE_LARGE = 4;
        public static final int SIZE_MEDIUM = 3;
        public static final int SIZE_SMALL = 2;
        public static final int SIZE_XSMALL = 1;
        public static final int UNSET_ACTION_INDEX = -1;
        private ArrayList<Action> mActions;
        private Bitmap mBackground;
        private String mBridgeTag;
        private int mContentActionIndex;
        private int mContentIcon;
        private int mContentIconGravity;
        private int mCustomContentHeight;
        private int mCustomSizePreset;
        private String mDismissalId;
        private PendingIntent mDisplayIntent;
        private int mFlags;
        private int mGravity;
        private int mHintScreenTimeout;
        private ArrayList<Notification> mPages;

        public Object clone() throws CloneNotSupportedException {
            return clone();
        }

        public WearableExtender() {
            this.mActions = new ArrayList();
            this.mFlags = 1;
            this.mPages = new ArrayList();
            this.mContentIconGravity = 8388613;
            this.mContentActionIndex = -1;
            this.mCustomSizePreset = 0;
            this.mGravity = 80;
        }

        public WearableExtender(Notification r12) {
            this.mActions = new ArrayList();
            this.mFlags = 1;
            this.mPages = new ArrayList();
            this.mContentIconGravity = 8388613;
            this.mContentActionIndex = -1;
            this.mCustomSizePreset = 0;
            this.mGravity = 80;
            Bundle r122 = NotificationCompat.getExtras(r12);
            if (r122 == null) goto L5;
            Bundle r123 = r122.getBundle(EXTRA_WEARABLE_EXTENSIONS);
        L6:
            if (r123 == null) goto L30;
            ArrayList r5 = r123.getParcelableArrayList(KEY_ACTIONS);
            if (Build.VERSION.SDK_INT < 16) goto L21;
            if (r5 == null) goto L21;
            Action[] r6 = new Action[r5.size()];
            int r8 = 0;
        L12:
            if (r8 >= r6.length) goto L20;
            if (Build.VERSION.SDK_INT < 20) goto L17;
            r6[r8] = NotificationCompat.getActionCompatFromAction((Notification.Action) r5.get(r8));
        L19:
            r8 = r8 + 1;
            goto L12
        L17:
            if (Build.VERSION.SDK_INT < 16) goto L19;
            r6[r8] = NotificationCompatJellybean.getActionFromBundle((Bundle) r5.get(r8));
            goto L19
        L20:
            Collections.addAll(this.mActions, r6);
        L21:
            this.mFlags = r123.getInt(KEY_FLAGS, 1);
            this.mDisplayIntent = (PendingIntent) r123.getParcelable(KEY_DISPLAY_INTENT);
            Notification[] r0 = NotificationCompat.getNotificationArrayFromBundle(r123, KEY_PAGES);
            if (r0 == null) goto L24;
            Collections.addAll(this.mPages, r0);
        L24:
            this.mBackground = (Bitmap) r123.getParcelable(KEY_BACKGROUND);
            this.mContentIcon = r123.getInt(KEY_CONTENT_ICON);
            this.mContentIconGravity = r123.getInt(KEY_CONTENT_ICON_GRAVITY, 8388613);
            this.mContentActionIndex = r123.getInt(KEY_CONTENT_ACTION_INDEX, -1);
            this.mCustomSizePreset = r123.getInt(KEY_CUSTOM_SIZE_PRESET, 0);
            this.mCustomContentHeight = r123.getInt(KEY_CUSTOM_CONTENT_HEIGHT);
            this.mGravity = r123.getInt(KEY_GRAVITY, 80);
            this.mHintScreenTimeout = r123.getInt(KEY_HINT_SCREEN_TIMEOUT);
            this.mDismissalId = r123.getString(KEY_DISMISSAL_ID);
            this.mBridgeTag = r123.getString(KEY_BRIDGE_TAG);
            return;
        L30:
            return;
        L5:
            r123 = null;
            goto L6
        }

        @Override
        public Builder extend(Builder r9) {
            Bundle r0 = new Bundle();
            if (this.mActions.isEmpty() == false) goto L5;
        L17:
            int r1 = this.mFlags;
            if (r1 == 1) goto L20;
            r0.putInt(KEY_FLAGS, r1);
        L20:
            PendingIntent r12 = this.mDisplayIntent;
            if (r12 == null) goto L24;
            r0.putParcelable(KEY_DISPLAY_INTENT, r12);
        L24:
            if (this.mPages.isEmpty() == true) goto L26;
            ArrayList<Notification> r13 = this.mPages;
            r0.putParcelableArray(KEY_PAGES, (Parcelable[]) r13.toArray(new Notification[r13.size()]));
        L26:
            Bitmap r14 = this.mBackground;
            if (r14 == null) goto L29;
            r0.putParcelable(KEY_BACKGROUND, r14);
        L29:
            int r15 = this.mContentIcon;
            if (r15 == 0) goto L32;
            r0.putInt(KEY_CONTENT_ICON, r15);
        L32:
            int r16 = this.mContentIconGravity;
            if (r16 == 8388613) goto L35;
            r0.putInt(KEY_CONTENT_ICON_GRAVITY, r16);
        L35:
            int r17 = this.mContentActionIndex;
            if (r17 == (-1)) goto L38;
            r0.putInt(KEY_CONTENT_ACTION_INDEX, r17);
        L38:
            int r18 = this.mCustomSizePreset;
            if (r18 == 0) goto L41;
            r0.putInt(KEY_CUSTOM_SIZE_PRESET, r18);
        L41:
            int r19 = this.mCustomContentHeight;
            if (r19 == 0) goto L44;
            r0.putInt(KEY_CUSTOM_CONTENT_HEIGHT, r19);
        L44:
            int r110 = this.mGravity;
            if (r110 == 80) goto L47;
            r0.putInt(KEY_GRAVITY, r110);
        L47:
            int r111 = this.mHintScreenTimeout;
            if (r111 == 0) goto L50;
            r0.putInt(KEY_HINT_SCREEN_TIMEOUT, r111);
        L50:
            String r112 = this.mDismissalId;
            if (r112 == null) goto L53;
            r0.putString(KEY_DISMISSAL_ID, r112);
        L53:
            String r113 = this.mBridgeTag;
            if (r113 == null) goto L56;
            r0.putString(KEY_BRIDGE_TAG, r113);
        L56:
            r9.getExtras().putBundle(EXTRA_WEARABLE_EXTENSIONS, r0);
            return r9;
        L5:
            if (Build.VERSION.SDK_INT < 16) goto L16;
            ArrayList<? extends Parcelable> r114 = new ArrayList(this.mActions.size());
            Iterator<Action> r4 = this.mActions.iterator();
        L8:
            if (r4.hasNext() == false) goto L15;
            Action r5 = r4.next();
            if (Build.VERSION.SDK_INT >= 20) goto L11;
            if (Build.VERSION.SDK_INT < 16) goto L8;
            r114.add(NotificationCompatJellybean.getBundleForAction(r5));
            goto L8
        L11:
            r114.add(getActionFromActionCompat(r5));
            goto L8
        L15:
            r0.putParcelableArrayList(KEY_ACTIONS, r114);
            goto L17
        L16:
            r0.putParcelableArrayList(KEY_ACTIONS, null);
            goto L17
        }

        @RequiresApi(20)
        private static Notification.Action getActionFromActionCompat(Action r4) {
            Notification.Action.Builder r0 = new Notification.Action.Builder(r4.getIcon(), r4.getTitle(), r4.getActionIntent());
            if (r4.getExtras() == null) goto L5;
            Bundle r1 = new Bundle(r4.getExtras());
        L6:
            r1.putBoolean("android.support.allowGeneratedReplies", r4.getAllowGeneratedReplies());
            if (Build.VERSION.SDK_INT < 24) goto L9;
            r0.setAllowGeneratedReplies(r4.getAllowGeneratedReplies());
        L9:
            r0.addExtras(r1);
            RemoteInput[] r42 = r4.getRemoteInputs();
            if (r42 == null) goto L15;
            android.app.RemoteInput[] r43 = RemoteInput.fromCompat(r42);
            int r12 = r43.length;
            int r2 = 0;
        L12:
            if (r2 >= r12) goto L15;
            r0.addRemoteInput(r43[r2]);
            r2 = r2 + 1;
        L15:
            return r0.build();
        L5:
            r1 = new Bundle();
            goto L6
        }

        public WearableExtender clone() {
            WearableExtender r0 = new WearableExtender();
            r0.mActions = new ArrayList(this.mActions);
            r0.mFlags = this.mFlags;
            r0.mDisplayIntent = this.mDisplayIntent;
            r0.mPages = new ArrayList(this.mPages);
            r0.mBackground = this.mBackground;
            r0.mContentIcon = this.mContentIcon;
            r0.mContentIconGravity = this.mContentIconGravity;
            r0.mContentActionIndex = this.mContentActionIndex;
            r0.mCustomSizePreset = this.mCustomSizePreset;
            r0.mCustomContentHeight = this.mCustomContentHeight;
            r0.mGravity = this.mGravity;
            r0.mHintScreenTimeout = this.mHintScreenTimeout;
            r0.mDismissalId = this.mDismissalId;
            r0.mBridgeTag = this.mBridgeTag;
            return r0;
        }

        public WearableExtender addAction(Action r2) {
            this.mActions.add(r2);
            return this;
        }

        public WearableExtender addActions(List<Action> r2) {
            this.mActions.addAll(r2);
            return this;
        }

        public WearableExtender clearActions() {
            this.mActions.clear();
            return this;
        }

        public List<Action> getActions() {
            return this.mActions;
        }

        public WearableExtender setDisplayIntent(PendingIntent r1) {
            this.mDisplayIntent = r1;
            return this;
        }

        public PendingIntent getDisplayIntent() {
            return this.mDisplayIntent;
        }

        public WearableExtender addPage(Notification r2) {
            this.mPages.add(r2);
            return this;
        }

        public WearableExtender addPages(List<Notification> r2) {
            this.mPages.addAll(r2);
            return this;
        }

        public WearableExtender clearPages() {
            this.mPages.clear();
            return this;
        }

        public List<Notification> getPages() {
            return this.mPages;
        }

        public WearableExtender setBackground(Bitmap r1) {
            this.mBackground = r1;
            return this;
        }

        public Bitmap getBackground() {
            return this.mBackground;
        }

        @Deprecated
        public WearableExtender setContentIcon(int r1) {
            this.mContentIcon = r1;
            return this;
        }

        @Deprecated
        public int getContentIcon() {
            return this.mContentIcon;
        }

        @Deprecated
        public WearableExtender setContentIconGravity(int r1) {
            this.mContentIconGravity = r1;
            return this;
        }

        @Deprecated
        public int getContentIconGravity() {
            return this.mContentIconGravity;
        }

        public WearableExtender setContentAction(int r1) {
            this.mContentActionIndex = r1;
            return this;
        }

        public int getContentAction() {
            return this.mContentActionIndex;
        }

        @Deprecated
        public WearableExtender setGravity(int r1) {
            this.mGravity = r1;
            return this;
        }

        @Deprecated
        public int getGravity() {
            return this.mGravity;
        }

        @Deprecated
        public WearableExtender setCustomSizePreset(int r1) {
            this.mCustomSizePreset = r1;
            return this;
        }

        @Deprecated
        public int getCustomSizePreset() {
            return this.mCustomSizePreset;
        }

        @Deprecated
        public WearableExtender setCustomContentHeight(int r1) {
            this.mCustomContentHeight = r1;
            return this;
        }

        @Deprecated
        public int getCustomContentHeight() {
            return this.mCustomContentHeight;
        }

        public WearableExtender setStartScrollBottom(boolean r2) {
            setFlag(8, r2);
            return this;
        }

        public boolean getStartScrollBottom() {
            if ((this.mFlags & 8) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        public WearableExtender setContentIntentAvailableOffline(boolean r2) {
            setFlag(1, r2);
            return this;
        }

        public boolean getContentIntentAvailableOffline() {
            if ((this.mFlags & 1) != 0) goto L7;
            return false;
        L7:
            return true;
        }

        @Deprecated
        public WearableExtender setHintHideIcon(boolean r2) {
            setFlag(2, r2);
            return this;
        }

        @Deprecated
        public boolean getHintHideIcon() {
            if ((this.mFlags & 2) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Deprecated
        public WearableExtender setHintShowBackgroundOnly(boolean r2) {
            setFlag(4, r2);
            return this;
        }

        @Deprecated
        public boolean getHintShowBackgroundOnly() {
            if ((this.mFlags & 4) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Deprecated
        public WearableExtender setHintAvoidBackgroundClipping(boolean r2) {
            setFlag(16, r2);
            return this;
        }

        @Deprecated
        public boolean getHintAvoidBackgroundClipping() {
            if ((this.mFlags & 16) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        @Deprecated
        public WearableExtender setHintScreenTimeout(int r1) {
            this.mHintScreenTimeout = r1;
            return this;
        }

        @Deprecated
        public int getHintScreenTimeout() {
            return this.mHintScreenTimeout;
        }

        public WearableExtender setHintAmbientBigPicture(boolean r2) {
            setFlag(32, r2);
            return this;
        }

        public boolean getHintAmbientBigPicture() {
            if ((this.mFlags & 32) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        public WearableExtender setHintContentIntentLaunchesActivity(boolean r2) {
            setFlag(64, r2);
            return this;
        }

        public boolean getHintContentIntentLaunchesActivity() {
            if ((this.mFlags & 64) == 0) goto L5;
            return true;
        L5:
            return false;
        }

        public WearableExtender setDismissalId(String r1) {
            this.mDismissalId = r1;
            return this;
        }

        public String getDismissalId() {
            return this.mDismissalId;
        }

        public WearableExtender setBridgeTag(String r1) {
            this.mBridgeTag = r1;
            return this;
        }

        public String getBridgeTag() {
            return this.mBridgeTag;
        }

        private void setFlag(int r1, boolean r2) {
            if (r2 == false) goto L4;
            this.mFlags = r1 | this.mFlags;
            return;
        L4:
            int r22 = this.mFlags;
            this.mFlags = (~r1) & r22;
        }
    }

    static Notification[] getNotificationArrayFromBundle(Bundle r4, String r5) {
        Parcelable[] r0 = r4.getParcelableArray(r5);
        if ((r0 instanceof Notification[]) == true) goto L13;
        if (r0 == null) goto L13;
        Notification[] r1 = new Notification[r0.length];
        int r2 = 0;
    L8:
        if (r2 >= r0.length) goto L10;
        r1[r2] = (Notification) r0[r2];
        r2 = r2 + 1;
        goto L8
    L10:
        r4.putParcelableArray(r5, r1);
        return r1;
    L13:
        return (Notification[]) r0;
    }

    @Nullable
    public static Bundle getExtras(Notification r2) {
        if (Build.VERSION.SDK_INT < 19) goto L7;
        return r2.extras;
    L7:
        if (Build.VERSION.SDK_INT >= 16) goto L9;
        return null;
    L9:
        return NotificationCompatJellybean.getExtras(r2);
    }

    public static int getActionCount(Notification r3) {
        if (Build.VERSION.SDK_INT < 19) goto L9;
        if (r3.actions != null) goto L7;
        return 0;
    L7:
        return r3.actions.length;
    L9:
        if (Build.VERSION.SDK_INT >= 16) goto L11;
        return 0;
    L11:
        return NotificationCompatJellybean.getActionCount(r3);
    }

    public static Action getAction(Notification r3, int r4) {
        if (Build.VERSION.SDK_INT >= 20) goto L5;
        Bundle r2 = null;
        if (Build.VERSION.SDK_INT < 19) goto L14;
        Notification.Action r0 = r3.actions[r4];
        SparseArray r32 = r3.extras.getSparseParcelableArray(NotificationCompatExtras.EXTRA_ACTION_EXTRAS);
        if (r32 == null) goto L12;
        r2 = (Bundle) r32.get(r4);
    L12:
        return NotificationCompatJellybean.readAction(r0.icon, r0.title, r0.actionIntent, r2);
    L14:
        if (Build.VERSION.SDK_INT >= 16) goto L16;
        return null;
    L16:
        return NotificationCompatJellybean.getAction(r3, r4);
    L5:
        return getActionCompatFromAction(r3.actions[r4]);
    }

    @RequiresApi(20)
    static Action getActionCompatFromAction(Notification.Action r14) {
        android.app.RemoteInput[] r0 = r14.getRemoteInputs();
        if (r0 != null) goto L5;
        RemoteInput[] r9 = null;
    L11:
        if (Build.VERSION.SDK_INT >= 24) goto L13;
        boolean r02 = r14.getExtras().getBoolean("android.support.allowGeneratedReplies");
    L20:
        boolean r11 = r02;
        boolean r13 = r14.getExtras().getBoolean("android.support.action.showsUserInterface", true);
        if (Build.VERSION.SDK_INT < 28) goto L23;
        int r03 = r14.getSemanticAction();
    L25:
        return new Action(r14.icon, r14.title, r14.actionIntent, r14.getExtras(), r9, null, r11, r03, r13);
    L23:
        r03 = r14.getExtras().getInt("android.support.action.semanticAction", 0);
        goto L25
    L13:
        if (r14.getExtras().getBoolean("android.support.allowGeneratedReplies") == false) goto L15;
    L18:
        r02 = true;
        goto L20
    L15:
        if (r14.getAllowGeneratedReplies() == true) goto L18;
        r02 = false;
        goto L20
    L5:
        RemoteInput[] r2 = new RemoteInput[r0.length];
        int r3 = 0;
    L7:
        if (r3 >= r0.length) goto L9;
        android.app.RemoteInput r4 = r0[r3];
        r2[r3] = new RemoteInput(r4.getResultKey(), r4.getLabel(), r4.getChoices(), r4.getAllowFreeFormInput(), r4.getExtras(), null);
        r3 = r3 + 1;
        goto L7
    L9:
        r9 = r2;
        goto L11
    }

    @RequiresApi(21)
    public static List<Action> getInvisibleActions(Notification r3) {
        ArrayList r0 = new ArrayList();
        Bundle r32 = r3.extras.getBundle("android.car.EXTENSIONS");
        if (r32 != null) goto L5;
        return r0;
    L5:
        Bundle r33 = r32.getBundle("invisible_actions");
        if (r33 == null) goto L11;
        int r1 = 0;
    L9:
        if (r1 >= r33.size()) goto L11;
        r0.add(NotificationCompatJellybean.getActionFromBundle(r33.getBundle(Integer.toString(r1))));
        r1 = r1 + 1;
    L11:
        return r0;
    }

    @RequiresApi(19)
    public static CharSequence getContentTitle(Notification r1) {
        return r1.extras.getCharSequence(EXTRA_TITLE);
    }

    public static String getCategory(Notification r2) {
        if (Build.VERSION.SDK_INT >= 21) goto L5;
        return null;
    L5:
        return r2.category;
    }

    public static boolean getLocalOnly(Notification r4) {
        if (Build.VERSION.SDK_INT < 20) goto L9;
        if ((r4.flags & 256) == 0) goto L17;
        return true;
    L17:
        return false;
    L9:
        if (Build.VERSION.SDK_INT < 19) goto L13;
        return r4.extras.getBoolean(NotificationCompatExtras.EXTRA_LOCAL_ONLY);
    L13:
        if (Build.VERSION.SDK_INT >= 16) goto L15;
        return false;
    L15:
        return NotificationCompatJellybean.getExtras(r4).getBoolean(NotificationCompatExtras.EXTRA_LOCAL_ONLY);
    }

    public static String getGroup(Notification r3) {
        if (Build.VERSION.SDK_INT < 20) goto L7;
        return r3.getGroup();
    L7:
        if (Build.VERSION.SDK_INT < 19) goto L11;
        return r3.extras.getString(NotificationCompatExtras.EXTRA_GROUP_KEY);
    L11:
        if (Build.VERSION.SDK_INT >= 16) goto L13;
        return null;
    L13:
        return NotificationCompatJellybean.getExtras(r3).getString(NotificationCompatExtras.EXTRA_GROUP_KEY);
    }

    public static boolean isGroupSummary(Notification r4) {
        if (Build.VERSION.SDK_INT < 20) goto L9;
        if ((r4.flags & 512) == 0) goto L17;
        return true;
    L17:
        return false;
    L9:
        if (Build.VERSION.SDK_INT < 19) goto L13;
        return r4.extras.getBoolean(NotificationCompatExtras.EXTRA_GROUP_SUMMARY);
    L13:
        if (Build.VERSION.SDK_INT >= 16) goto L15;
        return false;
    L15:
        return NotificationCompatJellybean.getExtras(r4).getBoolean(NotificationCompatExtras.EXTRA_GROUP_SUMMARY);
    }

    public static String getSortKey(Notification r3) {
        if (Build.VERSION.SDK_INT < 20) goto L7;
        return r3.getSortKey();
    L7:
        if (Build.VERSION.SDK_INT < 19) goto L11;
        return r3.extras.getString(NotificationCompatExtras.EXTRA_SORT_KEY);
    L11:
        if (Build.VERSION.SDK_INT >= 16) goto L13;
        return null;
    L13:
        return NotificationCompatJellybean.getExtras(r3).getString(NotificationCompatExtras.EXTRA_SORT_KEY);
    }

    public static String getChannelId(Notification r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return null;
    L5:
        return r2.getChannelId();
    }

    public static long getTimeoutAfter(Notification r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return 0;
    L5:
        return r2.getTimeoutAfter();
    }

    public static int getBadgeIconType(Notification r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return 0;
    L5:
        return r2.getBadgeIconType();
    }

    public static String getShortcutId(Notification r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return null;
    L5:
        return r2.getShortcutId();
    }

    public static int getGroupAlertBehavior(Notification r2) {
        if (Build.VERSION.SDK_INT >= 26) goto L5;
        return 0;
    L5:
        return r2.getGroupAlertBehavior();
    }

    @Deprecated
    public NotificationCompat() {
    }
}
