package com.meizu.cloud.pushsdk.d.c;

import com.meizu.cloud.pushsdk.d.a.c;
import com.meizu.cloud.pushsdk.d.c.a;
import com.meizu.cloud.pushsdk.notification.model.AppIconSetting;

/* JADX INFO: loaded from: classes3.dex */
public class b extends com.meizu.cloud.pushsdk.d.c.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f4582a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final int i;

    public abstract class a<T extends a<T>> extends a.AbstractC0321a<T> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f4583a;
        private String b;
        private String c;
        private String d;
        private String e;
        private String f;
        private String g;
        private String h;
        private int i = 0;

        public T a(int i) {
            this.i = i;
            return a();
        }

        public T a(String str) {
            this.f4583a = str;
            return a();
        }

        public T b(String str) {
            this.b = str;
            return a();
        }

        public b b() {
            return new b(this);
        }

        public T c(String str) {
            this.c = str;
            return a();
        }

        public T d(String str) {
            this.d = str;
            return a();
        }

        public T e(String str) {
            this.e = str;
            return a();
        }

        public T f(String str) {
            this.f = str;
            return a();
        }

        public T g(String str) {
            this.g = str;
            return a();
        }

        public T h(String str) {
            this.h = str;
            return a();
        }
    }

    /* JADX INFO: renamed from: com.meizu.cloud.pushsdk.d.c.b$b, reason: collision with other inner class name */
    class C0322b extends a<C0322b> {
        private C0322b() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // com.meizu.cloud.pushsdk.d.c.a.AbstractC0321a
        /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
        public C0322b a() {
            return this;
        }
    }

    protected b(a<?> aVar) {
        super(aVar);
        this.b = ((a) aVar).b;
        this.c = ((a) aVar).c;
        this.f4582a = ((a) aVar).f4583a;
        this.d = ((a) aVar).d;
        this.e = ((a) aVar).e;
        this.f = ((a) aVar).f;
        this.g = ((a) aVar).g;
        this.h = ((a) aVar).h;
        this.i = ((a) aVar).i;
    }

    public static a<?> d() {
        return new C0322b();
    }

    public c e() {
        c cVar = new c();
        cVar.a("en", this.f4582a);
        cVar.a("ti", this.b);
        cVar.a(AppIconSetting.DEFAULT_LARGE_ICON, this.c);
        cVar.a("pv", this.d);
        cVar.a("pn", this.e);
        cVar.a("si", this.f);
        cVar.a("ms", this.g);
        cVar.a("ect", this.h);
        cVar.a("br", Integer.valueOf(this.i));
        return a(cVar);
    }
}
