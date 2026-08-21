package com.mbridge.msdk.thrid.okhttp;

import com.mbridge.msdk.thrid.okhttp.internal.Util;
import com.mbridge.msdk.thrid.okio.ByteString;
import com.xiaomi.mipush.sdk.Constants;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes2.dex */
public final class Credentials {
    private Credentials() {
    }

    public static String basic(String str, String str2) {
        return basic(str, str2, Util.ISO_8859_1);
    }

    public static String basic(String str, String str2, Charset charset) {
        return "Basic " + ByteString.encodeString(str + Constants.COLON_SEPARATOR + str2, charset).base64();
    }
}
