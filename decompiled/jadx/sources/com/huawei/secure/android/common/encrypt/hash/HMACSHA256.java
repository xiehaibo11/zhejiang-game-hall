package com.huawei.secure.android.common.encrypt.hash;

import android.text.TextUtils;
import com.huawei.secure.android.common.encrypt.utils.HexUtil;
import com.huawei.secure.android.common.encrypt.utils.b;
import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: classes2.dex */
public abstract class HMACSHA256 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2222a = "HMACSHA256";
    private static final String b = "HmacSHA256";
    private static final String c = "";
    private static final int d = 32;

    public static String hmacSHA256Encrypt(String str, String str2) {
        return (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) ? "" : hmacSHA256Encrypt(str, HexUtil.hexStr2ByteArray(str2));
    }

    public static String hmacSHA256Encrypt(String str, byte[] bArr) {
        if (!TextUtils.isEmpty(str) && bArr != null) {
            if (bArr.length < 32) {
                b.b(f2222a, "hmac key length is not right");
                return "";
            }
            try {
                SecretKeySpec secretKeySpec = new SecretKeySpec(bArr, b);
                Mac mac = Mac.getInstance(secretKeySpec.getAlgorithm());
                mac.init(secretKeySpec);
                return HexUtil.byteArray2HexStr(mac.doFinal(str.getBytes("UTF-8")));
            } catch (UnsupportedEncodingException | InvalidKeyException | NoSuchAlgorithmException e) {
                b.b(f2222a, "hmacsha256 encrypt exception" + e.getMessage());
            }
        }
        return "";
    }
}
