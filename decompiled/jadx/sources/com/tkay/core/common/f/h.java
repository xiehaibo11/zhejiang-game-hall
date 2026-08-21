package com.tkay.core.common.f;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.common.f.j;
import java.io.Serializable;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public abstract class h<T extends j> implements Serializable {
    public static final int c = 1;
    public static final int d = 2;
    public static final int e = 3;
    public static final int f = 4;
    public static final int g = 10;
    public static final int w = 1;
    public static final int x = 2;
    protected String A;
    protected int B;
    protected String C;
    protected String D;
    protected String E;
    protected String F;
    protected String G;
    protected String H;
    protected Bitmap I;
    protected j J;
    protected String K;
    protected String L;
    protected int M;
    protected String N;
    protected String O;
    protected String P;
    protected String Q;
    protected String h;
    protected String i;
    protected String j;
    protected String k;
    protected String l;
    protected String m;
    protected String n;
    protected String o;
    protected String p;
    protected String q;
    protected String r;
    protected String s;
    protected String t;
    protected String u;
    protected int v;
    protected int y;
    protected int z;

    public boolean L() {
        return false;
    }

    public abstract List<String> b(T t);

    public abstract int d();

    public abstract String m();

    protected h() {
    }

    public final String e() {
        return this.P;
    }

    public final void c(String str) {
        this.P = str;
    }

    public final String f() {
        return this.Q;
    }

    public final void d(String str) {
        this.Q = str;
    }

    private int a() {
        return this.M;
    }

    public final boolean g() {
        return this.M == 1;
    }

    public final void b(int i) {
        this.M = i;
    }

    public final String h() {
        return this.N;
    }

    public final void e(String str) {
        this.N = str;
    }

    public final String i() {
        return this.O;
    }

    public final void f(String str) {
        this.O = str;
    }

    public final String j() {
        return this.K;
    }

    public final void g(String str) {
        this.K = str;
    }

    public final j k() {
        return this.J;
    }

    public final void a(j jVar) {
        this.J = jVar;
    }

    public final String l() {
        return this.H;
    }

    public final void h(String str) {
        this.H = str;
    }

    public final int n() {
        return this.B;
    }

    public final void c(int i) {
        this.B = i;
    }

    public final String o() {
        return this.C;
    }

    public final void i(String str) {
        this.C = str;
    }

    public final String p() {
        return this.h;
    }

    public final void j(String str) {
        this.h = str;
    }

    public final String q() {
        return this.i;
    }

    public final void k(String str) {
        this.i = str;
    }

    public final String r() {
        return this.j;
    }

    public final void l(String str) {
        this.j = str;
    }

    public final String s() {
        return this.k;
    }

    public final void m(String str) {
        this.k = str;
    }

    public final String t() {
        return this.l;
    }

    public final void n(String str) {
        this.l = str;
    }

    private String b() {
        return this.m;
    }

    public final void o(String str) {
        this.m = str;
    }

    public final String u() {
        return this.n;
    }

    public final void p(String str) {
        this.n = str;
    }

    public final String v() {
        return this.o;
    }

    public final void q(String str) {
        this.o = str;
    }

    public final String w() {
        return this.p;
    }

    public final void r(String str) {
        this.p = str;
    }

    public final String x() {
        return this.q;
    }

    public final void s(String str) {
        this.q = str;
    }

    public final String y() {
        return this.r;
    }

    public final void t(String str) {
        this.r = str;
    }

    public final String z() {
        return this.s;
    }

    public final void u(String str) {
        this.s = str;
    }

    public final String A() {
        return this.t;
    }

    public final void v(String str) {
        this.t = str;
    }

    public final String B() {
        return this.u;
    }

    public final void w(String str) {
        this.u = str;
    }

    public final int C() {
        return this.v;
    }

    public final void d(int i) {
        this.v = i;
    }

    public final int D() {
        return this.y;
    }

    public final void e(int i) {
        this.y = i;
    }

    public final boolean E() {
        return !TextUtils.isEmpty(this.q);
    }

    private int c() {
        return this.z;
    }

    public final void f(int i) {
        this.z = i;
    }

    private String N() {
        return this.A;
    }

    public final void x(String str) {
        this.A = str;
    }

    public final String F() {
        return this.D;
    }

    public final void y(String str) {
        this.D = str;
    }

    public final String G() {
        return this.E;
    }

    public final void z(String str) {
        this.E = str;
    }

    public final String H() {
        return this.F;
    }

    public final void A(String str) {
        this.F = str;
    }

    public final String I() {
        return this.G;
    }

    public final void B(String str) {
        this.G = str;
    }

    public final Bitmap J() {
        return this.I;
    }

    public final void a(Bitmap bitmap) {
        this.I = bitmap;
    }

    public final boolean K() {
        return (TextUtils.isEmpty(this.E) || TextUtils.isEmpty(this.D) || TextUtils.isEmpty(this.F) || TextUtils.isEmpty(this.G)) ? false : true;
    }

    public final String M() {
        return this.L;
    }

    public final void C(String str) {
        this.L = str;
    }

    public final boolean D(String str) {
        return TextUtils.equals(this.q, str) && !TextUtils.isEmpty(str);
    }
}
