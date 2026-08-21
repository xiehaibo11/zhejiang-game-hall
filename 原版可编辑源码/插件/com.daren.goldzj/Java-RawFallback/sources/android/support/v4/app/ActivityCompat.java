package android.support.v4.app;

public class ActivityCompat extends android.support.v4.content.ContextCompat {
    private static android.support.v4.app.ActivityCompat.PermissionCompatDelegate sDelegate;


    public interface OnRequestPermissionsResultCallback {
        void onRequestPermissionsResult(int r1, @android.support.annotation.NonNull java.lang.String[] r2, @android.support.annotation.NonNull int[] r3);
    }

    public interface PermissionCompatDelegate {
        boolean onActivityResult(@android.support.annotation.NonNull android.app.Activity r1, @android.support.annotation.IntRange(from = 0) int r2, int r3, @android.support.annotation.Nullable android.content.Intent r4);

        boolean requestPermissions(@android.support.annotation.NonNull android.app.Activity r1, @android.support.annotation.NonNull java.lang.String[] r2, @android.support.annotation.IntRange(from = 0) int r3);
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public interface RequestPermissionsRequestCodeValidator {
        void validateRequestPermissionsRequestCode(int r1);
    }

    @android.support.annotation.RequiresApi(21)
    private static class SharedElementCallback21Impl extends android.app.SharedElementCallback {
        private final android.support.v4.app.SharedElementCallback mCallback;


        SharedElementCallback21Impl(android.support.v4.app.SharedElementCallback r1) {
                r0 = this;
                r0.<init>()
                r0.mCallback = r1
                return
        }

        @Override
        public android.os.Parcelable onCaptureSharedElementSnapshot(android.view.View r2, android.graphics.Matrix r3, android.graphics.RectF r4) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                android.os.Parcelable r2 = r0.onCaptureSharedElementSnapshot(r2, r3, r4)
                return r2
        }

        @Override
        public android.view.View onCreateSnapshotView(android.content.Context r2, android.os.Parcelable r3) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                android.view.View r2 = r0.onCreateSnapshotView(r2, r3)
                return r2
        }

        @Override
        public void onMapSharedElements(java.util.List<java.lang.String> r2, java.util.Map<java.lang.String, android.view.View> r3) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                r0.onMapSharedElements(r2, r3)
                return
        }

        @Override
        public void onRejectSharedElements(java.util.List<android.view.View> r2) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                r0.onRejectSharedElements(r2)
                return
        }

        @Override
        public void onSharedElementEnd(java.util.List<java.lang.String> r2, java.util.List<android.view.View> r3, java.util.List<android.view.View> r4) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                r0.onSharedElementEnd(r2, r3, r4)
                return
        }

        @Override
        public void onSharedElementStart(java.util.List<java.lang.String> r2, java.util.List<android.view.View> r3, java.util.List<android.view.View> r4) {
                r1 = this;
                android.support.v4.app.SharedElementCallback r0 = r1.mCallback
                r0.onSharedElementStart(r2, r3, r4)
                return
        }

        @Override
        @android.support.annotation.RequiresApi(23)
        public void onSharedElementsArrived(java.util.List<java.lang.String> r3, java.util.List<android.view.View> r4, android.app.SharedElementCallback.OnSharedElementsReadyListener r5) {
                r2 = this;
                android.support.v4.app.SharedElementCallback r0 = r2.mCallback
                android.support.v4.app.ActivityCompat$SharedElementCallback21Impl$1 r1 = new android.support.v4.app.ActivityCompat$SharedElementCallback21Impl$1
                r1.<init>(r2, r5)
                r0.onSharedElementsArrived(r3, r4, r1)
                return
        }
    }

    protected ActivityCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void finishAffinity(@android.support.annotation.NonNull android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.finishAffinity()
            goto Ld
        La:
            r2.finish()
        Ld:
            return
    }

    public static void finishAfterTransition(@android.support.annotation.NonNull android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r2.finishAfterTransition()
            goto Ld
        La:
            r2.finish()
        Ld:
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public static android.support.v4.app.ActivityCompat.PermissionCompatDelegate getPermissionCompatDelegate() {
            android.support.v4.app.ActivityCompat$PermissionCompatDelegate r0 = android.support.v4.app.ActivityCompat.sDelegate
            return r0
    }

    @android.support.annotation.Nullable
    public static android.net.Uri getReferrer(@android.support.annotation.NonNull android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Lb
            android.net.Uri r2 = r2.getReferrer()
            return r2
        Lb:
            android.content.Intent r2 = r2.getIntent()
            java.lang.String r0 = "android.intent.extra.REFERRER"
            android.os.Parcelable r0 = r2.getParcelableExtra(r0)
            android.net.Uri r0 = (android.net.Uri) r0
            if (r0 == 0) goto L1a
            return r0
        L1a:
            java.lang.String r0 = "android.intent.extra.REFERRER_NAME"
            java.lang.String r2 = r2.getStringExtra(r0)
            if (r2 == 0) goto L27
            android.net.Uri r2 = android.net.Uri.parse(r2)
            return r2
        L27:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static boolean invalidateOptionsMenu(android.app.Activity r0) {
            r0.invalidateOptionsMenu()
            r0 = 1
            return r0
    }

    public static void postponeEnterTransition(@android.support.annotation.NonNull android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.postponeEnterTransition()
        L9:
            return
    }

    @android.support.annotation.Nullable
    public static android.support.v13.view.DragAndDropPermissionsCompat requestDragAndDropPermissions(android.app.Activity r0, android.view.DragEvent r1) {
            android.support.v13.view.DragAndDropPermissionsCompat r0 = android.support.v13.view.DragAndDropPermissionsCompat.request(r0, r1)
            return r0
    }

    public static void requestPermissions(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.NonNull java.lang.String[] r3, @android.support.annotation.IntRange(from = 0) int r4) {
            android.support.v4.app.ActivityCompat$PermissionCompatDelegate r0 = android.support.v4.app.ActivityCompat.sDelegate
            if (r0 == 0) goto Lb
            boolean r0 = r0.requestPermissions(r2, r3, r4)
            if (r0 == 0) goto Lb
            return
        Lb:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L1f
            boolean r0 = r2 instanceof android.support.v4.app.ActivityCompat.RequestPermissionsRequestCodeValidator
            if (r0 == 0) goto L1b
            r0 = r2
            android.support.v4.app.ActivityCompat$RequestPermissionsRequestCodeValidator r0 = (android.support.v4.app.ActivityCompat.RequestPermissionsRequestCodeValidator) r0
            r0.validateRequestPermissionsRequestCode(r4)
        L1b:
            r2.requestPermissions(r3, r4)
            goto L34
        L1f:
            boolean r0 = r2 instanceof android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback
            if (r0 == 0) goto L34
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            android.support.v4.app.ActivityCompat$1 r1 = new android.support.v4.app.ActivityCompat$1
            r1.<init>(r3, r2, r4)
            r0.post(r1)
        L34:
            return
    }

    @android.support.annotation.NonNull
    public static <T extends android.view.View> T requireViewById(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.IdRes int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            android.view.View r2 = r2.requireViewById(r3)
            return r2
        Lb:
            android.view.View r2 = r2.findViewById(r3)
            if (r2 == 0) goto L12
            return r2
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ID does not reference a View inside this Activity"
            r2.<init>(r3)
            throw r2
    }

    public static void setEnterSharedElementCallback(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.Nullable android.support.v4.app.SharedElementCallback r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L12
            if (r3 == 0) goto Le
            android.support.v4.app.ActivityCompat$SharedElementCallback21Impl r0 = new android.support.v4.app.ActivityCompat$SharedElementCallback21Impl
            r0.<init>(r3)
            goto Lf
        Le:
            r0 = 0
        Lf:
            r2.setEnterSharedElementCallback(r0)
        L12:
            return
    }

    public static void setExitSharedElementCallback(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.Nullable android.support.v4.app.SharedElementCallback r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L12
            if (r3 == 0) goto Le
            android.support.v4.app.ActivityCompat$SharedElementCallback21Impl r0 = new android.support.v4.app.ActivityCompat$SharedElementCallback21Impl
            r0.<init>(r3)
            goto Lf
        Le:
            r0 = 0
        Lf:
            r2.setExitSharedElementCallback(r0)
        L12:
            return
    }

    public static void setPermissionCompatDelegate(@android.support.annotation.Nullable android.support.v4.app.ActivityCompat.PermissionCompatDelegate r0) {
            android.support.v4.app.ActivityCompat.sDelegate = r0
            return
    }

    public static boolean shouldShowRequestPermissionRationale(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.NonNull java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto Lb
            boolean r2 = r2.shouldShowRequestPermissionRationale(r3)
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static void startActivityForResult(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.NonNull android.content.Intent r3, int r4, @android.support.annotation.Nullable android.os.Bundle r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.startActivityForResult(r3, r4, r5)
            goto Ld
        La:
            r2.startActivityForResult(r3, r4)
        Ld:
            return
    }

    public static void startIntentSenderForResult(@android.support.annotation.NonNull android.app.Activity r2, @android.support.annotation.NonNull android.content.IntentSender r3, int r4, @android.support.annotation.Nullable android.content.Intent r5, int r6, int r7, int r8, @android.support.annotation.Nullable android.os.Bundle r9) throws android.content.IntentSender.SendIntentException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto La
            r2.startIntentSenderForResult(r3, r4, r5, r6, r7, r8, r9)
            goto Ld
        La:
            r2.startIntentSenderForResult(r3, r4, r5, r6, r7, r8)
        Ld:
            return
    }

    public static void startPostponedEnterTransition(@android.support.annotation.NonNull android.app.Activity r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            r2.startPostponedEnterTransition()
        L9:
            return
    }
}
