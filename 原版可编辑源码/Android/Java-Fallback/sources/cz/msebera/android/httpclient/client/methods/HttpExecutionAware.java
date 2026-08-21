package cz.msebera.android.httpclient.client.methods;

public interface HttpExecutionAware {
    boolean isAborted();

    void setCancellable(cz.msebera.android.httpclient.concurrent.Cancellable r1);
}
