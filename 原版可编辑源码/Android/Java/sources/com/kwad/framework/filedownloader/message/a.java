package com.kwad.framework.filedownloader.message;

public interface a {

    public static class a extends MessageSnapshot implements a {
        private final MessageSnapshot adH;

        public a(MessageSnapshot messageSnapshot) {
            super(messageSnapshot.getId());
            if (messageSnapshot.sX() != -3) {
                throw new IllegalArgumentException(com.kwad.framework.filedownloader.f.f.b("can't create the block complete message for id[%d], status[%d]", Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(messageSnapshot.sX())));
            }
            this.adH = messageSnapshot;
        }

        @Override
        public final byte sX() {
            return (byte) 4;
        }

        @Override
        public final MessageSnapshot uY() {
            return this.adH;
        }
    }

    MessageSnapshot uY();
}
