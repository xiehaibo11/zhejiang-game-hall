package com.tkay.network.ks;

import com.kwad.sdk.api.KsCustomController;

/* JADX INFO: loaded from: classes3.dex */
public abstract class KSTYCustomController {
    public boolean getCanReadICCID() {
        return true;
    }

    public boolean getCanReadMacAddress() {
        return true;
    }

    public boolean getCanReadNearbyWifiList() {
        return true;
    }

    public KsCustomController getKsCustomeController() {
        return null;
    }
}
