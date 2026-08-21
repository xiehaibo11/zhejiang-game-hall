package com.kwad.sdk.utils;

import java.util.Locale;

public final class aa {
    public static String format(String str, Object... objArr) {
        return String.format(Locale.US, str, objArr);
    }
}
