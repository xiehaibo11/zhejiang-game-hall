package com.kwad.sdk.utils;

import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Iterator;
import java.util.Map;

public final class aq {
    public static String appendUrl(String str, Map<String, String> map) {
        if (map == null || map.size() <= 0) {
            return str;
        }
        StringBuilder sb = new StringBuilder();
        Iterator<String> it = map.keySet().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            String next = it.next();
            if (map.get(next) != null) {
                sb.append(next);
                sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                sb.append(map.get(next));
                sb.append("&");
            }
        }
        String strSubstring = sb.toString().substring(0, r6.length() - 1);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(str.contains("?") ? "&" : "?");
        return sb2.toString() + strSubstring;
    }
}
