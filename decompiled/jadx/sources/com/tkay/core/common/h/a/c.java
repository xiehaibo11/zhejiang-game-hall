package com.tkay.core.common.h.a;

import com.tkay.core.common.h.a.d.AnonymousClass1;
import java.io.ByteArrayOutputStream;
import java.util.zip.GZIPOutputStream;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class c {
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 2;
    public static final int g = 3;
    public static final int h = 4;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f6188a = 0;
    protected int i;
    protected String j;

    public interface a {
        void a(Object obj);

        void a(Throwable th);
    }

    public void a(String str, String str2, String str3, int i) {
    }

    public abstract int c();

    public abstract int d();

    public abstract byte[] e();

    public abstract boolean f();

    protected int g() {
        return 0;
    }

    public final void a(int i, String str) {
        this.i = i;
        this.j = str;
    }

    protected static byte[] a(String str) {
        if (str == null || str.length() == 0) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            gZIPOutputStream.write(str.getBytes("utf-8"));
            gZIPOutputStream.close();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return byteArrayOutputStream.toByteArray();
    }

    protected final JSONObject h() {
        return com.tkay.core.common.h.c.a(g());
    }

    private static JSONObject a() {
        return com.tkay.core.common.h.c.a();
    }

    public final void a(a aVar) {
        com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) d.a().new AnonymousClass1(this, aVar), 4);
    }
}
