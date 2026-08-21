package android.support.v4.content.pm;

public class ShortcutInfoCompat {
    android.content.ComponentName mActivity;
    android.content.Context mContext;
    java.lang.CharSequence mDisabledMessage;
    android.support.v4.graphics.drawable.IconCompat mIcon;
    java.lang.String mId;
    android.content.Intent[] mIntents;
    boolean mIsAlwaysBadged;
    java.lang.CharSequence mLabel;
    java.lang.CharSequence mLongLabel;

    public static class Builder {
        private final android.support.v4.content.pm.ShortcutInfoCompat mInfo;

        public Builder(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.NonNull java.lang.String r3) {
                r1 = this;
                r1.<init>()
                android.support.v4.content.pm.ShortcutInfoCompat r0 = new android.support.v4.content.pm.ShortcutInfoCompat
                r0.<init>()
                r1.mInfo = r0
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mContext = r2
                r0.mId = r3
                return
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat build() {
                r2 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r2.mInfo
                java.lang.CharSequence r0 = r0.mLabel
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L22
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r2.mInfo
                android.content.Intent[] r0 = r0.mIntents
                if (r0 == 0) goto L1a
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r2.mInfo
                android.content.Intent[] r0 = r0.mIntents
                int r0 = r0.length
                if (r0 == 0) goto L1a
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r2.mInfo
                return r0
            L1a:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Shortcut must have an intent"
                r0.<init>(r1)
                throw r0
            L22:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Shortcut must have a non-empty label"
                r0.<init>(r1)
                throw r0
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setActivity(@android.support.annotation.NonNull android.content.ComponentName r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mActivity = r2
                return r1
        }

        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setAlwaysBadged() {
                r2 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r2.mInfo
                r1 = 1
                r0.mIsAlwaysBadged = r1
                return r2
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setDisabledMessage(@android.support.annotation.NonNull java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mDisabledMessage = r2
                return r1
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setIcon(android.support.v4.graphics.drawable.IconCompat r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mIcon = r2
                return r1
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setIntent(@android.support.annotation.NonNull android.content.Intent r3) {
                r2 = this;
                r0 = 1
                android.content.Intent[] r0 = new android.content.Intent[r0]
                r1 = 0
                r0[r1] = r3
                android.support.v4.content.pm.ShortcutInfoCompat$Builder r3 = r2.setIntents(r0)
                return r3
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setIntents(@android.support.annotation.NonNull android.content.Intent[] r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mIntents = r2
                return r1
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setLongLabel(@android.support.annotation.NonNull java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mLongLabel = r2
                return r1
        }

        @android.support.annotation.NonNull
        public android.support.v4.content.pm.ShortcutInfoCompat.Builder setShortLabel(@android.support.annotation.NonNull java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.content.pm.ShortcutInfoCompat r0 = r1.mInfo
                r0.mLabel = r2
                return r1
        }
    }

    ShortcutInfoCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    android.content.Intent addToIntent(android.content.Intent r4) {
            r3 = this;
            android.content.Intent[] r0 = r3.mIntents
            int r1 = r0.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            java.lang.String r1 = "android.intent.extra.shortcut.INTENT"
            android.content.Intent r0 = r4.putExtra(r1, r0)
            java.lang.CharSequence r1 = r3.mLabel
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "android.intent.extra.shortcut.NAME"
            r0.putExtra(r2, r1)
            android.support.v4.graphics.drawable.IconCompat r0 = r3.mIcon
            if (r0 == 0) goto L42
            r0 = 0
            boolean r1 = r3.mIsAlwaysBadged
            if (r1 == 0) goto L3b
            android.content.Context r1 = r3.mContext
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            android.content.ComponentName r2 = r3.mActivity
            if (r2 == 0) goto L2f
            android.graphics.drawable.Drawable r0 = r1.getActivityIcon(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2f
        L2f:
            if (r0 != 0) goto L3b
            android.content.Context r0 = r3.mContext
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            android.graphics.drawable.Drawable r0 = r0.loadIcon(r1)
        L3b:
            android.support.v4.graphics.drawable.IconCompat r1 = r3.mIcon
            android.content.Context r2 = r3.mContext
            r1.addToShortcutIntent(r4, r0, r2)
        L42:
            return r4
    }

    @android.support.annotation.Nullable
    public android.content.ComponentName getActivity() {
            r1 = this;
            android.content.ComponentName r0 = r1.mActivity
            return r0
    }

    @android.support.annotation.Nullable
    public java.lang.CharSequence getDisabledMessage() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mDisabledMessage
            return r0
    }

    @android.support.annotation.NonNull
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.mId
            return r0
    }

    @android.support.annotation.NonNull
    public android.content.Intent getIntent() {
            r2 = this;
            android.content.Intent[] r0 = r2.mIntents
            int r1 = r0.length
            int r1 = r1 + (-1)
            r0 = r0[r1]
            return r0
    }

    @android.support.annotation.NonNull
    public android.content.Intent[] getIntents() {
            r2 = this;
            android.content.Intent[] r0 = r2.mIntents
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            android.content.Intent[] r0 = (android.content.Intent[]) r0
            return r0
    }

    @android.support.annotation.Nullable
    public java.lang.CharSequence getLongLabel() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mLongLabel
            return r0
    }

    @android.support.annotation.NonNull
    public java.lang.CharSequence getShortLabel() {
            r1 = this;
            java.lang.CharSequence r0 = r1.mLabel
            return r0
    }

    @android.support.annotation.RequiresApi(25)
    public android.content.pm.ShortcutInfo toShortcutInfo() {
            r3 = this;
            android.content.pm.ShortcutInfo$Builder r0 = new android.content.pm.ShortcutInfo$Builder
            android.content.Context r1 = r3.mContext
            java.lang.String r2 = r3.mId
            r0.<init>(r1, r2)
            java.lang.CharSequence r1 = r3.mLabel
            android.content.pm.ShortcutInfo$Builder r0 = r0.setShortLabel(r1)
            android.content.Intent[] r1 = r3.mIntents
            android.content.pm.ShortcutInfo$Builder r0 = r0.setIntents(r1)
            android.support.v4.graphics.drawable.IconCompat r1 = r3.mIcon
            if (r1 == 0) goto L20
            android.graphics.drawable.Icon r1 = r1.toIcon()
            r0.setIcon(r1)
        L20:
            java.lang.CharSequence r1 = r3.mLongLabel
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2d
            java.lang.CharSequence r1 = r3.mLongLabel
            r0.setLongLabel(r1)
        L2d:
            java.lang.CharSequence r1 = r3.mDisabledMessage
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3a
            java.lang.CharSequence r1 = r3.mDisabledMessage
            r0.setDisabledMessage(r1)
        L3a:
            android.content.ComponentName r1 = r3.mActivity
            if (r1 == 0) goto L41
            r0.setActivity(r1)
        L41:
            android.content.pm.ShortcutInfo r0 = r0.build()
            return r0
    }
}
