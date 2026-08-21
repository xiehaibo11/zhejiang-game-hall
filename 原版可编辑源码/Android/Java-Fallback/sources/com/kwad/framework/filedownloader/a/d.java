package com.kwad.framework.filedownloader.a;

public class d {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.framework.filedownloader.a.b a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r10, com.kwad.framework.filedownloader.a.b r11, java.util.List<java.lang.String> r12) {
            int r0 = r11.getResponseCode()
            java.lang.String r1 = "Location"
            java.lang.String r2 = r11.aY(r1)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r4 = 0
            r5 = r4
        L11:
            boolean r6 = bd(r0)
            if (r6 == 0) goto L78
            r6 = 2
            r7 = 1
            if (r2 == 0) goto L5e
            boolean r8 = com.kwad.framework.filedownloader.f.d.aeI
            if (r8 == 0) goto L33
            java.lang.Class<com.kwad.framework.filedownloader.a.d> r8 = com.kwad.framework.filedownloader.a.d.class
            r9 = 3
            java.lang.Object[] r9 = new java.lang.Object[r9]
            r9[r4] = r2
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r9[r7] = r0
            r9[r6] = r3
            java.lang.String r0 = "redirect to %s with %d, %s"
            com.kwad.framework.filedownloader.f.d.c(r8, r0, r9)
        L33:
            r11.ug()
            com.kwad.framework.filedownloader.a.b r11 = a(r10, r2)
            r3.add(r2)
            r11.execute()
            int r0 = r11.getResponseCode()
            java.lang.String r2 = r11.aY(r1)
            int r5 = r5 + r7
            r6 = 10
            if (r5 >= r6) goto L4e
            goto L11
        L4e:
            java.lang.IllegalAccessException r10 = new java.lang.IllegalAccessException
            java.lang.Object[] r11 = new java.lang.Object[r7]
            r11[r4] = r3
            java.lang.String r12 = "redirect too many times! %s"
            java.lang.String r11 = com.kwad.framework.filedownloader.f.f.b(r12, r11)
            r10.<init>(r11)
            throw r10
        L5e:
            java.lang.IllegalAccessException r10 = new java.lang.IllegalAccessException
            java.lang.Object[] r12 = new java.lang.Object[r6]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r12[r4] = r0
            java.util.Map r11 = r11.uf()
            r12[r7] = r11
            java.lang.String r11 = "receive %d (redirect) but the location is null with response [%s]"
            java.lang.String r11 = com.kwad.framework.filedownloader.f.f.b(r11, r12)
            r10.<init>(r11)
            throw r10
        L78:
            if (r12 == 0) goto L7d
            r12.addAll(r3)
        L7d:
            return r11
    }

    private static com.kwad.framework.filedownloader.a.b a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r3, java.lang.String r4) {
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.a.b r4 = r0.bc(r4)
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L10:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L3e
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L10
            java.util.Iterator r0 = r0.iterator()
        L2e:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L10
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            r4.addHeader(r1, r2)
            goto L2e
        L3e:
            return r4
    }

    private static boolean bd(int r1) {
            r0 = 301(0x12d, float:4.22E-43)
            if (r1 == r0) goto L1b
            r0 = 302(0x12e, float:4.23E-43)
            if (r1 == r0) goto L1b
            r0 = 303(0x12f, float:4.25E-43)
            if (r1 == r0) goto L1b
            r0 = 300(0x12c, float:4.2E-43)
            if (r1 == r0) goto L1b
            r0 = 307(0x133, float:4.3E-43)
            if (r1 == r0) goto L1b
            r0 = 308(0x134, float:4.32E-43)
            if (r1 != r0) goto L19
            goto L1b
        L19:
            r1 = 0
            return r1
        L1b:
            r1 = 1
            return r1
    }
}
