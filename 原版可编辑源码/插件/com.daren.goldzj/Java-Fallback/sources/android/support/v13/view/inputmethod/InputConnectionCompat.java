package android.support.v13.view.inputmethod;

import android.content.ClipDescription;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.ResultReceiver;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.text.TextUtils;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputContentInfo;

public final class InputConnectionCompat {
    private static final String COMMIT_CONTENT_ACTION = "android.support.v13.view.inputmethod.InputConnectionCompat.COMMIT_CONTENT";
    private static final String COMMIT_CONTENT_CONTENT_URI_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_URI";
    private static final String COMMIT_CONTENT_DESCRIPTION_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_DESCRIPTION";
    private static final String COMMIT_CONTENT_FLAGS_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_FLAGS";
    private static final String COMMIT_CONTENT_LINK_URI_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_LINK_URI";
    private static final String COMMIT_CONTENT_OPTS_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_OPTS";
    private static final String COMMIT_CONTENT_RESULT_RECEIVER = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_RESULT_RECEIVER";
    public static final int INPUT_CONTENT_GRANT_READ_URI_PERMISSION = 1;

    public interface OnCommitContentListener {
        boolean onCommitContent(InputContentInfoCompat r1, int r2, Bundle r3);
    }

    static boolean handlePerformPrivateCommand(@Nullable String r7, @NonNull Bundle r8, @NonNull OnCommitContentListener r9) {
        if (TextUtils.equals(COMMIT_CONTENT_ACTION, r7) == true) goto L5;
        return false;
    L5:
        if (r8 != null) goto L22;
        return false;
    L22:
        ResultReceiver r1 = (ResultReceiver) r8.getParcelable(COMMIT_CONTENT_RESULT_RECEIVER);     // Catch: Throwable -> L15
        Uri r2 = (Uri) r8.getParcelable(COMMIT_CONTENT_CONTENT_URI_KEY);     // Catch: Throwable -> L13
        ClipDescription r3 = (ClipDescription) r8.getParcelable(COMMIT_CONTENT_DESCRIPTION_KEY);     // Catch: Throwable -> L13
        Uri r4 = (Uri) r8.getParcelable(COMMIT_CONTENT_LINK_URI_KEY);     // Catch: Throwable -> L13
        boolean r82 = r9.onCommitContent(new InputContentInfoCompat(r2, r3, r4), r8.getInt(COMMIT_CONTENT_FLAGS_KEY), (Bundle) r8.getParcelable(COMMIT_CONTENT_OPTS_KEY));     // Catch: Throwable -> L13
        if (r1 == null) goto L12;
        r1.send(r82 ? 1 : 0, null);
    L12:
        return r82;
    L13:
        th = th;
    L17:
        if (r1 == null) goto L19;
        r1.send(0, null);
    L19:
        throw th;
    L15:
        th = th;
        r1 = null;
        goto L17
    }

    public static boolean commitContent(@NonNull InputConnection r5, @NonNull EditorInfo r6, @NonNull InputContentInfoCompat r7, int r8, @Nullable Bundle r9) {
        ClipDescription r0 = r7.getDescription();
        String[] r62 = EditorInfoCompat.getContentMimeTypes(r6);
        int r1 = r62.length;
        int r3 = 0;
    L3:
        if (r3 >= r1) goto L8;
        if (r0.hasMimeType(r62[r3]) == true) goto L6;
        r3 = r3 + 1;
        goto L3
    L6:
        boolean r63 = true;
    L9:
        if (r63 == true) goto L12;
        return false;
    L12:
        if (Build.VERSION.SDK_INT >= 25) goto L14;
        Bundle r64 = new Bundle();
        r64.putParcelable(COMMIT_CONTENT_CONTENT_URI_KEY, r7.getContentUri());
        r64.putParcelable(COMMIT_CONTENT_DESCRIPTION_KEY, r7.getDescription());
        r64.putParcelable(COMMIT_CONTENT_LINK_URI_KEY, r7.getLinkUri());
        r64.putInt(COMMIT_CONTENT_FLAGS_KEY, r8);
        r64.putParcelable(COMMIT_CONTENT_OPTS_KEY, r9);
        return r5.performPrivateCommand(COMMIT_CONTENT_ACTION, r64);
    L14:
        return r5.commitContent((InputContentInfo) r7.unwrap(), r8, r9);
    L8:
        r63 = false;
        goto L9
    }

    @NonNull
    public static InputConnection createWrapper(@NonNull final InputConnection r3, @NonNull EditorInfo r4, @NonNull final OnCommitContentListener r5) {
        if (r3 == null) goto L19;
        if (r4 == null) goto L17;
        if (r5 == null) goto L15;
        final boolean r2 = false;
        if (Build.VERSION.SDK_INT < 25) goto L10;
        return new 1(r3, r2, r5);
    L10:
        if (EditorInfoCompat.getContentMimeTypes(r4).length != 0) goto L13;
        return r3;
    L13:
        return new 2(r3, r2, r5);
    L15:
        throw new IllegalArgumentException("onCommitContentListener must be non-null");
    L17:
        throw new IllegalArgumentException("editorInfo must be non-null");
    L19:
        throw new IllegalArgumentException("inputConnection must be non-null");
    }

    @Deprecated
    public InputConnectionCompat() {
    }
}
