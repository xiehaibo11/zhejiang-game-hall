package com.mbridge.msdk.playercommon.exoplayer2.offline;

import java.lang.Comparable;

public abstract class SegmentDownloadAction<K extends java.lang.Comparable<K>> extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction {
    public final java.util.List<K> keys;

    protected static abstract class SegmentDownloadActionDeserializer<K> extends com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction.Deserializer {
        public SegmentDownloadActionDeserializer(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        protected abstract com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction createDownloadAction(android.net.Uri r1, boolean r2, byte[] r3, java.util.List<K> r4);

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction readFromStream(int r7, java.io.DataInputStream r8) throws java.io.IOException {
                r6 = this;
                java.lang.String r7 = r8.readUTF()
                android.net.Uri r7 = android.net.Uri.parse(r7)
                boolean r0 = r8.readBoolean()
                int r1 = r8.readInt()
                byte[] r1 = new byte[r1]
                r8.readFully(r1)
                int r2 = r8.readInt()
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                r4 = 0
            L1f:
                if (r4 >= r2) goto L2b
                java.lang.Object r5 = r6.readKey(r8)
                r3.add(r5)
                int r4 = r4 + 1
                goto L1f
            L2b:
                com.mbridge.msdk.playercommon.exoplayer2.offline.DownloadAction r7 = r6.createDownloadAction(r7, r0, r1, r3)
                return r7
        }

        protected abstract K readKey(java.io.DataInputStream r1) throws java.io.IOException;
    }

    protected SegmentDownloadAction(java.lang.String r1, int r2, android.net.Uri r3, boolean r4, byte[] r5, java.util.List<K> r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            if (r4 == 0) goto L13
            boolean r1 = r6.isEmpty()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            java.util.List r1 = java.util.Collections.emptyList()
            r0.keys = r1
            goto L21
        L13:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r6)
            java.util.Collections.sort(r1)
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r0.keys = r1
        L21:
            return
    }

    @Override
    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 != r2) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = super.equals(r2)
            if (r0 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloadAction r2 = (com.mbridge.msdk.playercommon.exoplayer2.offline.SegmentDownloadAction) r2
            java.util.List<K extends java.lang.Comparable<K>> r0 = r1.keys
            java.util.List<K extends java.lang.Comparable<K>> r2 = r2.keys
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    public int hashCode() {
            r2 = this;
            int r0 = super.hashCode()
            int r0 = r0 * 31
            java.util.List<K extends java.lang.Comparable<K>> r1 = r2.keys
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    protected abstract void writeKey(java.io.DataOutputStream r1, K r2) throws java.io.IOException;

    @Override
    public final void writeToStream(java.io.DataOutputStream r3) throws java.io.IOException {
            r2 = this;
            android.net.Uri r0 = r2.uri
            java.lang.String r0 = r0.toString()
            r3.writeUTF(r0)
            boolean r0 = r2.isRemoveAction
            r3.writeBoolean(r0)
            byte[] r0 = r2.data
            int r0 = r0.length
            r3.writeInt(r0)
            byte[] r0 = r2.data
            r3.write(r0)
            java.util.List<K extends java.lang.Comparable<K>> r0 = r2.keys
            int r0 = r0.size()
            r3.writeInt(r0)
            r0 = 0
        L23:
            java.util.List<K extends java.lang.Comparable<K>> r1 = r2.keys
            int r1 = r1.size()
            if (r0 >= r1) goto L39
            java.util.List<K extends java.lang.Comparable<K>> r1 = r2.keys
            java.lang.Object r1 = r1.get(r0)
            java.lang.Comparable r1 = (java.lang.Comparable) r1
            r2.writeKey(r3, r1)
            int r0 = r0 + 1
            goto L23
        L39:
            return
    }
}
