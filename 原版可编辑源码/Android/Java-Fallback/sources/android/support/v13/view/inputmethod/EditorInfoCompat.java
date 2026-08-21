package android.support.v13.view.inputmethod;

public final class EditorInfoCompat {
    private static final java.lang.String CONTENT_MIME_TYPES_KEY = "android.support.v13.view.inputmethod.EditorInfoCompat.CONTENT_MIME_TYPES";
    private static final java.lang.String[] EMPTY_STRING_ARRAY = null;
    public static final int IME_FLAG_FORCE_ASCII = Integer.MIN_VALUE;
    public static final int IME_FLAG_NO_PERSONALIZED_LEARNING = 16777216;

    static {
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            android.support.v13.view.inputmethod.EditorInfoCompat.EMPTY_STRING_ARRAY = r0
            return
    }

    @java.lang.Deprecated
    public EditorInfoCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String[] getContentMimeTypes(android.view.inputmethod.EditorInfo r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 < r1) goto Le
            java.lang.String[] r2 = r2.contentMimeTypes
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            java.lang.String[] r2 = android.support.v13.view.inputmethod.EditorInfoCompat.EMPTY_STRING_ARRAY
        Ld:
            return r2
        Le:
            android.os.Bundle r0 = r2.extras
            if (r0 != 0) goto L15
            java.lang.String[] r2 = android.support.v13.view.inputmethod.EditorInfoCompat.EMPTY_STRING_ARRAY
            return r2
        L15:
            android.os.Bundle r2 = r2.extras
            java.lang.String r0 = "android.support.v13.view.inputmethod.EditorInfoCompat.CONTENT_MIME_TYPES"
            java.lang.String[] r2 = r2.getStringArray(r0)
            if (r2 == 0) goto L20
            goto L22
        L20:
            java.lang.String[] r2 = android.support.v13.view.inputmethod.EditorInfoCompat.EMPTY_STRING_ARRAY
        L22:
            return r2
    }

    public static void setContentMimeTypes(android.view.inputmethod.EditorInfo r2, java.lang.String[] r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 < r1) goto L9
            r2.contentMimeTypes = r3
            goto L1b
        L9:
            android.os.Bundle r0 = r2.extras
            if (r0 != 0) goto L14
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r2.extras = r0
        L14:
            android.os.Bundle r2 = r2.extras
            java.lang.String r0 = "android.support.v13.view.inputmethod.EditorInfoCompat.CONTENT_MIME_TYPES"
            r2.putStringArray(r0, r3)
        L1b:
            return
    }
}
