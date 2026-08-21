package android.support.v4.view;

public final class AsyncLayoutInflater {
    private static final java.lang.String TAG = "AsyncLayoutInflater";
    android.os.Handler mHandler;
    private android.os.Handler.Callback mHandlerCallback;
    android.support.v4.view.AsyncLayoutInflater.InflateThread mInflateThread;
    android.view.LayoutInflater mInflater;


    private static class BasicInflater extends android.view.LayoutInflater {
        private static final java.lang.String[] sClassPrefixList = null;

        static {
                java.lang.String r0 = "android.widget."
                java.lang.String r1 = "android.webkit."
                java.lang.String r2 = "android.app."
                java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
                android.support.v4.view.AsyncLayoutInflater.BasicInflater.sClassPrefixList = r0
                return
        }

        BasicInflater(android.content.Context r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public android.view.LayoutInflater cloneInContext(android.content.Context r2) {
                r1 = this;
                android.support.v4.view.AsyncLayoutInflater$BasicInflater r0 = new android.support.v4.view.AsyncLayoutInflater$BasicInflater
                r0.<init>(r2)
                return r0
        }

        @Override
        protected android.view.View onCreateView(java.lang.String r5, android.util.AttributeSet r6) throws java.lang.ClassNotFoundException {
                r4 = this;
                java.lang.String[] r0 = android.support.v4.view.AsyncLayoutInflater.BasicInflater.sClassPrefixList
                int r1 = r0.length
                r2 = 0
            L4:
                if (r2 >= r1) goto L12
                r3 = r0[r2]
                android.view.View r3 = r4.createView(r5, r3, r6)     // Catch: java.lang.ClassNotFoundException -> Lf
                if (r3 == 0) goto Lf
                return r3
            Lf:
                int r2 = r2 + 1
                goto L4
            L12:
                android.view.View r5 = super.onCreateView(r5, r6)
                return r5
        }
    }

    private static class InflateRequest {
        android.support.v4.view.AsyncLayoutInflater.OnInflateFinishedListener callback;
        android.support.v4.view.AsyncLayoutInflater inflater;
        android.view.ViewGroup parent;
        int resid;
        android.view.View view;

        InflateRequest() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class InflateThread extends java.lang.Thread {
        private static final android.support.v4.view.AsyncLayoutInflater.InflateThread sInstance = null;
        private java.util.concurrent.ArrayBlockingQueue<android.support.v4.view.AsyncLayoutInflater.InflateRequest> mQueue;
        private android.support.v4.util.Pools.SynchronizedPool<android.support.v4.view.AsyncLayoutInflater.InflateRequest> mRequestPool;

        static {
                android.support.v4.view.AsyncLayoutInflater$InflateThread r0 = new android.support.v4.view.AsyncLayoutInflater$InflateThread
                r0.<init>()
                android.support.v4.view.AsyncLayoutInflater.InflateThread.sInstance = r0
                r0.start()
                return
        }

        private InflateThread() {
                r2 = this;
                r2.<init>()
                java.util.concurrent.ArrayBlockingQueue r0 = new java.util.concurrent.ArrayBlockingQueue
                r1 = 10
                r0.<init>(r1)
                r2.mQueue = r0
                android.support.v4.util.Pools$SynchronizedPool r0 = new android.support.v4.util.Pools$SynchronizedPool
                r0.<init>(r1)
                r2.mRequestPool = r0
                return
        }

        public static android.support.v4.view.AsyncLayoutInflater.InflateThread getInstance() {
                android.support.v4.view.AsyncLayoutInflater$InflateThread r0 = android.support.v4.view.AsyncLayoutInflater.InflateThread.sInstance
                return r0
        }

        public void enqueue(android.support.v4.view.AsyncLayoutInflater.InflateRequest r3) {
                r2 = this;
                java.util.concurrent.ArrayBlockingQueue<android.support.v4.view.AsyncLayoutInflater$InflateRequest> r0 = r2.mQueue     // Catch: java.lang.InterruptedException -> L6
                r0.put(r3)     // Catch: java.lang.InterruptedException -> L6
                return
            L6:
                r3 = move-exception
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Failed to enqueue async inflate request"
                r0.<init>(r1, r3)
                throw r0
        }

        public android.support.v4.view.AsyncLayoutInflater.InflateRequest obtainRequest() {
                r1 = this;
                android.support.v4.util.Pools$SynchronizedPool<android.support.v4.view.AsyncLayoutInflater$InflateRequest> r0 = r1.mRequestPool
                java.lang.Object r0 = r0.acquire()
                android.support.v4.view.AsyncLayoutInflater$InflateRequest r0 = (android.support.v4.view.AsyncLayoutInflater.InflateRequest) r0
                if (r0 != 0) goto Lf
                android.support.v4.view.AsyncLayoutInflater$InflateRequest r0 = new android.support.v4.view.AsyncLayoutInflater$InflateRequest
                r0.<init>()
            Lf:
                return r0
        }

        public void releaseRequest(android.support.v4.view.AsyncLayoutInflater.InflateRequest r3) {
                r2 = this;
                r0 = 0
                r3.callback = r0
                r3.inflater = r0
                r3.parent = r0
                r1 = 0
                r3.resid = r1
                r3.view = r0
                android.support.v4.util.Pools$SynchronizedPool<android.support.v4.view.AsyncLayoutInflater$InflateRequest> r0 = r2.mRequestPool
                r0.release(r3)
                return
        }

        @Override
        public void run() {
                r0 = this;
            L0:
                r0.runInner()
                goto L0
        }

        public void runInner() {
                r6 = this;
                java.lang.String r0 = "AsyncLayoutInflater"
                java.util.concurrent.ArrayBlockingQueue<android.support.v4.view.AsyncLayoutInflater$InflateRequest> r1 = r6.mQueue     // Catch: java.lang.InterruptedException -> L2c
                java.lang.Object r1 = r1.take()     // Catch: java.lang.InterruptedException -> L2c
                android.support.v4.view.AsyncLayoutInflater$InflateRequest r1 = (android.support.v4.view.AsyncLayoutInflater.InflateRequest) r1     // Catch: java.lang.InterruptedException -> L2c
                r2 = 0
                android.support.v4.view.AsyncLayoutInflater r3 = r1.inflater     // Catch: java.lang.RuntimeException -> L1a
                android.view.LayoutInflater r3 = r3.mInflater     // Catch: java.lang.RuntimeException -> L1a
                int r4 = r1.resid     // Catch: java.lang.RuntimeException -> L1a
                android.view.ViewGroup r5 = r1.parent     // Catch: java.lang.RuntimeException -> L1a
                android.view.View r3 = r3.inflate(r4, r5, r2)     // Catch: java.lang.RuntimeException -> L1a
                r1.view = r3     // Catch: java.lang.RuntimeException -> L1a
                goto L20
            L1a:
                r3 = move-exception
                java.lang.String r4 = "Failed to inflate resource in the background! Retrying on the UI thread"
                android.util.Log.w(r0, r4, r3)
            L20:
                android.support.v4.view.AsyncLayoutInflater r0 = r1.inflater
                android.os.Handler r0 = r0.mHandler
                android.os.Message r0 = android.os.Message.obtain(r0, r2, r1)
                r0.sendToTarget()
                return
            L2c:
                r1 = move-exception
                android.util.Log.w(r0, r1)
                return
        }
    }

    public interface OnInflateFinishedListener {
        void onInflateFinished(android.view.View r1, int r2, android.view.ViewGroup r3);
    }

    public AsyncLayoutInflater(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.support.v4.view.AsyncLayoutInflater$1 r0 = new android.support.v4.view.AsyncLayoutInflater$1
            r0.<init>(r1)
            r1.mHandlerCallback = r0
            android.support.v4.view.AsyncLayoutInflater$BasicInflater r0 = new android.support.v4.view.AsyncLayoutInflater$BasicInflater
            r0.<init>(r2)
            r1.mInflater = r0
            android.os.Handler r2 = new android.os.Handler
            android.os.Handler$Callback r0 = r1.mHandlerCallback
            r2.<init>(r0)
            r1.mHandler = r2
            android.support.v4.view.AsyncLayoutInflater$InflateThread r2 = android.support.v4.view.AsyncLayoutInflater.InflateThread.getInstance()
            r1.mInflateThread = r2
            return
    }

    public void inflate(int r2, android.view.ViewGroup r3, android.support.v4.view.AsyncLayoutInflater.OnInflateFinishedListener r4) {
            r1 = this;
            if (r4 == 0) goto L16
            android.support.v4.view.AsyncLayoutInflater$InflateThread r0 = r1.mInflateThread
            android.support.v4.view.AsyncLayoutInflater$InflateRequest r0 = r0.obtainRequest()
            r0.inflater = r1
            r0.resid = r2
            r0.parent = r3
            r0.callback = r4
            android.support.v4.view.AsyncLayoutInflater$InflateThread r2 = r1.mInflateThread
            r2.enqueue(r0)
            return
        L16:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "callback argument may not be null!"
            r2.<init>(r3)
            throw r2
    }
}
