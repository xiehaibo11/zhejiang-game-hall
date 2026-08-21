package com.iab.omid.library.mmadbridge.adsession;

import com.bianfeng.libuniverse.Device;
import com.tkay.expressad.foundation.g.a.f;

public enum Owner {
    NATIVE(f.a),
    JAVASCRIPT("javascript"),
    NONE(Device.NETWORN_NONE);

    private final String owner;

    Owner(String str) {
        this.owner = str;
    }

    @Override
    public String toString() {
        return this.owner;
    }
}
