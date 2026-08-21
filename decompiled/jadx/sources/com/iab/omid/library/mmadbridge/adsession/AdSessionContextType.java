package com.iab.omid.library.mmadbridge.adsession;

import com.tkay.expressad.foundation.g.a.f;

/* JADX INFO: loaded from: classes2.dex */
public enum AdSessionContextType {
    HTML("html"),
    NATIVE(f.f6871a),
    JAVASCRIPT("javascript");

    private final String typeString;

    AdSessionContextType(String str) {
        this.typeString = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.typeString;
    }
}
