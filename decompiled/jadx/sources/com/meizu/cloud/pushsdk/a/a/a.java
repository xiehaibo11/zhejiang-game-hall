package com.meizu.cloud.pushsdk.a.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import android.util.Base64;
import com.alipay.sdk.m.n.d;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.KeyFactory;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.X509EncodedKeySpec;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f4478a;
    private static final Object b = new Object();
    private byte[] c;
    private byte[] d;
    private byte[] e;
    private byte[] f;
    private byte[] g;
    private PublicKey h;
    private final SharedPreferences i;
    private final SharedPreferences j;
    private long k = 0;

    private a(Context context) {
        this.i = context.getSharedPreferences("com.x.y.1", 0);
        this.j = context.getSharedPreferences("com.x.y.2", 0);
        Integer.parseInt(this.i.getString("keyTimeout", "0"));
        this.i.getLong("createDate", 0L);
        e();
        byte[] bArr = this.c;
        if (bArr != null && bArr.length != 0) {
            byte[] bArr2 = this.d;
            if (bArr2 == null || bArr2.length == 0) {
                PublicKey publicKeyB = b(context);
                this.h = publicKeyB;
                if (publicKeyB != null) {
                    h();
                    return;
                }
                return;
            }
            return;
        }
        PublicKey publicKeyB2 = b(context);
        this.h = publicKeyB2;
        if (publicKeyB2 != null) {
            f();
            return;
        }
        this.i.edit().clear().apply();
        try {
            d();
            PublicKey publicKeyB3 = b(context);
            this.h = publicKeyB3;
            if (publicKeyB3 != null) {
                f();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static a a() {
        a aVar = f4478a;
        if (aVar != null) {
            return aVar;
        }
        throw new IllegalStateException("KeyMgr is not initialised - invoke at least once with parameterised init/get");
    }

    private String a(InputStream inputStream) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        while (true) {
            try {
                try {
                    int i = inputStream.read();
                    if (i == -1) {
                        String string = byteArrayOutputStream.toString();
                        try {
                            byteArrayOutputStream.close();
                            return string;
                        } catch (IOException unused) {
                            return string;
                        }
                    }
                    byteArrayOutputStream.write(i);
                } catch (IOException unused2) {
                }
            } catch (IOException unused3) {
                byteArrayOutputStream.close();
            } catch (Throwable th) {
                try {
                    byteArrayOutputStream.close();
                } catch (IOException unused4) {
                }
                throw th;
            }
            return null;
        }
    }

    public static void a(Context context) {
        if (f4478a == null) {
            synchronized (b) {
                if (f4478a == null) {
                    f4478a = new a(context);
                }
            }
        }
    }

    private PublicKey b(Context context) {
        b("load publicKey from preference");
        String string = this.j.getString("publicKey", "");
        if (TextUtils.isEmpty(string)) {
            return null;
        }
        try {
            return KeyFactory.getInstance(d.f1221a).generatePublic(new X509EncodedKeySpec(Base64.decode(string, 2)));
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            return null;
        } catch (InvalidKeySpecException e2) {
            e2.printStackTrace();
            return null;
        }
    }

    private void b(String str) {
        DebugLogger.d("HttpKeyMgr", str);
    }

    private void c(String str) {
        DebugLogger.e("HttpKeyMgr", str);
    }

    private void d() {
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(PushConstants.URL_DOWNLOAD_PUBLIC_KEY).openConnection();
            httpURLConnection.setDoInput(true);
            httpURLConnection.setUseCaches(false);
            try {
                httpURLConnection.setRequestMethod("GET");
            } catch (ProtocolException e) {
                e.printStackTrace();
            }
            httpURLConnection.setRequestProperty("Charset", "UTF-8");
            InputStream inputStream = null;
            try {
                b("code = " + httpURLConnection.getResponseCode());
                inputStream = httpURLConnection.getInputStream();
                if (inputStream != null) {
                    String strA = a(inputStream);
                    b("body = " + strA);
                    if (!TextUtils.isEmpty(strA)) {
                        try {
                            JSONObject jSONObject = new JSONObject(strA);
                            if (jSONObject.getInt("code") == 200) {
                                String string = jSONObject.getString("value");
                                SharedPreferences.Editor editorEdit = this.j.edit();
                                editorEdit.putString("publicKey", string);
                                editorEdit.apply();
                            }
                        } catch (Exception e2) {
                            c("downloadPublicKey message error " + e2.getMessage());
                        }
                    }
                }
            } finally {
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException unused) {
                    }
                }
                httpURLConnection.disconnect();
            }
        } catch (MalformedURLException unused2) {
        }
    }

    private void e() {
        b("loadKeys");
        String string = this.i.getString("sKey64", "");
        b("saved sKey64: " + string);
        if (!TextUtils.isEmpty(string)) {
            this.g = string.getBytes();
        }
        String string2 = this.i.getString("aKey64", "");
        b("saved aKey64: " + string2);
        if (!TextUtils.isEmpty(string2)) {
            byte[] bytes = string2.getBytes();
            this.f = bytes;
            this.d = Base64.decode(bytes, 2);
        }
        String string3 = this.i.getString("rKey64", "");
        b("saved rKey64: " + string3);
        if (TextUtils.isEmpty(string3)) {
            return;
        }
        byte[] bytes2 = string3.getBytes();
        this.e = bytes2;
        this.c = Base64.decode(bytes2, 2);
        b("saved rKey: " + new String(this.c));
    }

    private void f() {
        g();
        h();
    }

    private void g() {
        try {
            KeyGenerator keyGenerator = KeyGenerator.getInstance("AES");
            keyGenerator.init(128);
            byte[] encoded = keyGenerator.generateKey().getEncoded();
            this.c = encoded;
            this.e = Base64.encode(encoded, 2);
            b("***** rKey64: " + new String(this.e));
            SharedPreferences.Editor editorEdit = this.i.edit();
            editorEdit.putString("rKey64", new String(this.e));
            editorEdit.apply();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void h() {
        try {
            Cipher cipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
            cipher.init(1, this.h);
            byte[] bArrDoFinal = cipher.doFinal(this.c);
            this.d = bArrDoFinal;
            this.f = Base64.encode(bArrDoFinal, 2);
            b("***** aKey64: " + new String(this.f));
            SharedPreferences.Editor editorEdit = this.i.edit();
            editorEdit.putString("aKey64", new String(this.f));
            editorEdit.apply();
        } catch (InvalidKeyException e) {
            e.printStackTrace();
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
        } catch (BadPaddingException e3) {
            e3.printStackTrace();
        } catch (IllegalBlockSizeException e4) {
            e4.printStackTrace();
        } catch (NoSuchPaddingException e5) {
            e5.printStackTrace();
        }
    }

    public void a(String str) {
        this.g = str.getBytes();
        SharedPreferences.Editor editorEdit = this.i.edit();
        editorEdit.putString("sKey64", new String(this.g));
        editorEdit.apply();
    }

    public byte[] a(byte[] bArr) {
        String str;
        byte[] bArr2 = this.c;
        if (bArr2 == null || bArr2.length == 0) {
            str = "rKey null!";
        } else {
            if (bArr != null && bArr.length != 0) {
                b(">>>>>>>>>> encrypt input >>>>>>>>>>\n" + new String(Base64.encode(bArr, 2)));
                b("<<<<<<<<<< encrypt input <<<<<<<<<<");
                try {
                    Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
                    cipher.init(1, new SecretKeySpec(this.c, "AES"), new IvParameterSpec(this.c));
                    byte[] bArrDoFinal = cipher.doFinal(bArr);
                    b(">>>>>>>>>> encrypt output >>>>>>>>>>\n" + new String(Base64.encode(bArrDoFinal, 2)));
                    b("<<<<<<<<<< encrypt output <<<<<<<<<<");
                    return bArrDoFinal;
                } catch (InvalidAlgorithmParameterException e) {
                    e.printStackTrace();
                    return null;
                } catch (InvalidKeyException e2) {
                    e2.printStackTrace();
                    return null;
                } catch (NoSuchAlgorithmException e3) {
                    e3.printStackTrace();
                    return null;
                } catch (BadPaddingException e4) {
                    e4.printStackTrace();
                    return null;
                } catch (IllegalBlockSizeException e5) {
                    e5.printStackTrace();
                    return null;
                } catch (NoSuchPaddingException e6) {
                    e6.printStackTrace();
                    return null;
                }
            }
            str = "input null!";
        }
        c(str);
        return null;
    }

    public byte[] b() {
        return this.f;
    }

    public byte[] c() {
        return this.g;
    }
}
