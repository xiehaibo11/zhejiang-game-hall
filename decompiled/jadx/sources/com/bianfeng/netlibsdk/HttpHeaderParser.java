package com.bianfeng.netlibsdk;

import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class HttpHeaderParser {
    static final String HEADER_CONTENT_TYPE = "Content-Type";

    public static String parseCharset(Map<String, String> map, String str) {
        String str2;
        if (map != null && (str2 = map.get("Content-Type")) != null) {
            String[] strArrSplit = str2.split(";", 0);
            for (int i = 1; i < strArrSplit.length; i++) {
                String[] strArrSplit2 = strArrSplit[i].trim().split(ContainerUtils.KEY_VALUE_DELIMITER, 0);
                if (strArrSplit2.length == 2 && strArrSplit2[0].equals("charset")) {
                    return strArrSplit2[1];
                }
            }
        }
        return str;
    }
}
