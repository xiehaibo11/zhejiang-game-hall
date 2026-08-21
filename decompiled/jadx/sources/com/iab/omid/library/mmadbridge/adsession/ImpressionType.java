package com.iab.omid.library.mmadbridge.adsession;

import com.kwad.sdk.api.model.AdnName;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;

/* JADX INFO: loaded from: classes2.dex */
public enum ImpressionType {
    DEFINED_BY_JAVASCRIPT("definedByJavaScript"),
    UNSPECIFIED("unspecified"),
    LOADED("loaded"),
    BEGIN_TO_RENDER("beginToRender"),
    ONE_PIXEL("onePixel"),
    VIEWABLE(CallMraidJS.c),
    AUDIBLE("audible"),
    OTHER(AdnName.OTHER);

    private final String impressionType;

    ImpressionType(String str) {
        this.impressionType = str;
    }

    @Override // java.lang.Enum
    public String toString() {
        return this.impressionType;
    }
}
