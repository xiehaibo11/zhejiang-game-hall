package com.kwad.sdk.core.network;

import android.text.TextUtils;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class r {
    private static volatile r apL;
    private final Map<String, String> aou = new ConcurrentHashMap();

    private r() {
    }

    public static r Bk() {
        if (apL == null) {
            synchronized (r.class) {
                if (apL == null) {
                    apL = new r();
                }
            }
        }
        return apL;
    }

    public final void N(String str, String str2) {
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
            return;
        }
        this.aou.put(str, str2);
    }

    public final String cZ(String str) {
        return this.aou.get(str);
    }
}
