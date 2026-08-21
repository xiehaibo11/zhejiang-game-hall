package com.huawei.hms.utils;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.text.TextUtils;
import com.huawei.hms.support.log.HMSLog;
import java.io.IOException;
import java.io.InputStream;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;

/* JADX INFO: loaded from: classes.dex */
public class PackageManagerHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final PackageManager f2209a;

    public enum PackageStates {
        ENABLED,
        DISABLED,
        NOT_INSTALLED,
        SPOOF
    }

    public PackageManagerHelper(Context context) {
        this.f2209a = context.getPackageManager();
    }

    public final byte[] a(String str) {
        try {
            PackageInfo packageInfo = this.f2209a.getPackageInfo(str, 64);
            if (packageInfo != null && packageInfo.signatures != null && packageInfo.signatures.length > 0) {
                return packageInfo.signatures[0].toByteArray();
            }
        } catch (PackageManager.NameNotFoundException e) {
            HMSLog.e("PackageManagerHelper", "Failed to get application signature certificate fingerprint." + e.getMessage());
        }
        HMSLog.e("PackageManagerHelper", "Failed to get application signature certificate fingerprint.");
        return new byte[0];
    }

    public String getApplicationName(String str) {
        try {
            return this.f2209a.getApplicationLabel(this.f2209a.getApplicationInfo(str, 0)).toString();
        } catch (PackageManager.NameNotFoundException unused) {
            HMSLog.e("PackageManagerHelper", "Failed to get application name for " + str);
            return null;
        }
    }

    public long getPackageFirstInstallTime(String str) {
        try {
            PackageInfo packageInfo = this.f2209a.getPackageInfo(str, 0);
            if (packageInfo != null) {
                return packageInfo.firstInstallTime;
            }
            return 0L;
        } catch (PackageManager.NameNotFoundException unused) {
            return 0L;
        }
    }

    public String getPackageSignature(String str) {
        byte[] bArrA = a(str);
        if (bArrA == null || bArrA.length == 0) {
            return null;
        }
        return HEX.encodeHexString(SHA256.digest(bArrA), true);
    }

    public PackageStates getPackageStates(String str) {
        if (TextUtils.isEmpty(str)) {
            return PackageStates.NOT_INSTALLED;
        }
        try {
            return this.f2209a.getApplicationInfo(str, 0).enabled ? PackageStates.ENABLED : PackageStates.DISABLED;
        } catch (PackageManager.NameNotFoundException unused) {
            return PackageStates.NOT_INSTALLED;
        }
    }

    public int getPackageVersionCode(String str) {
        try {
            PackageInfo packageInfo = this.f2209a.getPackageInfo(str, 16);
            if (packageInfo != null) {
                return packageInfo.versionCode;
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return 0;
    }

    public String getPackageVersionName(String str) {
        try {
            PackageInfo packageInfo = this.f2209a.getPackageInfo(str, 16);
            if (packageInfo != null && packageInfo.versionName != null) {
                return packageInfo.versionName;
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return "";
    }

    public boolean hasProvider(String str, String str2) {
        try {
            PackageInfo packageInfo = this.f2209a.getPackageInfo(str, 8);
            if (packageInfo != null && packageInfo.providers != null) {
                for (ProviderInfo providerInfo : packageInfo.providers) {
                    if (str2.equals(providerInfo.authority)) {
                        return true;
                    }
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return false;
    }

    public boolean verifyPackageArchive(String str, String str2, String str3) {
        PackageInfo packageArchiveInfo = this.f2209a.getPackageArchiveInfo(str, 64);
        if (packageArchiveInfo == null || packageArchiveInfo.signatures.length <= 0 || !str2.equals(packageArchiveInfo.packageName)) {
            return false;
        }
        InputStream inputStream = null;
        try {
            try {
                inputStream = IOUtils.toInputStream(packageArchiveInfo.signatures[0].toByteArray());
                return str3.equalsIgnoreCase(HEX.encodeHexString(SHA256.digest(CertificateFactory.getInstance("X.509").generateCertificate(inputStream).getEncoded()), true));
            } finally {
                IOUtils.closeQuietly((InputStream) null);
            }
        } catch (IOException | CertificateException e) {
            HMSLog.e("PackageManagerHelper", "Failed to get application signature certificate fingerprint." + e.getMessage());
            return false;
        }
    }
}
