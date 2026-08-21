package com.tkay.expressad.foundation.h;

import android.text.TextUtils;
import android.util.Base64;
import java.security.MessageDigest;
import java.security.Provider;
import java.security.Security;
import java.util.Locale;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6939a = "ebmclXzZOhtU2sRlZxGL8A";
    private static byte[] b = new byte[32];
    private static byte[] c = new byte[16];

    static {
        if (TextUtils.isEmpty(f6939a)) {
            return;
        }
        try {
            byte[] bArrDigest = MessageDigest.getInstance("sha-384").digest(f6939a.getBytes());
            System.arraycopy(bArrDigest, 0, b, 0, 32);
            System.arraycopy(bArrDigest, 32, c, 0, 16);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            byte[] bArrDigest = MessageDigest.getInstance("sha-384").digest(str.getBytes());
            System.arraycopy(bArrDigest, 0, b, 0, 32);
            System.arraycopy(bArrDigest, 32, c, 0, 16);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String a(String str) {
        return a(str, b, c);
    }

    private static String a(String str, byte[] bArr, byte[] bArr2) {
        try {
            IvParameterSpec ivParameterSpec = new IvParameterSpec(bArr2);
            SecretKeySpec secretKeySpec = new SecretKeySpec(bArr, "AES");
            Security.addProvider(new C0466a());
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS7PADDING");
            cipher.init(1, secretKeySpec, ivParameterSpec);
            return new String(Base64.encode(cipher.doFinal(str.getBytes()), 0));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static String c(String str) {
        return b(str, b, c);
    }

    private static String b(String str, byte[] bArr, byte[] bArr2) {
        try {
            IvParameterSpec ivParameterSpec = new IvParameterSpec(bArr2);
            SecretKeySpec secretKeySpec = new SecretKeySpec(bArr, "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS7PADDING");
            cipher.init(2, secretKeySpec, ivParameterSpec);
            return new String(cipher.doFinal(Base64.decode(str, 0)));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static byte[] d(String str) {
        String upperCase = str.trim().replace(" ", "").toUpperCase(Locale.US);
        int length = upperCase.length() / 2;
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            int i2 = i * 2;
            int i3 = i2 + 1;
            bArr[i] = (byte) (Integer.decode("0x" + upperCase.substring(i2, i3) + upperCase.substring(i3, i3 + 1)).intValue() & 255);
        }
        return bArr;
    }

    private static String a(byte[] bArr) {
        String str = "";
        for (byte b2 : bArr) {
            String hexString = Integer.toHexString(b2 & UByte.MAX_VALUE);
            str = hexString.length() == 1 ? str + "0" + hexString : str + hexString;
        }
        return str;
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.h.a$a, reason: collision with other inner class name */
    public static class C0466a extends Provider {
        public C0466a() {
            super("Crypto", 1.0d, "HARMONY (SHA1 digest; SecureRandom; SHA1withDSA signature)");
            put("SecureRandom.SHA1PRNG", "org.apache.harmony.security.provider.crypto.SHA1PRNG_SecureRandomImpl");
            put("SecureRandom.SHA1PRNG ImplementedIn", "Software");
        }
    }
}
