package com.tkay.expressad.exoplayer.g;

import com.tkay.expressad.exoplayer.m;

public interface d {
    public static final d a = new d() {
        @Override
        public final boolean a(m mVar) {
            String str = mVar.h;
            return "application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str);
        }

        /* JADX WARN: Removed duplicated region for block: B:18:0x0036  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final b b(m mVar) {
            byte b;
            String str = mVar.h;
            int iHashCode = str.hashCode();
            if (iHashCode != -1248341703) {
                if (iHashCode != 1154383568) {
                    b = (iHashCode == 1652648887 && str.equals("application/x-scte35")) ? (byte) 2 : (byte) -1;
                } else if (str.equals("application/x-emsg")) {
                    b = 1;
                }
            } else if (str.equals("application/id3")) {
                b = 0;
            }
            if (b == 0) {
                return new com.tkay.expressad.exoplayer.g.b.g();
            }
            if (b == 1) {
                return new com.tkay.expressad.exoplayer.g.a.b();
            }
            if (b == 2) {
                return new com.tkay.expressad.exoplayer.g.c.c();
            }
            throw new IllegalArgumentException("Attempted to create decoder for unsupported format");
        }
    };

    boolean a(m mVar);

    b b(m mVar);
}
