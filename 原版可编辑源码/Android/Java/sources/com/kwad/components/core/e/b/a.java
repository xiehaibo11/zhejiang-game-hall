package com.kwad.components.core.e.b;

import com.huawei.hms.framework.common.ContainerUtils;

public final class a {

    static class a {
        private static final c Jm = c.a(new int[]{7, 8, 4, 2, 0, 3, 6, 9, 1, 8});
    }

    public static long ai(String str) {
        return mV().aj(str);
    }

    private static c mV() {
        return a.Jm;
    }

    public static String q(long j) {
        String strR = mV().r(j);
        return strR.endsWith(ContainerUtils.KEY_VALUE_DELIMITER) ? strR.replace(ContainerUtils.KEY_VALUE_DELIMITER, "") : strR;
    }
}
