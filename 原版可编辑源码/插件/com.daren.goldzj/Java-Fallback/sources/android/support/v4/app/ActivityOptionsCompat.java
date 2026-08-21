package android.support.v4.app;

import android.app.Activity;
import android.app.ActivityOptions;
import android.app.PendingIntent;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.v4.util.Pair;
import android.view.View;

public class ActivityOptionsCompat {
    public static final String EXTRA_USAGE_TIME_REPORT = "android.activity.usage_time";
    public static final String EXTRA_USAGE_TIME_REPORT_PACKAGES = "android.usage_time_packages";

    @RequiresApi(16)
    private static class ActivityOptionsCompatImpl extends ActivityOptionsCompat {
        private final ActivityOptions mActivityOptions;

        ActivityOptionsCompatImpl(ActivityOptions r1) {
            this.mActivityOptions = r1;
        }

        @Override
        public Bundle toBundle() {
            return this.mActivityOptions.toBundle();
        }

        @Override
        public void update(ActivityOptionsCompat r2) {
            if ((r2 instanceof ActivityOptionsCompatImpl) == false) goto L6;
            this.mActivityOptions.update(((ActivityOptionsCompatImpl) r2).mActivityOptions);
            return;
        }

        @Override
        public void requestUsageTimeReport(PendingIntent r3) {
            if (Build.VERSION.SDK_INT < 23) goto L6;
            this.mActivityOptions.requestUsageTimeReport(r3);
            return;
        }

        @Override
        public ActivityOptionsCompat setLaunchBounds(@Nullable Rect r3) {
            if (Build.VERSION.SDK_INT >= 24) goto L6;
            return this;
        L6:
            return new ActivityOptionsCompatImpl(this.mActivityOptions.setLaunchBounds(r3));
        }

        @Override
        public Rect getLaunchBounds() {
            if (Build.VERSION.SDK_INT >= 24) goto L7;
            return null;
        L7:
            return this.mActivityOptions.getLaunchBounds();
        }
    }

    @Nullable
    public Rect getLaunchBounds() {
        return null;
    }

    public void requestUsageTimeReport(@NonNull PendingIntent r1) {
    }

    @NonNull
    public ActivityOptionsCompat setLaunchBounds(@Nullable Rect r1) {
        return this;
    }

    @Nullable
    public Bundle toBundle() {
        return null;
    }

    public void update(@NonNull ActivityOptionsCompat r1) {
    }

    @NonNull
    public static ActivityOptionsCompat makeCustomAnimation(@NonNull Context r2, int r3, int r4) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeCustomAnimation(r2, r3, r4));
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeScaleUpAnimation(@NonNull View r2, int r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeScaleUpAnimation(r2, r3, r4, r5, r6));
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeClipRevealAnimation(@NonNull View r2, int r3, int r4, int r5, int r6) {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeClipRevealAnimation(r2, r3, r4, r5, r6));
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeThumbnailScaleUpAnimation(@NonNull View r2, @NonNull Bitmap r3, int r4, int r5) {
        if (Build.VERSION.SDK_INT < 16) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeThumbnailScaleUpAnimation(r2, r3, r4, r5));
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeSceneTransitionAnimation(@NonNull Activity r2, @NonNull View r3, @NonNull String r4) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeSceneTransitionAnimation(r2, r3, r4));
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeSceneTransitionAnimation(@NonNull Activity r4, Pair<View, String>... r5) {
        if (Build.VERSION.SDK_INT < 21) goto L13;
        android.util.Pair[] r0 = null;
        if (r5 == null) goto L11;
        r0 = new android.util.Pair[r5.length];
        int r1 = 0;
    L8:
        if (r1 >= r5.length) goto L11;
        r0[r1] = android.util.Pair.create(r5[r1].first, r5[r1].second);
        r1 = r1 + 1;
    L11:
        return new ActivityOptionsCompatImpl(ActivityOptions.makeSceneTransitionAnimation(r4, r0));
    L13:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeTaskLaunchBehind() {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeTaskLaunchBehind());
    L7:
        return new ActivityOptionsCompat();
    }

    @NonNull
    public static ActivityOptionsCompat makeBasic() {
        if (Build.VERSION.SDK_INT < 23) goto L7;
        return new ActivityOptionsCompatImpl(ActivityOptions.makeBasic());
    L7:
        return new ActivityOptionsCompat();
    }

    protected ActivityOptionsCompat() {
    }
}
