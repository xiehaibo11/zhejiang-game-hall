package com.tkay.china.api;

public interface OaidSDKCallbackListener extends com.bun.miitmdid.interfaces.IIdentifierListener {
    void OnSupport(boolean r1, com.bun.miitmdid.interfaces.IdSupplier r2);

    void onSupport(com.bun.miitmdid.interfaces.IdSupplier r1);
}
