package android.support.v4.view;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.support.annotation.LayoutRes;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.UiThread;
import android.support.v4.util.Pools;
import android.util.AttributeSet;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import java.util.concurrent.ArrayBlockingQueue;

public final class AsyncLayoutInflater {
    private static final String TAG = "AsyncLayoutInflater";
    Handler mHandler;
    private Handler.Callback mHandlerCallback;
    InflateThread mInflateThread;
    LayoutInflater mInflater;

    private static class BasicInflater extends LayoutInflater {
        private static final String[] sClassPrefixList = null;

        static {
            sClassPrefixList = new String[]{"android.widget.", "android.webkit.", "android.app."};
        }

        BasicInflater(Context r1) {
            super(r1);
        }

        @Override
        public LayoutInflater cloneInContext(Context r2) {
            return new BasicInflater(r2);
        }

        @Override
        protected View onCreateView(String r5, AttributeSet r6) throws ClassNotFoundException {
            String[] r0 = sClassPrefixList;
            int r1 = r0.length;
            int r2 = 0;
        L3:
            if (r2 >= r1) goto L10;
            View r3 = createView(r5, r0[r2], r6);     // Catch: ClassNotFoundException -> L11
            if (r3 == null) goto L8;
            return r3;
        L8:
            r2 = r2 + 1;
            goto L3
        L10:
            return super.onCreateView(r5, r6);
        }
    }

    private static class InflateRequest {
        OnInflateFinishedListener callback;
        AsyncLayoutInflater inflater;
        ViewGroup parent;
        int resid;
        View view;

        InflateRequest() {
        }
    }

    private static class InflateThread extends Thread {
        private static final InflateThread sInstance = null;
        private ArrayBlockingQueue<InflateRequest> mQueue;
        private Pools.SynchronizedPool<InflateRequest> mRequestPool;

        private InflateThread() {
            this.mQueue = new ArrayBlockingQueue(10);
            this.mRequestPool = new Pools.SynchronizedPool(10);
        }

        static {
            sInstance = new InflateThread();
            sInstance.start();
        }

        public static InflateThread getInstance() {
            return sInstance;
        }

        public void runInner() {
            InflateRequest r1 = this.mQueue.take();     // Catch: InterruptedException -> L11
            r1.view = r1.inflater.mInflater.inflate(r1.resid, r1.parent, false);     // Catch: RuntimeException -> L7
        L9:
            Message.obtain(r1.inflater.mHandler, 0, r1).sendToTarget();
            return;
        L7:
            e = move-exception;
            Log.w(AsyncLayoutInflater.TAG, "Failed to inflate resource in the background! Retrying on the UI thread", e);
        L11:
            e = move-exception;
            Log.w(AsyncLayoutInflater.TAG, e);
        }

        @Override
        public void run() {
        L2:
            runInner();
            goto L2
        }

        public InflateRequest obtainRequest() {
            InflateRequest r0 = this.mRequestPool.acquire();
            if (r0 == null) goto L5;
            return r0;
        L5:
            return new InflateRequest();
        }

        public void releaseRequest(InflateRequest r3) {
            r3.callback = null;
            r3.inflater = null;
            r3.parent = null;
            r3.resid = 0;
            r3.view = null;
            this.mRequestPool.release(r3);
        }

        public void enqueue(InflateRequest r3) {
            this.mQueue.put(r3);     // Catch: InterruptedException -> L4
            return;
        L4:
            e = move-exception;
            throw new RuntimeException("Failed to enqueue async inflate request", e);
        }
    }

    public interface OnInflateFinishedListener {
        void onInflateFinished(@NonNull View r1, @LayoutRes int r2, @Nullable ViewGroup r3);
    }

    public AsyncLayoutInflater(@NonNull Context r2) {
        this.mHandlerCallback = new 1(this);
        this.mInflater = new BasicInflater(r2);
        this.mHandler = new Handler(this.mHandlerCallback);
        this.mInflateThread = InflateThread.getInstance();
    }

    @UiThread
    public void inflate(@LayoutRes int r2, @Nullable ViewGroup r3, @NonNull OnInflateFinishedListener r4) {
        if (r4 == null) goto L6;
        InflateRequest r0 = this.mInflateThread.obtainRequest();
        r0.inflater = this;
        r0.resid = r2;
        r0.parent = r3;
        r0.callback = r4;
        this.mInflateThread.enqueue(r0);
        return;
    L6:
        throw new NullPointerException("callback argument may not be null!");
    }
}
