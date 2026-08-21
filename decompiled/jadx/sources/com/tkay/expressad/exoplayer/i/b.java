package com.tkay.expressad.exoplayer.i;

import android.os.SystemClock;
import com.tkay.expressad.exoplayer.h.ae;
import com.tkay.expressad.exoplayer.m;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public abstract class b implements f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final m[] f6690a;
    private final long[] b;
    private int c;
    protected final ae g;
    protected final int h;
    protected final int[] i;

    @Override // com.tkay.expressad.exoplayer.i.f
    public void a() {
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public void a(float f) {
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final void e() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    public b(ae aeVar, int... iArr) {
        int i = 0;
        Object[] objArr = 0;
        com.tkay.expressad.exoplayer.k.a.b(iArr.length > 0);
        this.g = (ae) com.tkay.expressad.exoplayer.k.a.a(aeVar);
        int length = iArr.length;
        this.h = length;
        this.f6690a = new m[length];
        for (int i2 = 0; i2 < iArr.length; i2++) {
            this.f6690a[i2] = aeVar.a(iArr[i2]);
        }
        Arrays.sort(this.f6690a, new a(objArr == true ? 1 : 0));
        this.i = new int[this.h];
        while (true) {
            int i3 = this.h;
            if (i < i3) {
                this.i[i] = aeVar.a(this.f6690a[i]);
                i++;
            } else {
                this.b = new long[i3];
                return;
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final ae f() {
        return this.g;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int g() {
        return this.i.length;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final m a(int i) {
        return this.f6690a[i];
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int b(int i) {
        return this.i[i];
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int a(m mVar) {
        for (int i = 0; i < this.h; i++) {
            if (this.f6690a[i] == mVar) {
                return i;
            }
        }
        return -1;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int c(int i) {
        for (int i2 = 0; i2 < this.h; i2++) {
            if (this.i[i2] == i) {
                return i2;
            }
        }
        return -1;
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final m h() {
        return this.f6690a[b()];
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final int i() {
        return this.i[b()];
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public int a(long j, List<? extends com.tkay.expressad.exoplayer.h.b.i> list) {
        return list.size();
    }

    @Override // com.tkay.expressad.exoplayer.i.f
    public final boolean a(int i, long j) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        boolean zB = b(i, jElapsedRealtime);
        int i2 = 0;
        while (i2 < this.h && !zB) {
            zB = (i2 == i || b(i2, jElapsedRealtime)) ? false : true;
            i2++;
        }
        if (!zB) {
            return false;
        }
        long[] jArr = this.b;
        jArr[i] = Math.max(jArr[i], jElapsedRealtime + j);
        return true;
    }

    protected final boolean b(int i, long j) {
        return this.b[i] > j;
    }

    public int hashCode() {
        if (this.c == 0) {
            this.c = (System.identityHashCode(this.g) * 31) + Arrays.hashCode(this.i);
        }
        return this.c;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            b bVar = (b) obj;
            if (this.g == bVar.g && Arrays.equals(this.i, bVar.i)) {
                return true;
            }
        }
        return false;
    }

    private static final class a implements Comparator<m> {
        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }

        @Override // java.util.Comparator
        public final /* bridge */ /* synthetic */ int compare(m mVar, m mVar2) {
            return mVar2.d - mVar.d;
        }

        private static int a(m mVar, m mVar2) {
            return mVar2.d - mVar.d;
        }
    }
}
