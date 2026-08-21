package android.support.v4.hardware.fingerprint;

import android.content.Context;
import android.hardware.fingerprint.FingerprintManager;
import android.os.Build;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RequiresApi;
import android.support.annotation.RequiresPermission;
import android.support.v4.os.CancellationSignal;
import java.security.Signature;
import javax.crypto.Cipher;
import javax.crypto.Mac;

public final class FingerprintManagerCompat {
    private final Context mContext;

    public static abstract class AuthenticationCallback {
        public void onAuthenticationError(int r1, CharSequence r2) {
        }

        public void onAuthenticationFailed() {
        }

        public void onAuthenticationHelp(int r1, CharSequence r2) {
        }

        public void onAuthenticationSucceeded(AuthenticationResult r1) {
        }

        public AuthenticationCallback() {
        }
    }

    public static final class AuthenticationResult {
        private final CryptoObject mCryptoObject;

        public AuthenticationResult(CryptoObject r1) {
            this.mCryptoObject = r1;
        }

        public CryptoObject getCryptoObject() {
            return this.mCryptoObject;
        }
    }

    public static class CryptoObject {
        private final Cipher mCipher;
        private final Mac mMac;
        private final Signature mSignature;

        public CryptoObject(@NonNull Signature r1) {
            this.mSignature = r1;
            this.mCipher = null;
            this.mMac = null;
        }

        public CryptoObject(@NonNull Cipher r1) {
            this.mCipher = r1;
            this.mSignature = null;
            this.mMac = null;
        }

        public CryptoObject(@NonNull Mac r1) {
            this.mMac = r1;
            this.mCipher = null;
            this.mSignature = null;
        }

        @Nullable
        public Signature getSignature() {
            return this.mSignature;
        }

        @Nullable
        public Cipher getCipher() {
            return this.mCipher;
        }

        @Nullable
        public Mac getMac() {
            return this.mMac;
        }
    }

    @NonNull
    public static FingerprintManagerCompat from(@NonNull Context r1) {
        return new FingerprintManagerCompat(r1);
    }

    private FingerprintManagerCompat(Context r1) {
        this.mContext = r1;
    }

    @RequiresPermission("android.permission.USE_FINGERPRINT")
    public boolean hasEnrolledFingerprints() {
        if (Build.VERSION.SDK_INT < 23) goto L10;
        FingerprintManager r0 = getFingerprintManagerOrNull(this.mContext);
        if (r0 != null) goto L7;
        return false;
    L7:
        if (r0.hasEnrolledFingerprints() == false) goto L12;
        return true;
    L12:
        return false;
    L10:
        return false;
    }

    @RequiresPermission("android.permission.USE_FINGERPRINT")
    public boolean isHardwareDetected() {
        if (Build.VERSION.SDK_INT < 23) goto L10;
        FingerprintManager r0 = getFingerprintManagerOrNull(this.mContext);
        if (r0 != null) goto L7;
        return false;
    L7:
        if (r0.isHardwareDetected() == false) goto L12;
        return true;
    L12:
        return false;
    L10:
        return false;
    }

    @RequiresPermission("android.permission.USE_FINGERPRINT")
    public void authenticate(@Nullable CryptoObject r8, int r9, @Nullable CancellationSignal r10, @NonNull AuthenticationCallback r11, @Nullable Handler r12) {
        if (Build.VERSION.SDK_INT < 23) goto L11;
        FingerprintManager r1 = getFingerprintManagerOrNull(this.mContext);
        if (r1 == null) goto L12;
        if (r10 == null) goto L8;
        android.os.CancellationSignal r102 = (android.os.CancellationSignal) r10.getCancellationSignalObject();
    L9:
        FingerprintManager.CryptoObject r2 = wrapCryptoObject(r8);
        r1.authenticate(r2, r102, r9, wrapCallback(r11), r12);
        return;
    L8:
        r102 = null;
        goto L9
    L12:
        return;
    }

    @RequiresApi(23)
    @Nullable
    private static FingerprintManager getFingerprintManagerOrNull(@NonNull Context r2) {
        if (r2.getPackageManager().hasSystemFeature("android.hardware.fingerprint") == true) goto L5;
        return null;
    L5:
        return (FingerprintManager) r2.getSystemService(FingerprintManager.class);
    }

    @RequiresApi(23)
    private static FingerprintManager.CryptoObject wrapCryptoObject(CryptoObject r2) {
        if (r2 != null) goto L6;
        return null;
    L6:
        if (r2.getCipher() == null) goto L10;
        return new FingerprintManager.CryptoObject(r2.getCipher());
    L10:
        if (r2.getSignature() == null) goto L14;
        return new FingerprintManager.CryptoObject(r2.getSignature());
    L14:
        if (r2.getMac() != null) goto L16;
        return null;
    L16:
        return new FingerprintManager.CryptoObject(r2.getMac());
    }

    @RequiresApi(23)
    static CryptoObject unwrapCryptoObject(FingerprintManager.CryptoObject r2) {
        if (r2 != null) goto L6;
        return null;
    L6:
        if (r2.getCipher() == null) goto L10;
        return new CryptoObject(r2.getCipher());
    L10:
        if (r2.getSignature() == null) goto L14;
        return new CryptoObject(r2.getSignature());
    L14:
        if (r2.getMac() != null) goto L16;
        return null;
    L16:
        return new CryptoObject(r2.getMac());
    }

    @RequiresApi(23)
    private static FingerprintManager.AuthenticationCallback wrapCallback(final AuthenticationCallback r1) {
        return new 1(r1);
    }
}
