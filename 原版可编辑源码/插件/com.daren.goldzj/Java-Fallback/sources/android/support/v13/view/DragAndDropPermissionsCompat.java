package android.support.v13.view;

import android.app.Activity;
import android.os.Build;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import android.view.DragAndDropPermissions;
import android.view.DragEvent;

public final class DragAndDropPermissionsCompat {
    private Object mDragAndDropPermissions;

    private DragAndDropPermissionsCompat(Object r1) {
        this.mDragAndDropPermissions = r1;
    }

    @Nullable
    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public static DragAndDropPermissionsCompat request(Activity r2, DragEvent r3) {
        if (Build.VERSION.SDK_INT < 24) goto L8;
        DragAndDropPermissions r22 = r2.requestDragAndDropPermissions(r3);
        if (r22 != null) goto L7;
        return null;
    L7:
        return new DragAndDropPermissionsCompat(r22);
    L8:
        return null;
    }

    public void release() {
        if (Build.VERSION.SDK_INT < 24) goto L6;
        ((DragAndDropPermissions) this.mDragAndDropPermissions).release();
        return;
    }
}
