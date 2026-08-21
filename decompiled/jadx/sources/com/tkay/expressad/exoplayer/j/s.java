package com.tkay.expressad.exoplayer.j;

import android.text.TextUtils;
import com.tkay.expressad.exoplayer.j.h;
import com.tkay.expressad.exoplayer.k.af;
import java.io.IOException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public interface s extends h {
    public static final com.tkay.expressad.exoplayer.k.u<String> c = new com.tkay.expressad.exoplayer.k.u<String>() { // from class: com.tkay.expressad.exoplayer.j.s.1
        @Override // com.tkay.expressad.exoplayer.k.u
        public final /* synthetic */ boolean a(String str) {
            String strD = af.d(str);
            if (TextUtils.isEmpty(strD)) {
                return false;
            }
            return ((strD.contains("text") && !strD.contains("text/vtt")) || strD.contains("html") || strD.contains("xml")) ? false : true;
        }

        /* JADX INFO: renamed from: a, reason: avoid collision after fix types in other method */
        private static boolean a2(String str) {
            String strD = af.d(str);
            if (TextUtils.isEmpty(strD)) {
                return false;
            }
            return ((strD.contains("text") && !strD.contains("text/vtt")) || strD.contains("html") || strD.contains("xml")) ? false : true;
        }
    };

    @Override // com.tkay.expressad.exoplayer.j.h
    int a(byte[] bArr, int i, int i2);

    @Override // com.tkay.expressad.exoplayer.j.h
    long a(k kVar);

    void a(String str);

    void a(String str, String str2);

    @Override // com.tkay.expressad.exoplayer.j.h
    void b();

    Map<String, List<String>> c();

    void d();

    public interface b extends h.a {
        @Override // com.tkay.expressad.exoplayer.j.h.a
        /* synthetic */ h a();

        @Deprecated
        void a(String str);

        @Deprecated
        void a(String str, String str2);

        /* JADX INFO: renamed from: b */
        s a();

        f c();

        @Deprecated
        void d();

        /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.j.s$b$-CC, reason: invalid class name */
        public final /* synthetic */ class CC {
        }
    }

    public static final class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Map<String, String> f6736a = new HashMap();
        private Map<String, String> b;

        public final synchronized void a(String str, String str2) {
            this.b = null;
            this.f6736a.put(str, str2);
        }

        private synchronized void a(Map<String, String> map) {
            this.b = null;
            this.f6736a.putAll(map);
        }

        private synchronized void b(Map<String, String> map) {
            this.b = null;
            this.f6736a.clear();
            this.f6736a.putAll(map);
        }

        public final synchronized void a(String str) {
            this.b = null;
            this.f6736a.remove(str);
        }

        public final synchronized void a() {
            this.b = null;
            this.f6736a.clear();
        }

        public final synchronized Map<String, String> b() {
            if (this.b == null) {
                this.b = Collections.unmodifiableMap(new HashMap(this.f6736a));
            }
            return this.b;
        }
    }

    public static abstract class a implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final f f6734a = new f();

        protected abstract s a(f fVar);

        @Override // com.tkay.expressad.exoplayer.j.s.b, com.tkay.expressad.exoplayer.j.h.a
        /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
        public final s a() {
            return a(this.f6734a);
        }

        @Override // com.tkay.expressad.exoplayer.j.s.b
        public final f c() {
            return this.f6734a;
        }

        @Override // com.tkay.expressad.exoplayer.j.s.b
        @Deprecated
        public final void a(String str, String str2) {
            this.f6734a.a(str, str2);
        }

        @Override // com.tkay.expressad.exoplayer.j.s.b
        @Deprecated
        public final void a(String str) {
            this.f6734a.a(str);
        }

        @Override // com.tkay.expressad.exoplayer.j.s.b
        @Deprecated
        public final void d() {
            this.f6734a.a();
        }
    }

    public static class c extends IOException {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final int f6735a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public final int d;
        public final k e;

        @Retention(RetentionPolicy.SOURCE)
        public @interface a {
        }

        private c(k kVar, int i) {
            this.e = kVar;
            this.d = i;
        }

        public c(String str, k kVar) {
            super(str);
            this.e = kVar;
            this.d = 1;
        }

        public c(IOException iOException, k kVar, int i) {
            super(iOException);
            this.e = kVar;
            this.d = i;
        }

        public c(String str, IOException iOException, k kVar) {
            super(str, iOException);
            this.e = kVar;
            this.d = 1;
        }
    }

    public static final class d extends c {
        public final String f;

        public d(String str, k kVar) {
            super("Invalid content type: ".concat(String.valueOf(str)), kVar);
            this.f = str;
        }
    }

    public static final class e extends c {
        public final int f;
        public final Map<String, List<String>> g;

        public e(int i, Map<String, List<String>> map, k kVar) {
            super("Response code: ".concat(String.valueOf(i)), kVar);
            this.f = i;
            this.g = map;
        }
    }
}
