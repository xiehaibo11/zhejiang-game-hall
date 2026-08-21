package com.huawei.agconnect.config.a;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes.dex */
class h implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f1937a;
    private final String b;

    h(Context context, String str) {
        this.f1937a = context;
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

    @Override // com.huawei.agconnect.config.a.d
    public String a(String str, String str2) {
        int identifier;
        String strA = a(str);
        if (TextUtils.isEmpty(strA) || (identifier = this.f1937a.getResources().getIdentifier(strA, com.tkay.expressad.foundation.h.i.g, this.b)) == 0) {
            return str2;
        }
        try {
            return this.f1937a.getResources().getString(identifier);
        } catch (Resources.NotFoundException unused) {
            return str2;
        }
    }
}
