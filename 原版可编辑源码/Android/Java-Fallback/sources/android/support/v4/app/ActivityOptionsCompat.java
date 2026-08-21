package android.support.v4.app;

public class ActivityOptionsCompat {
    public static final java.lang.String EXTRA_USAGE_TIME_REPORT = "android.activity.usage_time";
    public static final java.lang.String EXTRA_USAGE_TIME_REPORT_PACKAGES = "android.usage_time_packages";

    private static class ActivityOptionsCompatImpl extends android.support.v4.app.ActivityOptionsCompat {
        private final android.app.ActivityOptions mActivityOptions;

        ActivityOptionsCompatImpl(android.app.ActivityOptions r1) {
                r0 = this;
                r0.<init>()
                r0.mActivityOptions = r1
                return
        }

        @Override
        public android.graphics.Rect getLaunchBounds() {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 24
                if (r0 >= r1) goto L8
                r0 = 0
                return r0
            L8:
                android.app.ActivityOptions r0 = r2.mActivityOptions
                android.graphics.Rect r0 = r0.getLaunchBounds()
                return r0
        }

        @Override
        public void requestUsageTimeReport(android.app.PendingIntent r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 23
                if (r0 < r1) goto Lb
                android.app.ActivityOptions r0 = r2.mActivityOptions
                r0.requestUsageTimeReport(r3)
            Lb:
                return
        }

        @Override
        public android.support.v4.app.ActivityOptionsCompat setLaunchBounds(android.graphics.Rect r3) {
                r2 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 24
                if (r0 >= r1) goto L7
                return r2
            L7:
                android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
                android.app.ActivityOptions r1 = r2.mActivityOptions
                android.app.ActivityOptions r3 = r1.setLaunchBounds(r3)
                r0.<init>(r3)
                return r0
        }

        @Override
        public android.os.Bundle toBundle() {
                r1 = this;
                android.app.ActivityOptions r0 = r1.mActivityOptions
                android.os.Bundle r0 = r0.toBundle()
                return r0
        }

        @Override
        public void update(android.support.v4.app.ActivityOptionsCompat r2) {
                r1 = this;
                boolean r0 = r2 instanceof android.support.v4.app.ActivityOptionsCompat.ActivityOptionsCompatImpl
                if (r0 == 0) goto Ld
                android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r2 = (android.support.v4.app.ActivityOptionsCompat.ActivityOptionsCompatImpl) r2
                android.app.ActivityOptions r0 = r1.mActivityOptions
                android.app.ActivityOptions r2 = r2.mActivityOptions
                r0.update(r2)
            Ld:
                return
        }
    }

    protected ActivityOptionsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v4.app.ActivityOptionsCompat makeBasic() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r1 = android.app.ActivityOptions.makeBasic()
            r0.<init>(r1)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r0 = new android.support.v4.app.ActivityOptionsCompat
            r0.<init>()
            return r0
    }

    public static android.support.v4.app.ActivityOptionsCompat makeClipRevealAnimation(android.view.View r2, int r3, int r4, int r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r2 = android.app.ActivityOptions.makeClipRevealAnimation(r2, r3, r4, r5, r6)
            r0.<init>(r2)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r2 = new android.support.v4.app.ActivityOptionsCompat
            r2.<init>()
            return r2
    }

    public static android.support.v4.app.ActivityOptionsCompat makeCustomAnimation(android.content.Context r2, int r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r2 = android.app.ActivityOptions.makeCustomAnimation(r2, r3, r4)
            r0.<init>(r2)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r2 = new android.support.v4.app.ActivityOptionsCompat
            r2.<init>()
            return r2
    }

    public static android.support.v4.app.ActivityOptionsCompat makeScaleUpAnimation(android.view.View r2, int r3, int r4, int r5, int r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r2 = android.app.ActivityOptions.makeScaleUpAnimation(r2, r3, r4, r5, r6)
            r0.<init>(r2)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r2 = new android.support.v4.app.ActivityOptionsCompat
            r2.<init>()
            return r2
    }

    public static android.support.v4.app.ActivityOptionsCompat makeSceneTransitionAnimation(android.app.Activity r2, android.view.View r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r2 = android.app.ActivityOptions.makeSceneTransitionAnimation(r2, r3, r4)
            r0.<init>(r2)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r2 = new android.support.v4.app.ActivityOptionsCompat
            r2.<init>()
            return r2
    }

    public static android.support.v4.app.ActivityOptionsCompat makeSceneTransitionAnimation(android.app.Activity r4, android.support.v4.util.Pair<android.view.View, java.lang.String>... r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2b
            r0 = 0
            if (r5 == 0) goto L21
            int r0 = r5.length
            android.util.Pair[] r0 = new android.util.Pair[r0]
            r1 = 0
        Ld:
            int r2 = r5.length
            if (r1 >= r2) goto L21
            r2 = r5[r1]
            F r2 = r2.first
            r3 = r5[r1]
            S r3 = r3.second
            android.util.Pair r2 = android.util.Pair.create(r2, r3)
            r0[r1] = r2
            int r1 = r1 + 1
            goto Ld
        L21:
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r5 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r4 = android.app.ActivityOptions.makeSceneTransitionAnimation(r4, r0)
            r5.<init>(r4)
            return r5
        L2b:
            android.support.v4.app.ActivityOptionsCompat r4 = new android.support.v4.app.ActivityOptionsCompat
            r4.<init>()
            return r4
    }

    public static android.support.v4.app.ActivityOptionsCompat makeTaskLaunchBehind() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r1 = android.app.ActivityOptions.makeTaskLaunchBehind()
            r0.<init>(r1)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r0 = new android.support.v4.app.ActivityOptionsCompat
            r0.<init>()
            return r0
    }

    public static android.support.v4.app.ActivityOptionsCompat makeThumbnailScaleUpAnimation(android.view.View r2, android.graphics.Bitmap r3, int r4, int r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L10
            android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl r0 = new android.support.v4.app.ActivityOptionsCompat$ActivityOptionsCompatImpl
            android.app.ActivityOptions r2 = android.app.ActivityOptions.makeThumbnailScaleUpAnimation(r2, r3, r4, r5)
            r0.<init>(r2)
            return r0
        L10:
            android.support.v4.app.ActivityOptionsCompat r2 = new android.support.v4.app.ActivityOptionsCompat
            r2.<init>()
            return r2
    }

    public android.graphics.Rect getLaunchBounds() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void requestUsageTimeReport(android.app.PendingIntent r1) {
            r0 = this;
            return
    }

    public android.support.v4.app.ActivityOptionsCompat setLaunchBounds(android.graphics.Rect r1) {
            r0 = this;
            return r0
    }

    public android.os.Bundle toBundle() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void update(android.support.v4.app.ActivityOptionsCompat r1) {
            r0 = this;
            return
    }
}
