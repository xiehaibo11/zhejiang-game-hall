package com.iab.omid.library.mmadbridge.adsession;

import com.tkay.expressad.foundation.g.a.f;

public enum AdSessionContextType {
    HTML("html"),
    NATIVE(f.a),
    JAVASCRIPT("javascript");

    private final String typeString;

    AdSessionContextType(String str) {
        this.typeString = str;
    }

    @Override
    public String toString() {
        return this.typeString;
    }
}
