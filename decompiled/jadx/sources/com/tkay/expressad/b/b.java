package com.tkay.expressad.b;

import java.io.FileOutputStream;
import java.io.InputStream;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class b extends com.tkay.core.common.res.image.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6451a;

    @Override // com.tkay.core.common.res.image.b
    protected final Map<String, String> a() {
        return null;
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void a(String str, String str2) {
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void b() {
    }

    @Override // com.tkay.core.common.res.image.b
    protected final void c() {
    }

    private b(String str, String str2) {
        super(str);
        this.f6451a = str2;
    }

    @Override // com.tkay.core.common.res.image.b
    protected final boolean a(InputStream inputStream) {
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(this.f6451a);
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

    @Override // com.tkay.core.common.res.image.b
    protected final void a(com.tkay.core.common.l.b.b bVar) {
        com.tkay.core.common.l.b.a.a().a(bVar, 2);
    }
}
