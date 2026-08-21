package com.ss.android.downloadlib.rg.rg;

import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.security.MessageDigest;

/* JADX INFO: loaded from: classes3.dex */
public class q {
    public static byte[] rg(CharSequence charSequence, String str) throws Exception {
        return rg(charSequence.toString().getBytes(), str);
    }

    public static byte[] rg(byte[] bArr, String str) throws Exception {
        return rg(new ByteArrayInputStream(bArr), str);
    }

    public static byte[] rg(InputStream inputStream, String str) throws Exception {
        MessageDigest messageDigest = MessageDigest.getInstance(str);
        byte[] bArr = new byte[4096];
        while (true) {
            int i = inputStream.read(bArr);
            if (i <= 0) {
                return messageDigest.digest();
            }
            messageDigest.update(bArr, 0, i);
        }
    }
}
