package com.kwad.sdk.utils;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import java.io.InputStream;

public class p {
    private static String aIm = "";
    private static String aIn = "";
    private static String aIo = "";

    private static String a(String str, InputStream inputStream) {
        String strFl;
        synchronized (p.class) {
            com.kwad.sdk.pngencrypt.o oVar = new com.kwad.sdk.pngencrypt.o(inputStream, true);
            oVar.GU();
            strFl = oVar.GT().fl(str);
            oVar.end();
        }
        return strFl;
    }

    public static String db(int i) {
        Context contextHD = ServiceProvider.HD();
        String str = aIm;
        if (!TextUtils.isEmpty(str)) {
            return str;
        }
        if (TextUtils.isEmpty("aes_key")) {
            com.kwad.sdk.core.e.c.e("EncryptUtils", "EncryptUtils getKey get id is error ");
        }
        InputStream inputStreamOpen = null;
        try {
            try {
                inputStreamOpen = contextHD.getResources().getAssets().open("ksad_common_encrypt_image.png");
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.e("EncryptUtils", "EncryptUtils getKey get InputStream from loader is null,  e: " + th);
            }
            if (inputStreamOpen == null) {
                inputStreamOpen = contextHD.getAssets().open("ksad_common_encrypt_image.png");
            }
            String strA = a("aes_key", inputStreamOpen);
            if (TextUtils.isEmpty(strA)) {
                com.kwad.sdk.core.e.c.e("EncryptUtils", "EncryptUtils getKey get encryptedKey is invalid ");
            }
            aIm = strA;
            return strA;
        } catch (Throwable th2) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th2);
            return "";
        }
    }
}
