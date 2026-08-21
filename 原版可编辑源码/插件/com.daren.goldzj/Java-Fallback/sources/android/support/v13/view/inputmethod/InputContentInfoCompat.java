package android.support.v13.view.inputmethod;

import android.content.ClipDescription;
import android.net.Uri;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.view.inputmethod.InputContentInfo;

public final class InputContentInfoCompat {
    private final InputContentInfoCompatImpl mImpl;

    @RequiresApi(25)
    private static final class InputContentInfoCompatApi25Impl implements InputContentInfoCompatImpl {

        @NonNull
        final InputContentInfo mObject;

        InputContentInfoCompatApi25Impl(@NonNull Object r1) {
            this.mObject = (InputContentInfo) r1;
        }

        InputContentInfoCompatApi25Impl(@NonNull Uri r2, @NonNull ClipDescription r3, @Nullable Uri r4) {
            this.mObject = new InputContentInfo(r2, r3, r4);
        }

        @Override
        @NonNull
        public Uri getContentUri() {
            return this.mObject.getContentUri();
        }

        @Override
        @NonNull
        public ClipDescription getDescription() {
            return this.mObject.getDescription();
        }

        @Override
        @Nullable
        public Uri getLinkUri() {
            return this.mObject.getLinkUri();
        }

        @Override
        @Nullable
        public Object getInputContentInfo() {
            return this.mObject;
        }

        @Override
        public void requestPermission() {
            this.mObject.requestPermission();
        }

        @Override
        public void releasePermission() {
            this.mObject.releasePermission();
        }
    }

    private static final class InputContentInfoCompatBaseImpl implements InputContentInfoCompatImpl {

        @NonNull
        private final Uri mContentUri;

        @NonNull
        private final ClipDescription mDescription;

        @Nullable
        private final Uri mLinkUri;

        @Override
        @Nullable
        public Object getInputContentInfo() {
            return null;
        }

        @Override
        public void releasePermission() {
        }

        @Override
        public void requestPermission() {
        }

        InputContentInfoCompatBaseImpl(@NonNull Uri r1, @NonNull ClipDescription r2, @Nullable Uri r3) {
            this.mContentUri = r1;
            this.mDescription = r2;
            this.mLinkUri = r3;
        }

        @Override
        @NonNull
        public Uri getContentUri() {
            return this.mContentUri;
        }

        @Override
        @NonNull
        public ClipDescription getDescription() {
            return this.mDescription;
        }

        @Override
        @Nullable
        public Uri getLinkUri() {
            return this.mLinkUri;
        }
    }

    private interface InputContentInfoCompatImpl {
        @NonNull
        Uri getContentUri();

        @NonNull
        ClipDescription getDescription();

        @Nullable
        Object getInputContentInfo();

        @Nullable
        Uri getLinkUri();

        void releasePermission();

        void requestPermission();
    }

    public InputContentInfoCompat(@NonNull Uri r3, @NonNull ClipDescription r4, @Nullable Uri r5) {
        if (Build.VERSION.SDK_INT < 25) goto L5;
        this.mImpl = new InputContentInfoCompatApi25Impl(r3, r4, r5);
        return;
    L5:
        this.mImpl = new InputContentInfoCompatBaseImpl(r3, r4, r5);
    }

    private InputContentInfoCompat(@NonNull InputContentInfoCompatImpl r1) {
        this.mImpl = r1;
    }

    @NonNull
    public Uri getContentUri() {
        return this.mImpl.getContentUri();
    }

    @NonNull
    public ClipDescription getDescription() {
        return this.mImpl.getDescription();
    }

    @Nullable
    public Uri getLinkUri() {
        return this.mImpl.getLinkUri();
    }

    @Nullable
    public static InputContentInfoCompat wrap(@Nullable Object r3) {
        if (r3 != null) goto L6;
        return null;
    L6:
        if (Build.VERSION.SDK_INT >= 25) goto L9;
        return null;
    L9:
        return new InputContentInfoCompat(new InputContentInfoCompatApi25Impl(r3));
    }

    @Nullable
    public Object unwrap() {
        return this.mImpl.getInputContentInfo();
    }

    public void requestPermission() {
        this.mImpl.requestPermission();
    }

    public void releasePermission() {
        this.mImpl.releasePermission();
    }
}
