package android.support.v13.view.inputmethod;

import android.os.Build;
import android.os.Bundle;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.inputmethod.EditorInfo;

public final class EditorInfoCompat {
    private static final String CONTENT_MIME_TYPES_KEY = "android.support.v13.view.inputmethod.EditorInfoCompat.CONTENT_MIME_TYPES";
    private static final String[] EMPTY_STRING_ARRAY = null;
    public static final int IME_FLAG_FORCE_ASCII = Integer.MIN_VALUE;
    public static final int IME_FLAG_NO_PERSONALIZED_LEARNING = 16777216;

    static {
        EMPTY_STRING_ARRAY = new String[0];
    }

    public static void setContentMimeTypes(@NonNull EditorInfo r2, @Nullable String[] r3) {
        if (Build.VERSION.SDK_INT < 25) goto L6;
        r2.contentMimeTypes = r3;
        return;
    L6:
        if (r2.extras != null) goto L8;
        r2.extras = new Bundle();
    L8:
        r2.extras.putStringArray(CONTENT_MIME_TYPES_KEY, r3);
    }

    @NonNull
    public static String[] getContentMimeTypes(EditorInfo r2) {
        if (Build.VERSION.SDK_INT < 25) goto L10;
        String[] r22 = r2.contentMimeTypes;
        if (r22 == null) goto L8;
        return r22;
    L8:
        return EMPTY_STRING_ARRAY;
    L10:
        if (r2.extras == null) goto L12;
        String[] r23 = r2.extras.getStringArray(CONTENT_MIME_TYPES_KEY);
        if (r23 == null) goto L17;
        return r23;
    L17:
        return EMPTY_STRING_ARRAY;
    L12:
        return EMPTY_STRING_ARRAY;
    }

    @Deprecated
    public EditorInfoCompat() {
    }
}
