package com.kwad.framework.filedownloader;

public final class aa implements com.kwad.framework.filedownloader.message.e.b {
    public aa() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean a(java.util.List<com.kwad.framework.filedownloader.a.a> r3, com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L29
            byte r0 = r4.sX()
            r2 = -3
            if (r0 != r2) goto L29
            java.util.Iterator r0 = r3.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L29
            java.lang.Object r2 = r0.next()
            com.kwad.framework.filedownloader.a$a r2 = (com.kwad.framework.filedownloader.a.a) r2
            com.kwad.framework.filedownloader.x$a r2 = r2.tg()
            boolean r2 = r2.c(r4)
            if (r2 == 0) goto L12
            return r1
        L29:
            java.util.Iterator r0 = r3.iterator()
        L2d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L44
            java.lang.Object r2 = r0.next()
            com.kwad.framework.filedownloader.a$a r2 = (com.kwad.framework.filedownloader.a.a) r2
            com.kwad.framework.filedownloader.x$a r2 = r2.tg()
            boolean r2 = r2.b(r4)
            if (r2 == 0) goto L2d
            return r1
        L44:
            r0 = -4
            byte r2 = r4.sX()
            if (r0 != r2) goto L66
            java.util.Iterator r0 = r3.iterator()
        L4f:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L66
            java.lang.Object r2 = r0.next()
            com.kwad.framework.filedownloader.a$a r2 = (com.kwad.framework.filedownloader.a.a) r2
            com.kwad.framework.filedownloader.x$a r2 = r2.tg()
            boolean r2 = r2.d(r4)
            if (r2 == 0) goto L4f
            return r1
        L66:
            int r0 = r3.size()
            r2 = 0
            if (r0 != r1) goto L7c
            java.lang.Object r3 = r3.get(r2)
            com.kwad.framework.filedownloader.a$a r3 = (com.kwad.framework.filedownloader.a.a) r3
            com.kwad.framework.filedownloader.x$a r3 = r3.tg()
            boolean r3 = r3.a(r4)
            return r3
        L7c:
            return r2
    }

    @Override
    public final void r(com.kwad.framework.filedownloader.message.MessageSnapshot r9) {
            r8 = this;
            int r0 = r9.getId()
            java.lang.String r0 = java.lang.Integer.toString(r0)
            java.lang.String r0 = r0.intern()
            monitor-enter(r0)
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> Ld4
            int r2 = r9.getId()     // Catch: java.lang.Throwable -> Ld4
            java.util.List r1 = r1.aV(r2)     // Catch: java.lang.Throwable -> Ld4
            int r2 = r1.size()     // Catch: java.lang.Throwable -> Ld4
            r3 = 1
            r4 = 0
            if (r2 <= 0) goto Lc1
            java.lang.Object r2 = r1.get(r4)     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.a$a r2 = (com.kwad.framework.filedownloader.a.a) r2     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.a r2 = r2.tf()     // Catch: java.lang.Throwable -> Ld4
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> Ld4
            if (r5 == 0) goto L61
            java.lang.String r5 = "~~~callback %s old[%s] new[%s] %d"
            r6 = 4
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> Ld4
            int r7 = r9.getId()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> Ld4
            r6[r4] = r7     // Catch: java.lang.Throwable -> Ld4
            byte r2 = r2.sX()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)     // Catch: java.lang.Throwable -> Ld4
            r6[r3] = r2     // Catch: java.lang.Throwable -> Ld4
            r2 = 2
            byte r3 = r9.sX()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)     // Catch: java.lang.Throwable -> Ld4
            r6[r2] = r3     // Catch: java.lang.Throwable -> Ld4
            r2 = 3
            int r3 = r1.size()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Ld4
            r6[r2] = r3     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.f.d.c(r8, r5, r6)     // Catch: java.lang.Throwable -> Ld4
        L61:
            boolean r2 = a(r1, r9)     // Catch: java.lang.Throwable -> Ld4
            if (r2 != 0) goto Ld2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r5 = "The event isn't consumed, id:"
            r3.<init>(r5)     // Catch: java.lang.Throwable -> Ld4
            int r5 = r9.getId()     // Catch: java.lang.Throwable -> Ld4
            r3.append(r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r5 = " status:"
            r3.append(r5)     // Catch: java.lang.Throwable -> Ld4
            byte r9 = r9.sX()     // Catch: java.lang.Throwable -> Ld4
            r3.append(r9)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r9 = " task-count:"
            r3.append(r9)     // Catch: java.lang.Throwable -> Ld4
            int r9 = r1.size()     // Catch: java.lang.Throwable -> Ld4
            r3.append(r9)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> Ld4
            r2.<init>(r9)     // Catch: java.lang.Throwable -> Ld4
            java.util.Iterator r9 = r1.iterator()     // Catch: java.lang.Throwable -> Ld4
        L9a:
            boolean r1 = r9.hasNext()     // Catch: java.lang.Throwable -> Ld4
            if (r1 == 0) goto Lb7
            java.lang.Object r1 = r9.next()     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.a$a r1 = (com.kwad.framework.filedownloader.a.a) r1     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r3 = " | "
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.a r1 = r1.tf()     // Catch: java.lang.Throwable -> Ld4
            byte r1 = r1.sX()     // Catch: java.lang.Throwable -> Ld4
            r2.append(r1)     // Catch: java.lang.Throwable -> Ld4
            goto L9a
        Lb7:
            java.lang.String r9 = r2.toString()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Object[] r1 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.f.d.b(r8, r9, r1)     // Catch: java.lang.Throwable -> Ld4
            goto Ld2
        Lc1:
            java.lang.String r1 = "Receive the event %d, but there isn't any running task in the upper layer"
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Ld4
            byte r9 = r9.sX()     // Catch: java.lang.Throwable -> Ld4
            java.lang.Byte r9 = java.lang.Byte.valueOf(r9)     // Catch: java.lang.Throwable -> Ld4
            r2[r4] = r9     // Catch: java.lang.Throwable -> Ld4
            com.kwad.framework.filedownloader.f.d.b(r8, r1, r2)     // Catch: java.lang.Throwable -> Ld4
        Ld2:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld4
            return
        Ld4:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld4
            throw r9
    }
}
