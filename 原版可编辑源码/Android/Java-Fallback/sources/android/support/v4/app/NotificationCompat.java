package android.support.v4.app;

public class NotificationCompat {
    public static final int BADGE_ICON_LARGE = 2;
    public static final int BADGE_ICON_NONE = 0;
    public static final int BADGE_ICON_SMALL = 1;
    public static final java.lang.String CATEGORY_ALARM = "alarm";
    public static final java.lang.String CATEGORY_CALL = "call";
    public static final java.lang.String CATEGORY_EMAIL = "email";
    public static final java.lang.String CATEGORY_ERROR = "err";
    public static final java.lang.String CATEGORY_EVENT = "event";
    public static final java.lang.String CATEGORY_MESSAGE = "msg";
    public static final java.lang.String CATEGORY_PROGRESS = "progress";
    public static final java.lang.String CATEGORY_PROMO = "promo";
    public static final java.lang.String CATEGORY_RECOMMENDATION = "recommendation";
    public static final java.lang.String CATEGORY_REMINDER = "reminder";
    public static final java.lang.String CATEGORY_SERVICE = "service";
    public static final java.lang.String CATEGORY_SOCIAL = "social";
    public static final java.lang.String CATEGORY_STATUS = "status";
    public static final java.lang.String CATEGORY_SYSTEM = "sys";
    public static final java.lang.String CATEGORY_TRANSPORT = "transport";
    public static final int COLOR_DEFAULT = 0;
    public static final int DEFAULT_ALL = -1;
    public static final int DEFAULT_LIGHTS = 4;
    public static final int DEFAULT_SOUND = 1;
    public static final int DEFAULT_VIBRATE = 2;
    public static final java.lang.String EXTRA_AUDIO_CONTENTS_URI = "android.audioContents";
    public static final java.lang.String EXTRA_BACKGROUND_IMAGE_URI = "android.backgroundImageUri";
    public static final java.lang.String EXTRA_BIG_TEXT = "android.bigText";
    public static final java.lang.String EXTRA_COMPACT_ACTIONS = "android.compactActions";
    public static final java.lang.String EXTRA_CONVERSATION_TITLE = "android.conversationTitle";
    public static final java.lang.String EXTRA_HIDDEN_CONVERSATION_TITLE = "android.hiddenConversationTitle";
    public static final java.lang.String EXTRA_INFO_TEXT = "android.infoText";
    public static final java.lang.String EXTRA_IS_GROUP_CONVERSATION = "android.isGroupConversation";
    public static final java.lang.String EXTRA_LARGE_ICON = "android.largeIcon";
    public static final java.lang.String EXTRA_LARGE_ICON_BIG = "android.largeIcon.big";
    public static final java.lang.String EXTRA_MEDIA_SESSION = "android.mediaSession";
    public static final java.lang.String EXTRA_MESSAGES = "android.messages";
    public static final java.lang.String EXTRA_MESSAGING_STYLE_USER = "android.messagingStyleUser";
    public static final java.lang.String EXTRA_PEOPLE = "android.people";
    public static final java.lang.String EXTRA_PICTURE = "android.picture";
    public static final java.lang.String EXTRA_PROGRESS = "android.progress";
    public static final java.lang.String EXTRA_PROGRESS_INDETERMINATE = "android.progressIndeterminate";
    public static final java.lang.String EXTRA_PROGRESS_MAX = "android.progressMax";
    public static final java.lang.String EXTRA_REMOTE_INPUT_HISTORY = "android.remoteInputHistory";
    public static final java.lang.String EXTRA_SELF_DISPLAY_NAME = "android.selfDisplayName";
    public static final java.lang.String EXTRA_SHOW_CHRONOMETER = "android.showChronometer";
    public static final java.lang.String EXTRA_SHOW_WHEN = "android.showWhen";
    public static final java.lang.String EXTRA_SMALL_ICON = "android.icon";
    public static final java.lang.String EXTRA_SUB_TEXT = "android.subText";
    public static final java.lang.String EXTRA_SUMMARY_TEXT = "android.summaryText";
    public static final java.lang.String EXTRA_TEMPLATE = "android.template";
    public static final java.lang.String EXTRA_TEXT = "android.text";
    public static final java.lang.String EXTRA_TEXT_LINES = "android.textLines";
    public static final java.lang.String EXTRA_TITLE = "android.title";
    public static final java.lang.String EXTRA_TITLE_BIG = "android.title.big";
    public static final int FLAG_AUTO_CANCEL = 16;
    public static final int FLAG_FOREGROUND_SERVICE = 64;
    public static final int FLAG_GROUP_SUMMARY = 512;

    @java.lang.Deprecated
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
        static final java.lang.String EXTRA_SEMANTIC_ACTION = "android.support.action.semanticAction";
        static final java.lang.String EXTRA_SHOWS_USER_INTERFACE = "android.support.action.showsUserInterface";
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
        public android.app.PendingIntent actionIntent;
        public int icon;
        private boolean mAllowGeneratedReplies;
        private final android.support.v4.app.RemoteInput[] mDataOnlyRemoteInputs;
        final android.os.Bundle mExtras;
        private final android.support.v4.app.RemoteInput[] mRemoteInputs;
        private final int mSemanticAction;
        boolean mShowsUserInterface;
        public java.lang.CharSequence title;

        public static final class Builder {
            private boolean mAllowGeneratedReplies;
            private final android.os.Bundle mExtras;
            private final int mIcon;
            private final android.app.PendingIntent mIntent;
            private java.util.ArrayList<android.support.v4.app.RemoteInput> mRemoteInputs;
            private int mSemanticAction;
            private boolean mShowsUserInterface;
            private final java.lang.CharSequence mTitle;

            public Builder(int r10, java.lang.CharSequence r11, android.app.PendingIntent r12) {
                    r9 = this;
                    android.os.Bundle r4 = new android.os.Bundle
                    r4.<init>()
                    r5 = 0
                    r6 = 1
                    r7 = 0
                    r8 = 1
                    r0 = r9
                    r1 = r10
                    r2 = r11
                    r3 = r12
                    r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                    return
            }

            private Builder(int r2, java.lang.CharSequence r3, android.app.PendingIntent r4, android.os.Bundle r5, android.support.v4.app.RemoteInput[] r6, boolean r7, int r8, boolean r9) {
                    r1 = this;
                    r1.<init>()
                    r0 = 1
                    r1.mAllowGeneratedReplies = r0
                    r1.mShowsUserInterface = r0
                    r1.mIcon = r2
                    java.lang.CharSequence r2 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r3)
                    r1.mTitle = r2
                    r1.mIntent = r4
                    r1.mExtras = r5
                    if (r6 != 0) goto L18
                    r2 = 0
                    goto L21
                L18:
                    java.util.ArrayList r2 = new java.util.ArrayList
                    java.util.List r3 = java.util.Arrays.asList(r6)
                    r2.<init>(r3)
                L21:
                    r1.mRemoteInputs = r2
                    r1.mAllowGeneratedReplies = r7
                    r1.mSemanticAction = r8
                    r1.mShowsUserInterface = r9
                    return
            }

            public Builder(android.support.v4.app.NotificationCompat.Action r10) {
                    r9 = this;
                    int r1 = r10.icon
                    java.lang.CharSequence r2 = r10.title
                    android.app.PendingIntent r3 = r10.actionIntent
                    android.os.Bundle r4 = new android.os.Bundle
                    android.os.Bundle r0 = r10.mExtras
                    r4.<init>(r0)
                    android.support.v4.app.RemoteInput[] r5 = r10.getRemoteInputs()
                    boolean r6 = r10.getAllowGeneratedReplies()
                    int r7 = r10.getSemanticAction()
                    boolean r8 = r10.mShowsUserInterface
                    r0 = r9
                    r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                    return
            }

            public android.support.v4.app.NotificationCompat.Action.Builder addExtras(android.os.Bundle r2) {
                    r1 = this;
                    if (r2 == 0) goto L7
                    android.os.Bundle r0 = r1.mExtras
                    r0.putAll(r2)
                L7:
                    return r1
            }

            public android.support.v4.app.NotificationCompat.Action.Builder addRemoteInput(android.support.v4.app.RemoteInput r2) {
                    r1 = this;
                    java.util.ArrayList<android.support.v4.app.RemoteInput> r0 = r1.mRemoteInputs
                    if (r0 != 0) goto Lb
                    java.util.ArrayList r0 = new java.util.ArrayList
                    r0.<init>()
                    r1.mRemoteInputs = r0
                Lb:
                    java.util.ArrayList<android.support.v4.app.RemoteInput> r0 = r1.mRemoteInputs
                    r0.add(r2)
                    return r1
            }

            public android.support.v4.app.NotificationCompat.Action build() {
                    r14 = this;
                    java.util.ArrayList r0 = new java.util.ArrayList
                    r0.<init>()
                    java.util.ArrayList r1 = new java.util.ArrayList
                    r1.<init>()
                    java.util.ArrayList<android.support.v4.app.RemoteInput> r2 = r14.mRemoteInputs
                    if (r2 == 0) goto L2c
                    java.util.Iterator r2 = r2.iterator()
                L12:
                    boolean r3 = r2.hasNext()
                    if (r3 == 0) goto L2c
                    java.lang.Object r3 = r2.next()
                    android.support.v4.app.RemoteInput r3 = (android.support.v4.app.RemoteInput) r3
                    boolean r4 = r3.isDataOnly()
                    if (r4 == 0) goto L28
                    r0.add(r3)
                    goto L12
                L28:
                    r1.add(r3)
                    goto L12
                L2c:
                    boolean r2 = r0.isEmpty()
                    r3 = 0
                    if (r2 == 0) goto L35
                    r10 = r3
                    goto L42
                L35:
                    int r2 = r0.size()
                    android.support.v4.app.RemoteInput[] r2 = new android.support.v4.app.RemoteInput[r2]
                    java.lang.Object[] r0 = r0.toArray(r2)
                    android.support.v4.app.RemoteInput[] r0 = (android.support.v4.app.RemoteInput[]) r0
                    r10 = r0
                L42:
                    boolean r0 = r1.isEmpty()
                    if (r0 == 0) goto L49
                    goto L56
                L49:
                    int r0 = r1.size()
                    android.support.v4.app.RemoteInput[] r0 = new android.support.v4.app.RemoteInput[r0]
                    java.lang.Object[] r0 = r1.toArray(r0)
                    r3 = r0
                    android.support.v4.app.RemoteInput[] r3 = (android.support.v4.app.RemoteInput[]) r3
                L56:
                    r9 = r3
                    android.support.v4.app.NotificationCompat$Action r0 = new android.support.v4.app.NotificationCompat$Action
                    int r5 = r14.mIcon
                    java.lang.CharSequence r6 = r14.mTitle
                    android.app.PendingIntent r7 = r14.mIntent
                    android.os.Bundle r8 = r14.mExtras
                    boolean r11 = r14.mAllowGeneratedReplies
                    int r12 = r14.mSemanticAction
                    boolean r13 = r14.mShowsUserInterface
                    r4 = r0
                    r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13)
                    return r0
            }

            public android.support.v4.app.NotificationCompat.Action.Builder extend(android.support.v4.app.NotificationCompat.Action.Extender r1) {
                    r0 = this;
                    r1.extend(r0)
                    return r0
            }

            public android.os.Bundle getExtras() {
                    r1 = this;
                    android.os.Bundle r0 = r1.mExtras
                    return r0
            }

            public android.support.v4.app.NotificationCompat.Action.Builder setAllowGeneratedReplies(boolean r1) {
                    r0 = this;
                    r0.mAllowGeneratedReplies = r1
                    return r0
            }

            public android.support.v4.app.NotificationCompat.Action.Builder setSemanticAction(int r1) {
                    r0 = this;
                    r0.mSemanticAction = r1
                    return r0
            }

            public android.support.v4.app.NotificationCompat.Action.Builder setShowsUserInterface(boolean r1) {
                    r0 = this;
                    r0.mShowsUserInterface = r1
                    return r0
            }
        }

        public interface Extender {
            android.support.v4.app.NotificationCompat.Action.Builder extend(android.support.v4.app.NotificationCompat.Action.Builder r1);
        }

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface SemanticAction {
        }

        public static final class WearableExtender implements android.support.v4.app.NotificationCompat.Action.Extender {
            private static final int DEFAULT_FLAGS = 1;
            private static final java.lang.String EXTRA_WEARABLE_EXTENSIONS = "android.wearable.EXTENSIONS";
            private static final int FLAG_AVAILABLE_OFFLINE = 1;
            private static final int FLAG_HINT_DISPLAY_INLINE = 4;
            private static final int FLAG_HINT_LAUNCHES_ACTIVITY = 2;
            private static final java.lang.String KEY_CANCEL_LABEL = "cancelLabel";
            private static final java.lang.String KEY_CONFIRM_LABEL = "confirmLabel";
            private static final java.lang.String KEY_FLAGS = "flags";
            private static final java.lang.String KEY_IN_PROGRESS_LABEL = "inProgressLabel";
            private java.lang.CharSequence mCancelLabel;
            private java.lang.CharSequence mConfirmLabel;
            private int mFlags;
            private java.lang.CharSequence mInProgressLabel;

            public WearableExtender() {
                    r1 = this;
                    r1.<init>()
                    r0 = 1
                    r1.mFlags = r0
                    return
            }

            public WearableExtender(android.support.v4.app.NotificationCompat.Action r3) {
                    r2 = this;
                    r2.<init>()
                    r0 = 1
                    r2.mFlags = r0
                    android.os.Bundle r3 = r3.getExtras()
                    java.lang.String r1 = "android.wearable.EXTENSIONS"
                    android.os.Bundle r3 = r3.getBundle(r1)
                    if (r3 == 0) goto L32
                    java.lang.String r1 = "flags"
                    int r0 = r3.getInt(r1, r0)
                    r2.mFlags = r0
                    java.lang.String r0 = "inProgressLabel"
                    java.lang.CharSequence r0 = r3.getCharSequence(r0)
                    r2.mInProgressLabel = r0
                    java.lang.String r0 = "confirmLabel"
                    java.lang.CharSequence r0 = r3.getCharSequence(r0)
                    r2.mConfirmLabel = r0
                    java.lang.String r0 = "cancelLabel"
                    java.lang.CharSequence r3 = r3.getCharSequence(r0)
                    r2.mCancelLabel = r3
                L32:
                    return
            }

            private void setFlag(int r1, boolean r2) {
                    r0 = this;
                    if (r2 == 0) goto L8
                    int r2 = r0.mFlags
                    r1 = r1 | r2
                    r0.mFlags = r1
                    goto Le
                L8:
                    int r2 = r0.mFlags
                    int r1 = ~r1
                    r1 = r1 & r2
                    r0.mFlags = r1
                Le:
                    return
            }

            public android.support.v4.app.NotificationCompat.Action.WearableExtender clone() {
                    r2 = this;
                    android.support.v4.app.NotificationCompat$Action$WearableExtender r0 = new android.support.v4.app.NotificationCompat$Action$WearableExtender
                    r0.<init>()
                    int r1 = r2.mFlags
                    r0.mFlags = r1
                    java.lang.CharSequence r1 = r2.mInProgressLabel
                    r0.mInProgressLabel = r1
                    java.lang.CharSequence r1 = r2.mConfirmLabel
                    r0.mConfirmLabel = r1
                    java.lang.CharSequence r1 = r2.mCancelLabel
                    r0.mCancelLabel = r1
                    return r0
            }

            public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                    r1 = this;
                    android.support.v4.app.NotificationCompat$Action$WearableExtender r0 = r1.clone()
                    return r0
            }

            @Override
            public android.support.v4.app.NotificationCompat.Action.Builder extend(android.support.v4.app.NotificationCompat.Action.Builder r4) {
                    r3 = this;
                    android.os.Bundle r0 = new android.os.Bundle
                    r0.<init>()
                    int r1 = r3.mFlags
                    r2 = 1
                    if (r1 == r2) goto Lf
                    java.lang.String r2 = "flags"
                    r0.putInt(r2, r1)
                Lf:
                    java.lang.CharSequence r1 = r3.mInProgressLabel
                    if (r1 == 0) goto L18
                    java.lang.String r2 = "inProgressLabel"
                    r0.putCharSequence(r2, r1)
                L18:
                    java.lang.CharSequence r1 = r3.mConfirmLabel
                    if (r1 == 0) goto L21
                    java.lang.String r2 = "confirmLabel"
                    r0.putCharSequence(r2, r1)
                L21:
                    java.lang.CharSequence r1 = r3.mCancelLabel
                    if (r1 == 0) goto L2a
                    java.lang.String r2 = "cancelLabel"
                    r0.putCharSequence(r2, r1)
                L2a:
                    android.os.Bundle r1 = r4.getExtras()
                    java.lang.String r2 = "android.wearable.EXTENSIONS"
                    r1.putBundle(r2, r0)
                    return r4
            }

            @java.lang.Deprecated
            public java.lang.CharSequence getCancelLabel() {
                    r1 = this;
                    java.lang.CharSequence r0 = r1.mCancelLabel
                    return r0
            }

            @java.lang.Deprecated
            public java.lang.CharSequence getConfirmLabel() {
                    r1 = this;
                    java.lang.CharSequence r0 = r1.mConfirmLabel
                    return r0
            }

            public boolean getHintDisplayActionInline() {
                    r1 = this;
                    int r0 = r1.mFlags
                    r0 = r0 & 4
                    if (r0 == 0) goto L8
                    r0 = 1
                    goto L9
                L8:
                    r0 = 0
                L9:
                    return r0
            }

            public boolean getHintLaunchesActivity() {
                    r1 = this;
                    int r0 = r1.mFlags
                    r0 = r0 & 2
                    if (r0 == 0) goto L8
                    r0 = 1
                    goto L9
                L8:
                    r0 = 0
                L9:
                    return r0
            }

            @java.lang.Deprecated
            public java.lang.CharSequence getInProgressLabel() {
                    r1 = this;
                    java.lang.CharSequence r0 = r1.mInProgressLabel
                    return r0
            }

            public boolean isAvailableOffline() {
                    r2 = this;
                    int r0 = r2.mFlags
                    r1 = 1
                    r0 = r0 & r1
                    if (r0 == 0) goto L7
                    goto L8
                L7:
                    r1 = 0
                L8:
                    return r1
            }

            public android.support.v4.app.NotificationCompat.Action.WearableExtender setAvailableOffline(boolean r2) {
                    r1 = this;
                    r0 = 1
                    r1.setFlag(r0, r2)
                    return r1
            }

            @java.lang.Deprecated
            public android.support.v4.app.NotificationCompat.Action.WearableExtender setCancelLabel(java.lang.CharSequence r1) {
                    r0 = this;
                    r0.mCancelLabel = r1
                    return r0
            }

            @java.lang.Deprecated
            public android.support.v4.app.NotificationCompat.Action.WearableExtender setConfirmLabel(java.lang.CharSequence r1) {
                    r0 = this;
                    r0.mConfirmLabel = r1
                    return r0
            }

            public android.support.v4.app.NotificationCompat.Action.WearableExtender setHintDisplayActionInline(boolean r2) {
                    r1 = this;
                    r0 = 4
                    r1.setFlag(r0, r2)
                    return r1
            }

            public android.support.v4.app.NotificationCompat.Action.WearableExtender setHintLaunchesActivity(boolean r2) {
                    r1 = this;
                    r0 = 2
                    r1.setFlag(r0, r2)
                    return r1
            }

            @java.lang.Deprecated
            public android.support.v4.app.NotificationCompat.Action.WearableExtender setInProgressLabel(java.lang.CharSequence r1) {
                    r0 = this;
                    r0.mInProgressLabel = r1
                    return r0
            }
        }

        public Action(int r11, java.lang.CharSequence r12, android.app.PendingIntent r13) {
                r10 = this;
                android.os.Bundle r4 = new android.os.Bundle
                r4.<init>()
                r5 = 0
                r6 = 0
                r7 = 1
                r8 = 0
                r9 = 1
                r0 = r10
                r1 = r11
                r2 = r12
                r3 = r13
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
                return
        }

        Action(int r2, java.lang.CharSequence r3, android.app.PendingIntent r4, android.os.Bundle r5, android.support.v4.app.RemoteInput[] r6, android.support.v4.app.RemoteInput[] r7, boolean r8, int r9, boolean r10) {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.mShowsUserInterface = r0
                r1.icon = r2
                java.lang.CharSequence r2 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r3)
                r1.title = r2
                r1.actionIntent = r4
                if (r5 == 0) goto L13
                goto L18
            L13:
                android.os.Bundle r5 = new android.os.Bundle
                r5.<init>()
            L18:
                r1.mExtras = r5
                r1.mRemoteInputs = r6
                r1.mDataOnlyRemoteInputs = r7
                r1.mAllowGeneratedReplies = r8
                r1.mSemanticAction = r9
                r1.mShowsUserInterface = r10
                return
        }

        public android.app.PendingIntent getActionIntent() {
                r1 = this;
                android.app.PendingIntent r0 = r1.actionIntent
                return r0
        }

        public boolean getAllowGeneratedReplies() {
                r1 = this;
                boolean r0 = r1.mAllowGeneratedReplies
                return r0
        }

        public android.support.v4.app.RemoteInput[] getDataOnlyRemoteInputs() {
                r1 = this;
                android.support.v4.app.RemoteInput[] r0 = r1.mDataOnlyRemoteInputs
                return r0
        }

        public android.os.Bundle getExtras() {
                r1 = this;
                android.os.Bundle r0 = r1.mExtras
                return r0
        }

        public int getIcon() {
                r1 = this;
                int r0 = r1.icon
                return r0
        }

        public android.support.v4.app.RemoteInput[] getRemoteInputs() {
                r1 = this;
                android.support.v4.app.RemoteInput[] r0 = r1.mRemoteInputs
                return r0
        }

        public int getSemanticAction() {
                r1 = this;
                int r0 = r1.mSemanticAction
                return r0
        }

        public boolean getShowsUserInterface() {
                r1 = this;
                boolean r0 = r1.mShowsUserInterface
                return r0
        }

        public java.lang.CharSequence getTitle() {
                r1 = this;
                java.lang.CharSequence r0 = r1.title
                return r0
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface BadgeIconType {
    }

    public static class BigPictureStyle extends android.support.v4.app.NotificationCompat.Style {
        private android.graphics.Bitmap mBigLargeIcon;
        private boolean mBigLargeIconSet;
        private android.graphics.Bitmap mPicture;

        public BigPictureStyle() {
                r0 = this;
                r0.<init>()
                return
        }

        public BigPictureStyle(android.support.v4.app.NotificationCompat.Builder r1) {
                r0 = this;
                r0.<init>()
                r0.setBuilder(r1)
                return
        }

        @Override
        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L2d
                android.app.Notification$BigPictureStyle r0 = new android.app.Notification$BigPictureStyle
                android.app.Notification$Builder r3 = r3.getBuilder()
                r0.<init>(r3)
                java.lang.CharSequence r3 = r2.mBigContentTitle
                android.app.Notification$BigPictureStyle r3 = r0.setBigContentTitle(r3)
                android.graphics.Bitmap r0 = r2.mPicture
                android.app.Notification$BigPictureStyle r3 = r3.bigPicture(r0)
                boolean r0 = r2.mBigLargeIconSet
                if (r0 == 0) goto L24
                android.graphics.Bitmap r0 = r2.mBigLargeIcon
                r3.bigLargeIcon(r0)
            L24:
                boolean r0 = r2.mSummaryTextSet
                if (r0 == 0) goto L2d
                java.lang.CharSequence r0 = r2.mSummaryText
                r3.setSummaryText(r0)
            L2d:
                return
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle bigLargeIcon(android.graphics.Bitmap r1) {
                r0 = this;
                r0.mBigLargeIcon = r1
                r1 = 1
                r0.mBigLargeIconSet = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle bigPicture(android.graphics.Bitmap r1) {
                r0 = this;
                r0.mPicture = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle setBigContentTitle(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mBigContentTitle = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.BigPictureStyle setSummaryText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mSummaryText = r1
                r1 = 1
                r0.mSummaryTextSet = r1
                return r0
        }
    }

    public static class BigTextStyle extends android.support.v4.app.NotificationCompat.Style {
        private java.lang.CharSequence mBigText;

        public BigTextStyle() {
                r0 = this;
                r0.<init>()
                return
        }

        public BigTextStyle(android.support.v4.app.NotificationCompat.Builder r1) {
                r0 = this;
                r0.<init>()
                r0.setBuilder(r1)
                return
        }

        @Override
        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L24
                android.app.Notification$BigTextStyle r0 = new android.app.Notification$BigTextStyle
                android.app.Notification$Builder r3 = r3.getBuilder()
                r0.<init>(r3)
                java.lang.CharSequence r3 = r2.mBigContentTitle
                android.app.Notification$BigTextStyle r3 = r0.setBigContentTitle(r3)
                java.lang.CharSequence r0 = r2.mBigText
                android.app.Notification$BigTextStyle r3 = r3.bigText(r0)
                boolean r0 = r2.mSummaryTextSet
                if (r0 == 0) goto L24
                java.lang.CharSequence r0 = r2.mSummaryText
                r3.setSummaryText(r0)
            L24:
                return
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle bigText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mBigText = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle setBigContentTitle(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mBigContentTitle = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.BigTextStyle setSummaryText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mSummaryText = r1
                r1 = 1
                r0.mSummaryTextSet = r1
                return r0
        }
    }

    public static class Builder {
        private static final int MAX_CHARSEQUENCE_LENGTH = 5120;
        public java.util.ArrayList<android.support.v4.app.NotificationCompat.Action> mActions;
        int mBadgeIcon;
        android.widget.RemoteViews mBigContentView;
        java.lang.String mCategory;
        java.lang.String mChannelId;
        int mColor;
        boolean mColorized;
        boolean mColorizedSet;
        java.lang.CharSequence mContentInfo;
        android.app.PendingIntent mContentIntent;
        java.lang.CharSequence mContentText;
        java.lang.CharSequence mContentTitle;
        android.widget.RemoteViews mContentView;
        public android.content.Context mContext;
        android.os.Bundle mExtras;
        android.app.PendingIntent mFullScreenIntent;
        int mGroupAlertBehavior;
        java.lang.String mGroupKey;
        boolean mGroupSummary;
        android.widget.RemoteViews mHeadsUpContentView;
        java.util.ArrayList<android.support.v4.app.NotificationCompat.Action> mInvisibleActions;
        android.graphics.Bitmap mLargeIcon;
        boolean mLocalOnly;
        android.app.Notification mNotification;
        int mNumber;

        @java.lang.Deprecated
        public java.util.ArrayList<java.lang.String> mPeople;
        int mPriority;
        int mProgress;
        boolean mProgressIndeterminate;
        int mProgressMax;
        android.app.Notification mPublicVersion;
        java.lang.CharSequence[] mRemoteInputHistory;
        java.lang.String mShortcutId;
        boolean mShowWhen;
        java.lang.String mSortKey;
        android.support.v4.app.NotificationCompat.Style mStyle;
        java.lang.CharSequence mSubText;
        android.widget.RemoteViews mTickerView;
        long mTimeout;
        boolean mUseChronometer;
        int mVisibility;

        @java.lang.Deprecated
        public Builder(android.content.Context r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public Builder(android.content.Context r3, java.lang.String r4) {
                r2 = this;
                r2.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.mActions = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r2.mInvisibleActions = r0
                r0 = 1
                r2.mShowWhen = r0
                r0 = 0
                r2.mLocalOnly = r0
                r2.mColor = r0
                r2.mVisibility = r0
                r2.mBadgeIcon = r0
                r2.mGroupAlertBehavior = r0
                android.app.Notification r1 = new android.app.Notification
                r1.<init>()
                r2.mNotification = r1
                r2.mContext = r3
                r2.mChannelId = r4
                long r3 = java.lang.System.currentTimeMillis()
                r1.when = r3
                android.app.Notification r3 = r2.mNotification
                r4 = -1
                r3.audioStreamType = r4
                r2.mPriority = r0
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                r2.mPeople = r3
                return
        }

        protected static java.lang.CharSequence limitCharSequenceLength(java.lang.CharSequence r2) {
                if (r2 != 0) goto L3
                return r2
            L3:
                int r0 = r2.length()
                r1 = 5120(0x1400, float:7.175E-42)
                if (r0 <= r1) goto L10
                r0 = 0
                java.lang.CharSequence r2 = r2.subSequence(r0, r1)
            L10:
                return r2
        }

        private android.graphics.Bitmap reduceLargeIconSize(android.graphics.Bitmap r10) {
                r9 = this;
                if (r10 == 0) goto L5d
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 27
                if (r0 < r1) goto L9
                goto L5d
            L9:
                android.content.Context r0 = r9.mContext
                android.content.res.Resources r0 = r0.getResources()
                int r1 = android.support.compat.R.dimen.compat_notification_large_icon_max_width
                int r1 = r0.getDimensionPixelSize(r1)
                int r2 = android.support.compat.R.dimen.compat_notification_large_icon_max_height
                int r0 = r0.getDimensionPixelSize(r2)
                int r2 = r10.getWidth()
                if (r2 > r1) goto L28
                int r2 = r10.getHeight()
                if (r2 > r0) goto L28
                return r10
            L28:
                double r1 = (double) r1
                int r3 = r10.getWidth()
                r4 = 1
                int r3 = java.lang.Math.max(r4, r3)
                double r5 = (double) r3
                double r1 = r1 / r5
                double r5 = (double) r0
                int r0 = r10.getHeight()
                int r0 = java.lang.Math.max(r4, r0)
                double r7 = (double) r0
                double r5 = r5 / r7
                double r0 = java.lang.Math.min(r1, r5)
                int r2 = r10.getWidth()
                double r2 = (double) r2
                double r2 = r2 * r0
                double r2 = java.lang.Math.ceil(r2)
                int r2 = (int) r2
                int r3 = r10.getHeight()
                double r5 = (double) r3
                double r5 = r5 * r0
                double r0 = java.lang.Math.ceil(r5)
                int r0 = (int) r0
                android.graphics.Bitmap r10 = android.graphics.Bitmap.createScaledBitmap(r10, r2, r0, r4)
            L5d:
                return r10
        }

        private void setFlag(int r2, boolean r3) {
                r1 = this;
                if (r3 == 0) goto La
                android.app.Notification r3 = r1.mNotification
                int r0 = r3.flags
                r2 = r2 | r0
                r3.flags = r2
                goto L12
            La:
                android.app.Notification r3 = r1.mNotification
                int r0 = r3.flags
                int r2 = ~r2
                r2 = r2 & r0
                r3.flags = r2
            L12:
                return
        }

        public android.support.v4.app.NotificationCompat.Builder addAction(int r3, java.lang.CharSequence r4, android.app.PendingIntent r5) {
                r2 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r2.mActions
                android.support.v4.app.NotificationCompat$Action r1 = new android.support.v4.app.NotificationCompat$Action
                r1.<init>(r3, r4, r5)
                r0.add(r1)
                return r2
        }

        public android.support.v4.app.NotificationCompat.Builder addAction(android.support.v4.app.NotificationCompat.Action r2) {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mActions
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder addExtras(android.os.Bundle r2) {
                r1 = this;
                if (r2 == 0) goto L11
                android.os.Bundle r0 = r1.mExtras
                if (r0 != 0) goto Le
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>(r2)
                r1.mExtras = r0
                goto L11
            Le:
                r0.putAll(r2)
            L11:
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder addInvisibleAction(int r2, java.lang.CharSequence r3, android.app.PendingIntent r4) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Action r0 = new android.support.v4.app.NotificationCompat$Action
                r0.<init>(r2, r3, r4)
                android.support.v4.app.NotificationCompat$Builder r2 = r1.addInvisibleAction(r0)
                return r2
        }

        public android.support.v4.app.NotificationCompat.Builder addInvisibleAction(android.support.v4.app.NotificationCompat.Action r2) {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mInvisibleActions
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder addPerson(java.lang.String r2) {
                r1 = this;
                java.util.ArrayList<java.lang.String> r0 = r1.mPeople
                r0.add(r2)
                return r1
        }

        public android.app.Notification build() {
                r1 = this;
                android.support.v4.app.NotificationCompatBuilder r0 = new android.support.v4.app.NotificationCompatBuilder
                r0.<init>(r1)
                android.app.Notification r0 = r0.build()
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder extend(android.support.v4.app.NotificationCompat.Extender r1) {
                r0 = this;
                r1.extend(r0)
                return r0
        }

        public android.widget.RemoteViews getBigContentView() {
                r1 = this;
                android.widget.RemoteViews r0 = r1.mBigContentView
                return r0
        }

        public int getColor() {
                r1 = this;
                int r0 = r1.mColor
                return r0
        }

        public android.widget.RemoteViews getContentView() {
                r1 = this;
                android.widget.RemoteViews r0 = r1.mContentView
                return r0
        }

        public android.os.Bundle getExtras() {
                r1 = this;
                android.os.Bundle r0 = r1.mExtras
                if (r0 != 0) goto Lb
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                r1.mExtras = r0
            Lb:
                android.os.Bundle r0 = r1.mExtras
                return r0
        }

        public android.widget.RemoteViews getHeadsUpContentView() {
                r1 = this;
                android.widget.RemoteViews r0 = r1.mHeadsUpContentView
                return r0
        }

        @java.lang.Deprecated
        public android.app.Notification getNotification() {
                r1 = this;
                android.app.Notification r0 = r1.build()
                return r0
        }

        public int getPriority() {
                r1 = this;
                int r0 = r1.mPriority
                return r0
        }

        public long getWhenIfShowing() {
                r2 = this;
                boolean r0 = r2.mShowWhen
                if (r0 == 0) goto L9
                android.app.Notification r0 = r2.mNotification
                long r0 = r0.when
                goto Lb
            L9:
                r0 = 0
            Lb:
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setAutoCancel(boolean r2) {
                r1 = this;
                r0 = 16
                r1.setFlag(r0, r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setBadgeIconType(int r1) {
                r0 = this;
                r0.mBadgeIcon = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setCategory(java.lang.String r1) {
                r0 = this;
                r0.mCategory = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setChannelId(java.lang.String r1) {
                r0 = this;
                r0.mChannelId = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setColor(int r1) {
                r0 = this;
                r0.mColor = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setColorized(boolean r1) {
                r0 = this;
                r0.mColorized = r1
                r1 = 1
                r0.mColorizedSet = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setContent(android.widget.RemoteViews r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.contentView = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setContentInfo(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = limitCharSequenceLength(r1)
                r0.mContentInfo = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setContentIntent(android.app.PendingIntent r1) {
                r0 = this;
                r0.mContentIntent = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setContentText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = limitCharSequenceLength(r1)
                r0.mContentText = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setContentTitle(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = limitCharSequenceLength(r1)
                r0.mContentTitle = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setCustomBigContentView(android.widget.RemoteViews r1) {
                r0 = this;
                r0.mBigContentView = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setCustomContentView(android.widget.RemoteViews r1) {
                r0 = this;
                r0.mContentView = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setCustomHeadsUpContentView(android.widget.RemoteViews r1) {
                r0 = this;
                r0.mHeadsUpContentView = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setDefaults(int r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.defaults = r2
                r2 = r2 & 4
                if (r2 == 0) goto L10
                android.app.Notification r2 = r1.mNotification
                int r0 = r2.flags
                r0 = r0 | 1
                r2.flags = r0
            L10:
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setDeleteIntent(android.app.PendingIntent r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.deleteIntent = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setExtras(android.os.Bundle r1) {
                r0 = this;
                r0.mExtras = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setFullScreenIntent(android.app.PendingIntent r1, boolean r2) {
                r0 = this;
                r0.mFullScreenIntent = r1
                r1 = 128(0x80, float:1.8E-43)
                r0.setFlag(r1, r2)
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setGroup(java.lang.String r1) {
                r0 = this;
                r0.mGroupKey = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setGroupAlertBehavior(int r1) {
                r0 = this;
                r0.mGroupAlertBehavior = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setGroupSummary(boolean r1) {
                r0 = this;
                r0.mGroupSummary = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setLargeIcon(android.graphics.Bitmap r1) {
                r0 = this;
                android.graphics.Bitmap r1 = r0.reduceLargeIconSize(r1)
                r0.mLargeIcon = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setLights(int r2, int r3, int r4) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.ledARGB = r2
                android.app.Notification r2 = r1.mNotification
                r2.ledOnMS = r3
                android.app.Notification r2 = r1.mNotification
                r2.ledOffMS = r4
                android.app.Notification r2 = r1.mNotification
                int r2 = r2.ledOnMS
                if (r2 == 0) goto L1a
                android.app.Notification r2 = r1.mNotification
                int r2 = r2.ledOffMS
                if (r2 == 0) goto L1a
                r2 = 1
                goto L1b
            L1a:
                r2 = 0
            L1b:
                android.app.Notification r3 = r1.mNotification
                int r4 = r3.flags
                r4 = r4 & (-2)
                r2 = r2 | r4
                r3.flags = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setLocalOnly(boolean r1) {
                r0 = this;
                r0.mLocalOnly = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setNumber(int r1) {
                r0 = this;
                r0.mNumber = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setOngoing(boolean r2) {
                r1 = this;
                r0 = 2
                r1.setFlag(r0, r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setOnlyAlertOnce(boolean r2) {
                r1 = this;
                r0 = 8
                r1.setFlag(r0, r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setPriority(int r1) {
                r0 = this;
                r0.mPriority = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setProgress(int r1, int r2, boolean r3) {
                r0 = this;
                r0.mProgressMax = r1
                r0.mProgress = r2
                r0.mProgressIndeterminate = r3
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setPublicVersion(android.app.Notification r1) {
                r0 = this;
                r0.mPublicVersion = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setRemoteInputHistory(java.lang.CharSequence[] r1) {
                r0 = this;
                r0.mRemoteInputHistory = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setShortcutId(java.lang.String r1) {
                r0 = this;
                r0.mShortcutId = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setShowWhen(boolean r1) {
                r0 = this;
                r0.mShowWhen = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setSmallIcon(int r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.icon = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setSmallIcon(int r2, int r3) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.icon = r2
                android.app.Notification r2 = r1.mNotification
                r2.iconLevel = r3
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setSortKey(java.lang.String r1) {
                r0 = this;
                r0.mSortKey = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setSound(android.net.Uri r3) {
                r2 = this;
                android.app.Notification r0 = r2.mNotification
                r0.sound = r3
                android.app.Notification r3 = r2.mNotification
                r0 = -1
                r3.audioStreamType = r0
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 21
                if (r3 < r0) goto L26
                android.app.Notification r3 = r2.mNotification
                android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
                r0.<init>()
                r1 = 4
                android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
                r1 = 5
                android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
                android.media.AudioAttributes r0 = r0.build()
                r3.audioAttributes = r0
            L26:
                return r2
        }

        public android.support.v4.app.NotificationCompat.Builder setSound(android.net.Uri r3, int r4) {
                r2 = this;
                android.app.Notification r0 = r2.mNotification
                r0.sound = r3
                android.app.Notification r3 = r2.mNotification
                r3.audioStreamType = r4
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 21
                if (r3 < r0) goto L24
                android.app.Notification r3 = r2.mNotification
                android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
                r0.<init>()
                r1 = 4
                android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
                android.media.AudioAttributes$Builder r4 = r0.setLegacyStreamType(r4)
                android.media.AudioAttributes r4 = r4.build()
                r3.audioAttributes = r4
            L24:
                return r2
        }

        public android.support.v4.app.NotificationCompat.Builder setStyle(android.support.v4.app.NotificationCompat.Style r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Style r0 = r1.mStyle
                if (r0 == r2) goto Lb
                r1.mStyle = r2
                if (r2 == 0) goto Lb
                r2.setBuilder(r1)
            Lb:
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setSubText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = limitCharSequenceLength(r1)
                r0.mSubText = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setTicker(java.lang.CharSequence r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                java.lang.CharSequence r2 = limitCharSequenceLength(r2)
                r0.tickerText = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setTicker(java.lang.CharSequence r2, android.widget.RemoteViews r3) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                java.lang.CharSequence r2 = limitCharSequenceLength(r2)
                r0.tickerText = r2
                r1.mTickerView = r3
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setTimeoutAfter(long r1) {
                r0 = this;
                r0.mTimeout = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setUsesChronometer(boolean r1) {
                r0 = this;
                r0.mUseChronometer = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setVibrate(long[] r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.vibrate = r2
                return r1
        }

        public android.support.v4.app.NotificationCompat.Builder setVisibility(int r1) {
                r0 = this;
                r0.mVisibility = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.Builder setWhen(long r2) {
                r1 = this;
                android.app.Notification r0 = r1.mNotification
                r0.when = r2
                return r1
        }
    }

    public static final class CarExtender implements android.support.v4.app.NotificationCompat.Extender {
        static final java.lang.String EXTRA_CAR_EXTENDER = "android.car.EXTENSIONS";
        private static final java.lang.String EXTRA_COLOR = "app_color";
        private static final java.lang.String EXTRA_CONVERSATION = "car_conversation";
        static final java.lang.String EXTRA_INVISIBLE_ACTIONS = "invisible_actions";
        private static final java.lang.String EXTRA_LARGE_ICON = "large_icon";
        private static final java.lang.String KEY_AUTHOR = "author";
        private static final java.lang.String KEY_MESSAGES = "messages";
        private static final java.lang.String KEY_ON_READ = "on_read";
        private static final java.lang.String KEY_ON_REPLY = "on_reply";
        private static final java.lang.String KEY_PARTICIPANTS = "participants";
        private static final java.lang.String KEY_REMOTE_INPUT = "remote_input";
        private static final java.lang.String KEY_TEXT = "text";
        private static final java.lang.String KEY_TIMESTAMP = "timestamp";
        private int mColor;
        private android.graphics.Bitmap mLargeIcon;
        private android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation mUnreadConversation;

        public static class UnreadConversation {
            private final long mLatestTimestamp;
            private final java.lang.String[] mMessages;
            private final java.lang.String[] mParticipants;
            private final android.app.PendingIntent mReadPendingIntent;
            private final android.support.v4.app.RemoteInput mRemoteInput;
            private final android.app.PendingIntent mReplyPendingIntent;

            public static class Builder {
                private long mLatestTimestamp;
                private final java.util.List<java.lang.String> mMessages;
                private final java.lang.String mParticipant;
                private android.app.PendingIntent mReadPendingIntent;
                private android.support.v4.app.RemoteInput mRemoteInput;
                private android.app.PendingIntent mReplyPendingIntent;

                public Builder(java.lang.String r2) {
                        r1 = this;
                        r1.<init>()
                        java.util.ArrayList r0 = new java.util.ArrayList
                        r0.<init>()
                        r1.mMessages = r0
                        r1.mParticipant = r2
                        return
                }

                public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation.Builder addMessage(java.lang.String r2) {
                        r1 = this;
                        java.util.List<java.lang.String> r0 = r1.mMessages
                        r0.add(r2)
                        return r1
                }

                public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation build() {
                        r9 = this;
                        java.util.List<java.lang.String> r0 = r9.mMessages
                        int r1 = r0.size()
                        java.lang.String[] r1 = new java.lang.String[r1]
                        java.lang.Object[] r0 = r0.toArray(r1)
                        r2 = r0
                        java.lang.String[] r2 = (java.lang.String[]) r2
                        r0 = 1
                        java.lang.String[] r6 = new java.lang.String[r0]
                        java.lang.String r0 = r9.mParticipant
                        r1 = 0
                        r6[r1] = r0
                        android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation r0 = new android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation
                        android.support.v4.app.RemoteInput r3 = r9.mRemoteInput
                        android.app.PendingIntent r4 = r9.mReplyPendingIntent
                        android.app.PendingIntent r5 = r9.mReadPendingIntent
                        long r7 = r9.mLatestTimestamp
                        r1 = r0
                        r1.<init>(r2, r3, r4, r5, r6, r7)
                        return r0
                }

                public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation.Builder setLatestTimestamp(long r1) {
                        r0 = this;
                        r0.mLatestTimestamp = r1
                        return r0
                }

                public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation.Builder setReadPendingIntent(android.app.PendingIntent r1) {
                        r0 = this;
                        r0.mReadPendingIntent = r1
                        return r0
                }

                public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation.Builder setReplyAction(android.app.PendingIntent r1, android.support.v4.app.RemoteInput r2) {
                        r0 = this;
                        r0.mRemoteInput = r2
                        r0.mReplyPendingIntent = r1
                        return r0
                }
            }

            UnreadConversation(java.lang.String[] r1, android.support.v4.app.RemoteInput r2, android.app.PendingIntent r3, android.app.PendingIntent r4, java.lang.String[] r5, long r6) {
                    r0 = this;
                    r0.<init>()
                    r0.mMessages = r1
                    r0.mRemoteInput = r2
                    r0.mReadPendingIntent = r4
                    r0.mReplyPendingIntent = r3
                    r0.mParticipants = r5
                    r0.mLatestTimestamp = r6
                    return
            }

            public long getLatestTimestamp() {
                    r2 = this;
                    long r0 = r2.mLatestTimestamp
                    return r0
            }

            public java.lang.String[] getMessages() {
                    r1 = this;
                    java.lang.String[] r0 = r1.mMessages
                    return r0
            }

            public java.lang.String getParticipant() {
                    r2 = this;
                    java.lang.String[] r0 = r2.mParticipants
                    int r1 = r0.length
                    if (r1 <= 0) goto L9
                    r1 = 0
                    r0 = r0[r1]
                    goto La
                L9:
                    r0 = 0
                La:
                    return r0
            }

            public java.lang.String[] getParticipants() {
                    r1 = this;
                    java.lang.String[] r0 = r1.mParticipants
                    return r0
            }

            public android.app.PendingIntent getReadPendingIntent() {
                    r1 = this;
                    android.app.PendingIntent r0 = r1.mReadPendingIntent
                    return r0
            }

            public android.support.v4.app.RemoteInput getRemoteInput() {
                    r1 = this;
                    android.support.v4.app.RemoteInput r0 = r1.mRemoteInput
                    return r0
            }

            public android.app.PendingIntent getReplyPendingIntent() {
                    r1 = this;
                    android.app.PendingIntent r0 = r1.mReplyPendingIntent
                    return r0
            }
        }

        public CarExtender() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mColor = r0
                return
        }

        public CarExtender(android.app.Notification r4) {
                r3 = this;
                r3.<init>()
                r0 = 0
                r3.mColor = r0
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 21
                if (r1 >= r2) goto Ld
                return
            Ld:
                android.os.Bundle r1 = android.support.v4.app.NotificationCompat.getExtras(r4)
                if (r1 != 0) goto L15
                r4 = 0
                goto L1f
            L15:
                android.os.Bundle r4 = android.support.v4.app.NotificationCompat.getExtras(r4)
                java.lang.String r1 = "android.car.EXTENSIONS"
                android.os.Bundle r4 = r4.getBundle(r1)
            L1f:
                if (r4 == 0) goto L3f
                java.lang.String r1 = "large_icon"
                android.os.Parcelable r1 = r4.getParcelable(r1)
                android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
                r3.mLargeIcon = r1
                java.lang.String r1 = "app_color"
                int r0 = r4.getInt(r1, r0)
                r3.mColor = r0
                java.lang.String r0 = "car_conversation"
                android.os.Bundle r4 = r4.getBundle(r0)
                android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation r4 = getUnreadConversationFromBundle(r4)
                r3.mUnreadConversation = r4
            L3f:
                return
        }

        private static android.os.Bundle getBundleForUnreadConversation(android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation r8) {
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.lang.String[] r1 = r8.getParticipants()
                r2 = 0
                if (r1 == 0) goto L1b
                java.lang.String[] r1 = r8.getParticipants()
                int r1 = r1.length
                r3 = 1
                if (r1 <= r3) goto L1b
                java.lang.String[] r1 = r8.getParticipants()
                r1 = r1[r2]
                goto L1c
            L1b:
                r1 = 0
            L1c:
                java.lang.String[] r3 = r8.getMessages()
                int r3 = r3.length
                android.os.Parcelable[] r4 = new android.os.Parcelable[r3]
            L23:
                if (r2 >= r3) goto L3f
                android.os.Bundle r5 = new android.os.Bundle
                r5.<init>()
                java.lang.String[] r6 = r8.getMessages()
                r6 = r6[r2]
                java.lang.String r7 = "text"
                r5.putString(r7, r6)
                java.lang.String r6 = "author"
                r5.putString(r6, r1)
                r4[r2] = r5
                int r2 = r2 + 1
                goto L23
            L3f:
                java.lang.String r1 = "messages"
                r0.putParcelableArray(r1, r4)
                android.support.v4.app.RemoteInput r1 = r8.getRemoteInput()
                if (r1 == 0) goto L7c
                android.app.RemoteInput$Builder r2 = new android.app.RemoteInput$Builder
                java.lang.String r3 = r1.getResultKey()
                r2.<init>(r3)
                java.lang.CharSequence r3 = r1.getLabel()
                android.app.RemoteInput$Builder r2 = r2.setLabel(r3)
                java.lang.CharSequence[] r3 = r1.getChoices()
                android.app.RemoteInput$Builder r2 = r2.setChoices(r3)
                boolean r3 = r1.getAllowFreeFormInput()
                android.app.RemoteInput$Builder r2 = r2.setAllowFreeFormInput(r3)
                android.os.Bundle r1 = r1.getExtras()
                android.app.RemoteInput$Builder r1 = r2.addExtras(r1)
                android.app.RemoteInput r1 = r1.build()
                java.lang.String r2 = "remote_input"
                r0.putParcelable(r2, r1)
            L7c:
                android.app.PendingIntent r1 = r8.getReplyPendingIntent()
                java.lang.String r2 = "on_reply"
                r0.putParcelable(r2, r1)
                android.app.PendingIntent r1 = r8.getReadPendingIntent()
                java.lang.String r2 = "on_read"
                r0.putParcelable(r2, r1)
                java.lang.String[] r1 = r8.getParticipants()
                java.lang.String r2 = "participants"
                r0.putStringArray(r2, r1)
                long r1 = r8.getLatestTimestamp()
                java.lang.String r8 = "timestamp"
                r0.putLong(r8, r1)
                return r0
        }

        private static android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation getUnreadConversationFromBundle(android.os.Bundle r20) {
                r0 = r20
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                java.lang.String r2 = "messages"
                android.os.Parcelable[] r2 = r0.getParcelableArray(r2)
                r3 = 1
                if (r2 == 0) goto L37
                int r4 = r2.length
                java.lang.String[] r5 = new java.lang.String[r4]
                r6 = 0
                r7 = r6
            L14:
                if (r7 >= r4) goto L31
                r8 = r2[r7]
                boolean r8 = r8 instanceof android.os.Bundle
                if (r8 != 0) goto L1d
                goto L32
            L1d:
                r8 = r2[r7]
                android.os.Bundle r8 = (android.os.Bundle) r8
                java.lang.String r9 = "text"
                java.lang.String r8 = r8.getString(r9)
                r5[r7] = r8
                r8 = r5[r7]
                if (r8 != 0) goto L2e
                goto L32
            L2e:
                int r7 = r7 + 1
                goto L14
            L31:
                r6 = r3
            L32:
                if (r6 == 0) goto L36
                r8 = r5
                goto L38
            L36:
                return r1
            L37:
                r8 = r1
            L38:
                java.lang.String r2 = "on_read"
                android.os.Parcelable r2 = r0.getParcelable(r2)
                r11 = r2
                android.app.PendingIntent r11 = (android.app.PendingIntent) r11
                java.lang.String r2 = "on_reply"
                android.os.Parcelable r2 = r0.getParcelable(r2)
                r10 = r2
                android.app.PendingIntent r10 = (android.app.PendingIntent) r10
                java.lang.String r2 = "remote_input"
                android.os.Parcelable r2 = r0.getParcelable(r2)
                android.app.RemoteInput r2 = (android.app.RemoteInput) r2
                java.lang.String r4 = "participants"
                java.lang.String[] r12 = r0.getStringArray(r4)
                if (r12 == 0) goto L89
                int r4 = r12.length
                if (r4 == r3) goto L5e
                goto L89
            L5e:
                if (r2 == 0) goto L7c
                android.support.v4.app.RemoteInput r1 = new android.support.v4.app.RemoteInput
                java.lang.String r14 = r2.getResultKey()
                java.lang.CharSequence r15 = r2.getLabel()
                java.lang.CharSequence[] r16 = r2.getChoices()
                boolean r17 = r2.getAllowFreeFormInput()
                android.os.Bundle r18 = r2.getExtras()
                r19 = 0
                r13 = r1
                r13.<init>(r14, r15, r16, r17, r18, r19)
            L7c:
                r9 = r1
                android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation r1 = new android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation
                java.lang.String r2 = "timestamp"
                long r13 = r0.getLong(r2)
                r7 = r1
                r7.<init>(r8, r9, r10, r11, r12, r13)
            L89:
                return r1
        }

        @Override
        public android.support.v4.app.NotificationCompat.Builder extend(android.support.v4.app.NotificationCompat.Builder r4) {
                r3 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 >= r1) goto L7
                return r4
            L7:
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                android.graphics.Bitmap r1 = r3.mLargeIcon
                if (r1 == 0) goto L15
                java.lang.String r2 = "large_icon"
                r0.putParcelable(r2, r1)
            L15:
                int r1 = r3.mColor
                if (r1 == 0) goto L1e
                java.lang.String r2 = "app_color"
                r0.putInt(r2, r1)
            L1e:
                android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation r1 = r3.mUnreadConversation
                if (r1 == 0) goto L2b
                android.os.Bundle r1 = getBundleForUnreadConversation(r1)
                java.lang.String r2 = "car_conversation"
                r0.putBundle(r2, r1)
            L2b:
                android.os.Bundle r1 = r4.getExtras()
                java.lang.String r2 = "android.car.EXTENSIONS"
                r1.putBundle(r2, r0)
                return r4
        }

        public int getColor() {
                r1 = this;
                int r0 = r1.mColor
                return r0
        }

        public android.graphics.Bitmap getLargeIcon() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.mLargeIcon
                return r0
        }

        public android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation getUnreadConversation() {
                r1 = this;
                android.support.v4.app.NotificationCompat$CarExtender$UnreadConversation r0 = r1.mUnreadConversation
                return r0
        }

        public android.support.v4.app.NotificationCompat.CarExtender setColor(int r1) {
                r0 = this;
                r0.mColor = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.CarExtender setLargeIcon(android.graphics.Bitmap r1) {
                r0 = this;
                r0.mLargeIcon = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.CarExtender setUnreadConversation(android.support.v4.app.NotificationCompat.CarExtender.UnreadConversation r1) {
                r0 = this;
                r0.mUnreadConversation = r1
                return r0
        }
    }

    public static class DecoratedCustomViewStyle extends android.support.v4.app.NotificationCompat.Style {
        private static final int MAX_ACTION_BUTTONS = 3;

        public DecoratedCustomViewStyle() {
                r0 = this;
                r0.<init>()
                return
        }

        private android.widget.RemoteViews createRemoteViews(android.widget.RemoteViews r7, boolean r8) {
                r6 = this;
                int r0 = android.support.compat.R.layout.notification_template_custom_big
                r1 = 1
                r2 = 0
                android.widget.RemoteViews r0 = r6.applyStandardTemplate(r1, r0, r2)
                int r3 = android.support.compat.R.id.actions
                r0.removeAllViews(r3)
                if (r8 == 0) goto L3d
                android.support.v4.app.NotificationCompat$Builder r8 = r6.mBuilder
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r8 = r8.mActions
                if (r8 == 0) goto L3d
                android.support.v4.app.NotificationCompat$Builder r8 = r6.mBuilder
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r8 = r8.mActions
                int r8 = r8.size()
                r3 = 3
                int r8 = java.lang.Math.min(r8, r3)
                if (r8 <= 0) goto L3d
                r3 = r2
            L25:
                if (r3 >= r8) goto L3e
                android.support.v4.app.NotificationCompat$Builder r4 = r6.mBuilder
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r4 = r4.mActions
                java.lang.Object r4 = r4.get(r3)
                android.support.v4.app.NotificationCompat$Action r4 = (android.support.v4.app.NotificationCompat.Action) r4
                android.widget.RemoteViews r4 = r6.generateActionButton(r4)
                int r5 = android.support.compat.R.id.actions
                r0.addView(r5, r4)
                int r3 = r3 + 1
                goto L25
            L3d:
                r1 = r2
            L3e:
                if (r1 == 0) goto L41
                goto L43
            L41:
                r2 = 8
            L43:
                int r8 = android.support.compat.R.id.actions
                r0.setViewVisibility(r8, r2)
                int r8 = android.support.compat.R.id.action_divider
                r0.setViewVisibility(r8, r2)
                r6.buildIntoRemoteViews(r0, r7)
                return r0
        }

        private android.widget.RemoteViews generateActionButton(android.support.v4.app.NotificationCompat.Action r7) {
                r6 = this;
                android.app.PendingIntent r0 = r7.actionIntent
                if (r0 != 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                android.widget.RemoteViews r1 = new android.widget.RemoteViews
                android.support.v4.app.NotificationCompat$Builder r2 = r6.mBuilder
                android.content.Context r2 = r2.mContext
                java.lang.String r2 = r2.getPackageName()
                if (r0 == 0) goto L16
                int r3 = android.support.compat.R.layout.notification_action_tombstone
                goto L18
            L16:
                int r3 = android.support.compat.R.layout.notification_action
            L18:
                r1.<init>(r2, r3)
                int r2 = android.support.compat.R.id.action_image
                int r3 = r7.getIcon()
                android.support.v4.app.NotificationCompat$Builder r4 = r6.mBuilder
                android.content.Context r4 = r4.mContext
                android.content.res.Resources r4 = r4.getResources()
                int r5 = android.support.compat.R.color.notification_action_color_filter
                int r4 = r4.getColor(r5)
                android.graphics.Bitmap r3 = r6.createColoredBitmap(r3, r4)
                r1.setImageViewBitmap(r2, r3)
                int r2 = android.support.compat.R.id.action_text
                java.lang.CharSequence r3 = r7.title
                r1.setTextViewText(r2, r3)
                if (r0 != 0) goto L46
                int r0 = android.support.compat.R.id.action_container
                android.app.PendingIntent r2 = r7.actionIntent
                r1.setOnClickPendingIntent(r0, r2)
            L46:
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 15
                if (r0 < r2) goto L53
                int r0 = android.support.compat.R.id.action_container
                java.lang.CharSequence r7 = r7.title
                r1.setContentDescription(r0, r7)
            L53:
                return r1
        }

        @Override
        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 24
                if (r0 < r1) goto L12
                android.app.Notification$Builder r3 = r3.getBuilder()
                android.app.Notification$DecoratedCustomViewStyle r0 = new android.app.Notification$DecoratedCustomViewStyle
                r0.<init>()
                r3.setStyle(r0)
            L12:
                return
        }

        @Override
        public android.widget.RemoteViews makeBigContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 0
                r1 = 24
                if (r3 < r1) goto L8
                return r0
            L8:
                android.support.v4.app.NotificationCompat$Builder r3 = r2.mBuilder
                android.widget.RemoteViews r3 = r3.getBigContentView()
                if (r3 == 0) goto L11
                goto L17
            L11:
                android.support.v4.app.NotificationCompat$Builder r3 = r2.mBuilder
                android.widget.RemoteViews r3 = r3.getContentView()
            L17:
                if (r3 != 0) goto L1a
                return r0
            L1a:
                r0 = 1
                android.widget.RemoteViews r3 = r2.createRemoteViews(r3, r0)
                return r3
        }

        @Override
        public android.widget.RemoteViews makeContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 0
                r1 = 24
                if (r3 < r1) goto L8
                return r0
            L8:
                android.support.v4.app.NotificationCompat$Builder r3 = r2.mBuilder
                android.widget.RemoteViews r3 = r3.getContentView()
                if (r3 != 0) goto L11
                return r0
            L11:
                android.support.v4.app.NotificationCompat$Builder r3 = r2.mBuilder
                android.widget.RemoteViews r3 = r3.getContentView()
                r0 = 0
                android.widget.RemoteViews r3 = r2.createRemoteViews(r3, r0)
                return r3
        }

        @Override
        public android.widget.RemoteViews makeHeadsUpContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r3 = android.os.Build.VERSION.SDK_INT
                r0 = 0
                r1 = 24
                if (r3 < r1) goto L8
                return r0
            L8:
                android.support.v4.app.NotificationCompat$Builder r3 = r2.mBuilder
                android.widget.RemoteViews r3 = r3.getHeadsUpContentView()
                if (r3 == 0) goto L12
                r1 = r3
                goto L18
            L12:
                android.support.v4.app.NotificationCompat$Builder r1 = r2.mBuilder
                android.widget.RemoteViews r1 = r1.getContentView()
            L18:
                if (r3 != 0) goto L1b
                return r0
            L1b:
                r3 = 1
                android.widget.RemoteViews r3 = r2.createRemoteViews(r1, r3)
                return r3
        }
    }

    public interface Extender {
        android.support.v4.app.NotificationCompat.Builder extend(android.support.v4.app.NotificationCompat.Builder r1);
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface GroupAlertBehavior {
    }

    public static class InboxStyle extends android.support.v4.app.NotificationCompat.Style {
        private java.util.ArrayList<java.lang.CharSequence> mTexts;

        public InboxStyle() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mTexts = r0
                return
        }

        public InboxStyle(android.support.v4.app.NotificationCompat.Builder r2) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mTexts = r0
                r1.setBuilder(r2)
                return
        }

        public android.support.v4.app.NotificationCompat.InboxStyle addLine(java.lang.CharSequence r2) {
                r1 = this;
                java.util.ArrayList<java.lang.CharSequence> r0 = r1.mTexts
                java.lang.CharSequence r2 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r2)
                r0.add(r2)
                return r1
        }

        @Override
        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 < r1) goto L34
                android.app.Notification$InboxStyle r0 = new android.app.Notification$InboxStyle
                android.app.Notification$Builder r3 = r3.getBuilder()
                r0.<init>(r3)
                java.lang.CharSequence r3 = r2.mBigContentTitle
                android.app.Notification$InboxStyle r3 = r0.setBigContentTitle(r3)
                boolean r0 = r2.mSummaryTextSet
                if (r0 == 0) goto L1e
                java.lang.CharSequence r0 = r2.mSummaryText
                r3.setSummaryText(r0)
            L1e:
                java.util.ArrayList<java.lang.CharSequence> r0 = r2.mTexts
                java.util.Iterator r0 = r0.iterator()
            L24:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L34
                java.lang.Object r1 = r0.next()
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                r3.addLine(r1)
                goto L24
            L34:
                return
        }

        public android.support.v4.app.NotificationCompat.InboxStyle setBigContentTitle(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mBigContentTitle = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.InboxStyle setSummaryText(java.lang.CharSequence r1) {
                r0 = this;
                java.lang.CharSequence r1 = android.support.v4.app.NotificationCompat.Builder.limitCharSequenceLength(r1)
                r0.mSummaryText = r1
                r1 = 1
                r0.mSummaryTextSet = r1
                return r0
        }
    }

    public static class MessagingStyle extends android.support.v4.app.NotificationCompat.Style {
        public static final int MAXIMUM_RETAINED_MESSAGES = 25;
        private java.lang.CharSequence mConversationTitle;
        private java.lang.Boolean mIsGroupConversation;
        private final java.util.List<android.support.v4.app.NotificationCompat.MessagingStyle.Message> mMessages;
        private android.support.v4.app.Person mUser;

        public static final class Message {
            static final java.lang.String KEY_DATA_MIME_TYPE = "type";
            static final java.lang.String KEY_DATA_URI = "uri";
            static final java.lang.String KEY_EXTRAS_BUNDLE = "extras";
            static final java.lang.String KEY_NOTIFICATION_PERSON = "sender_person";
            static final java.lang.String KEY_PERSON = "person";
            static final java.lang.String KEY_SENDER = "sender";
            static final java.lang.String KEY_TEXT = "text";
            static final java.lang.String KEY_TIMESTAMP = "time";
            private java.lang.String mDataMimeType;
            private android.net.Uri mDataUri;
            private android.os.Bundle mExtras;
            private final android.support.v4.app.Person mPerson;
            private final java.lang.CharSequence mText;
            private final long mTimestamp;

            public Message(java.lang.CharSequence r2, long r3, android.support.v4.app.Person r5) {
                    r1 = this;
                    r1.<init>()
                    android.os.Bundle r0 = new android.os.Bundle
                    r0.<init>()
                    r1.mExtras = r0
                    r1.mText = r2
                    r1.mTimestamp = r3
                    r1.mPerson = r5
                    return
            }

            @java.lang.Deprecated
            public Message(java.lang.CharSequence r2, long r3, java.lang.CharSequence r5) {
                    r1 = this;
                    android.support.v4.app.Person$Builder r0 = new android.support.v4.app.Person$Builder
                    r0.<init>()
                    android.support.v4.app.Person$Builder r5 = r0.setName(r5)
                    android.support.v4.app.Person r5 = r5.build()
                    r1.<init>(r2, r3, r5)
                    return
            }

            static android.os.Bundle[] getBundleArrayForMessages(java.util.List<android.support.v4.app.NotificationCompat.MessagingStyle.Message> r4) {
                    int r0 = r4.size()
                    android.os.Bundle[] r0 = new android.os.Bundle[r0]
                    int r1 = r4.size()
                    r2 = 0
                Lb:
                    if (r2 >= r1) goto L1c
                    java.lang.Object r3 = r4.get(r2)
                    android.support.v4.app.NotificationCompat$MessagingStyle$Message r3 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r3
                    android.os.Bundle r3 = r3.toBundle()
                    r0[r2] = r3
                    int r2 = r2 + 1
                    goto Lb
                L1c:
                    return r0
            }

            static android.support.v4.app.NotificationCompat.MessagingStyle.Message getMessageFromBundle(android.os.Bundle r10) {
                    java.lang.String r0 = "uri"
                    java.lang.String r1 = "extras"
                    java.lang.String r2 = "type"
                    java.lang.String r3 = "sender"
                    java.lang.String r4 = "sender_person"
                    java.lang.String r5 = "person"
                    java.lang.String r6 = "time"
                    java.lang.String r7 = "text"
                    r8 = 0
                    boolean r9 = r10.containsKey(r7)     // Catch: java.lang.ClassCastException -> L96
                    if (r9 == 0) goto L96
                    boolean r9 = r10.containsKey(r6)     // Catch: java.lang.ClassCastException -> L96
                    if (r9 != 0) goto L1f
                    goto L96
                L1f:
                    boolean r9 = r10.containsKey(r5)     // Catch: java.lang.ClassCastException -> L96
                    if (r9 == 0) goto L2e
                    android.os.Bundle r3 = r10.getBundle(r5)     // Catch: java.lang.ClassCastException -> L96
                    android.support.v4.app.Person r3 = android.support.v4.app.Person.fromBundle(r3)     // Catch: java.lang.ClassCastException -> L96
                    goto L5e
                L2e:
                    boolean r5 = r10.containsKey(r4)     // Catch: java.lang.ClassCastException -> L96
                    if (r5 == 0) goto L45
                    int r5 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.ClassCastException -> L96
                    r9 = 28
                    if (r5 < r9) goto L45
                    android.os.Parcelable r3 = r10.getParcelable(r4)     // Catch: java.lang.ClassCastException -> L96
                    android.app.Person r3 = (android.app.Person) r3     // Catch: java.lang.ClassCastException -> L96
                    android.support.v4.app.Person r3 = android.support.v4.app.Person.fromAndroidPerson(r3)     // Catch: java.lang.ClassCastException -> L96
                    goto L5e
                L45:
                    boolean r4 = r10.containsKey(r3)     // Catch: java.lang.ClassCastException -> L96
                    if (r4 == 0) goto L5d
                    android.support.v4.app.Person$Builder r4 = new android.support.v4.app.Person$Builder     // Catch: java.lang.ClassCastException -> L96
                    r4.<init>()     // Catch: java.lang.ClassCastException -> L96
                    java.lang.CharSequence r3 = r10.getCharSequence(r3)     // Catch: java.lang.ClassCastException -> L96
                    android.support.v4.app.Person$Builder r3 = r4.setName(r3)     // Catch: java.lang.ClassCastException -> L96
                    android.support.v4.app.Person r3 = r3.build()     // Catch: java.lang.ClassCastException -> L96
                    goto L5e
                L5d:
                    r3 = r8
                L5e:
                    android.support.v4.app.NotificationCompat$MessagingStyle$Message r4 = new android.support.v4.app.NotificationCompat$MessagingStyle$Message     // Catch: java.lang.ClassCastException -> L96
                    java.lang.CharSequence r5 = r10.getCharSequence(r7)     // Catch: java.lang.ClassCastException -> L96
                    long r6 = r10.getLong(r6)     // Catch: java.lang.ClassCastException -> L96
                    r4.<init>(r5, r6, r3)     // Catch: java.lang.ClassCastException -> L96
                    boolean r3 = r10.containsKey(r2)     // Catch: java.lang.ClassCastException -> L96
                    if (r3 == 0) goto L84
                    boolean r3 = r10.containsKey(r0)     // Catch: java.lang.ClassCastException -> L96
                    if (r3 == 0) goto L84
                    java.lang.String r2 = r10.getString(r2)     // Catch: java.lang.ClassCastException -> L96
                    android.os.Parcelable r0 = r10.getParcelable(r0)     // Catch: java.lang.ClassCastException -> L96
                    android.net.Uri r0 = (android.net.Uri) r0     // Catch: java.lang.ClassCastException -> L96
                    r4.setData(r2, r0)     // Catch: java.lang.ClassCastException -> L96
                L84:
                    boolean r0 = r10.containsKey(r1)     // Catch: java.lang.ClassCastException -> L96
                    if (r0 == 0) goto L95
                    android.os.Bundle r0 = r4.getExtras()     // Catch: java.lang.ClassCastException -> L96
                    android.os.Bundle r10 = r10.getBundle(r1)     // Catch: java.lang.ClassCastException -> L96
                    r0.putAll(r10)     // Catch: java.lang.ClassCastException -> L96
                L95:
                    return r4
                L96:
                    return r8
            }

            static java.util.List<android.support.v4.app.NotificationCompat.MessagingStyle.Message> getMessagesFromBundleArray(android.os.Parcelable[] r3) {
                    java.util.ArrayList r0 = new java.util.ArrayList
                    int r1 = r3.length
                    r0.<init>(r1)
                    r1 = 0
                L7:
                    int r2 = r3.length
                    if (r1 >= r2) goto L20
                    r2 = r3[r1]
                    boolean r2 = r2 instanceof android.os.Bundle
                    if (r2 == 0) goto L1d
                    r2 = r3[r1]
                    android.os.Bundle r2 = (android.os.Bundle) r2
                    android.support.v4.app.NotificationCompat$MessagingStyle$Message r2 = getMessageFromBundle(r2)
                    if (r2 == 0) goto L1d
                    r0.add(r2)
                L1d:
                    int r1 = r1 + 1
                    goto L7
                L20:
                    return r0
            }

            private android.os.Bundle toBundle() {
                    r4 = this;
                    android.os.Bundle r0 = new android.os.Bundle
                    r0.<init>()
                    java.lang.CharSequence r1 = r4.mText
                    if (r1 == 0) goto Le
                    java.lang.String r2 = "text"
                    r0.putCharSequence(r2, r1)
                Le:
                    long r1 = r4.mTimestamp
                    java.lang.String r3 = "time"
                    r0.putLong(r3, r1)
                    android.support.v4.app.Person r1 = r4.mPerson
                    if (r1 == 0) goto L3f
                    java.lang.CharSequence r1 = r1.getName()
                    java.lang.String r2 = "sender"
                    r0.putCharSequence(r2, r1)
                    int r1 = android.os.Build.VERSION.SDK_INT
                    r2 = 28
                    if (r1 < r2) goto L34
                    android.support.v4.app.Person r1 = r4.mPerson
                    android.app.Person r1 = r1.toAndroidPerson()
                    java.lang.String r2 = "sender_person"
                    r0.putParcelable(r2, r1)
                    goto L3f
                L34:
                    android.support.v4.app.Person r1 = r4.mPerson
                    android.os.Bundle r1 = r1.toBundle()
                    java.lang.String r2 = "person"
                    r0.putBundle(r2, r1)
                L3f:
                    java.lang.String r1 = r4.mDataMimeType
                    if (r1 == 0) goto L48
                    java.lang.String r2 = "type"
                    r0.putString(r2, r1)
                L48:
                    android.net.Uri r1 = r4.mDataUri
                    if (r1 == 0) goto L51
                    java.lang.String r2 = "uri"
                    r0.putParcelable(r2, r1)
                L51:
                    android.os.Bundle r1 = r4.mExtras
                    if (r1 == 0) goto L5a
                    java.lang.String r2 = "extras"
                    r0.putBundle(r2, r1)
                L5a:
                    return r0
            }

            public java.lang.String getDataMimeType() {
                    r1 = this;
                    java.lang.String r0 = r1.mDataMimeType
                    return r0
            }

            public android.net.Uri getDataUri() {
                    r1 = this;
                    android.net.Uri r0 = r1.mDataUri
                    return r0
            }

            public android.os.Bundle getExtras() {
                    r1 = this;
                    android.os.Bundle r0 = r1.mExtras
                    return r0
            }

            public android.support.v4.app.Person getPerson() {
                    r1 = this;
                    android.support.v4.app.Person r0 = r1.mPerson
                    return r0
            }

            @java.lang.Deprecated
            public java.lang.CharSequence getSender() {
                    r1 = this;
                    android.support.v4.app.Person r0 = r1.mPerson
                    if (r0 != 0) goto L6
                    r0 = 0
                    goto La
                L6:
                    java.lang.CharSequence r0 = r0.getName()
                La:
                    return r0
            }

            public java.lang.CharSequence getText() {
                    r1 = this;
                    java.lang.CharSequence r0 = r1.mText
                    return r0
            }

            public long getTimestamp() {
                    r2 = this;
                    long r0 = r2.mTimestamp
                    return r0
            }

            public android.support.v4.app.NotificationCompat.MessagingStyle.Message setData(java.lang.String r1, android.net.Uri r2) {
                    r0 = this;
                    r0.mDataMimeType = r1
                    r0.mDataUri = r2
                    return r0
            }
        }

        private MessagingStyle() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mMessages = r0
                return
        }

        public MessagingStyle(android.support.v4.app.Person r2) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mMessages = r0
                java.lang.CharSequence r0 = r2.getName()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L17
                r1.mUser = r2
                return
            L17:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "User's name must not be empty."
                r2.<init>(r0)
                throw r2
        }

        @java.lang.Deprecated
        public MessagingStyle(java.lang.CharSequence r2) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mMessages = r0
                android.support.v4.app.Person$Builder r0 = new android.support.v4.app.Person$Builder
                r0.<init>()
                android.support.v4.app.Person$Builder r2 = r0.setName(r2)
                android.support.v4.app.Person r2 = r2.build()
                r1.mUser = r2
                return
        }

        public static android.support.v4.app.NotificationCompat.MessagingStyle extractMessagingStyleFromNotification(android.app.Notification r2) {
                android.os.Bundle r2 = android.support.v4.app.NotificationCompat.getExtras(r2)
                r0 = 0
                if (r2 == 0) goto L18
                java.lang.String r1 = "android.selfDisplayName"
                boolean r1 = r2.containsKey(r1)
                if (r1 != 0) goto L18
                java.lang.String r1 = "android.messagingStyleUser"
                boolean r1 = r2.containsKey(r1)
                if (r1 != 0) goto L18
                return r0
            L18:
                android.support.v4.app.NotificationCompat$MessagingStyle r1 = new android.support.v4.app.NotificationCompat$MessagingStyle     // Catch: java.lang.ClassCastException -> L21
                r1.<init>()     // Catch: java.lang.ClassCastException -> L21
                r1.restoreFromCompatExtras(r2)     // Catch: java.lang.ClassCastException -> L21
                return r1
            L21:
                return r0
        }

        private android.support.v4.app.NotificationCompat.MessagingStyle.Message findLatestIncomingMessage() {
                r3 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r3.mMessages
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L2a
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r1 = r3.mMessages
                java.lang.Object r1 = r1.get(r0)
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r1 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r1
                android.support.v4.app.Person r2 = r1.getPerson()
                if (r2 == 0) goto L27
                android.support.v4.app.Person r2 = r1.getPerson()
                java.lang.CharSequence r2 = r2.getName()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L27
                return r1
            L27:
                int r0 = r0 + (-1)
                goto L8
            L2a:
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r3.mMessages
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L41
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r3.mMessages
                int r1 = r0.size()
                int r1 = r1 + (-1)
                java.lang.Object r0 = r0.get(r1)
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r0 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r0
                return r0
            L41:
                r0 = 0
                return r0
        }

        private boolean hasMessagesWithoutSender() {
                r4 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r4.mMessages
                int r0 = r0.size()
                r1 = 1
                int r0 = r0 - r1
            L8:
                if (r0 < 0) goto L26
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r2 = r4.mMessages
                java.lang.Object r2 = r2.get(r0)
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r2 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r2
                android.support.v4.app.Person r3 = r2.getPerson()
                if (r3 == 0) goto L23
                android.support.v4.app.Person r2 = r2.getPerson()
                java.lang.CharSequence r2 = r2.getName()
                if (r2 != 0) goto L23
                return r1
            L23:
                int r0 = r0 + (-1)
                goto L8
            L26:
                r0 = 0
                return r0
        }

        private android.text.style.TextAppearanceSpan makeFontColorSpan(int r8) {
                r7 = this;
                android.text.style.TextAppearanceSpan r6 = new android.text.style.TextAppearanceSpan
                android.content.res.ColorStateList r4 = android.content.res.ColorStateList.valueOf(r8)
                r1 = 0
                r2 = 0
                r3 = 0
                r5 = 0
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        private java.lang.CharSequence makeMessageLine(android.support.v4.app.NotificationCompat.MessagingStyle.Message r8) {
                r7 = this;
                android.support.v4.text.BidiFormatter r0 = android.support.v4.text.BidiFormatter.getInstance()
                android.text.SpannableStringBuilder r1 = new android.text.SpannableStringBuilder
                r1.<init>()
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 21
                if (r2 < r3) goto L11
                r2 = 1
                goto L12
            L11:
                r2 = 0
            L12:
                if (r2 == 0) goto L17
                r3 = -16777216(0xffffffffff000000, float:-1.7014118E38)
                goto L18
            L17:
                r3 = -1
            L18:
                android.support.v4.app.Person r4 = r8.getPerson()
                java.lang.String r5 = ""
                if (r4 != 0) goto L22
                r4 = r5
                goto L2a
            L22:
                android.support.v4.app.Person r4 = r8.getPerson()
                java.lang.CharSequence r4 = r4.getName()
            L2a:
                boolean r6 = android.text.TextUtils.isEmpty(r4)
                if (r6 == 0) goto L47
                android.support.v4.app.Person r4 = r7.mUser
                java.lang.CharSequence r4 = r4.getName()
                if (r2 == 0) goto L47
                android.support.v4.app.NotificationCompat$Builder r2 = r7.mBuilder
                int r2 = r2.getColor()
                if (r2 == 0) goto L47
                android.support.v4.app.NotificationCompat$Builder r2 = r7.mBuilder
                int r2 = r2.getColor()
                r3 = r2
            L47:
                java.lang.CharSequence r2 = r0.unicodeWrap(r4)
                r1.append(r2)
                android.text.style.TextAppearanceSpan r3 = r7.makeFontColorSpan(r3)
                int r4 = r1.length()
                int r2 = r2.length()
                int r4 = r4 - r2
                int r2 = r1.length()
                r6 = 33
                r1.setSpan(r3, r4, r2, r6)
                java.lang.CharSequence r2 = r8.getText()
                if (r2 != 0) goto L6b
                goto L6f
            L6b:
                java.lang.CharSequence r5 = r8.getText()
            L6f:
                java.lang.String r8 = "  "
                android.text.SpannableStringBuilder r8 = r1.append(r8)
                java.lang.CharSequence r0 = r0.unicodeWrap(r5)
                r8.append(r0)
                return r1
        }

        @Override
        public void addCompatExtras(android.os.Bundle r3) {
                r2 = this;
                super.addCompatExtras(r3)
                android.support.v4.app.Person r0 = r2.mUser
                java.lang.CharSequence r0 = r0.getName()
                java.lang.String r1 = "android.selfDisplayName"
                r3.putCharSequence(r1, r0)
                android.support.v4.app.Person r0 = r2.mUser
                android.os.Bundle r0 = r0.toBundle()
                java.lang.String r1 = "android.messagingStyleUser"
                r3.putBundle(r1, r0)
                java.lang.CharSequence r0 = r2.mConversationTitle
                java.lang.String r1 = "android.hiddenConversationTitle"
                r3.putCharSequence(r1, r0)
                java.lang.CharSequence r0 = r2.mConversationTitle
                if (r0 == 0) goto L33
                java.lang.Boolean r0 = r2.mIsGroupConversation
                boolean r0 = r0.booleanValue()
                if (r0 == 0) goto L33
                java.lang.CharSequence r0 = r2.mConversationTitle
                java.lang.String r1 = "android.conversationTitle"
                r3.putCharSequence(r1, r0)
            L33:
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r2.mMessages
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L46
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r2.mMessages
                android.os.Bundle[] r0 = android.support.v4.app.NotificationCompat.MessagingStyle.Message.getBundleArrayForMessages(r0)
                java.lang.String r1 = "android.messages"
                r3.putParcelableArray(r1, r0)
            L46:
                java.lang.Boolean r0 = r2.mIsGroupConversation
                if (r0 == 0) goto L53
                boolean r0 = r0.booleanValue()
                java.lang.String r1 = "android.isGroupConversation"
                r3.putBoolean(r1, r0)
            L53:
                return
        }

        public android.support.v4.app.NotificationCompat.MessagingStyle addMessage(android.support.v4.app.NotificationCompat.MessagingStyle.Message r2) {
                r1 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r1.mMessages
                r0.add(r2)
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r2 = r1.mMessages
                int r2 = r2.size()
                r0 = 25
                if (r2 <= r0) goto L15
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r2 = r1.mMessages
                r0 = 0
                r2.remove(r0)
            L15:
                return r1
        }

        public android.support.v4.app.NotificationCompat.MessagingStyle addMessage(java.lang.CharSequence r2, long r3, android.support.v4.app.Person r5) {
                r1 = this;
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r0 = new android.support.v4.app.NotificationCompat$MessagingStyle$Message
                r0.<init>(r2, r3, r5)
                r1.addMessage(r0)
                return r1
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.MessagingStyle addMessage(java.lang.CharSequence r4, long r5, java.lang.CharSequence r7) {
                r3 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r3.mMessages
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r1 = new android.support.v4.app.NotificationCompat$MessagingStyle$Message
                android.support.v4.app.Person$Builder r2 = new android.support.v4.app.Person$Builder
                r2.<init>()
                android.support.v4.app.Person$Builder r7 = r2.setName(r7)
                android.support.v4.app.Person r7 = r7.build()
                r1.<init>(r4, r5, r7)
                r0.add(r1)
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r4 = r3.mMessages
                int r4 = r4.size()
                r5 = 25
                if (r4 <= r5) goto L27
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r4 = r3.mMessages
                r5 = 0
                r4.remove(r5)
            L27:
                return r3
        }

        @Override
        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r11) {
                r10 = this;
                boolean r0 = r10.isGroupConversation()
                r10.setGroupConversation(r0)
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 0
                r2 = 24
                if (r0 < r2) goto Lb4
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 28
                if (r0 < r2) goto L20
                android.app.Notification$MessagingStyle r0 = new android.app.Notification$MessagingStyle
                android.support.v4.app.Person r3 = r10.mUser
                android.app.Person r3 = r3.toAndroidPerson()
                r0.<init>(r3)
                goto L2b
            L20:
                android.app.Notification$MessagingStyle r0 = new android.app.Notification$MessagingStyle
                android.support.v4.app.Person r3 = r10.mUser
                java.lang.CharSequence r3 = r3.getName()
                r0.<init>(r3)
            L2b:
                java.lang.Boolean r3 = r10.mIsGroupConversation
                boolean r3 = r3.booleanValue()
                if (r3 != 0) goto L37
                int r3 = android.os.Build.VERSION.SDK_INT
                if (r3 < r2) goto L3c
            L37:
                java.lang.CharSequence r3 = r10.mConversationTitle
                r0.setConversationTitle(r3)
            L3c:
                int r3 = android.os.Build.VERSION.SDK_INT
                if (r3 < r2) goto L49
                java.lang.Boolean r3 = r10.mIsGroupConversation
                boolean r3 = r3.booleanValue()
                r0.setGroupConversation(r3)
            L49:
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r3 = r10.mMessages
                java.util.Iterator r3 = r3.iterator()
            L4f:
                boolean r4 = r3.hasNext()
                if (r4 == 0) goto Lab
                java.lang.Object r4 = r3.next()
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r4 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r4
                int r5 = android.os.Build.VERSION.SDK_INT
                if (r5 < r2) goto L79
                android.support.v4.app.Person r5 = r4.getPerson()
                android.app.Notification$MessagingStyle$Message r6 = new android.app.Notification$MessagingStyle$Message
                java.lang.CharSequence r7 = r4.getText()
                long r8 = r4.getTimestamp()
                if (r5 != 0) goto L71
                r5 = r1
                goto L75
            L71:
                android.app.Person r5 = r5.toAndroidPerson()
            L75:
                r6.<init>(r7, r8, r5)
                goto L96
            L79:
                android.support.v4.app.Person r5 = r4.getPerson()
                if (r5 == 0) goto L88
                android.support.v4.app.Person r5 = r4.getPerson()
                java.lang.CharSequence r5 = r5.getName()
                goto L89
            L88:
                r5 = r1
            L89:
                android.app.Notification$MessagingStyle$Message r6 = new android.app.Notification$MessagingStyle$Message
                java.lang.CharSequence r7 = r4.getText()
                long r8 = r4.getTimestamp()
                r6.<init>(r7, r8, r5)
            L96:
                java.lang.String r5 = r4.getDataMimeType()
                if (r5 == 0) goto La7
                java.lang.String r5 = r4.getDataMimeType()
                android.net.Uri r4 = r4.getDataUri()
                r6.setData(r5, r4)
            La7:
                r0.addMessage(r6)
                goto L4f
            Lab:
                android.app.Notification$Builder r11 = r11.getBuilder()
                r0.setBuilder(r11)
                goto L15f
            Lb4:
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r0 = r10.findLatestIncomingMessage()
                java.lang.CharSequence r2 = r10.mConversationTitle
                if (r2 == 0) goto Lce
                java.lang.Boolean r2 = r10.mIsGroupConversation
                boolean r2 = r2.booleanValue()
                if (r2 == 0) goto Lce
                android.app.Notification$Builder r2 = r11.getBuilder()
                java.lang.CharSequence r3 = r10.mConversationTitle
                r2.setContentTitle(r3)
                goto Lee
            Lce:
                if (r0 == 0) goto Lee
                android.app.Notification$Builder r2 = r11.getBuilder()
                java.lang.String r3 = ""
                r2.setContentTitle(r3)
                android.support.v4.app.Person r2 = r0.getPerson()
                if (r2 == 0) goto Lee
                android.app.Notification$Builder r2 = r11.getBuilder()
                android.support.v4.app.Person r3 = r0.getPerson()
                java.lang.CharSequence r3 = r3.getName()
                r2.setContentTitle(r3)
            Lee:
                if (r0 == 0) goto L104
                android.app.Notification$Builder r2 = r11.getBuilder()
                java.lang.CharSequence r3 = r10.mConversationTitle
                if (r3 == 0) goto Lfd
                java.lang.CharSequence r0 = r10.makeMessageLine(r0)
                goto L101
            Lfd:
                java.lang.CharSequence r0 = r0.getText()
            L101:
                r2.setContentText(r0)
            L104:
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 16
                if (r0 < r2) goto L15f
                android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
                r0.<init>()
                java.lang.CharSequence r2 = r10.mConversationTitle
                r3 = 0
                r4 = 1
                if (r2 != 0) goto L11e
                boolean r2 = r10.hasMessagesWithoutSender()
                if (r2 == 0) goto L11c
                goto L11e
            L11c:
                r2 = r3
                goto L11f
            L11e:
                r2 = r4
            L11f:
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r5 = r10.mMessages
                int r5 = r5.size()
                int r5 = r5 - r4
            L126:
                if (r5 < 0) goto L14f
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r6 = r10.mMessages
                java.lang.Object r6 = r6.get(r5)
                android.support.v4.app.NotificationCompat$MessagingStyle$Message r6 = (android.support.v4.app.NotificationCompat.MessagingStyle.Message) r6
                if (r2 == 0) goto L137
                java.lang.CharSequence r6 = r10.makeMessageLine(r6)
                goto L13b
            L137:
                java.lang.CharSequence r6 = r6.getText()
            L13b:
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r7 = r10.mMessages
                int r7 = r7.size()
                int r7 = r7 - r4
                if (r5 == r7) goto L149
                java.lang.String r7 = "\n"
                r0.insert(r3, r7)
            L149:
                r0.insert(r3, r6)
                int r5 = r5 + (-1)
                goto L126
            L14f:
                android.app.Notification$BigTextStyle r2 = new android.app.Notification$BigTextStyle
                android.app.Notification$Builder r11 = r11.getBuilder()
                r2.<init>(r11)
                android.app.Notification$BigTextStyle r11 = r2.setBigContentTitle(r1)
                r11.bigText(r0)
            L15f:
                return
        }

        public java.lang.CharSequence getConversationTitle() {
                r1 = this;
                java.lang.CharSequence r0 = r1.mConversationTitle
                return r0
        }

        public java.util.List<android.support.v4.app.NotificationCompat.MessagingStyle.Message> getMessages() {
                r1 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r1.mMessages
                return r0
        }

        public android.support.v4.app.Person getUser() {
                r1 = this;
                android.support.v4.app.Person r0 = r1.mUser
                return r0
        }

        @java.lang.Deprecated
        public java.lang.CharSequence getUserDisplayName() {
                r1 = this;
                android.support.v4.app.Person r0 = r1.mUser
                java.lang.CharSequence r0 = r0.getName()
                return r0
        }

        public boolean isGroupConversation() {
                r3 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r3.mBuilder
                r1 = 0
                if (r0 == 0) goto L1d
                android.support.v4.app.NotificationCompat$Builder r0 = r3.mBuilder
                android.content.Context r0 = r0.mContext
                android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
                int r0 = r0.targetSdkVersion
                r2 = 28
                if (r0 >= r2) goto L1d
                java.lang.Boolean r0 = r3.mIsGroupConversation
                if (r0 != 0) goto L1d
                java.lang.CharSequence r0 = r3.mConversationTitle
                if (r0 == 0) goto L1c
                r1 = 1
            L1c:
                return r1
            L1d:
                java.lang.Boolean r0 = r3.mIsGroupConversation
                if (r0 == 0) goto L25
                boolean r1 = r0.booleanValue()
            L25:
                return r1
        }

        @Override
        protected void restoreFromCompatExtras(android.os.Bundle r3) {
                r2 = this;
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r0 = r2.mMessages
                r0.clear()
                java.lang.String r0 = "android.messagingStyleUser"
                boolean r1 = r3.containsKey(r0)
                if (r1 == 0) goto L18
                android.os.Bundle r0 = r3.getBundle(r0)
                android.support.v4.app.Person r0 = android.support.v4.app.Person.fromBundle(r0)
                r2.mUser = r0
                goto L2d
            L18:
                android.support.v4.app.Person$Builder r0 = new android.support.v4.app.Person$Builder
                r0.<init>()
                java.lang.String r1 = "android.selfDisplayName"
                java.lang.String r1 = r3.getString(r1)
                android.support.v4.app.Person$Builder r0 = r0.setName(r1)
                android.support.v4.app.Person r0 = r0.build()
                r2.mUser = r0
            L2d:
                java.lang.String r0 = "android.conversationTitle"
                java.lang.CharSequence r0 = r3.getCharSequence(r0)
                r2.mConversationTitle = r0
                if (r0 != 0) goto L3f
                java.lang.String r0 = "android.hiddenConversationTitle"
                java.lang.CharSequence r0 = r3.getCharSequence(r0)
                r2.mConversationTitle = r0
            L3f:
                java.lang.String r0 = "android.messages"
                android.os.Parcelable[] r0 = r3.getParcelableArray(r0)
                if (r0 == 0) goto L50
                java.util.List<android.support.v4.app.NotificationCompat$MessagingStyle$Message> r1 = r2.mMessages
                java.util.List r0 = android.support.v4.app.NotificationCompat.MessagingStyle.Message.getMessagesFromBundleArray(r0)
                r1.addAll(r0)
            L50:
                java.lang.String r0 = "android.isGroupConversation"
                boolean r1 = r3.containsKey(r0)
                if (r1 == 0) goto L62
                boolean r3 = r3.getBoolean(r0)
                java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
                r2.mIsGroupConversation = r3
            L62:
                return
        }

        public android.support.v4.app.NotificationCompat.MessagingStyle setConversationTitle(java.lang.CharSequence r1) {
                r0 = this;
                r0.mConversationTitle = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.MessagingStyle setGroupConversation(boolean r1) {
                r0 = this;
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
                r0.mIsGroupConversation = r1
                return r0
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface NotificationVisibility {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface StreamType {
    }

    public static abstract class Style {
        java.lang.CharSequence mBigContentTitle;
        protected android.support.v4.app.NotificationCompat.Builder mBuilder;
        java.lang.CharSequence mSummaryText;
        boolean mSummaryTextSet;

        public Style() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mSummaryTextSet = r0
                return
        }

        private int calculateTopPadding() {
                r5 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r5.mBuilder
                android.content.Context r0 = r0.mContext
                android.content.res.Resources r0 = r0.getResources()
                int r1 = android.support.compat.R.dimen.notification_top_pad
                int r1 = r0.getDimensionPixelSize(r1)
                int r2 = android.support.compat.R.dimen.notification_top_pad_large_text
                int r2 = r0.getDimensionPixelSize(r2)
                android.content.res.Configuration r0 = r0.getConfiguration()
                float r0 = r0.fontScale
                r3 = 1065353216(0x3f800000, float:1.0)
                r4 = 1067869798(0x3fa66666, float:1.3)
                float r0 = constrain(r0, r3, r4)
                float r0 = r0 - r3
                r4 = 1050253720(0x3e999998, float:0.29999995)
                float r0 = r0 / r4
                float r3 = r3 - r0
                float r1 = (float) r1
                float r3 = r3 * r1
                float r1 = (float) r2
                float r0 = r0 * r1
                float r3 = r3 + r0
                int r0 = java.lang.Math.round(r3)
                return r0
        }

        private static float constrain(float r1, float r2, float r3) {
                int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
                if (r0 >= 0) goto L6
                r1 = r2
                goto Lb
            L6:
                int r2 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r2 <= 0) goto Lb
                r1 = r3
            Lb:
                return r1
        }

        private android.graphics.Bitmap createColoredBitmap(int r4, int r5, int r6) {
                r3 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r3.mBuilder
                android.content.Context r0 = r0.mContext
                android.content.res.Resources r0 = r0.getResources()
                android.graphics.drawable.Drawable r4 = r0.getDrawable(r4)
                if (r6 != 0) goto L13
                int r0 = r4.getIntrinsicWidth()
                goto L14
            L13:
                r0 = r6
            L14:
                if (r6 != 0) goto L1a
                int r6 = r4.getIntrinsicHeight()
            L1a:
                android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
                android.graphics.Bitmap r1 = android.graphics.Bitmap.createBitmap(r0, r6, r1)
                r2 = 0
                r4.setBounds(r2, r2, r0, r6)
                if (r5 == 0) goto L34
                android.graphics.drawable.Drawable r6 = r4.mutate()
                android.graphics.PorterDuffColorFilter r0 = new android.graphics.PorterDuffColorFilter
                android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
                r0.<init>(r5, r2)
                r6.setColorFilter(r0)
            L34:
                android.graphics.Canvas r5 = new android.graphics.Canvas
                r5.<init>(r1)
                r4.draw(r5)
                return r1
        }

        private android.graphics.Bitmap createIconWithBackground(int r3, int r4, int r5, int r6) {
                r2 = this;
                int r0 = android.support.compat.R.drawable.notification_icon_background
                if (r6 != 0) goto L5
                r6 = 0
            L5:
                android.graphics.Bitmap r6 = r2.createColoredBitmap(r0, r6, r4)
                android.graphics.Canvas r0 = new android.graphics.Canvas
                r0.<init>(r6)
                android.support.v4.app.NotificationCompat$Builder r1 = r2.mBuilder
                android.content.Context r1 = r1.mContext
                android.content.res.Resources r1 = r1.getResources()
                android.graphics.drawable.Drawable r3 = r1.getDrawable(r3)
                android.graphics.drawable.Drawable r3 = r3.mutate()
                r1 = 1
                r3.setFilterBitmap(r1)
                int r4 = r4 - r5
                int r4 = r4 / 2
                int r5 = r5 + r4
                r3.setBounds(r4, r4, r5, r5)
                android.graphics.PorterDuffColorFilter r4 = new android.graphics.PorterDuffColorFilter
                r5 = -1
                android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_ATOP
                r4.<init>(r5, r1)
                r3.setColorFilter(r4)
                r3.draw(r0)
                return r6
        }

        private void hideNormalContent(android.widget.RemoteViews r3) {
                r2 = this;
                int r0 = android.support.compat.R.id.title
                r1 = 8
                r3.setViewVisibility(r0, r1)
                int r0 = android.support.compat.R.id.text2
                r3.setViewVisibility(r0, r1)
                int r0 = android.support.compat.R.id.text
                r3.setViewVisibility(r0, r1)
                return
        }

        public void addCompatExtras(android.os.Bundle r1) {
                r0 = this;
                return
        }

        public void apply(android.support.v4.app.NotificationBuilderWithBuilderAccessor r1) {
                r0 = this;
                return
        }

        public android.widget.RemoteViews applyStandardTemplate(boolean r13, int r14, boolean r15) {
                r12 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r12.mBuilder
                android.content.Context r0 = r0.mContext
                android.content.res.Resources r0 = r0.getResources()
                android.widget.RemoteViews r7 = new android.widget.RemoteViews
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                android.content.Context r1 = r1.mContext
                java.lang.String r1 = r1.getPackageName()
                r7.<init>(r1, r14)
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                int r14 = r14.getPriority()
                r1 = -1
                r8 = 1
                r9 = 0
                if (r14 >= r1) goto L22
                r14 = r8
                goto L23
            L22:
                r14 = r9
            L23:
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 21
                r10 = 16
                if (r2 < r10) goto L50
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 >= r3) goto L50
                java.lang.String r2 = "setBackgroundResource"
                if (r14 == 0) goto L42
                int r14 = android.support.compat.R.id.notification_background
                int r4 = android.support.compat.R.drawable.notification_bg_low
                r7.setInt(r14, r2, r4)
                int r14 = android.support.compat.R.id.icon
                int r4 = android.support.compat.R.drawable.notification_template_icon_low_bg
                r7.setInt(r14, r2, r4)
                goto L50
            L42:
                int r14 = android.support.compat.R.id.notification_background
                int r4 = android.support.compat.R.drawable.notification_bg
                r7.setInt(r14, r2, r4)
                int r14 = android.support.compat.R.id.icon
                int r4 = android.support.compat.R.drawable.notification_template_icon_bg
                r7.setInt(r14, r2, r4)
            L50:
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                android.graphics.Bitmap r14 = r14.mLargeIcon
                r11 = 8
                if (r14 == 0) goto Lb9
                int r14 = android.os.Build.VERSION.SDK_INT
                if (r14 < r10) goto L6b
                int r14 = android.support.compat.R.id.icon
                r7.setViewVisibility(r14, r9)
                int r14 = android.support.compat.R.id.icon
                android.support.v4.app.NotificationCompat$Builder r2 = r12.mBuilder
                android.graphics.Bitmap r2 = r2.mLargeIcon
                r7.setImageViewBitmap(r14, r2)
                goto L70
            L6b:
                int r14 = android.support.compat.R.id.icon
                r7.setViewVisibility(r14, r11)
            L70:
                if (r13 == 0) goto L104
                android.support.v4.app.NotificationCompat$Builder r13 = r12.mBuilder
                android.app.Notification r13 = r13.mNotification
                int r13 = r13.icon
                if (r13 == 0) goto L104
                int r13 = android.support.compat.R.dimen.notification_right_icon_size
                int r13 = r0.getDimensionPixelSize(r13)
                int r14 = android.support.compat.R.dimen.notification_small_icon_background_padding
                int r14 = r0.getDimensionPixelSize(r14)
                int r14 = r14 * 2
                int r14 = r13 - r14
                int r2 = android.os.Build.VERSION.SDK_INT
                if (r2 < r3) goto La4
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                android.app.Notification r1 = r1.mNotification
                int r1 = r1.icon
                android.support.v4.app.NotificationCompat$Builder r2 = r12.mBuilder
                int r2 = r2.getColor()
                android.graphics.Bitmap r13 = r12.createIconWithBackground(r1, r13, r14, r2)
                int r14 = android.support.compat.R.id.right_icon
                r7.setImageViewBitmap(r14, r13)
                goto Lb3
            La4:
                int r13 = android.support.compat.R.id.right_icon
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                android.app.Notification r14 = r14.mNotification
                int r14 = r14.icon
                android.graphics.Bitmap r14 = r12.createColoredBitmap(r14, r1)
                r7.setImageViewBitmap(r13, r14)
            Lb3:
                int r13 = android.support.compat.R.id.right_icon
                r7.setViewVisibility(r13, r9)
                goto L104
            Lb9:
                if (r13 == 0) goto L104
                android.support.v4.app.NotificationCompat$Builder r13 = r12.mBuilder
                android.app.Notification r13 = r13.mNotification
                int r13 = r13.icon
                if (r13 == 0) goto L104
                int r13 = android.support.compat.R.id.icon
                r7.setViewVisibility(r13, r9)
                int r13 = android.os.Build.VERSION.SDK_INT
                if (r13 < r3) goto Lf5
                int r13 = android.support.compat.R.dimen.notification_large_icon_width
                int r13 = r0.getDimensionPixelSize(r13)
                int r14 = android.support.compat.R.dimen.notification_big_circle_margin
                int r14 = r0.getDimensionPixelSize(r14)
                int r13 = r13 - r14
                int r14 = android.support.compat.R.dimen.notification_small_icon_size_as_large
                int r14 = r0.getDimensionPixelSize(r14)
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                android.app.Notification r1 = r1.mNotification
                int r1 = r1.icon
                android.support.v4.app.NotificationCompat$Builder r2 = r12.mBuilder
                int r2 = r2.getColor()
                android.graphics.Bitmap r13 = r12.createIconWithBackground(r1, r13, r14, r2)
                int r14 = android.support.compat.R.id.icon
                r7.setImageViewBitmap(r14, r13)
                goto L104
            Lf5:
                int r13 = android.support.compat.R.id.icon
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                android.app.Notification r14 = r14.mNotification
                int r14 = r14.icon
                android.graphics.Bitmap r14 = r12.createColoredBitmap(r14, r1)
                r7.setImageViewBitmap(r13, r14)
            L104:
                android.support.v4.app.NotificationCompat$Builder r13 = r12.mBuilder
                java.lang.CharSequence r13 = r13.mContentTitle
                if (r13 == 0) goto L113
                int r13 = android.support.compat.R.id.title
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                java.lang.CharSequence r14 = r14.mContentTitle
                r7.setTextViewText(r13, r14)
            L113:
                android.support.v4.app.NotificationCompat$Builder r13 = r12.mBuilder
                java.lang.CharSequence r13 = r13.mContentText
                if (r13 == 0) goto L124
                int r13 = android.support.compat.R.id.text
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                java.lang.CharSequence r14 = r14.mContentText
                r7.setTextViewText(r13, r14)
                r13 = r8
                goto L125
            L124:
                r13 = r9
            L125:
                int r14 = android.os.Build.VERSION.SDK_INT
                if (r14 >= r3) goto L131
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                android.graphics.Bitmap r14 = r14.mLargeIcon
                if (r14 == 0) goto L131
                r14 = r8
                goto L132
            L131:
                r14 = r9
            L132:
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                java.lang.CharSequence r1 = r1.mContentInfo
                if (r1 == 0) goto L149
                int r13 = android.support.compat.R.id.info
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                java.lang.CharSequence r14 = r14.mContentInfo
                r7.setTextViewText(r13, r14)
                int r13 = android.support.compat.R.id.info
                r7.setViewVisibility(r13, r9)
            L146:
                r13 = r8
                r14 = r13
                goto L184
            L149:
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                int r1 = r1.mNumber
                if (r1 <= 0) goto L17f
                int r13 = android.support.compat.R.integer.status_bar_notification_info_maxnum
                int r13 = r0.getInteger(r13)
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                int r14 = r14.mNumber
                if (r14 <= r13) goto L167
                int r13 = android.support.compat.R.id.info
                int r14 = android.support.compat.R.string.status_bar_notification_info_overflow
                java.lang.String r14 = r0.getString(r14)
                r7.setTextViewText(r13, r14)
                goto L179
            L167:
                java.text.NumberFormat r13 = java.text.NumberFormat.getIntegerInstance()
                int r14 = android.support.compat.R.id.info
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                int r1 = r1.mNumber
                long r1 = (long) r1
                java.lang.String r13 = r13.format(r1)
                r7.setTextViewText(r14, r13)
            L179:
                int r13 = android.support.compat.R.id.info
                r7.setViewVisibility(r13, r9)
                goto L146
            L17f:
                int r1 = android.support.compat.R.id.info
                r7.setViewVisibility(r1, r11)
            L184:
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                java.lang.CharSequence r1 = r1.mSubText
                if (r1 == 0) goto L1b2
                int r1 = android.os.Build.VERSION.SDK_INT
                if (r1 < r10) goto L1b2
                int r1 = android.support.compat.R.id.text
                android.support.v4.app.NotificationCompat$Builder r2 = r12.mBuilder
                java.lang.CharSequence r2 = r2.mSubText
                r7.setTextViewText(r1, r2)
                android.support.v4.app.NotificationCompat$Builder r1 = r12.mBuilder
                java.lang.CharSequence r1 = r1.mContentText
                if (r1 == 0) goto L1ad
                int r1 = android.support.compat.R.id.text2
                android.support.v4.app.NotificationCompat$Builder r2 = r12.mBuilder
                java.lang.CharSequence r2 = r2.mContentText
                r7.setTextViewText(r1, r2)
                int r1 = android.support.compat.R.id.text2
                r7.setViewVisibility(r1, r9)
                r1 = r8
                goto L1b3
            L1ad:
                int r1 = android.support.compat.R.id.text2
                r7.setViewVisibility(r1, r11)
            L1b2:
                r1 = r9
            L1b3:
                if (r1 == 0) goto L1d1
                int r1 = android.os.Build.VERSION.SDK_INT
                if (r1 < r10) goto L1d1
                if (r15 == 0) goto L1c7
                int r15 = android.support.compat.R.dimen.notification_subtext_size
                int r15 = r0.getDimensionPixelSize(r15)
                float r15 = (float) r15
                int r0 = android.support.compat.R.id.text
                r7.setTextViewTextSize(r0, r9, r15)
            L1c7:
                int r2 = android.support.compat.R.id.line1
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 0
                r1 = r7
                r1.setViewPadding(r2, r3, r4, r5, r6)
            L1d1:
                android.support.v4.app.NotificationCompat$Builder r15 = r12.mBuilder
                long r0 = r15.getWhenIfShowing()
                r2 = 0
                int r15 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r15 == 0) goto L21e
                android.support.v4.app.NotificationCompat$Builder r14 = r12.mBuilder
                boolean r14 = r14.mUseChronometer
                if (r14 == 0) goto L20b
                int r14 = android.os.Build.VERSION.SDK_INT
                if (r14 < r10) goto L20b
                int r14 = android.support.compat.R.id.chronometer
                r7.setViewVisibility(r14, r9)
                int r14 = android.support.compat.R.id.chronometer
                android.support.v4.app.NotificationCompat$Builder r15 = r12.mBuilder
                long r0 = r15.getWhenIfShowing()
                long r2 = android.os.SystemClock.elapsedRealtime()
                long r4 = java.lang.System.currentTimeMillis()
                long r2 = r2 - r4
                long r0 = r0 + r2
                java.lang.String r15 = "setBase"
                r7.setLong(r14, r15, r0)
                int r14 = android.support.compat.R.id.chronometer
                java.lang.String r15 = "setStarted"
                r7.setBoolean(r14, r15, r8)
                goto L21f
            L20b:
                int r14 = android.support.compat.R.id.time
                r7.setViewVisibility(r14, r9)
                int r14 = android.support.compat.R.id.time
                android.support.v4.app.NotificationCompat$Builder r15 = r12.mBuilder
                long r0 = r15.getWhenIfShowing()
                java.lang.String r15 = "setTime"
                r7.setLong(r14, r15, r0)
                goto L21f
            L21e:
                r8 = r14
            L21f:
                int r14 = android.support.compat.R.id.right_side
                if (r8 == 0) goto L225
                r15 = r9
                goto L226
            L225:
                r15 = r11
            L226:
                r7.setViewVisibility(r14, r15)
                int r14 = android.support.compat.R.id.line3
                if (r13 == 0) goto L22e
                goto L22f
            L22e:
                r9 = r11
            L22f:
                r7.setViewVisibility(r14, r9)
                return r7
        }

        public android.app.Notification build() {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                if (r0 == 0) goto L9
                android.app.Notification r0 = r0.build()
                goto La
            L9:
                r0 = 0
            La:
                return r0
        }

        public void buildIntoRemoteViews(android.widget.RemoteViews r8, android.widget.RemoteViews r9) {
                r7 = this;
                r7.hideNormalContent(r8)
                int r0 = android.support.compat.R.id.notification_main_column
                r8.removeAllViews(r0)
                int r0 = android.support.compat.R.id.notification_main_column
                android.widget.RemoteViews r9 = r9.clone()
                r8.addView(r0, r9)
                int r9 = android.support.compat.R.id.notification_main_column
                r0 = 0
                r8.setViewVisibility(r9, r0)
                int r9 = android.os.Build.VERSION.SDK_INT
                r0 = 21
                if (r9 < r0) goto L2a
                int r2 = android.support.compat.R.id.notification_main_column_container
                r3 = 0
                int r4 = r7.calculateTopPadding()
                r5 = 0
                r6 = 0
                r1 = r8
                r1.setViewPadding(r2, r3, r4, r5, r6)
            L2a:
                return
        }

        public android.graphics.Bitmap createColoredBitmap(int r2, int r3) {
                r1 = this;
                r0 = 0
                android.graphics.Bitmap r2 = r1.createColoredBitmap(r2, r3, r0)
                return r2
        }

        public android.widget.RemoteViews makeBigContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public android.widget.RemoteViews makeContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public android.widget.RemoteViews makeHeadsUpContentView(android.support.v4.app.NotificationBuilderWithBuilderAccessor r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        protected void restoreFromCompatExtras(android.os.Bundle r1) {
                r0 = this;
                return
        }

        public void setBuilder(android.support.v4.app.NotificationCompat.Builder r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                if (r0 == r2) goto Lb
                r1.mBuilder = r2
                if (r2 == 0) goto Lb
                r2.setStyle(r1)
            Lb:
                return
        }
    }

    public static final class WearableExtender implements android.support.v4.app.NotificationCompat.Extender {
        private static final int DEFAULT_CONTENT_ICON_GRAVITY = 8388613;
        private static final int DEFAULT_FLAGS = 1;
        private static final int DEFAULT_GRAVITY = 80;
        private static final java.lang.String EXTRA_WEARABLE_EXTENSIONS = "android.wearable.EXTENSIONS";
        private static final int FLAG_BIG_PICTURE_AMBIENT = 32;
        private static final int FLAG_CONTENT_INTENT_AVAILABLE_OFFLINE = 1;
        private static final int FLAG_HINT_AVOID_BACKGROUND_CLIPPING = 16;
        private static final int FLAG_HINT_CONTENT_INTENT_LAUNCHES_ACTIVITY = 64;
        private static final int FLAG_HINT_HIDE_ICON = 2;
        private static final int FLAG_HINT_SHOW_BACKGROUND_ONLY = 4;
        private static final int FLAG_START_SCROLL_BOTTOM = 8;
        private static final java.lang.String KEY_ACTIONS = "actions";
        private static final java.lang.String KEY_BACKGROUND = "background";
        private static final java.lang.String KEY_BRIDGE_TAG = "bridgeTag";
        private static final java.lang.String KEY_CONTENT_ACTION_INDEX = "contentActionIndex";
        private static final java.lang.String KEY_CONTENT_ICON = "contentIcon";
        private static final java.lang.String KEY_CONTENT_ICON_GRAVITY = "contentIconGravity";
        private static final java.lang.String KEY_CUSTOM_CONTENT_HEIGHT = "customContentHeight";
        private static final java.lang.String KEY_CUSTOM_SIZE_PRESET = "customSizePreset";
        private static final java.lang.String KEY_DISMISSAL_ID = "dismissalId";
        private static final java.lang.String KEY_DISPLAY_INTENT = "displayIntent";
        private static final java.lang.String KEY_FLAGS = "flags";
        private static final java.lang.String KEY_GRAVITY = "gravity";
        private static final java.lang.String KEY_HINT_SCREEN_TIMEOUT = "hintScreenTimeout";
        private static final java.lang.String KEY_PAGES = "pages";
        public static final int SCREEN_TIMEOUT_LONG = -1;
        public static final int SCREEN_TIMEOUT_SHORT = 0;
        public static final int SIZE_DEFAULT = 0;
        public static final int SIZE_FULL_SCREEN = 5;
        public static final int SIZE_LARGE = 4;
        public static final int SIZE_MEDIUM = 3;
        public static final int SIZE_SMALL = 2;
        public static final int SIZE_XSMALL = 1;
        public static final int UNSET_ACTION_INDEX = -1;
        private java.util.ArrayList<android.support.v4.app.NotificationCompat.Action> mActions;
        private android.graphics.Bitmap mBackground;
        private java.lang.String mBridgeTag;
        private int mContentActionIndex;
        private int mContentIcon;
        private int mContentIconGravity;
        private int mCustomContentHeight;
        private int mCustomSizePreset;
        private java.lang.String mDismissalId;
        private android.app.PendingIntent mDisplayIntent;
        private int mFlags;
        private int mGravity;
        private int mHintScreenTimeout;
        private java.util.ArrayList<android.app.Notification> mPages;

        public WearableExtender() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mActions = r0
                r0 = 1
                r1.mFlags = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mPages = r0
                r0 = 8388613(0x800005, float:1.175495E-38)
                r1.mContentIconGravity = r0
                r0 = -1
                r1.mContentActionIndex = r0
                r0 = 0
                r1.mCustomSizePreset = r0
                r0 = 80
                r1.mGravity = r0
                return
        }

        public WearableExtender(android.app.Notification r13) {
                r12 = this;
                r12.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r12.mActions = r0
                r0 = 1
                r12.mFlags = r0
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r12.mPages = r1
                r1 = 8388613(0x800005, float:1.175495E-38)
                r12.mContentIconGravity = r1
                r2 = -1
                r12.mContentActionIndex = r2
                r3 = 0
                r12.mCustomSizePreset = r3
                r4 = 80
                r12.mGravity = r4
                android.os.Bundle r13 = android.support.v4.app.NotificationCompat.getExtras(r13)
                if (r13 == 0) goto L30
                java.lang.String r5 = "android.wearable.EXTENSIONS"
                android.os.Bundle r13 = r13.getBundle(r5)
                goto L31
            L30:
                r13 = 0
            L31:
                if (r13 == 0) goto Le8
                java.lang.String r5 = "actions"
                java.util.ArrayList r5 = r13.getParcelableArrayList(r5)
                int r6 = android.os.Build.VERSION.SDK_INT
                r7 = 16
                if (r6 < r7) goto L77
                if (r5 == 0) goto L77
                int r6 = r5.size()
                android.support.v4.app.NotificationCompat$Action[] r8 = new android.support.v4.app.NotificationCompat.Action[r6]
                r9 = r3
            L48:
                if (r9 >= r6) goto L70
                int r10 = android.os.Build.VERSION.SDK_INT
                r11 = 20
                if (r10 < r11) goto L5d
                java.lang.Object r10 = r5.get(r9)
                android.app.Notification$Action r10 = (android.app.Notification.Action) r10
                android.support.v4.app.NotificationCompat$Action r10 = android.support.v4.app.NotificationCompat.getActionCompatFromAction(r10)
                r8[r9] = r10
                goto L6d
            L5d:
                int r10 = android.os.Build.VERSION.SDK_INT
                if (r10 < r7) goto L6d
                java.lang.Object r10 = r5.get(r9)
                android.os.Bundle r10 = (android.os.Bundle) r10
                android.support.v4.app.NotificationCompat$Action r10 = android.support.v4.app.NotificationCompatJellybean.getActionFromBundle(r10)
                r8[r9] = r10
            L6d:
                int r9 = r9 + 1
                goto L48
            L70:
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r5 = r12.mActions
                android.support.v4.app.NotificationCompat$Action[] r8 = (android.support.v4.app.NotificationCompat.Action[]) r8
                java.util.Collections.addAll(r5, r8)
            L77:
                java.lang.String r5 = "flags"
                int r0 = r13.getInt(r5, r0)
                r12.mFlags = r0
                java.lang.String r0 = "displayIntent"
                android.os.Parcelable r0 = r13.getParcelable(r0)
                android.app.PendingIntent r0 = (android.app.PendingIntent) r0
                r12.mDisplayIntent = r0
                java.lang.String r0 = "pages"
                android.app.Notification[] r0 = android.support.v4.app.NotificationCompat.getNotificationArrayFromBundle(r13, r0)
                if (r0 == 0) goto L96
                java.util.ArrayList<android.app.Notification> r5 = r12.mPages
                java.util.Collections.addAll(r5, r0)
            L96:
                java.lang.String r0 = "background"
                android.os.Parcelable r0 = r13.getParcelable(r0)
                android.graphics.Bitmap r0 = (android.graphics.Bitmap) r0
                r12.mBackground = r0
                java.lang.String r0 = "contentIcon"
                int r0 = r13.getInt(r0)
                r12.mContentIcon = r0
                java.lang.String r0 = "contentIconGravity"
                int r0 = r13.getInt(r0, r1)
                r12.mContentIconGravity = r0
                java.lang.String r0 = "contentActionIndex"
                int r0 = r13.getInt(r0, r2)
                r12.mContentActionIndex = r0
                java.lang.String r0 = "customSizePreset"
                int r0 = r13.getInt(r0, r3)
                r12.mCustomSizePreset = r0
                java.lang.String r0 = "customContentHeight"
                int r0 = r13.getInt(r0)
                r12.mCustomContentHeight = r0
                java.lang.String r0 = "gravity"
                int r0 = r13.getInt(r0, r4)
                r12.mGravity = r0
                java.lang.String r0 = "hintScreenTimeout"
                int r0 = r13.getInt(r0)
                r12.mHintScreenTimeout = r0
                java.lang.String r0 = "dismissalId"
                java.lang.String r0 = r13.getString(r0)
                r12.mDismissalId = r0
                java.lang.String r0 = "bridgeTag"
                java.lang.String r13 = r13.getString(r0)
                r12.mBridgeTag = r13
            Le8:
                return
        }

        private static android.app.Notification.Action getActionFromActionCompat(android.support.v4.app.NotificationCompat.Action r4) {
                android.app.Notification$Action$Builder r0 = new android.app.Notification$Action$Builder
                int r1 = r4.getIcon()
                java.lang.CharSequence r2 = r4.getTitle()
                android.app.PendingIntent r3 = r4.getActionIntent()
                r0.<init>(r1, r2, r3)
                android.os.Bundle r1 = r4.getExtras()
                if (r1 == 0) goto L21
                android.os.Bundle r1 = new android.os.Bundle
                android.os.Bundle r2 = r4.getExtras()
                r1.<init>(r2)
                goto L26
            L21:
                android.os.Bundle r1 = new android.os.Bundle
                r1.<init>()
            L26:
                boolean r2 = r4.getAllowGeneratedReplies()
                java.lang.String r3 = "android.support.allowGeneratedReplies"
                r1.putBoolean(r3, r2)
                int r2 = android.os.Build.VERSION.SDK_INT
                r3 = 24
                if (r2 < r3) goto L3c
                boolean r2 = r4.getAllowGeneratedReplies()
                r0.setAllowGeneratedReplies(r2)
            L3c:
                r0.addExtras(r1)
                android.support.v4.app.RemoteInput[] r4 = r4.getRemoteInputs()
                if (r4 == 0) goto L55
                android.app.RemoteInput[] r4 = android.support.v4.app.RemoteInput.fromCompat(r4)
                int r1 = r4.length
                r2 = 0
            L4b:
                if (r2 >= r1) goto L55
                r3 = r4[r2]
                r0.addRemoteInput(r3)
                int r2 = r2 + 1
                goto L4b
            L55:
                android.app.Notification$Action r4 = r0.build()
                return r4
        }

        private void setFlag(int r1, boolean r2) {
                r0 = this;
                if (r2 == 0) goto L8
                int r2 = r0.mFlags
                r1 = r1 | r2
                r0.mFlags = r1
                goto Le
            L8:
                int r2 = r0.mFlags
                int r1 = ~r1
                r1 = r1 & r2
                r0.mFlags = r1
            Le:
                return
        }

        public android.support.v4.app.NotificationCompat.WearableExtender addAction(android.support.v4.app.NotificationCompat.Action r2) {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mActions
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender addActions(java.util.List<android.support.v4.app.NotificationCompat.Action> r2) {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mActions
                r0.addAll(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender addPage(android.app.Notification r2) {
                r1 = this;
                java.util.ArrayList<android.app.Notification> r0 = r1.mPages
                r0.add(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender addPages(java.util.List<android.app.Notification> r2) {
                r1 = this;
                java.util.ArrayList<android.app.Notification> r0 = r1.mPages
                r0.addAll(r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender clearActions() {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mActions
                r0.clear()
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender clearPages() {
                r1 = this;
                java.util.ArrayList<android.app.Notification> r0 = r1.mPages
                r0.clear()
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender clone() {
                r3 = this;
                android.support.v4.app.NotificationCompat$WearableExtender r0 = new android.support.v4.app.NotificationCompat$WearableExtender
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r2 = r3.mActions
                r1.<init>(r2)
                r0.mActions = r1
                int r1 = r3.mFlags
                r0.mFlags = r1
                android.app.PendingIntent r1 = r3.mDisplayIntent
                r0.mDisplayIntent = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                java.util.ArrayList<android.app.Notification> r2 = r3.mPages
                r1.<init>(r2)
                r0.mPages = r1
                android.graphics.Bitmap r1 = r3.mBackground
                r0.mBackground = r1
                int r1 = r3.mContentIcon
                r0.mContentIcon = r1
                int r1 = r3.mContentIconGravity
                r0.mContentIconGravity = r1
                int r1 = r3.mContentActionIndex
                r0.mContentActionIndex = r1
                int r1 = r3.mCustomSizePreset
                r0.mCustomSizePreset = r1
                int r1 = r3.mCustomContentHeight
                r0.mCustomContentHeight = r1
                int r1 = r3.mGravity
                r0.mGravity = r1
                int r1 = r3.mHintScreenTimeout
                r0.mHintScreenTimeout = r1
                java.lang.String r1 = r3.mDismissalId
                r0.mDismissalId = r1
                java.lang.String r1 = r3.mBridgeTag
                r0.mBridgeTag = r1
                return r0
        }

        public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
                r1 = this;
                android.support.v4.app.NotificationCompat$WearableExtender r0 = r1.clone()
                return r0
        }

        @Override
        public android.support.v4.app.NotificationCompat.Builder extend(android.support.v4.app.NotificationCompat.Builder r9) {
                r8 = this;
                android.os.Bundle r0 = new android.os.Bundle
                r0.<init>()
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r1 = r8.mActions
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L54
                int r1 = android.os.Build.VERSION.SDK_INT
                java.lang.String r2 = "actions"
                r3 = 16
                if (r1 < r3) goto L50
                java.util.ArrayList r1 = new java.util.ArrayList
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r4 = r8.mActions
                int r4 = r4.size()
                r1.<init>(r4)
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r4 = r8.mActions
                java.util.Iterator r4 = r4.iterator()
            L26:
                boolean r5 = r4.hasNext()
                if (r5 == 0) goto L4c
                java.lang.Object r5 = r4.next()
                android.support.v4.app.NotificationCompat$Action r5 = (android.support.v4.app.NotificationCompat.Action) r5
                int r6 = android.os.Build.VERSION.SDK_INT
                r7 = 20
                if (r6 < r7) goto L40
                android.app.Notification$Action r5 = getActionFromActionCompat(r5)
                r1.add(r5)
                goto L26
            L40:
                int r6 = android.os.Build.VERSION.SDK_INT
                if (r6 < r3) goto L26
                android.os.Bundle r5 = android.support.v4.app.NotificationCompatJellybean.getBundleForAction(r5)
                r1.add(r5)
                goto L26
            L4c:
                r0.putParcelableArrayList(r2, r1)
                goto L54
            L50:
                r1 = 0
                r0.putParcelableArrayList(r2, r1)
            L54:
                int r1 = r8.mFlags
                r2 = 1
                if (r1 == r2) goto L5e
                java.lang.String r2 = "flags"
                r0.putInt(r2, r1)
            L5e:
                android.app.PendingIntent r1 = r8.mDisplayIntent
                if (r1 == 0) goto L67
                java.lang.String r2 = "displayIntent"
                r0.putParcelable(r2, r1)
            L67:
                java.util.ArrayList<android.app.Notification> r1 = r8.mPages
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L82
                java.util.ArrayList<android.app.Notification> r1 = r8.mPages
                int r2 = r1.size()
                android.app.Notification[] r2 = new android.app.Notification[r2]
                java.lang.Object[] r1 = r1.toArray(r2)
                android.os.Parcelable[] r1 = (android.os.Parcelable[]) r1
                java.lang.String r2 = "pages"
                r0.putParcelableArray(r2, r1)
            L82:
                android.graphics.Bitmap r1 = r8.mBackground
                if (r1 == 0) goto L8b
                java.lang.String r2 = "background"
                r0.putParcelable(r2, r1)
            L8b:
                int r1 = r8.mContentIcon
                if (r1 == 0) goto L94
                java.lang.String r2 = "contentIcon"
                r0.putInt(r2, r1)
            L94:
                int r1 = r8.mContentIconGravity
                r2 = 8388613(0x800005, float:1.175495E-38)
                if (r1 == r2) goto La0
                java.lang.String r2 = "contentIconGravity"
                r0.putInt(r2, r1)
            La0:
                int r1 = r8.mContentActionIndex
                r2 = -1
                if (r1 == r2) goto Laa
                java.lang.String r2 = "contentActionIndex"
                r0.putInt(r2, r1)
            Laa:
                int r1 = r8.mCustomSizePreset
                if (r1 == 0) goto Lb3
                java.lang.String r2 = "customSizePreset"
                r0.putInt(r2, r1)
            Lb3:
                int r1 = r8.mCustomContentHeight
                if (r1 == 0) goto Lbc
                java.lang.String r2 = "customContentHeight"
                r0.putInt(r2, r1)
            Lbc:
                int r1 = r8.mGravity
                r2 = 80
                if (r1 == r2) goto Lc7
                java.lang.String r2 = "gravity"
                r0.putInt(r2, r1)
            Lc7:
                int r1 = r8.mHintScreenTimeout
                if (r1 == 0) goto Ld0
                java.lang.String r2 = "hintScreenTimeout"
                r0.putInt(r2, r1)
            Ld0:
                java.lang.String r1 = r8.mDismissalId
                if (r1 == 0) goto Ld9
                java.lang.String r2 = "dismissalId"
                r0.putString(r2, r1)
            Ld9:
                java.lang.String r1 = r8.mBridgeTag
                if (r1 == 0) goto Le2
                java.lang.String r2 = "bridgeTag"
                r0.putString(r2, r1)
            Le2:
                android.os.Bundle r1 = r9.getExtras()
                java.lang.String r2 = "android.wearable.EXTENSIONS"
                r1.putBundle(r2, r0)
                return r9
        }

        public java.util.List<android.support.v4.app.NotificationCompat.Action> getActions() {
                r1 = this;
                java.util.ArrayList<android.support.v4.app.NotificationCompat$Action> r0 = r1.mActions
                return r0
        }

        public android.graphics.Bitmap getBackground() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.mBackground
                return r0
        }

        public java.lang.String getBridgeTag() {
                r1 = this;
                java.lang.String r0 = r1.mBridgeTag
                return r0
        }

        public int getContentAction() {
                r1 = this;
                int r0 = r1.mContentActionIndex
                return r0
        }

        @java.lang.Deprecated
        public int getContentIcon() {
                r1 = this;
                int r0 = r1.mContentIcon
                return r0
        }

        @java.lang.Deprecated
        public int getContentIconGravity() {
                r1 = this;
                int r0 = r1.mContentIconGravity
                return r0
        }

        public boolean getContentIntentAvailableOffline() {
                r2 = this;
                int r0 = r2.mFlags
                r1 = 1
                r0 = r0 & r1
                if (r0 == 0) goto L7
                goto L8
            L7:
                r1 = 0
            L8:
                return r1
        }

        @java.lang.Deprecated
        public int getCustomContentHeight() {
                r1 = this;
                int r0 = r1.mCustomContentHeight
                return r0
        }

        @java.lang.Deprecated
        public int getCustomSizePreset() {
                r1 = this;
                int r0 = r1.mCustomSizePreset
                return r0
        }

        public java.lang.String getDismissalId() {
                r1 = this;
                java.lang.String r0 = r1.mDismissalId
                return r0
        }

        public android.app.PendingIntent getDisplayIntent() {
                r1 = this;
                android.app.PendingIntent r0 = r1.mDisplayIntent
                return r0
        }

        @java.lang.Deprecated
        public int getGravity() {
                r1 = this;
                int r0 = r1.mGravity
                return r0
        }

        public boolean getHintAmbientBigPicture() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 32
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        @java.lang.Deprecated
        public boolean getHintAvoidBackgroundClipping() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 16
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        public boolean getHintContentIntentLaunchesActivity() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 64
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        @java.lang.Deprecated
        public boolean getHintHideIcon() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 2
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        @java.lang.Deprecated
        public int getHintScreenTimeout() {
                r1 = this;
                int r0 = r1.mHintScreenTimeout
                return r0
        }

        @java.lang.Deprecated
        public boolean getHintShowBackgroundOnly() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 4
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        public java.util.List<android.app.Notification> getPages() {
                r1 = this;
                java.util.ArrayList<android.app.Notification> r0 = r1.mPages
                return r0
        }

        public boolean getStartScrollBottom() {
                r1 = this;
                int r0 = r1.mFlags
                r0 = r0 & 8
                if (r0 == 0) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setBackground(android.graphics.Bitmap r1) {
                r0 = this;
                r0.mBackground = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setBridgeTag(java.lang.String r1) {
                r0 = this;
                r0.mBridgeTag = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setContentAction(int r1) {
                r0 = this;
                r0.mContentActionIndex = r1
                return r0
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setContentIcon(int r1) {
                r0 = this;
                r0.mContentIcon = r1
                return r0
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setContentIconGravity(int r1) {
                r0 = this;
                r0.mContentIconGravity = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setContentIntentAvailableOffline(boolean r2) {
                r1 = this;
                r0 = 1
                r1.setFlag(r0, r2)
                return r1
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setCustomContentHeight(int r1) {
                r0 = this;
                r0.mCustomContentHeight = r1
                return r0
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setCustomSizePreset(int r1) {
                r0 = this;
                r0.mCustomSizePreset = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setDismissalId(java.lang.String r1) {
                r0 = this;
                r0.mDismissalId = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setDisplayIntent(android.app.PendingIntent r1) {
                r0 = this;
                r0.mDisplayIntent = r1
                return r0
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setGravity(int r1) {
                r0 = this;
                r0.mGravity = r1
                return r0
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setHintAmbientBigPicture(boolean r2) {
                r1 = this;
                r0 = 32
                r1.setFlag(r0, r2)
                return r1
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setHintAvoidBackgroundClipping(boolean r2) {
                r1 = this;
                r0 = 16
                r1.setFlag(r0, r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setHintContentIntentLaunchesActivity(boolean r2) {
                r1 = this;
                r0 = 64
                r1.setFlag(r0, r2)
                return r1
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setHintHideIcon(boolean r2) {
                r1 = this;
                r0 = 2
                r1.setFlag(r0, r2)
                return r1
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setHintScreenTimeout(int r1) {
                r0 = this;
                r0.mHintScreenTimeout = r1
                return r0
        }

        @java.lang.Deprecated
        public android.support.v4.app.NotificationCompat.WearableExtender setHintShowBackgroundOnly(boolean r2) {
                r1 = this;
                r0 = 4
                r1.setFlag(r0, r2)
                return r1
        }

        public android.support.v4.app.NotificationCompat.WearableExtender setStartScrollBottom(boolean r2) {
                r1 = this;
                r0 = 8
                r1.setFlag(r0, r2)
                return r1
        }
    }

    @java.lang.Deprecated
    public NotificationCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.app.NotificationCompat.Action getAction(android.app.Notification r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lf
            android.app.Notification$Action[] r3 = r3.actions
            r3 = r3[r4]
            android.support.v4.app.NotificationCompat$Action r3 = getActionCompatFromAction(r3)
            return r3
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 0
            if (r0 < r1) goto L36
            android.app.Notification$Action[] r0 = r3.actions
            r0 = r0[r4]
            android.os.Bundle r3 = r3.extras
            java.lang.String r1 = "android.support.actionExtras"
            android.util.SparseArray r3 = r3.getSparseParcelableArray(r1)
            if (r3 == 0) goto L2b
            java.lang.Object r3 = r3.get(r4)
            r2 = r3
            android.os.Bundle r2 = (android.os.Bundle) r2
        L2b:
            int r3 = r0.icon
            java.lang.CharSequence r4 = r0.title
            android.app.PendingIntent r0 = r0.actionIntent
            android.support.v4.app.NotificationCompat$Action r3 = android.support.v4.app.NotificationCompatJellybean.readAction(r3, r4, r0, r2)
            return r3
        L36:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L41
            android.support.v4.app.NotificationCompat$Action r3 = android.support.v4.app.NotificationCompatJellybean.getAction(r3, r4)
            return r3
        L41:
            return r2
    }

    static android.support.v4.app.NotificationCompat.Action getActionCompatFromAction(android.app.Notification.Action r14) {
            android.app.RemoteInput[] r0 = r14.getRemoteInputs()
            r1 = 0
            if (r0 != 0) goto La
            r0 = 0
            r9 = r0
            goto L34
        La:
            int r2 = r0.length
            android.support.v4.app.RemoteInput[] r2 = new android.support.v4.app.RemoteInput[r2]
            r3 = r1
        Le:
            int r4 = r0.length
            if (r3 >= r4) goto L33
            r4 = r0[r3]
            android.support.v4.app.RemoteInput r12 = new android.support.v4.app.RemoteInput
            java.lang.String r6 = r4.getResultKey()
            java.lang.CharSequence r7 = r4.getLabel()
            java.lang.CharSequence[] r8 = r4.getChoices()
            boolean r9 = r4.getAllowFreeFormInput()
            android.os.Bundle r10 = r4.getExtras()
            r11 = 0
            r5 = r12
            r5.<init>(r6, r7, r8, r9, r10, r11)
            r2[r3] = r12
            int r3 = r3 + 1
            goto Le
        L33:
            r9 = r2
        L34:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            java.lang.String r3 = "android.support.allowGeneratedReplies"
            r4 = 1
            if (r0 < r2) goto L52
            android.os.Bundle r0 = r14.getExtras()
            boolean r0 = r0.getBoolean(r3)
            if (r0 != 0) goto L50
            boolean r0 = r14.getAllowGeneratedReplies()
            if (r0 == 0) goto L4e
            goto L50
        L4e:
            r0 = r1
            goto L5a
        L50:
            r0 = r4
            goto L5a
        L52:
            android.os.Bundle r0 = r14.getExtras()
            boolean r0 = r0.getBoolean(r3)
        L5a:
            r11 = r0
            android.os.Bundle r0 = r14.getExtras()
            java.lang.String r2 = "android.support.action.showsUserInterface"
            boolean r13 = r0.getBoolean(r2, r4)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 28
            if (r0 < r2) goto L70
            int r0 = r14.getSemanticAction()
            goto L7a
        L70:
            android.os.Bundle r0 = r14.getExtras()
            java.lang.String r2 = "android.support.action.semanticAction"
            int r0 = r0.getInt(r2, r1)
        L7a:
            r12 = r0
            android.support.v4.app.NotificationCompat$Action r0 = new android.support.v4.app.NotificationCompat$Action
            int r5 = r14.icon
            java.lang.CharSequence r6 = r14.title
            android.app.PendingIntent r7 = r14.actionIntent
            android.os.Bundle r8 = r14.getExtras()
            r10 = 0
            r4 = r0
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return r0
    }

    public static int getActionCount(android.app.Notification r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 19
            if (r0 < r2) goto Lf
            android.app.Notification$Action[] r0 = r3.actions
            if (r0 == 0) goto Le
            android.app.Notification$Action[] r3 = r3.actions
            int r1 = r3.length
        Le:
            return r1
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L1a
            int r3 = android.support.v4.app.NotificationCompatJellybean.getActionCount(r3)
            return r3
        L1a:
            return r1
    }

    public static int getBadgeIconType(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            int r2 = r2.getBadgeIconType()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static java.lang.String getCategory(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            java.lang.String r2 = r2.category
            return r2
        L9:
            r2 = 0
            return r2
    }

    public static java.lang.String getChannelId(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            java.lang.String r2 = r2.getChannelId()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static java.lang.CharSequence getContentTitle(android.app.Notification r1) {
            android.os.Bundle r1 = r1.extras
            java.lang.String r0 = "android.title"
            java.lang.CharSequence r1 = r1.getCharSequence(r0)
            return r1
    }

    public static android.os.Bundle getExtras(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            android.os.Bundle r2 = r2.extras
            return r2
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L14
            android.os.Bundle r2 = android.support.v4.app.NotificationCompatJellybean.getExtras(r2)
            return r2
        L14:
            r2 = 0
            return r2
    }

    public static java.lang.String getGroup(android.app.Notification r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lb
            java.lang.String r3 = r3.getGroup()
            return r3
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            java.lang.String r2 = "android.support.groupKey"
            if (r0 < r1) goto L1a
            android.os.Bundle r3 = r3.extras
            java.lang.String r3 = r3.getString(r2)
            return r3
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L29
            android.os.Bundle r3 = android.support.v4.app.NotificationCompatJellybean.getExtras(r3)
            java.lang.String r3 = r3.getString(r2)
            return r3
        L29:
            r3 = 0
            return r3
    }

    public static int getGroupAlertBehavior(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            int r2 = r2.getGroupAlertBehavior()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static java.util.List<android.support.v4.app.NotificationCompat.Action> getInvisibleActions(android.app.Notification r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.os.Bundle r3 = r3.extras
            java.lang.String r1 = "android.car.EXTENSIONS"
            android.os.Bundle r3 = r3.getBundle(r1)
            if (r3 != 0) goto L10
            return r0
        L10:
            java.lang.String r1 = "invisible_actions"
            android.os.Bundle r3 = r3.getBundle(r1)
            if (r3 == 0) goto L31
            r1 = 0
        L19:
            int r2 = r3.size()
            if (r1 >= r2) goto L31
            java.lang.String r2 = java.lang.Integer.toString(r1)
            android.os.Bundle r2 = r3.getBundle(r2)
            android.support.v4.app.NotificationCompat$Action r2 = android.support.v4.app.NotificationCompatJellybean.getActionFromBundle(r2)
            r0.add(r2)
            int r1 = r1 + 1
            goto L19
        L31:
            return r0
    }

    public static boolean getLocalOnly(android.app.Notification r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 20
            if (r0 < r2) goto Lf
            int r4 = r4.flags
            r4 = r4 & 256(0x100, float:3.59E-43)
            if (r4 == 0) goto Le
            r1 = 1
        Le:
            return r1
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            java.lang.String r3 = "android.support.localOnly"
            if (r0 < r2) goto L1e
            android.os.Bundle r4 = r4.extras
            boolean r4 = r4.getBoolean(r3)
            return r4
        L1e:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L2d
            android.os.Bundle r4 = android.support.v4.app.NotificationCompatJellybean.getExtras(r4)
            boolean r4 = r4.getBoolean(r3)
            return r4
        L2d:
            return r1
    }

    static android.app.Notification[] getNotificationArrayFromBundle(android.os.Bundle r4, java.lang.String r5) {
            android.os.Parcelable[] r0 = r4.getParcelableArray(r5)
            boolean r1 = r0 instanceof android.app.Notification[]
            if (r1 != 0) goto L1f
            if (r0 != 0) goto Lb
            goto L1f
        Lb:
            int r1 = r0.length
            android.app.Notification[] r1 = new android.app.Notification[r1]
            r2 = 0
        Lf:
            int r3 = r0.length
            if (r2 >= r3) goto L1b
            r3 = r0[r2]
            android.app.Notification r3 = (android.app.Notification) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lf
        L1b:
            r4.putParcelableArray(r5, r1)
            return r1
        L1f:
            android.app.Notification[] r0 = (android.app.Notification[]) r0
            android.app.Notification[] r0 = (android.app.Notification[]) r0
            return r0
    }

    public static java.lang.String getShortcutId(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            java.lang.String r2 = r2.getShortcutId()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static java.lang.String getSortKey(android.app.Notification r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 20
            if (r0 < r1) goto Lb
            java.lang.String r3 = r3.getSortKey()
            return r3
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            java.lang.String r2 = "android.support.sortKey"
            if (r0 < r1) goto L1a
            android.os.Bundle r3 = r3.extras
            java.lang.String r3 = r3.getString(r2)
            return r3
        L1a:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L29
            android.os.Bundle r3 = android.support.v4.app.NotificationCompatJellybean.getExtras(r3)
            java.lang.String r3 = r3.getString(r2)
            return r3
        L29:
            r3 = 0
            return r3
    }

    public static long getTimeoutAfter(android.app.Notification r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto Lb
            long r0 = r2.getTimeoutAfter()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static boolean isGroupSummary(android.app.Notification r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 20
            if (r0 < r2) goto Lf
            int r4 = r4.flags
            r4 = r4 & 512(0x200, float:7.17E-43)
            if (r4 == 0) goto Le
            r1 = 1
        Le:
            return r1
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            java.lang.String r3 = "android.support.isGroupSummary"
            if (r0 < r2) goto L1e
            android.os.Bundle r4 = r4.extras
            boolean r4 = r4.getBoolean(r3)
            return r4
        L1e:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L2d
            android.os.Bundle r4 = android.support.v4.app.NotificationCompatJellybean.getExtras(r4)
            boolean r4 = r4.getBoolean(r3)
            return r4
        L2d:
            return r1
    }
}
