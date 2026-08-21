package com.tkay.china.api;

import com.bun.miitmdid.interfaces.IIdentifierListener;
import com.bun.miitmdid.interfaces.IdSupplier;

public interface OaidSDKCallbackListener extends IIdentifierListener {
    void OnSupport(boolean z, IdSupplier idSupplier);

    void onSupport(IdSupplier idSupplier);
}
