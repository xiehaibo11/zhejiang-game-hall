package android.support.v13.view;

public final class DragAndDropPermissionsCompat {
    private java.lang.Object mDragAndDropPermissions;

    private DragAndDropPermissionsCompat(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.mDragAndDropPermissions = r1
            return
    }

    @android.support.annotation.Nullable
    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public static android.support.v13.view.DragAndDropPermissionsCompat request(android.app.Activity r2, android.view.DragEvent r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L12
            android.view.DragAndDropPermissions r2 = r2.requestDragAndDropPermissions(r3)
            if (r2 == 0) goto L12
            android.support.v13.view.DragAndDropPermissionsCompat r3 = new android.support.v13.view.DragAndDropPermissionsCompat
            r3.<init>(r2)
            return r3
        L12:
            r2 = 0
            return r2
    }

    public void release() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Ld
            java.lang.Object r0 = r2.mDragAndDropPermissions
            android.view.DragAndDropPermissions r0 = (android.view.DragAndDropPermissions) r0
            r0.release()
        Ld:
            return
    }
}
