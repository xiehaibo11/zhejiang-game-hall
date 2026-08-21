package com.huawei.hms.hatool;

import android.text.TextUtils;
import com.huawei.secure.android.common.encrypt.utils.EncryptUtil;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: classes.dex */
public class x {
    public static x b = new x();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f2125a = new a();

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f2126a;
        public String b;
        public String c;
        public long d = 0;

        public a() {
        }

        public void a(long j) {
            x.this.f2125a.d = j;
        }

        public void a(String str) {
            x.this.f2125a.c = str;
        }

        public void b(String str) {
            x.this.f2125a.f2126a = str;
        }

        public void c(String str) {
            x.this.f2125a.b = str;
        }
    }

    public static x f() {
        return b;
    }

    public String a() {
        return this.f2125a.c;
    }

    public long b() {
        return this.f2125a.d;
    }

    public String c() {
        return this.f2125a.b;
    }

    public void d() throws Throwable {
        long jB = b();
        if (jB != 0) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - jB > com.heytap.mcssdk.constant.a.g) {
                String str = this.f2125a.f2126a;
                String strGenerateSecureRandomStr = EncryptUtil.generateSecureRandomStr(16);
                String strA = e.a(str, strGenerateSecureRandomStr);
                this.f2125a.a(jCurrentTimeMillis);
                this.f2125a.c(strGenerateSecureRandomStr);
                this.f2125a.a(strA);
                return;
            }
            return;
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        String strE = e();
        if (TextUtils.isEmpty(strE)) {
            y.f("hmsSdk", "get rsa pubkey config error");
            return;
        }
        String strGenerateSecureRandomStr2 = EncryptUtil.generateSecureRandomStr(16);
        String strA2 = e.a(strE, strGenerateSecureRandomStr2);
        this.f2125a.b(strE);
        this.f2125a.a(jCurrentTimeMillis2);
        this.f2125a.c(strGenerateSecureRandomStr2);
        this.f2125a.a(strA2);
    }

    public final String e() throws Throwable {
        InputStream inputStreamOpen;
        Throwable th;
        try {
            inputStreamOpen = b.f().getResources().getAssets().open("hianalytics_njjn");
            try {
                try {
                    String strA = r0.a(inputStreamOpen);
                    r0.a((Closeable) inputStreamOpen);
                    return strA;
                } catch (IOException unused) {
                    y.f("hmsSdk", "read pubKey error,the file is corrupted");
                    r0.a((Closeable) inputStreamOpen);
                    return null;
                }
            } catch (Throwable th2) {
                th = th2;
                r0.a((Closeable) inputStreamOpen);
                throw th;
            }
        } catch (IOException unused2) {
            inputStreamOpen = null;
        } catch (Throwable th3) {
            inputStreamOpen = null;
            th = th3;
            r0.a((Closeable) inputStreamOpen);
            throw th;
        }
    }
}
