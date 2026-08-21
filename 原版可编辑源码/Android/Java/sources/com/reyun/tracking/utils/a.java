package com.reyun.tracking.utils;

import java.io.ByteArrayOutputStream;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.Security;
import java.security.spec.InvalidKeySpecException;
import java.util.zip.GZIPOutputStream;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.PBEKeySpec;
import javax.crypto.spec.SecretKeySpec;
import org.bouncycastle.jce.provider.BouncyCastleProvider;
import org.bouncycastle.util.encoders.Base64;

public class a {
    private static a m;
    private SecretKeyFactory h;
    private SecretKey i;
    private SecretKeySpec j;
    private IvParameterSpec l;
    private final String a = "PBKDF2WithHmacSHA1";
    private final int b = 10000;
    private final int c = 128;
    private char[] d = {'w', 'o', 'm', 'e', 'n', 'd', 'o', 'u', 's', 'h', 'i', 'h', 'a', 'o', 'h', 'a', 'i', 'z', 'i'};
    private byte[] e = {1, 5, 8, 6, 7, 9, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    private PBEKeySpec f = new PBEKeySpec(this.d, this.e, 10000, 128);
    private final String g = "AES/CBC/PKCS7Padding";
    private byte[] k = {10, 1, 11, 5, 4, 15, 7, 9, 23, 3, 1, 6, 8, 12, 13, 91};

    static {
        try {
            Security.addProvider(new BouncyCastleProvider());
        } catch (Exception unused) {
        }
    }

    private a() {
        this.h = null;
        this.i = null;
        this.j = null;
        try {
            SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("PBKDF2WithHmacSHA1");
            this.h = secretKeyFactory;
            this.i = secretKeyFactory.generateSecret(this.f);
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        } catch (InvalidKeySpecException e2) {
            e2.printStackTrace();
        }
        this.j = new SecretKeySpec(this.i.getEncoded(), "AES");
        this.l = new IvParameterSpec(this.k);
    }

    public static a a() {
        if (m == null) {
            m = new a();
        }
        return m;
    }

    private static byte[] a(byte[] bArr) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
        gZIPOutputStream.write(bArr);
        gZIPOutputStream.close();
        return byteArrayOutputStream.toByteArray();
    }

    public byte[] a(String str) {
        return a("AES/CBC/PKCS7Padding", this.j, this.l, str);
    }

    public byte[] a(String str, SecretKey secretKey, IvParameterSpec ivParameterSpec, String str2) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidKeyException, InvalidAlgorithmParameterException {
        byte[] bArrA = a(str2.getBytes("UTF-8"));
        Cipher cipher = Cipher.getInstance(str);
        cipher.init(1, secretKey, ivParameterSpec);
        return Base64.encode(cipher.doFinal(bArrA));
    }
}
