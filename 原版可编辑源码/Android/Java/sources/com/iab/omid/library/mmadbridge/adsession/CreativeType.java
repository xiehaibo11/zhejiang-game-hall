package com.iab.omid.library.mmadbridge.adsession;

public enum CreativeType {
    DEFINED_BY_JAVASCRIPT("definedByJavaScript"),
    HTML_DISPLAY("htmlDisplay"),
    NATIVE_DISPLAY("nativeDisplay"),
    VIDEO("video"),
    AUDIO("audio");

    private final String creativeType;

    CreativeType(String str) {
        this.creativeType = str;
    }

    @Override
    public String toString() {
        return this.creativeType;
    }
}
