package com.igexin.b.a.b;

/* JADX INFO: loaded from: classes2.dex */
public abstract class e extends com.igexin.b.a.d.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2442a;
    public b b;
    public Object c;
    public d d;

    public e(int i, String str, b bVar) {
        super(i);
        if (str != null) {
            this.f2442a = a(str);
        }
        this.b = bVar;
    }

    public e(String str, b bVar) {
        this(0, str, bVar);
    }

    private String a(String str) {
        return f.a(f.a(str));
    }

    @Override // com.igexin.b.a.d.e
    public void f() {
        b bVar = this.b;
        if (bVar != null) {
            bVar.a(false);
        }
        this.b = null;
        this.d = null;
        this.f2442a = null;
        super.f();
    }
}
