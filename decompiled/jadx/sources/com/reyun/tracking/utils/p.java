package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.net.Socket;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static p f4753a;
    private Socket b;
    private String c;
    private int d;
    private InputStream e;
    private OutputStream f;
    private boolean g = true;
    private int h = 0;
    private String i;

    private p(String str, int i) {
        this.c = str;
        this.d = i;
    }

    private byte a(String str) {
        return Tracking.mapApi2Byte(str);
    }

    public static p a() {
        return f4753a;
    }

    public static p a(String str, int i) {
        if (f4753a == null) {
            p pVar = new p(str, i);
            f4753a = pVar;
            pVar.g = true;
            pVar.h = 0;
        }
        return f4753a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public short a(InputStream inputStream) {
        short s = 0;
        for (byte b : a(inputStream, 2)) {
            s = (short) (((short) (s << 8)) | (b & UByte.MAX_VALUE));
        }
        return s;
    }

    private void a(n nVar) {
        com.reyun.tracking.a.a.d("Tracking", "重新连接");
        d();
        try {
            Thread.sleep(6000L);
        } catch (InterruptedException unused) {
        }
        b(nVar);
    }

    public static byte[] a(int i) {
        return new byte[]{(byte) ((i >> 24) & 255), (byte) ((i >> 16) & 255), (byte) ((i >> 8) & 255), (byte) (i & 255)};
    }

    /* JADX INFO: Access modifiers changed from: private */
    public byte[] a(InputStream inputStream, int i) {
        byte[] bArr = new byte[i];
        int i2 = 0;
        while (i2 < i) {
            i2 += inputStream.read(bArr, i2, i - i2);
        }
        return bArr;
    }

    public static void b() {
        p pVar = f4753a;
        if (pVar != null) {
            pVar.g = false;
            pVar.d();
            f4753a = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(n nVar) {
        com.reyun.tracking.a.a.d("Tracking", "初始化连接");
        Socket socket = new Socket();
        this.b = socket;
        try {
            socket.connect(new InetSocketAddress(this.c, this.d), 3000);
            this.b.setSoTimeout(3000);
            if (!this.b.isConnected()) {
                throw new Exception("没连接上");
            }
            this.e = this.b.getInputStream();
            this.f = this.b.getOutputStream();
            this.h = 0;
            com.reyun.tracking.sdk.a.a().a(new r(this), 120000L);
        } catch (Exception e) {
            e.printStackTrace();
            com.reyun.tracking.a.a.d("Test", "request url:" + this.i + "   errorCounter=" + this.h);
            int i = this.h + 1;
            this.h = i;
            if (i >= 5) {
                Tracking.setUseTcp(false);
            } else if (this.g) {
                a(nVar);
            }
        }
    }

    static /* synthetic */ int d(p pVar) {
        int i = pVar.h;
        pVar.h = i + 1;
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        InputStream inputStream = this.e;
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (Exception unused) {
            }
            this.e = null;
        }
        OutputStream outputStream = this.f;
        if (outputStream != null) {
            try {
                outputStream.close();
            } catch (Exception unused2) {
            }
            this.f = null;
        }
        Socket socket = this.b;
        if (socket != null) {
            try {
                socket.close();
            } catch (Exception unused3) {
            }
            this.b = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean e() {
        Socket socket = this.b;
        return socket != null && socket.isConnected();
    }

    public Runnable a(String str, String str2, n nVar) {
        this.i = str;
        byte bA = a(str);
        com.reyun.tracking.a.a.d("Tracking", "ReyunDataSyncer.getRunnable:" + str);
        return new q(this, str, str2, nVar, bA);
    }

    public void c() {
        this.h = 0;
    }
}
