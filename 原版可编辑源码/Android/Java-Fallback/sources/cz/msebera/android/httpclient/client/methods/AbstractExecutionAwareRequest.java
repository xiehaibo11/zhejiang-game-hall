package cz.msebera.android.httpclient.client.methods;

public abstract class AbstractExecutionAwareRequest extends cz.msebera.android.httpclient.message.AbstractHttpMessage implements cz.msebera.android.httpclient.client.methods.HttpExecutionAware, cz.msebera.android.httpclient.client.methods.AbortableHttpRequest, java.lang.Cloneable, cz.msebera.android.httpclient.HttpRequest {
    private final java.util.concurrent.atomic.AtomicBoolean aborted;
    private final java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.concurrent.Cancellable> cancellableRef;



    protected AbstractExecutionAwareRequest() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.aborted = r0
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            r1 = 0
            r0.<init>(r1)
            r2.cancellableRef = r0
            return
    }

    @Override
    public void abort() {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r3.aborted
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L18
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.concurrent.Cancellable> r0 = r3.cancellableRef
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            cz.msebera.android.httpclient.concurrent.Cancellable r0 = (cz.msebera.android.httpclient.concurrent.Cancellable) r0
            if (r0 == 0) goto L18
            r0.cancel()
        L18:
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r2 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest r0 = (cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest) r0
            cz.msebera.android.httpclient.message.HeaderGroup r1 = r2.headergroup
            java.lang.Object r1 = cz.msebera.android.httpclient.client.utils.CloneUtils.cloneObject(r1)
            cz.msebera.android.httpclient.message.HeaderGroup r1 = (cz.msebera.android.httpclient.message.HeaderGroup) r1
            r0.headergroup = r1
            cz.msebera.android.httpclient.params.HttpParams r1 = r2.params
            java.lang.Object r1 = cz.msebera.android.httpclient.client.utils.CloneUtils.cloneObject(r1)
            cz.msebera.android.httpclient.params.HttpParams r1 = (cz.msebera.android.httpclient.params.HttpParams) r1
            r0.params = r1
            return r0
    }

    public void completed() {
            r2 = this;
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.concurrent.Cancellable> r0 = r2.cancellableRef
            r1 = 0
            r0.set(r1)
            return
    }

    @Override
    public boolean isAborted() {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.aborted
            boolean r0 = r0.get()
            return r0
    }

    public void reset() {
            r2 = this;
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.concurrent.Cancellable> r0 = r2.cancellableRef
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            cz.msebera.android.httpclient.concurrent.Cancellable r0 = (cz.msebera.android.httpclient.concurrent.Cancellable) r0
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            java.util.concurrent.atomic.AtomicBoolean r0 = r2.aborted
            r1 = 0
            r0.set(r1)
            return
    }

    @Override
    public void setCancellable(cz.msebera.android.httpclient.concurrent.Cancellable r2) {
            r1 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.aborted
            boolean r0 = r0.get()
            if (r0 != 0) goto Ld
            java.util.concurrent.atomic.AtomicReference<cz.msebera.android.httpclient.concurrent.Cancellable> r0 = r1.cancellableRef
            r0.set(r2)
        Ld:
            return
    }

    @Override
    @java.lang.Deprecated
    public void setConnectionRequest(cz.msebera.android.httpclient.conn.ClientConnectionRequest r2) {
            r1 = this;
            cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest$1 r0 = new cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest$1
            r0.<init>(r1, r2)
            r1.setCancellable(r0)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setReleaseTrigger(cz.msebera.android.httpclient.conn.ConnectionReleaseTrigger r2) {
            r1 = this;
            cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest$2 r0 = new cz.msebera.android.httpclient.client.methods.AbstractExecutionAwareRequest$2
            r0.<init>(r1, r2)
            r1.setCancellable(r0)
            return
    }
}
