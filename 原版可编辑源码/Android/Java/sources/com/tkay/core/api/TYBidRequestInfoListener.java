package com.tkay.core.api;

public interface TYBidRequestInfoListener {
    void onFailed(String str);

    void onSuccess(TYBidRequestInfo tYBidRequestInfo);
}
