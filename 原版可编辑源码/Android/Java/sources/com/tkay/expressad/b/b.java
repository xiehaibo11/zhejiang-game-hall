package com.tkay.expressad.b;

import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.Map;

public final class b extends com.tkay.core.common.res.image.b {
    String a;

    @Override
    protected final Map<String, String> a() {
        return null;
    }

    @Override
    protected final void a(String str, String str2) {
    }

    @Override
    protected final void b() {
    }

    @Override
    protected final void c() {
    }

    private b(String str, String str2) {
        super(str);
        this.a = str2;
    }

    @Override
    protected final boolean a(InputStream inputStream) {
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(this.a);
            byte[] bArr = new byte[2048];
            while (true) {
                int i = inputStream.read(bArr);
                if (i != -1) {
                    fileOutputStream.write(bArr, 0, i);
                } else {
                    fileOutputStream.close();
                    return true;
                }
            }
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        com.tkay.core.common.l.b.a.a().a(bVar, 2);
    }
}
