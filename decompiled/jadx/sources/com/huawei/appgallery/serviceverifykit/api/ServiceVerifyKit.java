package com.huawei.appgallery.serviceverifykit.api;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class ServiceVerifyKit {

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f1947a;
        private Context j;
        private int k;
        private Intent n;
        private ComponentType o;
        private String q;
        private String b = "AppGallery Verification";
        private String c = "Huawei CBG Cloud Security Signer";
        private String d = "com.huawei.appgallery.fingerprint_signature";
        private String e = "com.huawei.appgallery.sign_certchain";
        private Map<String, String[]> f = new HashMap();
        private Map<String, Integer> g = new HashMap();
        private List<String> h = new ArrayList();
        private List<b> i = new ArrayList();
        private int l = 0;
        private int m = 0;
        private String p = "verify_match_property";

        public enum ComponentType {
            ACTIVITY,
            SERVICE,
            BROADCAST
        }

        public Builder addLegacyInfo(String str, String str2) {
            this.f.put(str, ServiceVerifyKit.b(this.f.get(str), str2));
            this.g.put(str, Integer.valueOf(this.l));
            return this;
        }

        public Builder addLegacyInfo(String str, String str2, int i) {
            this.f.put(str, ServiceVerifyKit.b(this.f.get(str), str2));
            this.g.put(str, Integer.valueOf(i));
            return this;
        }

        public Builder addMatchProperty(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input propertyName");
            } else {
                this.q = str;
            }
            return this;
        }

        public String genVerifiedPackageName() {
            ServiceVerifyKit serviceVerifyKit = new ServiceVerifyKit();
            com.huawei.appgallery.serviceverifykit.c.a aVar = new com.huawei.appgallery.serviceverifykit.c.a(this.j);
            aVar.a(this.f1947a, this.b, this.c, this.d, this.e, this.f, this.g, this.k, this.h, this.i, this.m, this.p, this.q, this.n, this.o);
            return serviceVerifyKit.a(aVar);
        }

        public Builder setCN(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input CN");
            } else {
                this.b = str;
            }
            return this;
        }

        public Builder setCertChainKey(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input chain key");
            } else {
                this.e = str;
            }
            return this;
        }

        public Builder setCertSignerKey(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input signer key");
            } else {
                this.d = str;
            }
            return this;
        }

        public Builder setConditions(int i, b... bVarArr) {
            if (bVarArr.length != 0) {
                this.m = i;
                Collections.addAll(this.i, bVarArr);
            } else {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input conditions");
            }
            return this;
        }

        public Builder setContext(Context context) {
            this.j = context.getApplicationContext();
            return this;
        }

        public Builder setFlag(int i) {
            this.k = i;
            return this;
        }

        public Builder setMatchMetaDataKey(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input propertyKey");
            } else {
                this.p = str;
            }
            return this;
        }

        public Builder setOU(String str) {
            if (TextUtils.isEmpty(str)) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input OU");
            } else {
                this.c = str;
            }
            return this;
        }

        public Builder setPreferredPkgs(List<String> list) {
            if (list.isEmpty()) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input preferred package name");
            } else {
                this.h = list;
            }
            return this;
        }

        @Deprecated
        public Builder setServiceName(String str) {
            this.f1947a = str;
            return this;
        }

        public Builder setTargetComponent(Intent intent, ComponentType componentType) {
            if (intent == null) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input intent");
            } else {
                this.n = intent;
            }
            if (componentType == null) {
                com.huawei.appgallery.serviceverifykit.d.d.b.b.a("ServiceVerifyKit", "error input type");
            } else {
                this.o = componentType;
            }
            return this;
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f1948a;
        private String b;

        public String a() {
            return this.f1948a;
        }

        public String b() {
            return this.b;
        }
    }

    private ServiceVerifyKit() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String a(com.huawei.appgallery.serviceverifykit.c.a aVar) {
        List<com.huawei.appgallery.serviceverifykit.a.a> listA = aVar.a();
        if (listA.isEmpty()) {
            return null;
        }
        return new com.huawei.appgallery.serviceverifykit.b.a().a(listA);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String[] b(String[] strArr, String str) {
        if (strArr == null) {
            return new String[]{str};
        }
        int length = strArr.length;
        for (String str2 : strArr) {
            if (TextUtils.equals(str2, str)) {
                return strArr;
            }
        }
        String[] strArr2 = new String[length + 1];
        System.arraycopy(strArr, 0, strArr2, 0, length);
        strArr2[length] = str;
        return strArr2;
    }
}
