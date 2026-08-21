package com.huawei.hms.hatool;

import android.text.TextUtils;
import com.huawei.secure.android.common.encrypt.utils.EncryptUtil;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;

public class x {
    public static x b = new x();
    public a a = new a();

    public class a {
        public String a;
        public String b;
        public String c;
        public long d = 0;

        public a() {
        }

        public void a(long j) {
            x.this.a.d = j;
        }

        public void a(String str) {
            x.this.a.c = str;
        }

        public void b(String str) {
            x.this.a.a = str;
        }

        public void c(String str) {
            x.this.a.b = str;
        }
    }

    public static x f() {
        return b;
    }

    public String a() {
        return this.a.c;
    }

    public long b() {
        return this.a.d;
    }

    public String c() {
        return this.a.b;
    }

    public void d() throws Throwable {
        long jB = b();
        if (jB != 0) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - jB > com.heytap.mcssdk.constant.a.g) {
                String str = this.a.a;
                String strGenerateSecureRandomStr = EncryptUtil.generateSecureRandomStr(16);
                String strA = e.a(str, strGenerateSecureRandomStr);
                this.a.a(jCurrentTimeMillis);
                this.a.c(strGenerateSecureRandomStr);
                this.a.a(strA);
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
        this.a.b(strE);
        this.a.a(jCurrentTimeMillis2);
        this.a.c(strGenerateSecureRandomStr2);
        this.a.a(strA2);
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
