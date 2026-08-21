package android.support.v4.content;

import android.content.Context;
import android.database.ContentObserver;
import android.os.Handler;
import android.support.annotation.MainThread;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.util.DebugUtils;
import java.io.FileDescriptor;
import java.io.PrintWriter;

public class Loader<D> {
    boolean mAbandoned;
    boolean mContentChanged;
    Context mContext;
    int mId;
    OnLoadCompleteListener<D> mListener;
    OnLoadCanceledListener<D> mOnLoadCanceledListener;
    boolean mProcessingChange;
    boolean mReset;
    boolean mStarted;

    public final class ForceLoadContentObserver extends ContentObserver {
        final Loader this$0;

        @Override
        public boolean deliverSelfNotifications() {
            return true;
        }

        public ForceLoadContentObserver(Loader r1) {
            this.this$0 = r1;
            super(new Handler());
        }

        @Override
        public void onChange(boolean r1) {
            this.this$0.onContentChanged();
        }
    }

    public interface OnLoadCanceledListener<D> {
        void onLoadCanceled(@NonNull Loader<D> r1);
    }

    public interface OnLoadCompleteListener<D> {
        void onLoadComplete(@NonNull Loader<D> r1, @Nullable D r2);
    }

    @MainThread
    protected void onAbandon() {
    }

    @MainThread
    protected boolean onCancelLoad() {
        return false;
    }

    @MainThread
    protected void onForceLoad() {
    }

    @MainThread
    protected void onReset() {
    }

    @MainThread
    protected void onStartLoading() {
    }

    @MainThread
    protected void onStopLoading() {
    }

    public Loader(@NonNull Context r3) {
        this.mStarted = false;
        this.mAbandoned = false;
        this.mReset = true;
        this.mContentChanged = false;
        this.mProcessingChange = false;
        this.mContext = r3.getApplicationContext();
    }

    @MainThread
    public void deliverResult(@Nullable D r2) {
        OnLoadCompleteListener<D> r0 = this.mListener;
        if (r0 == null) goto L6;
        r0.onLoadComplete(this, r2);
        return;
    }

    @MainThread
    public void deliverCancellation() {
        OnLoadCanceledListener<D> r0 = this.mOnLoadCanceledListener;
        if (r0 == null) goto L6;
        r0.onLoadCanceled(this);
        return;
    }

    @NonNull
    public Context getContext() {
        return this.mContext;
    }

    public int getId() {
        return this.mId;
    }

    @MainThread
    public void registerListener(int r2, @NonNull OnLoadCompleteListener<D> r3) {
        if (this.mListener != null) goto L7;
        this.mListener = r3;
        this.mId = r2;
        return;
    L7:
        throw new IllegalStateException("There is already a listener registered");
    }

    @MainThread
    public void unregisterListener(@NonNull OnLoadCompleteListener<D> r2) {
        OnLoadCompleteListener<D> r0 = this.mListener;
        if (r0 == null) goto L10;
        if (r0 != r2) goto L8;
        this.mListener = null;
        return;
    L8:
        throw new IllegalArgumentException("Attempting to unregister the wrong listener");
    L10:
        throw new IllegalStateException("No listener register");
    }

    @MainThread
    public void registerOnLoadCanceledListener(@NonNull OnLoadCanceledListener<D> r2) {
        if (this.mOnLoadCanceledListener != null) goto L7;
        this.mOnLoadCanceledListener = r2;
        return;
    L7:
        throw new IllegalStateException("There is already a listener registered");
    }

    @MainThread
    public void unregisterOnLoadCanceledListener(@NonNull OnLoadCanceledListener<D> r2) {
        OnLoadCanceledListener<D> r0 = this.mOnLoadCanceledListener;
        if (r0 == null) goto L10;
        if (r0 != r2) goto L8;
        this.mOnLoadCanceledListener = null;
        return;
    L8:
        throw new IllegalArgumentException("Attempting to unregister the wrong listener");
    L10:
        throw new IllegalStateException("No listener register");
    }

    public boolean isStarted() {
        return this.mStarted;
    }

    public boolean isAbandoned() {
        return this.mAbandoned;
    }

    public boolean isReset() {
        return this.mReset;
    }

    @MainThread
    public final void startLoading() {
        this.mStarted = true;
        this.mReset = false;
        this.mAbandoned = false;
        onStartLoading();
    }

    @MainThread
    public boolean cancelLoad() {
        return onCancelLoad();
    }

    @MainThread
    public void forceLoad() {
        onForceLoad();
    }

    @MainThread
    public void stopLoading() {
        this.mStarted = false;
        onStopLoading();
    }

    @MainThread
    public void abandon() {
        this.mAbandoned = true;
        onAbandon();
    }

    @MainThread
    public void reset() {
        onReset();
        this.mReset = true;
        this.mStarted = false;
        this.mAbandoned = false;
        this.mContentChanged = false;
        this.mProcessingChange = false;
    }

    public boolean takeContentChanged() {
        boolean r0 = this.mContentChanged;
        this.mContentChanged = false;
        this.mProcessingChange |= r0;
        return r0;
    }

    public void commitContentChanged() {
        this.mProcessingChange = false;
    }

    public void rollbackContentChanged() {
        if (this.mProcessingChange == false) goto L6;
        onContentChanged();
        return;
    }

    @MainThread
    public void onContentChanged() {
        if (this.mStarted == false) goto L5;
        forceLoad();
        return;
    L5:
        this.mContentChanged = true;
    }

    @NonNull
    public String dataToString(@Nullable D r3) {
        StringBuilder r0 = new StringBuilder(64);
        DebugUtils.buildShortClassTag(r3, r0);
        r0.append("}");
        return r0.toString();
    }

    public String toString() {
        StringBuilder r0 = new StringBuilder(64);
        DebugUtils.buildShortClassTag(this, r0);
        r0.append(" id=");
        r0.append(this.mId);
        r0.append("}");
        return r0.toString();
    }

    @Deprecated
    public void dump(String r1, FileDescriptor r2, PrintWriter r3, String[] r4) {
        r3.print(r1);
        r3.print("mId=");
        r3.print(this.mId);
        r3.print(" mListener=");
        r3.println(this.mListener);
        if (this.mStarted == false) goto L5;
    L8:
        r3.print(r1);
        r3.print("mStarted=");
        r3.print(this.mStarted);
        r3.print(" mContentChanged=");
        r3.print(this.mContentChanged);
        r3.print(" mProcessingChange=");
        r3.println(this.mProcessingChange);
    L10:
        if (this.mAbandoned == false) goto L12;
    L13:
        r3.print(r1);
        r3.print("mAbandoned=");
        r3.print(this.mAbandoned);
        r3.print(" mReset=");
        r3.println(this.mReset);
        return;
    L12:
        if (this.mReset == true) goto L13;
        return;
    L5:
        if (this.mContentChanged == true) goto L8;
        if (this.mProcessingChange == false) goto L10;
        goto L8
    }
}
