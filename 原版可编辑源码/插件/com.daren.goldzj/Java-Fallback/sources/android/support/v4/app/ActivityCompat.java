package android.support.v4.app;

import android.app.Activity;
import android.app.SharedElementCallback;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Parcelable;
import android.support.annotation.IdRes;
import android.support.annotation.IntRange;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v13.view.DragAndDropPermissionsCompat;
import android.support.v4.content.ContextCompat;
import android.view.DragEvent;
import android.view.View;
import java.util.List;
import java.util.Map;

public class ActivityCompat extends ContextCompat {
    private static PermissionCompatDelegate sDelegate;

    public interface OnRequestPermissionsResultCallback {
        void onRequestPermissionsResult(int r1, @NonNull String[] r2, @NonNull int[] r3);
    }

    public interface PermissionCompatDelegate {
        boolean onActivityResult(@NonNull Activity r1, @IntRange(from = 0) int r2, int r3, @Nullable Intent r4);

        boolean requestPermissions(@NonNull Activity r1, @NonNull String[] r2, @IntRange(from = 0) int r3);
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public interface RequestPermissionsRequestCodeValidator {
        void validateRequestPermissionsRequestCode(int r1);
    }

    @RequiresApi(21)
    private static class SharedElementCallback21Impl extends android.app.SharedElementCallback {
        private final SharedElementCallback mCallback;

        SharedElementCallback21Impl(SharedElementCallback r1) {
            this.mCallback = r1;
        }

        @Override
        public void onSharedElementStart(List<String> r2, List<View> r3, List<View> r4) {
            this.mCallback.onSharedElementStart(r2, r3, r4);
        }

        @Override
        public void onSharedElementEnd(List<String> r2, List<View> r3, List<View> r4) {
            this.mCallback.onSharedElementEnd(r2, r3, r4);
        }

        @Override
        public void onRejectSharedElements(List<View> r2) {
            this.mCallback.onRejectSharedElements(r2);
        }

        @Override
        public void onMapSharedElements(List<String> r2, Map<String, View> r3) {
            this.mCallback.onMapSharedElements(r2, r3);
        }

        @Override
        public Parcelable onCaptureSharedElementSnapshot(View r2, Matrix r3, RectF r4) {
            return this.mCallback.onCaptureSharedElementSnapshot(r2, r3, r4);
        }

        @Override
        public View onCreateSnapshotView(Context r2, Parcelable r3) {
            return this.mCallback.onCreateSnapshotView(r2, r3);
        }

        @Override
        @RequiresApi(23)
        public void onSharedElementsArrived(List<String> r3, List<View> r4, final SharedElementCallback.OnSharedElementsReadyListener r5) {
            this.mCallback.onSharedElementsArrived(r3, r4, new 1(this, r5));
        }
    }

    protected ActivityCompat() {
    }

    public static void setPermissionCompatDelegate(@Nullable PermissionCompatDelegate r0) {
        sDelegate = r0;
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static PermissionCompatDelegate getPermissionCompatDelegate() {
        return sDelegate;
    }

    @Deprecated
    public static boolean invalidateOptionsMenu(Activity r0) {
        r0.invalidateOptionsMenu();
        return true;
    }

    public static void startActivityForResult(@NonNull Activity r2, @NonNull Intent r3, int r4, @Nullable Bundle r5) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.startActivityForResult(r3, r4, r5);
        return;
    L5:
        r2.startActivityForResult(r3, r4);
    }

    public static void startIntentSenderForResult(@NonNull Activity r2, @NonNull IntentSender r3, int r4, @Nullable Intent r5, int r6, int r7, int r8, @Nullable Bundle r9) throws IntentSender.SendIntentException {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.startIntentSenderForResult(r3, r4, r5, r6, r7, r8, r9);
        return;
    L5:
        r2.startIntentSenderForResult(r3, r4, r5, r6, r7, r8);
    }

    public static void finishAffinity(@NonNull Activity r2) {
        if (Build.VERSION.SDK_INT < 16) goto L5;
        r2.finishAffinity();
        return;
    L5:
        r2.finish();
    }

    public static void finishAfterTransition(@NonNull Activity r2) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r2.finishAfterTransition();
        return;
    L5:
        r2.finish();
    }

    @Nullable
    public static Uri getReferrer(@NonNull Activity r2) {
        if (Build.VERSION.SDK_INT >= 22) goto L5;
        Intent r22 = r2.getIntent();
        Uri r0 = (Uri) r22.getParcelableExtra("android.intent.extra.REFERRER");
        if (r0 == null) goto L9;
        return r0;
    L9:
        String r23 = r22.getStringExtra("android.intent.extra.REFERRER_NAME");
        if (r23 != null) goto L12;
        return null;
    L12:
        return Uri.parse(r23);
    L5:
        return r2.getReferrer();
    }

    @NonNull
    public static <T extends View> T requireViewById(@NonNull Activity r2, @IdRes int r3) {
        if (Build.VERSION.SDK_INT >= 28) goto L5;
        T r22 = (T) r2.findViewById(r3);
        if (r22 == null) goto L10;
        return r22;
    L10:
        throw new IllegalArgumentException("ID does not reference a View inside this Activity");
    L5:
        return (T) r2.requireViewById(r3);
    }

    public static void setEnterSharedElementCallback(@NonNull Activity r2, @Nullable SharedElementCallback r3) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        if (r3 == null) goto L6;
        SharedElementCallback21Impl r0 = new SharedElementCallback21Impl(r3);
    L7:
        r2.setEnterSharedElementCallback(r0);
        return;
    L6:
        r0 = null;
        goto L7
    }

    public static void setExitSharedElementCallback(@NonNull Activity r2, @Nullable SharedElementCallback r3) {
        if (Build.VERSION.SDK_INT < 21) goto L9;
        if (r3 == null) goto L6;
        SharedElementCallback21Impl r0 = new SharedElementCallback21Impl(r3);
    L7:
        r2.setExitSharedElementCallback(r0);
        return;
    L6:
        r0 = null;
        goto L7
    }

    public static void postponeEnterTransition(@NonNull Activity r2) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.postponeEnterTransition();
        return;
    }

    public static void startPostponedEnterTransition(@NonNull Activity r2) {
        if (Build.VERSION.SDK_INT < 21) goto L6;
        r2.startPostponedEnterTransition();
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void requestPermissions(@NonNull final Activity r2, @NonNull final String[] r3, @IntRange(from = 0) final int r4) {
        PermissionCompatDelegate r0 = sDelegate;
        if (r0 == null) goto L8;
        if (r0.requestPermissions(r2, r3, r4) == false) goto L8;
        return;
    L8:
        if (Build.VERSION.SDK_INT < 23) goto L14;
        if ((r2 instanceof RequestPermissionsRequestCodeValidator) == false) goto L12;
        ((RequestPermissionsRequestCodeValidator) r2).validateRequestPermissionsRequestCode(r4);
    L12:
        r2.requestPermissions(r3, r4);
        return;
    L14:
        if ((r2 instanceof OnRequestPermissionsResultCallback) == false) goto L18;
        new Handler(Looper.getMainLooper()).post(new 1(r3, r2, r4));
        return;
    }

    public static boolean shouldShowRequestPermissionRationale(@NonNull Activity r2, @NonNull String r3) {
        if (Build.VERSION.SDK_INT >= 23) goto L5;
        return false;
    L5:
        return r2.shouldShowRequestPermissionRationale(r3);
    }

    @Nullable
    public static DragAndDropPermissionsCompat requestDragAndDropPermissions(Activity r0, DragEvent r1) {
        return DragAndDropPermissionsCompat.request(r0, r1);
    }
}
