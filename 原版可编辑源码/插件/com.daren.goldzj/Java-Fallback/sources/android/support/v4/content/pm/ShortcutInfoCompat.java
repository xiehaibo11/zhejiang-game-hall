package android.support.v4.content.pm;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ShortcutInfo;
import android.graphics.drawable.Drawable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.v4.graphics.drawable.IconCompat;
import android.text.TextUtils;
import java.util.Arrays;

public class ShortcutInfoCompat {
    ComponentName mActivity;
    Context mContext;
    CharSequence mDisabledMessage;
    IconCompat mIcon;
    String mId;
    Intent[] mIntents;
    boolean mIsAlwaysBadged;
    CharSequence mLabel;
    CharSequence mLongLabel;

    public static class Builder {
        private final ShortcutInfoCompat mInfo;

        public Builder(@NonNull Context r2, @NonNull String r3) {
            this.mInfo = new ShortcutInfoCompat();
            ShortcutInfoCompat r0 = this.mInfo;
            r0.mContext = r2;
            r0.mId = r3;
        }

        @NonNull
        public Builder setShortLabel(@NonNull CharSequence r2) {
            this.mInfo.mLabel = r2;
            return this;
        }

        @NonNull
        public Builder setLongLabel(@NonNull CharSequence r2) {
            this.mInfo.mLongLabel = r2;
            return this;
        }

        @NonNull
        public Builder setDisabledMessage(@NonNull CharSequence r2) {
            this.mInfo.mDisabledMessage = r2;
            return this;
        }

        @NonNull
        public Builder setIntent(@NonNull Intent r3) {
            return setIntents(new Intent[]{r3});
        }

        @NonNull
        public Builder setIntents(@NonNull Intent[] r2) {
            this.mInfo.mIntents = r2;
            return this;
        }

        @NonNull
        public Builder setIcon(IconCompat r2) {
            this.mInfo.mIcon = r2;
            return this;
        }

        @NonNull
        public Builder setActivity(@NonNull ComponentName r2) {
            this.mInfo.mActivity = r2;
            return this;
        }

        public Builder setAlwaysBadged() {
            this.mInfo.mIsAlwaysBadged = true;
            return this;
        }

        @NonNull
        public ShortcutInfoCompat build() {
            if (TextUtils.isEmpty(this.mInfo.mLabel) == true) goto L13;
            if (this.mInfo.mIntents == null) goto L11;
            if (this.mInfo.mIntents.length == 0) goto L11;
            return this.mInfo;
        L11:
            throw new IllegalArgumentException("Shortcut must have an intent");
        L13:
            throw new IllegalArgumentException("Shortcut must have a non-empty label");
        }
    }

    ShortcutInfoCompat() {
    }

    @RequiresApi(25)
    public ShortcutInfo toShortcutInfo() {
        ShortcutInfo.Builder r0 = new ShortcutInfo.Builder(this.mContext, this.mId).setShortLabel(this.mLabel).setIntents(this.mIntents);
        IconCompat r1 = this.mIcon;
        if (r1 == null) goto L6;
        r0.setIcon(r1.toIcon());
    L6:
        if (TextUtils.isEmpty(this.mLongLabel) == true) goto L9;
        r0.setLongLabel(this.mLongLabel);
    L9:
        if (TextUtils.isEmpty(this.mDisabledMessage) == true) goto L11;
        r0.setDisabledMessage(this.mDisabledMessage);
    L11:
        ComponentName r12 = this.mActivity;
        if (r12 == null) goto L15;
        r0.setActivity(r12);
    L15:
        return r0.build();
    }

    Intent addToIntent(Intent r4) {
        r4.putExtra("android.intent.extra.shortcut.INTENT", this.mIntents[r0.length - 1]).putExtra("android.intent.extra.shortcut.NAME", this.mLabel.toString());
        if (this.mIcon == null) goto L12;
        Drawable r0 = null;
        if (this.mIsAlwaysBadged == false) goto L11;
        PackageManager r1 = this.mContext.getPackageManager();
        ComponentName r2 = this.mActivity;
        if (r2 != null) goto L14;
    L9:
        if (r0 != null) goto L11;
        r0 = this.mContext.getApplicationInfo().loadIcon(r1);
        goto L11
    L14:
        r0 = r1.getActivityIcon(r2);     // Catch: PackageManager.NameNotFoundException -> L13
    L11:
        this.mIcon.addToShortcutIntent(r4, r0, this.mContext);
    L12:
        return r4;
    }

    @NonNull
    public String getId() {
        return this.mId;
    }

    @Nullable
    public ComponentName getActivity() {
        return this.mActivity;
    }

    @NonNull
    public CharSequence getShortLabel() {
        return this.mLabel;
    }

    @Nullable
    public CharSequence getLongLabel() {
        return this.mLongLabel;
    }

    @Nullable
    public CharSequence getDisabledMessage() {
        return this.mDisabledMessage;
    }

    @NonNull
    public Intent getIntent() {
        return this.mIntents[r0.length - 1];
    }

    @NonNull
    public Intent[] getIntents() {
        Intent[] r0 = this.mIntents;
        return (Intent[]) Arrays.copyOf(r0, r0.length);
    }
}
