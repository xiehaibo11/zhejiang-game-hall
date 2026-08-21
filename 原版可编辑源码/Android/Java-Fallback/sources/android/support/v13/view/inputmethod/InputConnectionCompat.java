package android.support.v13.view.inputmethod;

public final class InputConnectionCompat {
    private static final java.lang.String COMMIT_CONTENT_ACTION = "android.support.v13.view.inputmethod.InputConnectionCompat.COMMIT_CONTENT";
    private static final java.lang.String COMMIT_CONTENT_CONTENT_URI_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_URI";
    private static final java.lang.String COMMIT_CONTENT_DESCRIPTION_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_DESCRIPTION";
    private static final java.lang.String COMMIT_CONTENT_FLAGS_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_FLAGS";
    private static final java.lang.String COMMIT_CONTENT_LINK_URI_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_LINK_URI";
    private static final java.lang.String COMMIT_CONTENT_OPTS_KEY = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_OPTS";
    private static final java.lang.String COMMIT_CONTENT_RESULT_RECEIVER = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_RESULT_RECEIVER";
    public static final int INPUT_CONTENT_GRANT_READ_URI_PERMISSION = 1;



    public interface OnCommitContentListener {
        boolean onCommitContent(android.support.v13.view.inputmethod.InputContentInfoCompat r1, int r2, android.os.Bundle r3);
    }

    @java.lang.Deprecated
    public InputConnectionCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean commitContent(android.view.inputmethod.InputConnection r5, android.view.inputmethod.EditorInfo r6, android.support.v13.view.inputmethod.InputContentInfoCompat r7, int r8, android.os.Bundle r9) {
            android.content.ClipDescription r0 = r7.getDescription()
            java.lang.String[] r6 = android.support.v13.view.inputmethod.EditorInfoCompat.getContentMimeTypes(r6)
            int r1 = r6.length
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L1a
            r4 = r6[r3]
            boolean r4 = r0.hasMimeType(r4)
            if (r4 == 0) goto L17
            r6 = 1
            goto L1b
        L17:
            int r3 = r3 + 1
            goto Lb
        L1a:
            r6 = r2
        L1b:
            if (r6 != 0) goto L1e
            return r2
        L1e:
            int r6 = android.os.Build.VERSION.SDK_INT
            r0 = 25
            if (r6 < r0) goto L2f
            java.lang.Object r6 = r7.unwrap()
            android.view.inputmethod.InputContentInfo r6 = (android.view.inputmethod.InputContentInfo) r6
            boolean r5 = r5.commitContent(r6, r8, r9)
            return r5
        L2f:
            android.os.Bundle r6 = new android.os.Bundle
            r6.<init>()
            android.net.Uri r0 = r7.getContentUri()
            java.lang.String r1 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_URI"
            r6.putParcelable(r1, r0)
            android.content.ClipDescription r0 = r7.getDescription()
            java.lang.String r1 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_DESCRIPTION"
            r6.putParcelable(r1, r0)
            android.net.Uri r7 = r7.getLinkUri()
            java.lang.String r0 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_LINK_URI"
            r6.putParcelable(r0, r7)
            java.lang.String r7 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_FLAGS"
            r6.putInt(r7, r8)
            java.lang.String r7 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_OPTS"
            r6.putParcelable(r7, r9)
            java.lang.String r7 = "android.support.v13.view.inputmethod.InputConnectionCompat.COMMIT_CONTENT"
            boolean r5 = r5.performPrivateCommand(r7, r6)
            return r5
    }

    public static android.view.inputmethod.InputConnection createWrapper(android.view.inputmethod.InputConnection r3, android.view.inputmethod.EditorInfo r4, android.support.v13.view.inputmethod.InputConnectionCompat.OnCommitContentListener r5) {
            if (r3 == 0) goto L31
            if (r4 == 0) goto L29
            if (r5 == 0) goto L21
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            r2 = 0
            if (r0 < r1) goto L13
            android.support.v13.view.inputmethod.InputConnectionCompat$1 r4 = new android.support.v13.view.inputmethod.InputConnectionCompat$1
            r4.<init>(r3, r2, r5)
            return r4
        L13:
            java.lang.String[] r4 = android.support.v13.view.inputmethod.EditorInfoCompat.getContentMimeTypes(r4)
            int r4 = r4.length
            if (r4 != 0) goto L1b
            return r3
        L1b:
            android.support.v13.view.inputmethod.InputConnectionCompat$2 r4 = new android.support.v13.view.inputmethod.InputConnectionCompat$2
            r4.<init>(r3, r2, r5)
            return r4
        L21:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "onCommitContentListener must be non-null"
            r3.<init>(r4)
            throw r3
        L29:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "editorInfo must be non-null"
            r3.<init>(r4)
            throw r3
        L31:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "inputConnection must be non-null"
            r3.<init>(r4)
            throw r3
    }

    static boolean handlePerformPrivateCommand(java.lang.String r7, android.os.Bundle r8, android.support.v13.view.inputmethod.InputConnectionCompat.OnCommitContentListener r9) {
            java.lang.String r0 = "android.support.v13.view.inputmethod.InputConnectionCompat.COMMIT_CONTENT"
            boolean r7 = android.text.TextUtils.equals(r0, r7)
            r0 = 0
            if (r7 != 0) goto La
            return r0
        La:
            if (r8 != 0) goto Ld
            return r0
        Ld:
            r7 = 0
            java.lang.String r1 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_RESULT_RECEIVER"
            android.os.Parcelable r1 = r8.getParcelable(r1)     // Catch: java.lang.Throwable -> L4d
            android.os.ResultReceiver r1 = (android.os.ResultReceiver) r1     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_URI"
            android.os.Parcelable r2 = r8.getParcelable(r2)     // Catch: java.lang.Throwable -> L4b
            android.net.Uri r2 = (android.net.Uri) r2     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_DESCRIPTION"
            android.os.Parcelable r3 = r8.getParcelable(r3)     // Catch: java.lang.Throwable -> L4b
            android.content.ClipDescription r3 = (android.content.ClipDescription) r3     // Catch: java.lang.Throwable -> L4b
            java.lang.String r4 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_LINK_URI"
            android.os.Parcelable r4 = r8.getParcelable(r4)     // Catch: java.lang.Throwable -> L4b
            android.net.Uri r4 = (android.net.Uri) r4     // Catch: java.lang.Throwable -> L4b
            java.lang.String r5 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_FLAGS"
            int r5 = r8.getInt(r5)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = "android.support.v13.view.inputmethod.InputConnectionCompat.CONTENT_OPTS"
            android.os.Parcelable r8 = r8.getParcelable(r6)     // Catch: java.lang.Throwable -> L4b
            android.os.Bundle r8 = (android.os.Bundle) r8     // Catch: java.lang.Throwable -> L4b
            android.support.v13.view.inputmethod.InputContentInfoCompat r6 = new android.support.v13.view.inputmethod.InputContentInfoCompat     // Catch: java.lang.Throwable -> L4b
            r6.<init>(r2, r3, r4)     // Catch: java.lang.Throwable -> L4b
            boolean r8 = r9.onCommitContent(r6, r5, r8)     // Catch: java.lang.Throwable -> L4b
            if (r1 == 0) goto L4a
            r1.send(r8, r7)
        L4a:
            return r8
        L4b:
            r8 = move-exception
            goto L4f
        L4d:
            r8 = move-exception
            r1 = r7
        L4f:
            if (r1 == 0) goto L54
            r1.send(r0, r7)
        L54:
            throw r8
    }
}
