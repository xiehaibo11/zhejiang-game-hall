package com.bianfeng.ymnsdk.util.security;

import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import java.net.URLDecoder;
import java.net.URLEncoder;

public class URLDecoderUtils {
    private String TAG;

    public URLDecoderUtils() {
        this.TAG = URLDecoderUtils.class.getSimpleName();
    }

    public String decode(String r3) throws YmnsdkException {
        return URLDecoder.decode(r3.replaceAll("%(?![0-9a-fA-F]{2})", "%25"), "UTF-8");
    L5:
        e = move-exception;
        throw new YmnsdkException(this.TAG, e);
    }

    public String encode(String r3) throws YmnsdkException {
        return URLEncoder.encode(r3, "UTF-8");
    L4:
        e = move-exception;
        throw new YmnsdkException(this.TAG, e);
    }
}
