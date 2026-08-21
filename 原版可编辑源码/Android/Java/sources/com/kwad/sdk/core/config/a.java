package com.kwad.sdk.core.config;

import android.text.TextUtils;
import java.net.URI;
import java.util.Iterator;

public final class a {
    private static final String[] akj = {"gifshow.com", "kuaishou.com", "static.yximgs.com"};

    public static boolean bS(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            String host = new URI(str).getHost();
            if (ct(host)) {
                return true;
            }
            return cu(host);
        } catch (Exception unused) {
            return false;
        }
    }

    private static boolean ct(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        for (String str2 : akj) {
            if (str.contains(str2)) {
                return true;
            }
        }
        return false;
    }

    private static boolean cu(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Iterator<String> it = d.zc().iterator();
        while (it.hasNext()) {
            if (str.contains(it.next())) {
                return true;
            }
        }
        return false;
    }
}
