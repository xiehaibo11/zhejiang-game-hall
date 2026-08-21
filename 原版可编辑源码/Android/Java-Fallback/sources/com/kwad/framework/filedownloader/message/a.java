package com.kwad.framework.filedownloader.message;

public interface a {

    public static class a extends com.kwad.framework.filedownloader.message.MessageSnapshot implements com.kwad.framework.filedownloader.message.a {
        private final com.kwad.framework.filedownloader.message.MessageSnapshot adH;

        public a(com.kwad.framework.filedownloader.message.MessageSnapshot r5) {
                r4 = this;
                int r0 = r5.getId()
                r4.<init>(r0)
                byte r0 = r5.sX()
                r1 = -3
                if (r0 != r1) goto L11
                r4.adH = r5
                return
            L11:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]
                r2 = 0
                int r3 = r5.getId()
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r1[r2] = r3
                r2 = 1
                byte r5 = r5.sX()
                java.lang.Byte r5 = java.lang.Byte.valueOf(r5)
                r1[r2] = r5
                java.lang.String r5 = "can't create the block complete message for id[%d], status[%d]"
                java.lang.String r5 = com.kwad.framework.filedownloader.f.f.b(r5, r1)
                r0.<init>(r5)
                throw r0
        }

        @Override
        public final byte sX() {
                r1 = this;
                r0 = 4
                return r0
        }

        @Override
        public final com.kwad.framework.filedownloader.message.MessageSnapshot uY() {
                r1 = this;
                com.kwad.framework.filedownloader.message.MessageSnapshot r0 = r1.adH
                return r0
        }
    }

    com.kwad.framework.filedownloader.message.MessageSnapshot uY();
}
