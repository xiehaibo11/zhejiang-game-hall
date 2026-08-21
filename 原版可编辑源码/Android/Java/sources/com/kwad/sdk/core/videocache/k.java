package com.kwad.sdk.core.videocache;

import android.text.TextUtils;
import android.webkit.MimeTypeMap;
import com.kwad.sdk.utils.ao;
import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import java.net.URLEncoder;

public final class k {
    static void b(byte[] bArr, long j, int i) {
        ao.h(bArr, "Buffer must be not null!");
        ao.checkArgument(j >= 0, "Data offset must be positive!");
        ao.checkArgument(i >= 0 && i <= bArr.length, "Length must be in range [0..buffer.length]");
    }

    static String dU(String str) {
        MimeTypeMap singleton = MimeTypeMap.getSingleton();
        String fileExtensionFromUrl = MimeTypeMap.getFileExtensionFromUrl(str);
        if (TextUtils.isEmpty(fileExtensionFromUrl)) {
            return null;
        }
        return singleton.getMimeTypeFromExtension(fileExtensionFromUrl);
    }

    static String decode(String str) {
        try {
            return URLDecoder.decode(str, "utf-8");
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException("Error decoding url", e);
        }
    }

    static String encode(String str) {
        try {
            return URLEncoder.encode(str, "utf-8");
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException("Error encoding url", e);
        }
    }
}
