package com.tkay.core.common.f;

import java.util.Iterator;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class r extends h<t> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6163a = 1;
    public static final int b = 2;
    public int R;
    public long S;
    String T = "";
    private String U;
    private String V;
    private String W;
    private String X;
    private String Y;
    private String Z;
    private String aa;
    private String ab;
    private String ac;
    private String ad;
    private long ae;
    private int af;
    private String ag;
    private String ah;
    private String ai;
    private String aj;
    private String ak;

    @Override // com.tkay.core.common.f.h
    public final int d() {
        return 1;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00e1  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00f1  */
    @Override // com.tkay.core.common.f.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final /* synthetic */ java.util.List b(com.tkay.core.common.f.j r11) {
        /*
            Method dump skipped, instruction units count: 514
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.f.r.b(com.tkay.core.common.f.j):java.util.List");
    }

    private String Z() {
        return this.ak;
    }

    public final void a(String str) {
        this.ak = str;
    }

    public final String a() {
        return this.ag;
    }

    public final void b(String str) {
        this.ag = str;
    }

    public final String b() {
        return this.ah;
    }

    public final void E(String str) {
        this.ah = str;
    }

    public final String c() {
        return this.ai;
    }

    public final void F(String str) {
        this.ai = str;
    }

    public final String N() {
        return this.aj;
    }

    public final void G(String str) {
        this.aj = str;
    }

    public final int O() {
        return this.af;
    }

    public final void a(int i) {
        this.af = i;
    }

    public final String P() {
        return this.U;
    }

    public final void H(String str) {
        this.U = str;
    }

    public final String Q() {
        return this.V;
    }

    public final void I(String str) {
        this.V = str;
    }

    public final String R() {
        return this.W;
    }

    public final void J(String str) {
        this.W = str;
    }

    public final String S() {
        return this.X;
    }

    public final void K(String str) {
        this.X = str;
    }

    public final String T() {
        return this.Y;
    }

    public final void L(String str) {
        this.Y = str;
    }

    public final String U() {
        return this.Z;
    }

    public final void M(String str) {
        this.Z = str;
    }

    public final String V() {
        return this.aa;
    }

    public final void N(String str) {
        this.aa = str;
    }

    public final String W() {
        return this.ab;
    }

    public final void O(String str) {
        this.ab = str;
    }

    public final String X() {
        return this.ac;
    }

    public final void P(String str) {
        this.ac = str;
    }

    public final String Y() {
        return this.ad;
    }

    public final void Q(String str) {
        this.ad = str;
    }

    private int aa() {
        return this.R;
    }

    private void g(int i) {
        this.R = i;
    }

    private long ab() {
        return this.S;
    }

    private void b(long j) {
        this.S = j;
    }

    private long ac() {
        return this.ae;
    }

    public final void a(long j) {
        this.ae = j;
    }

    public final boolean a(t tVar) {
        return tVar == null || System.currentTimeMillis() - this.ae > tVar.A();
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00ce  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00ef  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.util.List<java.lang.String> b(com.tkay.core.common.f.t r11) {
        /*
            Method dump skipped, instruction units count: 512
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.f.r.b(com.tkay.core.common.f.t):java.util.List");
    }

    @Override // com.tkay.core.common.f.h
    public final String m() {
        return this.T;
    }

    public final String R(String str) {
        try {
            JSONObject jSONObject = new JSONObject(this.ak);
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                str = str.replaceAll("\\{" + next + "\\}", jSONObject.optString(next));
            }
        } catch (Throwable unused) {
        }
        return str;
    }
}
