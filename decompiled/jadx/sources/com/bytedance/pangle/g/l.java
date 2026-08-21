package com.bytedance.pangle.g;

import android.system.Os;
import android.system.OsConstants;
import java.io.FileDescriptor;

/* JADX INFO: loaded from: classes.dex */
final class l implements k {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final long f1544a = Os.sysconf(OsConstants._SC_PAGESIZE);
    private final FileDescriptor b;
    private final long c;
    private final long d;

    l(FileDescriptor fileDescriptor, long j, long j2) {
        this.b = fileDescriptor;
        this.c = j;
        this.d = j2;
    }

    @Override // com.bytedance.pangle.g.k
    public final long a() {
        return this.d;
    }

    /* JADX WARN: Removed duplicated region for block: B:100:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x014a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x0121 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x00ca A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x005f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // com.bytedance.pangle.g.k
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(com.bytedance.pangle.g.j r19, long r20, int r22) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 334
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bytedance.pangle.g.l.a(com.bytedance.pangle.g.j, long, int):void");
    }
}
