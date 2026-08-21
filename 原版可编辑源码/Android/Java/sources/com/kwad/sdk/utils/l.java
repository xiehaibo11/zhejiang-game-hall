package com.kwad.sdk.utils;

import com.kwad.sdk.core.response.model.AdTemplate;

public final class l {
    public static long aIf = -1;

    public static void cA(AdTemplate adTemplate) {
        if (adTemplate != null) {
            adTemplate.mOutClickTimeParam = System.currentTimeMillis();
        }
    }

    public static void cB(AdTemplate adTemplate) {
        if (adTemplate != null) {
            adTemplate.mVisibleTimeParam = System.currentTimeMillis();
        }
    }

    public static long cC(AdTemplate adTemplate) {
        return adTemplate == null ? System.currentTimeMillis() : adTemplate.mOutClickTimeParam > 0 ? adTemplate.mOutClickTimeParam : adTemplate.mVisibleTimeParam;
    }

    public static void cz(AdTemplate adTemplate) {
        if (adTemplate != null) {
            adTemplate.mVisibleTimeParam = aIf;
            adTemplate.mOutClickTimeParam = aIf;
        }
    }
}
