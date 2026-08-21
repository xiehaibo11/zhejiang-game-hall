package com.ta.utdid2.device;

import android.content.Context;
import android.os.Binder;
import android.provider.Settings;
import android.text.TextUtils;
import com.ta.utdid2.a.a.f;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.util.Random;
import java.util.regex.Pattern;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import org.bouncycastle.crypto.signers.PSSSigner;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private com.ta.utdid2.b.a.c f19a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private d f20a;
    private com.ta.utdid2.b.a.c b;
    private String h;
    private String i;
    private Context mContext;
    private static final Object e = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f5297a = null;
    private static final String j = ".UTSystemConfig" + File.separator + "Global";
    private String g = null;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private Pattern f21b = Pattern.compile("[^0-9a-zA-Z=/+]+");

    private c(Context context) {
        this.mContext = null;
        this.f20a = null;
        this.h = "xx_utdid_key";
        this.i = "xx_utdid_domain";
        this.f19a = null;
        this.b = null;
        this.mContext = context;
        this.b = new com.ta.utdid2.b.a.c(context, j, "Alvin2", false, true);
        this.f19a = new com.ta.utdid2.b.a.c(context, ".DataStorage", "ContextData", false, true);
        this.f20a = new d();
        this.h = String.format("K_%d", Integer.valueOf(f.hashCode(this.h)));
        this.i = String.format("D_%d", Integer.valueOf(f.hashCode(this.i)));
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    private void m36c() {
        com.ta.utdid2.b.a.c cVar = this.b;
        if (cVar != null) {
            if (f.isEmpty(cVar.getString("UTDID2"))) {
                String string = this.b.getString("UTDID");
                if (!f.isEmpty(string)) {
                    d(string);
                }
            }
            boolean z = false;
            if (!f.isEmpty(this.b.getString("DID"))) {
                this.b.remove("DID");
                z = true;
            }
            if (!f.isEmpty(this.b.getString("EI"))) {
                this.b.remove("EI");
                z = true;
            }
            if (!f.isEmpty(this.b.getString("SI"))) {
                this.b.remove("SI");
                z = true;
            }
            if (z) {
                this.b.commit();
            }
        }
    }

    public static c a(Context context) {
        if (context != null && f5297a == null) {
            synchronized (e) {
                if (f5297a == null) {
                    f5297a = new c(context);
                    f5297a.m36c();
                }
            }
        }
        return f5297a;
    }

    private void d(String str) {
        com.ta.utdid2.b.a.c cVar;
        if (a(str)) {
            if (str.endsWith("\n")) {
                str = str.substring(0, str.length() - 1);
            }
            if (str.length() != 24 || (cVar = this.b) == null) {
                return;
            }
            cVar.putString("UTDID2", str);
            this.b.commit();
        }
    }

    private void e(String str) {
        com.ta.utdid2.b.a.c cVar;
        if (str == null || (cVar = this.f19a) == null || str.equals(cVar.getString(this.h))) {
            return;
        }
        this.f19a.putString(this.h, str);
        this.f19a.commit();
    }

    private void f(String str) {
        if (e() && a(str)) {
            if (str.endsWith("\n")) {
                str = str.substring(0, str.length() - 1);
            }
            if (24 == str.length()) {
                String string = null;
                try {
                    string = Settings.System.getString(this.mContext.getContentResolver(), "mqBRboGZkQPcAkyk");
                } catch (Exception unused) {
                }
                if (a(string)) {
                    return;
                }
                try {
                    Settings.System.putString(this.mContext.getContentResolver(), "mqBRboGZkQPcAkyk", str);
                } catch (Exception unused2) {
                }
            }
        }
    }

    private void g(String str) {
        String string;
        try {
            string = Settings.System.getString(this.mContext.getContentResolver(), "dxCRMxhQkdGePGnp");
        } catch (Exception unused) {
            string = null;
        }
        if (str.equals(string)) {
            return;
        }
        try {
            Settings.System.putString(this.mContext.getContentResolver(), "dxCRMxhQkdGePGnp", str);
        } catch (Exception unused2) {
        }
    }

    private void h(String str) {
        if (!e() || str == null) {
            return;
        }
        g(str);
    }

    private String c() {
        com.ta.utdid2.b.a.c cVar = this.b;
        if (cVar == null) {
            return null;
        }
        String string = cVar.getString("UTDID2");
        if (f.isEmpty(string) || this.f20a.c(string) == null) {
            return null;
        }
        return string;
    }

    private boolean a(String str) {
        if (str != null) {
            if (str.endsWith("\n")) {
                str = str.substring(0, str.length() - 1);
            }
            if (24 == str.length() && !this.f21b.matcher(str).find()) {
                return true;
            }
        }
        return false;
    }

    public synchronized String getValue() {
        if (this.g != null) {
            return this.g;
        }
        return d();
    }

    public synchronized String d() {
        this.g = m37e();
        if (!TextUtils.isEmpty(this.g)) {
            return this.g;
        }
        try {
            byte[] bArrB = b();
            if (bArrB != null) {
                this.g = com.ta.utdid2.a.a.b.encodeToString(bArrB, 2);
                d(this.g);
                String strC = this.f20a.c(bArrB);
                if (strC != null) {
                    h(strC);
                    e(strC);
                }
                return this.g;
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return null;
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public synchronized String m37e() {
        String string;
        String string2 = "";
        try {
            string2 = Settings.System.getString(this.mContext.getContentResolver(), "mqBRboGZkQPcAkyk");
        } catch (Exception unused) {
        }
        if (a(string2)) {
            return string2;
        }
        e eVar = new e();
        boolean z = false;
        try {
            string = Settings.System.getString(this.mContext.getContentResolver(), "dxCRMxhQkdGePGnp");
        } catch (Exception unused2) {
            string = null;
        }
        if (f.isEmpty(string)) {
            z = true;
        } else {
            String strE = eVar.e(string);
            if (a(strE)) {
                f(strE);
                return strE;
            }
            String strD = eVar.d(string);
            if (a(strD)) {
                String strC = this.f20a.c(strD);
                if (!f.isEmpty(strC)) {
                    h(strC);
                    try {
                        string = Settings.System.getString(this.mContext.getContentResolver(), "dxCRMxhQkdGePGnp");
                    } catch (Exception unused3) {
                    }
                }
            }
            String strD2 = this.f20a.d(string);
            if (a(strD2)) {
                this.g = strD2;
                d(strD2);
                e(string);
                f(this.g);
                return this.g;
            }
        }
        String strC2 = c();
        if (a(strC2)) {
            String strC3 = this.f20a.c(strC2);
            if (z) {
                h(strC3);
            }
            f(strC2);
            e(strC3);
            this.g = strC2;
            return strC2;
        }
        String string3 = this.f19a.getString(this.h);
        if (!f.isEmpty(string3)) {
            String strD3 = eVar.d(string3);
            if (!a(strD3)) {
                strD3 = this.f20a.d(string3);
            }
            if (a(strD3)) {
                String strC4 = this.f20a.c(strD3);
                if (!f.isEmpty(strD3)) {
                    this.g = strD3;
                    if (z) {
                        h(strC4);
                    }
                    d(this.g);
                    return this.g;
                }
            }
        }
        return null;
    }

    private byte[] b() throws Exception {
        String imei;
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        int iCurrentTimeMillis = (int) (System.currentTimeMillis() / 1000);
        int iNextInt = new Random().nextInt();
        byte[] bytes = com.ta.utdid2.a.a.c.getBytes(iCurrentTimeMillis);
        byte[] bytes2 = com.ta.utdid2.a.a.c.getBytes(iNextInt);
        byteArrayOutputStream.write(bytes, 0, 4);
        byteArrayOutputStream.write(bytes2, 0, 4);
        byteArrayOutputStream.write(3);
        byteArrayOutputStream.write(0);
        try {
            imei = com.ta.utdid2.a.a.d.getImei(this.mContext);
        } catch (Exception unused) {
            imei = "" + new Random().nextInt();
        }
        byteArrayOutputStream.write(com.ta.utdid2.a.a.c.getBytes(f.hashCode(imei)), 0, 4);
        byteArrayOutputStream.write(com.ta.utdid2.a.a.c.getBytes(f.hashCode(b(byteArrayOutputStream.toByteArray()))));
        return byteArrayOutputStream.toByteArray();
    }

    public static String b(byte[] bArr) throws Exception {
        byte[] bArr2 = {69, 114, 116, -33, 125, -54, -31, 86, -11, 11, -78, -96, -17, -99, 64, 23, -95, -126, -82, -64, 113, 116, -16, -103, com.sigmob.sdk.archives.tar.e.I, -30, 9, -39, 33, -80, PSSSigner.TRAILER_IMPLICIT, -78, -117, com.sigmob.sdk.archives.tar.e.M, 30, -122, 64, -104, 74, -49, 106, 85, -38, -93};
        Mac mac = Mac.getInstance("HmacSHA1");
        mac.init(new SecretKeySpec(com.ta.utdid2.a.a.e.a(bArr2), mac.getAlgorithm()));
        return com.ta.utdid2.a.a.b.encodeToString(mac.doFinal(bArr), 2);
    }

    private boolean e() {
        return this.mContext.checkPermission("android.permission.WRITE_SETTINGS", Binder.getCallingPid(), Binder.getCallingUid()) == 0;
    }
}
