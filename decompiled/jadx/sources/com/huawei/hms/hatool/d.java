package com.huawei.hms.hatool;

import android.util.Pair;
import com.huawei.secure.android.common.encrypt.aes.AesCbc;
import com.huawei.secure.android.common.encrypt.utils.HexUtil;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Charset f2089a = Charset.forName("UTF-8");

    public static Pair<byte[], String> a(String str) {
        if (str == null || str.length() < 32) {
            return new Pair<>(new byte[0], str);
        }
        String strSubstring = str.substring(0, 32);
        return new Pair<>(HexUtil.hexStr2ByteArray(strSubstring), str.substring(32));
    }

    public static String a(String str, String str2) {
        Pair<byte[], String> pairA = a(str);
        return new String(AesCbc.decrypt(HexUtil.hexStr2ByteArray((String) pairA.second), HexUtil.hexStr2ByteArray(str2), (byte[]) pairA.first), f2089a);
    }

    public static String b(String str, String str2) {
        return HexUtil.byteArray2HexStr(AesCbc.encrypt(str.getBytes(f2089a), HexUtil.hexStr2ByteArray(str2)));
    }
}
