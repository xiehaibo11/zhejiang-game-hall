package com.kwad.framework.filedownloader.message;

/* JADX INFO: loaded from: classes2.dex */
public interface a {

    /* JADX INFO: renamed from: com.kwad.framework.filedownloader.message.a$a, reason: collision with other inner class name */
    public static class C0188a extends MessageSnapshot implements a {
        private final MessageSnapshot adH;

        public C0188a(MessageSnapshot messageSnapshot) {
            super(messageSnapshot.getId());
            if (messageSnapshot.sX() != -3) {
                throw new IllegalArgumentException(com.kwad.framework.filedownloader.f.f.b("can't create the block complete message for id[%d], status[%d]", Integer.valueOf(messageSnapshot.getId()), Byte.valueOf(messageSnapshot.sX())));
            }
            this.adH = messageSnapshot;
        }

        @Override // com.kwad.framework.filedownloader.message.c
        public final byte sX() {
            return (byte) 4;
        }

        @Override // com.kwad.framework.filedownloader.message.a
        public final MessageSnapshot uY() {
            return this.adH;
        }
    }

    MessageSnapshot uY();
}
