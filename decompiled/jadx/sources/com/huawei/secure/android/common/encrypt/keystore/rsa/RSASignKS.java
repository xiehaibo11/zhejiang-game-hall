package com.huawei.secure.android.common.encrypt.keystore.rsa;

import android.os.Build;
import android.security.keystore.KeyGenParameterSpec;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import com.alipay.sdk.m.n.d;
import com.huawei.secure.android.common.encrypt.utils.b;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.Signature;
import java.security.SignatureException;
import java.security.UnrecoverableEntryException;
import java.security.UnrecoverableKeyException;
import java.security.cert.CertificateException;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes2.dex */
public abstract class RSASignKS {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2228a = "RSASignKS";
    private static final String b = "AndroidKeyStore";
    private static final String c = "SHA256withRSA/PSS";
    private static final String d = "";
    private static final int e = 2048;
    private static final int f = 3072;

    private static KeyStore.Entry b(String str, boolean z) {
        if (!a(str)) {
            a(str, z);
        }
        try {
            KeyStore keyStore = KeyStore.getInstance(b);
            keyStore.load(null);
            return keyStore.getEntry(str, null);
        } catch (IOException e2) {
            b.b(f2228a, "IOException: " + e2.getMessage());
            return null;
        } catch (KeyStoreException e3) {
            b.b(f2228a, "KeyStoreException: " + e3.getMessage());
            return null;
        } catch (NoSuchAlgorithmException e4) {
            b.b(f2228a, "NoSuchAlgorithmException: " + e4.getMessage());
            return null;
        } catch (UnrecoverableEntryException e5) {
            b.b(f2228a, "UnrecoverableEntryException: " + e5.getMessage());
            return null;
        } catch (CertificateException e6) {
            b.b(f2228a, "CertificateException: " + e6.getMessage());
            return null;
        }
    }

    public static boolean isBuildVersionHigherThan22() {
        return Build.VERSION.SDK_INT >= 23;
    }

    @Deprecated
    public static String sign(String str, String str2) {
        try {
            return Base64.encodeToString(sign(str, str2.getBytes("UTF-8")), 0);
        } catch (UnsupportedEncodingException e2) {
            Log.e(f2228a, "sign UnsupportedEncodingException : " + e2.getMessage());
            return "";
        }
    }

    public static String signNew(String str, String str2) {
        try {
            return Base64.encodeToString(signNew(str, str2.getBytes("UTF-8")), 0);
        } catch (UnsupportedEncodingException e2) {
            Log.e(f2228a, "sign UnsupportedEncodingException : " + e2.getMessage());
            return "";
        }
    }

    @Deprecated
    public static boolean verifySign(String str, String str2, String str3) {
        try {
            return verifySign(str, str2.getBytes("UTF-8"), Base64.decode(str3, 0));
        } catch (UnsupportedEncodingException e2) {
            Log.e(f2228a, "verifySign UnsupportedEncodingException: " + e2.getMessage());
            return false;
        } catch (Exception e3) {
            b.b(f2228a, "base64 decode Exception" + e3.getMessage());
            return false;
        }
    }

    public static boolean verifySignNew(String str, String str2, String str3) {
        try {
            return verifySignNew(str, str2.getBytes("UTF-8"), Base64.decode(str3, 0));
        } catch (UnsupportedEncodingException e2) {
            Log.e(f2228a, "verifySign UnsupportedEncodingException: " + e2.getMessage());
            return false;
        } catch (Exception e3) {
            b.b(f2228a, "base64 decode Exception" + e3.getMessage());
            return false;
        }
    }

    private static byte[] a(String str, byte[] bArr, boolean z) {
        byte[] bArr2 = new byte[0];
        if (TextUtils.isEmpty(str) || bArr == null) {
            b.b(f2228a, "alias or content is null");
            return bArr2;
        }
        if (!isBuildVersionHigherThan22()) {
            b.b(f2228a, "sdk version is too low");
            return bArr2;
        }
        KeyStore.Entry entryB = b(str, z);
        if (!(entryB instanceof KeyStore.PrivateKeyEntry)) {
            b.b(f2228a, "Not an instance of a PrivateKeyEntry");
            return bArr2;
        }
        try {
            Signature signature = Signature.getInstance(c);
            signature.initSign(((KeyStore.PrivateKeyEntry) entryB).getPrivateKey());
            signature.update(bArr);
            return signature.sign();
        } catch (InvalidKeyException e2) {
            b.b(f2228a, "InvalidKeyException: " + e2.getMessage());
            return bArr2;
        } catch (NoSuchAlgorithmException e3) {
            b.b(f2228a, "NoSuchAlgorithmException: " + e3.getMessage());
            return bArr2;
        } catch (SignatureException e4) {
            b.b(f2228a, "SignatureException: " + e4.getMessage());
            return bArr2;
        } catch (Exception e5) {
            b.b(f2228a, "Exception: " + e5.getMessage());
            return bArr2;
        }
    }

    @Deprecated
    public static byte[] sign(String str, byte[] bArr) {
        return a(str, bArr, false);
    }

    public static byte[] signNew(String str, byte[] bArr) {
        return a(str, bArr, true);
    }

    @Deprecated
    public static boolean verifySign(String str, byte[] bArr, byte[] bArr2) {
        return a(str, bArr, bArr2, false);
    }

    public static boolean verifySignNew(String str, byte[] bArr, byte[] bArr2) {
        return a(str, bArr, bArr2, true);
    }

    private static boolean a(String str, byte[] bArr, byte[] bArr2, boolean z) {
        if (!TextUtils.isEmpty(str) && bArr != null && bArr2 != null) {
            if (!isBuildVersionHigherThan22()) {
                b.b(f2228a, "sdk version is too low");
                return false;
            }
            KeyStore.Entry entryB = b(str, z);
            if (!(entryB instanceof KeyStore.PrivateKeyEntry)) {
                b.b(f2228a, "Not an instance of a PrivateKeyEntry");
                return false;
            }
            try {
                Signature signature = Signature.getInstance(c);
                signature.initVerify(((KeyStore.PrivateKeyEntry) entryB).getCertificate());
                signature.update(bArr);
                return signature.verify(bArr2);
            } catch (InvalidKeyException e2) {
                b.b(f2228a, "InvalidKeyException: " + e2.getMessage());
                return false;
            } catch (NoSuchAlgorithmException e3) {
                b.b(f2228a, "NoSuchAlgorithmException: " + e3.getMessage());
                return false;
            } catch (SignatureException e4) {
                b.b(f2228a, "SignatureException: " + e4.getMessage());
                return false;
            } catch (Exception e5) {
                b.b(f2228a, "Exception: " + e5.getMessage());
                return false;
            }
        }
        b.b(f2228a, "alias or content or sign value is null");
        return false;
    }

    private static synchronized KeyPair a(String str, boolean z) {
        KeyPair keyPairGenerateKeyPair = null;
        if (a(str)) {
            b.b(f2228a, "Key pair exits");
            return null;
        }
        try {
            try {
                KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance(d.f1221a, b);
                if (!z) {
                    keyPairGenerator.initialize(new KeyGenParameterSpec.Builder(str, 12).setDigests(MessageDigestAlgorithms.SHA_256, MessageDigestAlgorithms.SHA_512).setSignaturePaddings("PSS").setKeySize(2048).build());
                } else {
                    keyPairGenerator.initialize(new KeyGenParameterSpec.Builder(str, 12).setDigests(MessageDigestAlgorithms.SHA_256, MessageDigestAlgorithms.SHA_512).setSignaturePaddings("PSS").setKeySize(f).build());
                }
                keyPairGenerateKeyPair = keyPairGenerator.generateKeyPair();
            } catch (NoSuchAlgorithmException e2) {
                b.b(f2228a, "NoSuchAlgorithmException: " + e2.getMessage());
            }
        } catch (InvalidAlgorithmParameterException e3) {
            b.b(f2228a, "InvalidAlgorithmParameterException: " + e3.getMessage());
        } catch (NoSuchProviderException e4) {
            b.b(f2228a, "NoSuchProviderException: " + e4.getMessage());
        }
        return keyPairGenerateKeyPair;
    }

    private static boolean a(String str) {
        try {
            KeyStore keyStore = KeyStore.getInstance(b);
            keyStore.load(null);
            return keyStore.getKey(str, null) != null;
        } catch (IOException e2) {
            b.b(f2228a, "IOException: " + e2.getMessage());
            return false;
        } catch (KeyStoreException e3) {
            b.b(f2228a, "KeyStoreException: " + e3.getMessage());
            return false;
        } catch (NoSuchAlgorithmException e4) {
            b.b(f2228a, "NoSuchAlgorithmException: " + e4.getMessage());
            return false;
        } catch (UnrecoverableKeyException e5) {
            b.b(f2228a, "UnrecoverableKeyException: " + e5.getMessage());
            return false;
        } catch (CertificateException e6) {
            b.b(f2228a, "CertificateException: " + e6.getMessage());
            return false;
        }
    }
}
