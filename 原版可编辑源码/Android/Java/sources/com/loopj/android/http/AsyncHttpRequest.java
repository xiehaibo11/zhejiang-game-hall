package com.loopj.android.http;

import com.bykv.vk.openvk.live.TTLiveConstants;
import cz.msebera.android.httpclient.client.HttpRequestRetryHandler;
import cz.msebera.android.httpclient.client.methods.CloseableHttpResponse;
import cz.msebera.android.httpclient.client.methods.HttpUriRequest;
import cz.msebera.android.httpclient.impl.client.AbstractHttpClient;
import cz.msebera.android.httpclient.protocol.HttpContext;
import java.io.IOException;
import java.net.MalformedURLException;
import java.net.UnknownHostException;
import java.util.concurrent.atomic.AtomicBoolean;

public class AsyncHttpRequest implements Runnable {
    private boolean cancelIsNotified;
    private final AbstractHttpClient client;
    private final HttpContext context;
    private int executionCount;
    private final AtomicBoolean isCancelled = new AtomicBoolean();
    private volatile boolean isFinished;
    private boolean isRequestPreProcessed;
    private final HttpUriRequest request;
    private final ResponseHandlerInterface responseHandler;

    public void onPostProcessRequest(AsyncHttpRequest asyncHttpRequest) {
    }

    public void onPreProcessRequest(AsyncHttpRequest asyncHttpRequest) {
    }

    public AsyncHttpRequest(AbstractHttpClient abstractHttpClient, HttpContext httpContext, HttpUriRequest httpUriRequest, ResponseHandlerInterface responseHandlerInterface) {
        this.client = (AbstractHttpClient) Utils.notNull(abstractHttpClient, "client");
        this.context = (HttpContext) Utils.notNull(httpContext, TTLiveConstants.CONTEXT_KEY);
        this.request = (HttpUriRequest) Utils.notNull(httpUriRequest, "request");
        this.responseHandler = (ResponseHandlerInterface) Utils.notNull(responseHandlerInterface, "responseHandler");
    }

    @Override
    public void run() {
        if (isCancelled()) {
            return;
        }
        if (!this.isRequestPreProcessed) {
            this.isRequestPreProcessed = true;
            onPreProcessRequest(this);
        }
        if (isCancelled()) {
            return;
        }
        this.responseHandler.sendStartMessage();
        if (isCancelled()) {
            return;
        }
        try {
            makeRequestWithRetries();
        } catch (IOException e) {
            if (!isCancelled()) {
                this.responseHandler.sendFailureMessage(0, null, null, e);
            } else {
                AsyncHttpClient.log.e("AsyncHttpRequest", "makeRequestWithRetries returned error", e);
            }
        }
        if (isCancelled()) {
            return;
        }
        this.responseHandler.sendFinishMessage();
        if (isCancelled()) {
            return;
        }
        onPostProcessRequest(this);
        this.isFinished = true;
    }

    private void makeRequest() throws IOException {
        if (isCancelled()) {
            return;
        }
        if (this.request.getURI().getScheme() == null) {
            throw new MalformedURLException("No valid URI scheme was provided");
        }
        ResponseHandlerInterface responseHandlerInterface = this.responseHandler;
        if (responseHandlerInterface instanceof RangeFileAsyncHttpResponseHandler) {
            ((RangeFileAsyncHttpResponseHandler) responseHandlerInterface).updateRequestHeaders(this.request);
        }
        CloseableHttpResponse closeableHttpResponseExecute = this.client.execute(this.request, this.context);
        if (isCancelled()) {
            return;
        }
        ResponseHandlerInterface responseHandlerInterface2 = this.responseHandler;
        responseHandlerInterface2.onPreProcessResponse(responseHandlerInterface2, closeableHttpResponseExecute);
        if (isCancelled()) {
            return;
        }
        this.responseHandler.sendResponseMessage(closeableHttpResponseExecute);
        if (isCancelled()) {
            return;
        }
        ResponseHandlerInterface responseHandlerInterface3 = this.responseHandler;
        responseHandlerInterface3.onPostProcessResponse(responseHandlerInterface3, closeableHttpResponseExecute);
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0082 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x000a A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void makeRequestWithRetries() throws IOException {
        HttpRequestRetryHandler httpRequestRetryHandler = this.client.getHttpRequestRetryHandler();
        IOException iOException = null;
        boolean zRetryRequest = true;
        while (zRetryRequest) {
            try {
                try {
                    try {
                        makeRequest();
                        return;
                    } catch (IOException e) {
                        try {
                            if (isCancelled()) {
                                return;
                            }
                            int i = this.executionCount + 1;
                            this.executionCount = i;
                            boolean zRetryRequest2 = httpRequestRetryHandler.retryRequest(e, i, this.context);
                            iOException = e;
                            zRetryRequest = zRetryRequest2;
                            if (zRetryRequest) {
                                this.responseHandler.sendRetryMessage(this.executionCount);
                            }
                        } catch (Exception e2) {
                            AsyncHttpClient.log.e("AsyncHttpRequest", "Unhandled exception origin cause", e2);
                            throw new IOException("Unhandled exception: " + e2.getMessage());
                        }
                    }
                } catch (UnknownHostException e3) {
                    iOException = new IOException("UnknownHostException exception: " + e3.getMessage());
                    if (this.executionCount > 0) {
                        int i2 = this.executionCount + 1;
                        this.executionCount = i2;
                        zRetryRequest = httpRequestRetryHandler.retryRequest(e3, i2, this.context);
                    }
                    if (zRetryRequest) {
                    }
                }
            } catch (NullPointerException e4) {
                iOException = new IOException("NPE in HttpClient: " + e4.getMessage());
                int i3 = this.executionCount + 1;
                this.executionCount = i3;
                zRetryRequest = httpRequestRetryHandler.retryRequest(iOException, i3, this.context);
                if (zRetryRequest) {
                }
            }
        }
    }

    public boolean isCancelled() {
        boolean z = this.isCancelled.get();
        if (z) {
            sendCancelNotification();
        }
        return z;
    }

    private synchronized void sendCancelNotification() {
        if (!this.isFinished && this.isCancelled.get() && !this.cancelIsNotified) {
            this.cancelIsNotified = true;
            this.responseHandler.sendCancelMessage();
        }
    }

    public boolean isDone() {
        return isCancelled() || this.isFinished;
    }

    public boolean cancel(boolean z) {
        this.isCancelled.set(true);
        this.request.abort();
        return isCancelled();
    }

    public AsyncHttpRequest setRequestTag(Object obj) {
        this.responseHandler.setTag(obj);
        return this;
    }

    public Object getTag() {
        return this.responseHandler.getTag();
    }
}
