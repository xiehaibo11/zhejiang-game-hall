package com.iab.omid.library.mmadbridge.adsession;

import com.bianfeng.libuniverse.Device;
import com.tkay.expressad.foundation.g.a.f;

/* JADX INFO: loaded from: classes2.dex */
public enum Owner {
    NATIVE(f.f6871a),
    JAVASCRIPT("javascript"),
    NONE(Device.NETWORN_NONE);

    private final String owner;

    Owner(String str) {
        this.owner = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.owner;
    }
}
