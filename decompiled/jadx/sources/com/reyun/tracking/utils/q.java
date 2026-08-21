package com.reyun.tracking.utils;

import com.reyun.tracking.sdk.Tracking;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
class q implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f4754a;
    final /* synthetic */ String b;
    final /* synthetic */ n c;
    final /* synthetic */ byte d;
    final /* synthetic */ p e;

    q(p pVar, String str, String str2, n nVar, byte b) {
        this.e = pVar;
        this.f4754a = str;
        this.b = str2;
        this.c = nVar;
        this.d = b;
    }

    @Override // java.lang.Runnable
    public void run() {
        com.reyun.tracking.a.a.d("Tracking", "=======> Begin send data to api: " + this.f4754a);
        com.reyun.tracking.a.a.d("Tracking", "=======> " + this.b);
        if (!this.e.e() && this.e.g) {
            this.e.b(this.c);
        }
        if (!this.e.e()) {
            this.c.a(new Exception("连接已释放"), "连接已释放");
            return;
        }
        try {
            OutputStream outputStream = this.e.b.getOutputStream();
            byte[] bArrA = this.b != null ? com.reyun.tracking.a.i.d ? a.a().a(this.b) : this.b.getBytes("UTF-8") : null;
            int length = bArrA == null ? 0 : bArrA.length;
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            byteArrayOutputStream.write(p.a(length + 14));
            byteArrayOutputStream.write(0);
            byteArrayOutputStream.write(2);
            byteArrayOutputStream.write(this.d);
            byteArrayOutputStream.write(new byte[2]);
            byteArrayOutputStream.write(0);
            byteArrayOutputStream.write(new byte[4]);
            byteArrayOutputStream.write(p.a(length));
            if (bArrA != null) {
                byteArrayOutputStream.write(bArrA);
            }
            outputStream.write(byteArrayOutputStream.toByteArray());
            outputStream.flush();
            InputStream inputStream = this.e.b.getInputStream();
            byte[] bArrA2 = this.e.a(inputStream, this.e.a(inputStream));
            if (bArrA2.length < 2) {
                throw new RuntimeException("返回数据长度错误 bytes.length:" + bArrA2.length);
            }
            if (bArrA2[bArrA2.length - 1] != 10 || bArrA2[bArrA2.length - 2] != 13) {
                throw new RuntimeException("数据格式结尾错误");
            }
            this.c.a(0, bArrA2);
        } catch (Exception e) {
            p.d(this.e);
            e.printStackTrace();
            this.e.d();
            this.c.a(e, e.getMessage());
            if (this.e.h >= 5) {
                Tracking.setUseTcp(false);
            }
        }
    }
}
