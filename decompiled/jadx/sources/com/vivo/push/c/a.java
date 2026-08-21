package com.vivo.push.c;

import android.os.Build;
import android.security.keystore.KeyGenParameterSpec;
import com.vivo.push.util.p;
import java.security.KeyStore;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;

/* JADX INFO: loaded from: classes4.dex */
public final class a implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private KeyStore f7898a;
    private SecretKey b;

    public a() {
        a();
        b();
    }

    private void a() {
        try {
            KeyStore keyStore = KeyStore.getInstance("AndroidKeyStore");
            this.f7898a = keyStore;
            keyStore.load(null);
        } catch (Exception e) {
            e.printStackTrace();
            p.a("AesSecurity", "initKeyStore error" + e.getMessage());
        }
    }

    private SecretKey b() {
        SecretKey secretKeyD;
        try {
            if (this.b != null) {
                return this.b;
            }
            if (c()) {
                secretKeyD = d();
            } else {
                KeyGenerator keyGenerator = KeyGenerator.getInstance("AES", "AndroidKeyStore");
                if (Build.VERSION.SDK_INT >= 23) {
                    keyGenerator.init(new KeyGenParameterSpec.Builder("AesKeyAlias", 3).setBlockModes("GCM").setEncryptionPaddings("NoPadding").setKeySize(256).build());
                }
                secretKeyD = keyGenerator.generateKey();
            }
            this.b = secretKeyD;
            return this.b;
        } catch (Exception e) {
            e.printStackTrace();
            p.a("AesSecurity", "getSecretKey error" + e.getMessage());
            return null;
        }
    }

    private boolean c() {
        try {
            if (this.f7898a == null) {
                a();
            }
            return this.f7898a.containsAlias("AesKeyAlias");
        } catch (Exception e) {
            e.printStackTrace();
            p.a("AesSecurity", "hasAESKey error" + e.getMessage());
            return false;
        }
    }

    private SecretKey d() {
        try {
            return ((KeyStore.SecretKeyEntry) this.f7898a.getEntry("AesKeyAlias", null)).getSecretKey();
        } catch (Exception e) {
            e.printStackTrace();
            p.a("AesSecurity", "getAESSecretKey error" + e.getMessage());
            return null;
        }
    }
}
