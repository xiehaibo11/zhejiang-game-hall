package com.tkay.expressad.out;

import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import java.io.Serializable;

public class d implements com.tkay.expressad.e.a, com.tkay.expressad.foundation.g.d.c, Serializable {
    private static final long a = 1;
    public static final int cR = 1;
    public static final int cS = 2;
    public static final int cT = 3;
    public String cU;
    private double j;
    private Object l;
    private String n;
    private Drawable o;
    private Drawable p;
    private k q;
    private String b = "";
    private String c = "";
    private String d = "";
    private String e = "";
    private String f = "";
    private String g = "";
    private String h = "";
    private long i = 0;
    private int k = 33333;
    private int m = 1;
    private int r = 0;
    private int s = 0;
    private int t = 0;

    @Override
    public final void a(String str, String str2) {
    }

    private Drawable a() {
        return this.o;
    }

    private Drawable b() {
        return this.p;
    }

    private void a(k kVar) {
        this.q = kVar;
        if (TextUtils.isEmpty(this.g)) {
            return;
        }
        com.tkay.expressad.foundation.g.d.b.a(com.tkay.core.common.b.m.a().f()).a(this.g, this);
    }

    private void b(k kVar) {
        this.q = kVar;
        if (TextUtils.isEmpty(this.h)) {
            return;
        }
        com.tkay.expressad.foundation.g.d.b.a(com.tkay.core.common.b.m.a().f()).a(this.h, this);
    }

    private void c(k kVar) {
        this.q = kVar;
    }

    public final double aX() {
        return this.j;
    }

    public final void a(double d) {
        this.j = d;
    }

    public final int aY() {
        return this.k;
    }

    public final void o(int i) {
        this.k = i;
    }

    private Object c() {
        return this.l;
    }

    private void a(Object obj) {
        this.l = obj;
    }

    private String d() {
        return this.cU;
    }

    public void o(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.cU = str;
    }

    public final String aZ() {
        return this.b;
    }

    public final void v(String str) {
        this.b = str;
    }

    public final String ba() {
        return this.c;
    }

    public final void w(String str) {
        this.c = str;
    }

    public final String bb() {
        return this.d;
    }

    public final void x(String str) {
        this.d = str;
    }

    public final String bc() {
        return this.e;
    }

    public final void y(String str) {
        this.e = str;
    }

    public final String bd() {
        return this.g;
    }

    public final void z(String str) {
        this.g = str;
    }

    public final String be() {
        return this.h;
    }

    public final void A(String str) {
        this.h = str;
    }

    public final int bf() {
        return this.m;
    }

    public final void p(int i) {
        this.m = i;
    }

    public final long bg() {
        return this.i;
    }

    public final void a(long j) {
        this.i = j;
    }

    public final String bh() {
        return this.f;
    }

    public final void B(String str) {
        this.f = str;
    }

    private int e() {
        return this.r;
    }

    private void a(int i) {
        this.r = i;
    }

    private int f() {
        return this.s;
    }

    private void b(int i) {
        this.s = i;
    }

    private String g() {
        return this.n;
    }

    private void a(String str) {
        this.n = str;
    }

    private static Drawable a(Bitmap bitmap) {
        return new BitmapDrawable(bitmap);
    }

    private void a(Drawable drawable) {
        this.o = drawable;
    }

    private void b(Drawable drawable) {
        this.p = drawable;
    }

    public final void q(int i) {
        this.t = i;
    }

    public final int bi() {
        return this.t;
    }

    @Override
    public final void a(Bitmap bitmap, String str) {
        String str2;
        if (!TextUtils.isEmpty(this.h) && this.h.equals(str) && bitmap != null) {
            this.p = a(bitmap);
            if (this.q != null) {
                a(bitmap);
            }
        }
        if (TextUtils.isEmpty(this.g) || (str2 = this.g) == null || !str2.equals(str) || bitmap == null) {
            return;
        }
        this.o = a(bitmap);
        if (this.q != null) {
            a(bitmap);
        }
    }
}
