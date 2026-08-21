package com.bianfeng.ymnsdk.util.security;

import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.net.URLEncoder;

/* JADX INFO: loaded from: classes.dex */
public class URLDecoderUtils {
    private String TAG = URLDecoderUtils.class.getSimpleName();

    public String decode(String str) throws YmnsdkException {
        try {
            return URLDecoder.decode(str.replaceAll("%(?![0-9a-fA-F]{2})", "%25"), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new YmnsdkException(this.TAG, e);
        }
    }

    public String encode(String str) throws YmnsdkException {
        try {
            return URLEncoder.encode(str, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new YmnsdkException(this.TAG, e);
        }
    }
}
