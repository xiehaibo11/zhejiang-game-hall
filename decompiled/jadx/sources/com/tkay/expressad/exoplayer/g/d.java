package com.tkay.expressad.exoplayer.g;

import com.tkay.expressad.exoplayer.m;

/* JADX INFO: loaded from: classes3.dex */
public interface d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final d f6608a = new d() { // from class: com.tkay.expressad.exoplayer.g.d.1
        @Override // com.tkay.expressad.exoplayer.g.d
        public final boolean a(m mVar) {
            String str = mVar.h;
            return "application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str);
        }

        /* JADX WARN: Removed duplicated region for block: B:18:0x0036  */
        @Override // com.tkay.expressad.exoplayer.g.d
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final com.tkay.expressad.exoplayer.g.b b(com.tkay.expressad.exoplayer.m r5) {
            /*
                r4 = this;
                java.lang.String r5 = r5.h
                int r0 = r5.hashCode()
                r1 = -1248341703(0xffffffffb597d139, float:-1.1311269E-6)
                r2 = 2
                r3 = 1
                if (r0 == r1) goto L2c
                r1 = 1154383568(0x44ce7ed0, float:1651.9629)
                if (r0 == r1) goto L22
                r1 = 1652648887(0x62816bb7, float:1.1936958E21)
                if (r0 == r1) goto L18
                goto L36
            L18:
                java.lang.String r0 = "application/x-scte35"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = r2
                goto L37
            L22:
                java.lang.String r0 = "application/x-emsg"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = r3
                goto L37
            L2c:
                java.lang.String r0 = "application/id3"
                boolean r5 = r5.equals(r0)
                if (r5 == 0) goto L36
                r5 = 0
                goto L37
            L36:
                r5 = -1
            L37:
                if (r5 == 0) goto L51
                if (r5 == r3) goto L4b
                if (r5 != r2) goto L43
                com.tkay.expressad.exoplayer.g.c.c r5 = new com.tkay.expressad.exoplayer.g.c.c
                r5.<init>()
                return r5
            L43:
                java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Attempted to create decoder for unsupported format"
                r5.<init>(r0)
                throw r5
            L4b:
                com.tkay.expressad.exoplayer.g.a.b r5 = new com.tkay.expressad.exoplayer.g.a.b
                r5.<init>()
                return r5
            L51:
                com.tkay.expressad.exoplayer.g.b.g r5 = new com.tkay.expressad.exoplayer.g.b.g
                r5.<init>()
                return r5
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.g.d.AnonymousClass1.b(com.tkay.expressad.exoplayer.m):com.tkay.expressad.exoplayer.g.b");
        }
    };

    boolean a(m mVar);

    b b(m mVar);
}
