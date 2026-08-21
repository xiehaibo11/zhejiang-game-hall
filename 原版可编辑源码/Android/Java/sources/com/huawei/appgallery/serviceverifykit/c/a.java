package com.huawei.appgallery.serviceverifykit.c;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.Signature;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit;
import com.huawei.appgallery.serviceverifykit.d.c;
import com.huawei.appgallery.serviceverifykit.d.d.b;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

public class a {
    private String a;
    private String b;
    private String c;
    private String d;
    private String e;
    private int h;
    private String l;
    private String m;
    private Intent n;
    private ServiceVerifyKit.Builder.ComponentType o;
    private Context t;
    private String u;
    private Map<String, String[]> f = new HashMap();
    private Map<String, Integer> g = new HashMap();
    private List<String> i = new ArrayList();
    private List<ServiceVerifyKit.b> j = new ArrayList();
    private int k = 0;
    private int p = 0;
    private int q = 0;
    private int r = 0;
    private int s = 0;

    public a(Context context) {
        this.t = context;
    }

    private int a(Bundle bundle, int i) {
        if (!bundle.containsKey("ag.application.base_priority")) {
            return i + 1000;
        }
        try {
            return i + bundle.getInt("ag.application.base_priority");
        } catch (Exception unused) {
            b.b.a("MatchAppFinder", "skip package " + bundle.getString("ag.application.base_priority") + " is not number");
            return i + 1000;
        }
    }

    private int a(Bundle bundle, int i, List<ServiceVerifyKit.b> list) {
        int i2 = 0;
        for (ServiceVerifyKit.b bVar : list) {
            if (i == 1) {
                if (!bundle.containsKey(bVar.a()) || !bundle.get(bVar.a()).toString().equals(bVar.b())) {
                    return 0;
                }
                i2 = 1;
            } else if (i != 2) {
                b.b.a("MatchAppFinder", "error input preferred package name");
            } else if (bundle.containsKey(bVar.a()) && bundle.get(bVar.a()).toString().equals(bVar.b())) {
                i2++;
            }
        }
        return i2;
    }

    private int a(Bundle bundle, String str) {
        if (bundle.containsKey(this.l)) {
            return bundle.getString(this.l).equalsIgnoreCase(str) ? 1 : -1;
        }
        return 0;
    }

    private int a(String str, List<String> list) {
        Iterator<String> it = list.iterator();
        int i = 0;
        while (it.hasNext()) {
            if (it.next().equals(str)) {
                i = 1;
            }
        }
        return i;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x008b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private com.huawei.appgallery.serviceverifykit.a.a a(PackageInfo packageInfo, String str, String str2, int i) {
        b bVar;
        StringBuilder sb;
        String str3;
        Bundle bundle = packageInfo.applicationInfo.metaData;
        if (bundle == null) {
            bVar = b.b;
            sb = new StringBuilder();
            sb.append("skip package ");
            sb.append(str2);
            str2 = " for metadata is null";
        } else {
            int iA = a(bundle, this.u);
            if (bundle.containsKey(this.d) || bundle.containsKey(this.e)) {
                if (a(bundle, str2, str)) {
                    this.p = i;
                    if (!this.i.isEmpty()) {
                        this.r = a(str2, this.i);
                    }
                    if (!this.j.isEmpty()) {
                        this.s = a(bundle, this.k, this.j);
                    }
                    return new com.huawei.appgallery.serviceverifykit.a.a(str2, a(bundle, this.p), this.q, iA, this.r, this.s);
                }
                bVar = b.b;
                sb = new StringBuilder();
                str3 = "checkSinger failed, packageName is ";
                sb.append(str3);
            } else {
                if (a(str2, str)) {
                    this.q = 1;
                    this.p = this.g.get(str2).intValue();
                    if (!this.i.isEmpty()) {
                    }
                    if (!this.j.isEmpty()) {
                    }
                    return new com.huawei.appgallery.serviceverifykit.a.a(str2, a(bundle, this.p), this.q, iA, this.r, this.s);
                }
                bVar = b.b;
                sb = new StringBuilder();
                str3 = "Legacy is false, packageName is ";
                sb.append(str3);
            }
        }
        sb.append(str2);
        bVar.a("MatchAppFinder", sb.toString());
        return null;
    }

    private String a(ResolveInfo resolveInfo) {
        ServiceVerifyKit.Builder.ComponentType componentType = this.o;
        return ((componentType == ServiceVerifyKit.Builder.ComponentType.ACTIVITY || componentType == ServiceVerifyKit.Builder.ComponentType.BROADCAST) ? resolveInfo.activityInfo.applicationInfo : resolveInfo.serviceInfo.applicationInfo).packageName;
    }

    private static String a(String str) {
        b bVar;
        String str2;
        try {
            return (String) Class.forName("android.os.SystemProperties").getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(null, str);
        } catch (ClassNotFoundException unused) {
            bVar = b.b;
            str2 = "getSystemProperties ClassNotFoundException";
            bVar.a("MatchAppFinder", str2);
            return "";
        } catch (Exception unused2) {
            bVar = b.b;
            str2 = "getSystemProperties Exception while getting system property";
            bVar.a("MatchAppFinder", str2);
            return "";
        }
    }

    private List<ResolveInfo> a(PackageManager packageManager) {
        Intent intent;
        ServiceVerifyKit.Builder.ComponentType componentType = this.o;
        if (componentType == null) {
            intent = new Intent(this.a);
        } else {
            if (componentType == ServiceVerifyKit.Builder.ComponentType.ACTIVITY) {
                return packageManager.queryIntentActivities(this.n, this.h);
            }
            if (componentType == ServiceVerifyKit.Builder.ComponentType.BROADCAST) {
                return packageManager.queryBroadcastReceivers(this.n, this.h);
            }
            intent = this.n;
        }
        return packageManager.queryIntentServices(intent, this.h);
    }

    private List<com.huawei.appgallery.serviceverifykit.a.a> a(List<ResolveInfo> list, PackageManager packageManager, int i) {
        b bVar;
        StringBuilder sb;
        String str;
        PackageInfo packageInfo;
        ArrayList arrayList = new ArrayList();
        for (ResolveInfo resolveInfo : list) {
            String strA = a(resolveInfo);
            try {
                packageInfo = packageManager.getPackageInfo(strA, i);
            } catch (PackageManager.NameNotFoundException unused) {
                bVar = b.b;
                sb = new StringBuilder();
                sb.append("skip package ");
                sb.append(strA);
                str = " for PackageInfo is null";
            }
            if (packageInfo.applicationInfo == null) {
                bVar = b.b;
                sb = new StringBuilder();
                sb.append("skip package ");
                sb.append(strA);
                str = " for ApplicationInfo is null";
            } else {
                Signature[] signatureArr = packageInfo.signatures;
                if (signatureArr == null || signatureArr.length <= 0) {
                    bVar = b.b;
                    sb = new StringBuilder();
                    sb.append("skip package ");
                    sb.append(strA);
                    str = " for no sign";
                } else {
                    byte[] byteArray = signatureArr[0].toByteArray();
                    if (byteArray.length == 0) {
                        bVar = b.b;
                        sb = new StringBuilder();
                        sb.append("skip package ");
                        sb.append(strA);
                        str = " for sign is empty";
                    } else {
                        try {
                            com.huawei.appgallery.serviceverifykit.a.a aVarA = a(packageInfo, com.huawei.appgallery.serviceverifykit.d.b.b(MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(byteArray), true), strA, resolveInfo.priority);
                            if (aVarA != null) {
                                arrayList.add(aVarA);
                            }
                        } catch (NoSuchAlgorithmException unused2) {
                            bVar = b.b;
                            sb = new StringBuilder();
                            sb.append("skip package ");
                            sb.append(strA);
                            str = " for AlgorithmException";
                            sb.append(str);
                            bVar.a("MatchAppFinder", sb.toString());
                        }
                    }
                }
            }
            sb.append(str);
            bVar.a("MatchAppFinder", sb.toString());
        }
        return arrayList;
    }

    private boolean a(Bundle bundle, String str, String str2) {
        b bVar;
        String str3;
        if (bundle.containsKey(this.d) && bundle.containsKey(this.e)) {
            if (a(str + "&" + str2, bundle.getString(this.d), bundle.getString(this.e))) {
                return true;
            }
            bVar = b.b;
            str3 = "checkSinger failed";
        } else {
            bVar = b.b;
            str3 = "skip package " + str + " for no signer or no certChain";
        }
        bVar.a("MatchAppFinder", str3);
        return false;
    }

    private boolean a(String str, String str2) {
        String[] strArr;
        if (this.f.containsKey(str) && (strArr = this.f.get(str)) != null) {
            for (String str3 : strArr) {
                if (str2.equals(str3)) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean a(String str, String str2, String str3) {
        b bVar;
        String str4;
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str3)) {
            bVar = b.b;
            str4 = "args is invalid";
        } else {
            List<X509Certificate> listB = c.b(str3);
            if (listB.size() == 0) {
                bVar = b.b;
                str4 = "certChain is empty";
            } else if (c.a(c.a(this.t), listB)) {
                X509Certificate x509Certificate = listB.get(0);
                if (!c.a(x509Certificate, this.b)) {
                    bVar = b.b;
                    str4 = "CN is invalid";
                } else if (c.b(x509Certificate, this.c)) {
                    byte[] bytes = null;
                    try {
                        bytes = str.getBytes("UTF-8");
                    } catch (UnsupportedEncodingException e) {
                        b.b.a("MatchAppFinder", "checkCertChain UnsupportedEncodingException:", e);
                    }
                    if (c.a(x509Certificate, bytes, com.huawei.appgallery.serviceverifykit.d.a.a(str2))) {
                        return true;
                    }
                    bVar = b.b;
                    str4 = "signature is invalid";
                } else {
                    bVar = b.b;
                    str4 = "OU is invalid";
                }
            } else {
                bVar = b.b;
                str4 = "failed to verify cert chain";
            }
        }
        bVar.a("MatchAppFinder", str4);
        return false;
    }

    public List<com.huawei.appgallery.serviceverifykit.a.a> a() {
        PackageManager packageManager = this.t.getPackageManager();
        List<ResolveInfo> listA = a(packageManager);
        if (listA.size() == 0) {
            return null;
        }
        this.u = TextUtils.isEmpty(this.m) ? Build.MANUFACTURER : a(this.m);
        return a(listA, packageManager, this.h | 128 | 64);
    }

    public void a(String str, String str2, String str3, String str4, String str5, Map<String, String[]> map, Map<String, Integer> map2, int i, List<String> list, List<ServiceVerifyKit.b> list2, int i2, String str6, String str7, Intent intent, ServiceVerifyKit.Builder.ComponentType componentType) {
        this.a = str;
        this.b = str2;
        this.c = str3;
        this.d = str4;
        this.e = str5;
        this.f = map;
        this.g = map2;
        this.h = i;
        this.i = list;
        this.j = list2;
        this.k = i2;
        this.l = str6;
        this.m = str7;
        this.n = intent;
        this.o = componentType;
    }
}
