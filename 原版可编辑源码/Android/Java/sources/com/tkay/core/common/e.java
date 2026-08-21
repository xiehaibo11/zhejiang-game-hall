package com.tkay.core.common;

import com.tkay.core.api.AdError;

public final class e extends IllegalStateException {
    public AdError a;
    public String b;

    public e(AdError adError, String str) {
        this.a = adError;
        this.b = str;
    }
}
