package com.huawei.hms.aaid.encrypt;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.opendevice.c;
import com.huawei.secure.android.common.encrypt.aes.AesCbc;

public class PushEncrypter {
    public static String decrypter(Context context, String str) {
        return TextUtils.isEmpty(str) ? "" : AesCbc.decrypt(str, c.c(context));
    }

    public static String encrypter(Context context, String str) {
        return TextUtils.isEmpty(str) ? "" : AesCbc.encrypt(str, c.c(context));
    }

    public static String encrypterOld(Context context, String str) {
        return TextUtils.isEmpty(str) ? "" : AesCbc.encrypt(str, c.a(context));
    }
}
