package com.bianfeng.ymnsdk.utilslib.security;

import java.net.URLDecoder;
import java.net.URLEncoder;

public class URLDecoderUtils {
    public URLDecoderUtils() {
    }

    public static String decode(String r2) {
        return URLDecoder.decode(r2.replaceAll("%(?![0-9a-fA-F]{2})", "%25"), "UTF-8");
    L5:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    public static String encode(String r1) {
        return URLEncoder.encode(r1, "UTF-8");
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }
}
