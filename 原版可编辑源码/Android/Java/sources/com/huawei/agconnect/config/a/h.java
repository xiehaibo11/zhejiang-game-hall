package com.huawei.agconnect.config.a;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

class h implements d {
    private final Context a;
    private final String b;

    h(Context context, String str) {
        this.a = context;
        this.b = str;
    }

    private static String a(String str) {
        try {
            return "agc_" + e.a(a(str.getBytes("UTF-8")));
        } catch (UnsupportedEncodingException | NoSuchAlgorithmException unused) {
            return "";
        }
    }

    private static byte[] a(byte[] bArr) throws NoSuchAlgorithmException {
        return MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(bArr);
    }

    @Override
    public String a(String str, String str2) {
        int identifier;
        String strA = a(str);
        if (TextUtils.isEmpty(strA) || (identifier = this.a.getResources().getIdentifier(strA, com.tkay.expressad.foundation.h.i.g, this.b)) == 0) {
            return str2;
        }
        try {
            return this.a.getResources().getString(identifier);
        } catch (Resources.NotFoundException unused) {
            return str2;
        }
    }
}
