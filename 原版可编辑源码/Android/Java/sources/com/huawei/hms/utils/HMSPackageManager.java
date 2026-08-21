package com.huawei.hms.utils;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.huawei.hms.device.a;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.PackageManagerHelper;
import java.security.cert.X509Certificate;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

public class HMSPackageManager {
    public static HMSPackageManager h;
    public static final Object i = new Object();
    public static final Object j = new Object();
    public final Context a;
    public final PackageManagerHelper b;
    public String c;
    public String d;
    public int e;
    public final AtomicInteger f = new AtomicInteger(3);
    public long g;

    public HMSPackageManager(Context context) {
        this.a = context;
        this.b = new PackageManagerHelper(context);
    }

    public static HMSPackageManager getInstance(Context context) {
        synchronized (i) {
            if (h == null) {
                if (context.getApplicationContext() != null) {
                    h = new HMSPackageManager(context.getApplicationContext());
                } else {
                    h = new HMSPackageManager(context);
                }
                h.c();
            }
        }
        return h;
    }

    public final boolean a(String str, String str2, String str3) {
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3)) {
            HMSLog.e("HMSPackageManager", "args is invalid");
            return false;
        }
        List<X509Certificate> listB = a.b(str3);
        if (listB.size() == 0) {
            HMSLog.e("HMSPackageManager", "certChain is empty");
            return false;
        }
        if (!a.a(a.a(this.a), listB)) {
            HMSLog.e("HMSPackageManager", "failed to verify cert chain");
            return false;
        }
        X509Certificate x509Certificate = listB.get(listB.size() - 1);
        if (!a.a(x509Certificate, "Huawei CBG HMS")) {
            HMSLog.e("HMSPackageManager", "CN is invalid");
            return false;
        }
        if (!a.b(x509Certificate, "Huawei CBG Cloud Security Signer")) {
            HMSLog.e("HMSPackageManager", "OU is invalid");
            return false;
        }
        if (a.a(x509Certificate, str, str2)) {
            return true;
        }
        HMSLog.e("HMSPackageManager", "signature is invalid: " + str);
        return false;
    }

    public final Pair<String, String> b() {
        List<ResolveInfo> listQueryIntentServices = this.a.getPackageManager().queryIntentServices(new Intent("com.huawei.hms.core.aidlservice"), 128);
        Iterator<ResolveInfo> it = listQueryIntentServices.iterator();
        while (it.hasNext()) {
            String str = it.next().serviceInfo.applicationInfo.packageName;
            if (str.equals("com.huawei.hwid")) {
                if (a(str)) {
                    return new Pair<>(str, this.b.getPackageSignature(str));
                }
                return null;
            }
        }
        e();
        for (ResolveInfo resolveInfo : listQueryIntentServices) {
            String str2 = resolveInfo.serviceInfo.applicationInfo.packageName;
            Bundle bundle = resolveInfo.serviceInfo.metaData;
            if (bundle == null) {
                HMSLog.e("HMSPackageManager", "skip package " + str2 + " for metadata is null");
            } else if (!bundle.containsKey("hms_app_signer")) {
                HMSLog.e("HMSPackageManager", "skip package " + str2 + " for no signer");
            } else if (bundle.containsKey("hms_app_cert_chain")) {
                String packageSignature = this.b.getPackageSignature(str2);
                if (a(str2 + "&" + packageSignature, bundle.getString("hms_app_signer"), bundle.getString("hms_app_cert_chain"))) {
                    return new Pair<>(str2, packageSignature);
                }
                HMSLog.e("HMSPackageManager", "checkSinger failed");
            } else {
                HMSLog.e("HMSPackageManager", "skip package " + str2 + " for no cert chain");
            }
        }
        return null;
    }

    public final void c() {
        synchronized (j) {
            Pair<String, String> pairB = b();
            if (pairB == null) {
                HMSLog.e("HMSPackageManager", "Failed to find HMS apk");
                this.c = null;
                this.d = null;
                this.e = 0;
                return;
            }
            this.c = (String) pairB.first;
            this.d = (String) pairB.second;
            this.e = this.b.getPackageVersionCode(getHMSPackageName());
            HMSLog.i("HMSPackageManager", "Succeed to find HMS apk: " + this.c + " version: " + this.e);
        }
    }

    public final boolean d() {
        PackageManager packageManager = this.a.getPackageManager();
        if (packageManager == null) {
            HMSLog.e("HMSPackageManager", "In isMinApkVersionEffective, Failed to get 'PackageManager' instance.");
            return true;
        }
        try {
            ApplicationInfo applicationInfo = packageManager.getPackageInfo(getHMSPackageName(), 128).applicationInfo;
            if (applicationInfo != null && applicationInfo.metaData != null && applicationInfo.metaData.containsKey("com.huawei.hms.kit.api_level:hmscore") && (getHmsVersionCode() >= 50000000 || getHmsVersionCode() <= 19999999)) {
                HMSLog.i("HMSPackageManager", "MinApkVersion is disabled.");
                return false;
            }
        } catch (PackageManager.NameNotFoundException unused) {
            HMSLog.e("HMSPackageManager", "In isMinApkVersionEffective, Failed to read meta data for HMSCore API level.");
        }
        return true;
    }

    public final void e() {
        this.f.set(3);
        this.g = 0L;
    }

    public String getHMSFingerprint() {
        String str = this.d;
        return str == null ? "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05" : str;
    }

    public String getHMSPackageName() {
        refresh();
        String str = this.c;
        if (str != null) {
            if (PackageManagerHelper.PackageStates.NOT_INSTALLED.equals(this.b.getPackageStates(str))) {
                HMSLog.i("HMSPackageManager", "The package name is not installed and needs to be refreshed again");
                c();
            }
            String str2 = this.c;
            if (str2 != null) {
                return str2;
            }
        }
        if (PackageManagerHelper.PackageStates.NOT_INSTALLED.equals(this.b.getPackageStates("com.huawei.hwid")) || this.b.getPackageSignature("com.huawei.hwid").equalsIgnoreCase("B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05")) {
        }
        return "com.huawei.hwid";
    }

    public PackageManagerHelper.PackageStates getHMSPackageStates() {
        PackageManagerHelper.PackageStates packageStates;
        synchronized (i) {
            refresh();
            if (this.f.get() == 1) {
                packageStates = PackageManagerHelper.PackageStates.SPOOF;
            } else {
                packageStates = this.b.getPackageStates(this.c);
                if (packageStates == PackageManagerHelper.PackageStates.ENABLED && !this.d.equals(this.b.getPackageSignature(this.c))) {
                    packageStates = PackageManagerHelper.PackageStates.NOT_INSTALLED;
                }
            }
        }
        return packageStates;
    }

    public int getHmsVersionCode() {
        return this.b.getPackageVersionCode(getHMSPackageName());
    }

    public boolean hmsVerHigherThan(int i2) {
        if (this.e >= i2 || !d()) {
            return true;
        }
        int packageVersionCode = this.b.getPackageVersionCode(getHMSPackageName());
        this.e = packageVersionCode;
        return packageVersionCode >= i2;
    }

    public boolean isApkUpdateNecessary(int i2) {
        int hmsVersionCode = getHmsVersionCode();
        HMSLog.i("HMSPackageManager", "current versionCode:" + hmsVersionCode + ", minimum version requirements: " + i2);
        return d() && hmsVersionCode < i2;
    }

    public void refresh() {
        if (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.d)) {
            c();
        }
    }

    public final boolean a(String str) {
        HMSLog.i("HMSPackageManager", "enter checkHmsIsSpoof");
        if (this.f.get() == 2) {
            return true;
        }
        if (this.f.get() == 3) {
            if (a()) {
                this.f.set(2);
            } else {
                this.f.set(1);
            }
            this.g = this.b.getPackageFirstInstallTime(str);
        } else if (this.b.getPackageFirstInstallTime(str) != this.g) {
            if (!a()) {
                this.f.set(1);
            } else {
                this.f.set(2);
            }
        }
        HMSLog.i("HMSPackageManager", "check hms state: " + this.f);
        return this.f.get() == 2;
    }

    public final boolean a() {
        String hmsPath = ReadApkFileUtil.getHmsPath(this.a);
        if (hmsPath == null) {
            HMSLog.i("HMSPackageManager", "hmsPath is null!");
            return false;
        }
        if (!ReadApkFileUtil.isCertFound(hmsPath)) {
            HMSLog.i("HMSPackageManager", "NO huawer.cer in HMS!");
            return false;
        }
        if (!ReadApkFileUtil.checkSignature()) {
            HMSLog.i("HMSPackageManager", "checkSignature fail!");
            return false;
        }
        if (ReadApkFileUtil.verifyApkHash(hmsPath)) {
            return true;
        }
        HMSLog.i("HMSPackageManager", "verifyApkHash fail!");
        return false;
    }
}
