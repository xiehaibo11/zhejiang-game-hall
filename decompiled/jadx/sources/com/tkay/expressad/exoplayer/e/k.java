package com.tkay.expressad.exoplayer.e;

/* JADX INFO: loaded from: classes3.dex */
public interface k {
    a a(long j);

    boolean a();

    long b();

    public static final class b implements k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final long f6575a;
        private final a b;

        @Override // com.tkay.expressad.exoplayer.e.k
        public final boolean a() {
            return false;
        }

        private b(long j) {
            this(j, 0L);
        }

        public b(long j, long j2) {
            this.f6575a = j;
            this.b = new a(j2 == 0 ? l.f6576a : new l(0L, j2));
        }

        @Override // com.tkay.expressad.exoplayer.e.k
        public final long b() {
            return this.f6575a;
        }

        @Override // com.tkay.expressad.exoplayer.e.k
        public final a a(long j) {
            return this.b;
        }
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final l f6574a;
        public final l b;

        public a(l lVar) {
            this(lVar, lVar);
        }

        public a(l lVar, l lVar2) {
            this.f6574a = (l) com.tkay.expressad.exoplayer.k.a.a(lVar);
            this.b = (l) com.tkay.expressad.exoplayer.k.a.a(lVar2);
        }

        public final String toString() {
            String str;
            StringBuilder sb = new StringBuilder("[");
            sb.append(this.f6574a);
            if (this.f6574a.equals(this.b)) {
                str = "";
            } else {
                str = ", " + this.b;
            }
            sb.append(str);
            sb.append("]");
            return sb.toString();
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && getClass() == obj.getClass()) {
                a aVar = (a) obj;
                if (this.f6574a.equals(aVar.f6574a) && this.b.equals(aVar.b)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return (this.f6574a.hashCode() * 31) + this.b.hashCode();
        }
    }
}
