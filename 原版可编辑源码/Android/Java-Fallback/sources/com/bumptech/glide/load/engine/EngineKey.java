package com.bumptech.glide.load.engine;

class EngineKey implements com.bumptech.glide.load.Key {
    private static final java.lang.String EMPTY_LOG_STRING = "";
    private final com.bumptech.glide.load.ResourceDecoder cacheDecoder;
    private final com.bumptech.glide.load.ResourceDecoder decoder;
    private final com.bumptech.glide.load.ResourceEncoder encoder;
    private int hashCode;
    private final int height;
    private final java.lang.String id;
    private com.bumptech.glide.load.Key originalKey;
    private final com.bumptech.glide.load.Key signature;
    private final com.bumptech.glide.load.Encoder sourceEncoder;
    private java.lang.String stringKey;
    private final com.bumptech.glide.load.resource.transcode.ResourceTranscoder transcoder;
    private final com.bumptech.glide.load.Transformation transformation;
    private final int width;

    public EngineKey(java.lang.String r1, com.bumptech.glide.load.Key r2, int r3, int r4, com.bumptech.glide.load.ResourceDecoder r5, com.bumptech.glide.load.ResourceDecoder r6, com.bumptech.glide.load.Transformation r7, com.bumptech.glide.load.ResourceEncoder r8, com.bumptech.glide.load.resource.transcode.ResourceTranscoder r9, com.bumptech.glide.load.Encoder r10) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.signature = r2
            r0.width = r3
            r0.height = r4
            r0.cacheDecoder = r5
            r0.decoder = r6
            r0.transformation = r7
            r0.encoder = r8
            r0.transcoder = r9
            r0.sourceEncoder = r10
            return
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L124
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            goto L124
        L13:
            com.bumptech.glide.load.engine.EngineKey r5 = (com.bumptech.glide.load.engine.EngineKey) r5
            java.lang.String r2 = r4.id
            java.lang.String r3 = r5.id
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L20
            return r1
        L20:
            com.bumptech.glide.load.Key r2 = r4.signature
            com.bumptech.glide.load.Key r3 = r5.signature
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L2b
            return r1
        L2b:
            int r2 = r4.height
            int r3 = r5.height
            if (r2 == r3) goto L32
            return r1
        L32:
            int r2 = r4.width
            int r3 = r5.width
            if (r2 == r3) goto L39
            return r1
        L39:
            com.bumptech.glide.load.Transformation r2 = r4.transformation
            if (r2 != 0) goto L3f
            r2 = 1
            goto L40
        L3f:
            r2 = 0
        L40:
            com.bumptech.glide.load.Transformation r3 = r5.transformation
            if (r3 != 0) goto L46
            r3 = 1
            goto L47
        L46:
            r3 = 0
        L47:
            r2 = r2 ^ r3
            if (r2 == 0) goto L4b
            return r1
        L4b:
            com.bumptech.glide.load.Transformation r2 = r4.transformation
            if (r2 == 0) goto L60
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.Transformation r3 = r5.transformation
            java.lang.String r3 = r3.getId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L60
            return r1
        L60:
            com.bumptech.glide.load.ResourceDecoder r2 = r4.decoder
            if (r2 != 0) goto L66
            r2 = 1
            goto L67
        L66:
            r2 = 0
        L67:
            com.bumptech.glide.load.ResourceDecoder r3 = r5.decoder
            if (r3 != 0) goto L6d
            r3 = 1
            goto L6e
        L6d:
            r3 = 0
        L6e:
            r2 = r2 ^ r3
            if (r2 == 0) goto L72
            return r1
        L72:
            com.bumptech.glide.load.ResourceDecoder r2 = r4.decoder
            if (r2 == 0) goto L87
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.ResourceDecoder r3 = r5.decoder
            java.lang.String r3 = r3.getId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L87
            return r1
        L87:
            com.bumptech.glide.load.ResourceDecoder r2 = r4.cacheDecoder
            if (r2 != 0) goto L8d
            r2 = 1
            goto L8e
        L8d:
            r2 = 0
        L8e:
            com.bumptech.glide.load.ResourceDecoder r3 = r5.cacheDecoder
            if (r3 != 0) goto L94
            r3 = 1
            goto L95
        L94:
            r3 = 0
        L95:
            r2 = r2 ^ r3
            if (r2 == 0) goto L99
            return r1
        L99:
            com.bumptech.glide.load.ResourceDecoder r2 = r4.cacheDecoder
            if (r2 == 0) goto Lae
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.ResourceDecoder r3 = r5.cacheDecoder
            java.lang.String r3 = r3.getId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto Lae
            return r1
        Lae:
            com.bumptech.glide.load.ResourceEncoder r2 = r4.encoder
            if (r2 != 0) goto Lb4
            r2 = 1
            goto Lb5
        Lb4:
            r2 = 0
        Lb5:
            com.bumptech.glide.load.ResourceEncoder r3 = r5.encoder
            if (r3 != 0) goto Lbb
            r3 = 1
            goto Lbc
        Lbb:
            r3 = 0
        Lbc:
            r2 = r2 ^ r3
            if (r2 == 0) goto Lc0
            return r1
        Lc0:
            com.bumptech.glide.load.ResourceEncoder r2 = r4.encoder
            if (r2 == 0) goto Ld5
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.ResourceEncoder r3 = r5.encoder
            java.lang.String r3 = r3.getId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto Ld5
            return r1
        Ld5:
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r2 = r4.transcoder
            if (r2 != 0) goto Ldb
            r2 = 1
            goto Ldc
        Ldb:
            r2 = 0
        Ldc:
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r3 = r5.transcoder
            if (r3 != 0) goto Le2
            r3 = 1
            goto Le3
        Le2:
            r3 = 0
        Le3:
            r2 = r2 ^ r3
            if (r2 == 0) goto Le7
            return r1
        Le7:
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r2 = r4.transcoder
            if (r2 == 0) goto Lfc
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r3 = r5.transcoder
            java.lang.String r3 = r3.getId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto Lfc
            return r1
        Lfc:
            com.bumptech.glide.load.Encoder r2 = r4.sourceEncoder
            if (r2 != 0) goto L102
            r2 = 1
            goto L103
        L102:
            r2 = 0
        L103:
            com.bumptech.glide.load.Encoder r3 = r5.sourceEncoder
            if (r3 != 0) goto L109
            r3 = 1
            goto L10a
        L109:
            r3 = 0
        L10a:
            r2 = r2 ^ r3
            if (r2 == 0) goto L10e
            return r1
        L10e:
            com.bumptech.glide.load.Encoder r2 = r4.sourceEncoder
            if (r2 == 0) goto L123
            java.lang.String r2 = r2.getId()
            com.bumptech.glide.load.Encoder r5 = r5.sourceEncoder
            java.lang.String r5 = r5.getId()
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L123
            return r1
        L123:
            return r0
        L124:
            return r1
    }

    public com.bumptech.glide.load.Key getOriginalKey() {
            r3 = this;
            com.bumptech.glide.load.Key r0 = r3.originalKey
            if (r0 != 0) goto Lf
            com.bumptech.glide.load.engine.OriginalKey r0 = new com.bumptech.glide.load.engine.OriginalKey
            java.lang.String r1 = r3.id
            com.bumptech.glide.load.Key r2 = r3.signature
            r0.<init>(r1, r2)
            r3.originalKey = r0
        Lf:
            com.bumptech.glide.load.Key r0 = r3.originalKey
            return r0
    }

    @Override
    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L96
            java.lang.String r0 = r3.id
            int r0 = r0.hashCode()
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.Key r1 = r3.signature
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            int r1 = r3.width
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            int r1 = r3.height
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.ResourceDecoder r1 = r3.cacheDecoder
            r2 = 0
            if (r1 == 0) goto L35
            java.lang.String r1 = r1.getId()
            int r1 = r1.hashCode()
            goto L36
        L35:
            r1 = 0
        L36:
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.ResourceDecoder r1 = r3.decoder
            if (r1 == 0) goto L48
            java.lang.String r1 = r1.getId()
            int r1 = r1.hashCode()
            goto L49
        L48:
            r1 = 0
        L49:
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.Transformation r1 = r3.transformation
            if (r1 == 0) goto L5b
            java.lang.String r1 = r1.getId()
            int r1 = r1.hashCode()
            goto L5c
        L5b:
            r1 = 0
        L5c:
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.ResourceEncoder r1 = r3.encoder
            if (r1 == 0) goto L6e
            java.lang.String r1 = r1.getId()
            int r1 = r1.hashCode()
            goto L6f
        L6e:
            r1 = 0
        L6f:
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r1 = r3.transcoder
            if (r1 == 0) goto L81
            java.lang.String r1 = r1.getId()
            int r1 = r1.hashCode()
            goto L82
        L81:
            r1 = 0
        L82:
            int r0 = r0 + r1
            r3.hashCode = r0
            int r0 = r0 * 31
            com.bumptech.glide.load.Encoder r1 = r3.sourceEncoder
            if (r1 == 0) goto L93
            java.lang.String r1 = r1.getId()
            int r2 = r1.hashCode()
        L93:
            int r0 = r0 + r2
            r3.hashCode = r0
        L96:
            int r0 = r3.hashCode
            return r0
    }

    public java.lang.String toString() {
            r5 = this;
            java.lang.String r0 = r5.stringKey
            if (r0 != 0) goto Lc4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EngineKey{"
            r0.append(r1)
            java.lang.String r1 = r5.id
            r0.append(r1)
            r1 = 43
            r0.append(r1)
            com.bumptech.glide.load.Key r2 = r5.signature
            r0.append(r2)
            java.lang.String r2 = "+["
            r0.append(r2)
            int r2 = r5.width
            r0.append(r2)
            r2 = 120(0x78, float:1.68E-43)
            r0.append(r2)
            int r2 = r5.height
            r0.append(r2)
            java.lang.String r2 = "]+"
            r0.append(r2)
            r2 = 39
            r0.append(r2)
            com.bumptech.glide.load.ResourceDecoder r3 = r5.cacheDecoder
            java.lang.String r4 = ""
            if (r3 == 0) goto L46
            java.lang.String r3 = r3.getId()
            goto L47
        L46:
            r3 = r4
        L47:
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            com.bumptech.glide.load.ResourceDecoder r3 = r5.decoder
            if (r3 == 0) goto L5c
            java.lang.String r3 = r3.getId()
            goto L5d
        L5c:
            r3 = r4
        L5d:
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            com.bumptech.glide.load.Transformation r3 = r5.transformation
            if (r3 == 0) goto L72
            java.lang.String r3 = r3.getId()
            goto L73
        L72:
            r3 = r4
        L73:
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            com.bumptech.glide.load.ResourceEncoder r3 = r5.encoder
            if (r3 == 0) goto L88
            java.lang.String r3 = r3.getId()
            goto L89
        L88:
            r3 = r4
        L89:
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r3 = r5.transcoder
            if (r3 == 0) goto L9e
            java.lang.String r3 = r3.getId()
            goto L9f
        L9e:
            r3 = r4
        L9f:
            r0.append(r3)
            r0.append(r2)
            r0.append(r1)
            r0.append(r2)
            com.bumptech.glide.load.Encoder r1 = r5.sourceEncoder
            if (r1 == 0) goto Lb3
            java.lang.String r4 = r1.getId()
        Lb3:
            r0.append(r4)
            r0.append(r2)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.stringKey = r0
        Lc4:
            java.lang.String r0 = r5.stringKey
            return r0
    }

    @Override
    public void updateDiskCacheKey(java.security.MessageDigest r4) throws java.io.UnsupportedEncodingException {
            r3 = this;
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            int r1 = r3.width
            java.nio.ByteBuffer r0 = r0.putInt(r1)
            int r1 = r3.height
            java.nio.ByteBuffer r0 = r0.putInt(r1)
            byte[] r0 = r0.array()
            com.bumptech.glide.load.Key r1 = r3.signature
            r1.updateDiskCacheKey(r4)
            java.lang.String r1 = r3.id
            java.lang.String r2 = "UTF-8"
            byte[] r1 = r1.getBytes(r2)
            r4.update(r1)
            r4.update(r0)
            com.bumptech.glide.load.ResourceDecoder r0 = r3.cacheDecoder
            java.lang.String r1 = ""
            if (r0 == 0) goto L34
            java.lang.String r0 = r0.getId()
            goto L35
        L34:
            r0 = r1
        L35:
            byte[] r0 = r0.getBytes(r2)
            r4.update(r0)
            com.bumptech.glide.load.ResourceDecoder r0 = r3.decoder
            if (r0 == 0) goto L45
            java.lang.String r0 = r0.getId()
            goto L46
        L45:
            r0 = r1
        L46:
            byte[] r0 = r0.getBytes(r2)
            r4.update(r0)
            com.bumptech.glide.load.Transformation r0 = r3.transformation
            if (r0 == 0) goto L56
            java.lang.String r0 = r0.getId()
            goto L57
        L56:
            r0 = r1
        L57:
            byte[] r0 = r0.getBytes(r2)
            r4.update(r0)
            com.bumptech.glide.load.ResourceEncoder r0 = r3.encoder
            if (r0 == 0) goto L67
            java.lang.String r0 = r0.getId()
            goto L68
        L67:
            r0 = r1
        L68:
            byte[] r0 = r0.getBytes(r2)
            r4.update(r0)
            com.bumptech.glide.load.Encoder r0 = r3.sourceEncoder
            if (r0 == 0) goto L77
            java.lang.String r1 = r0.getId()
        L77:
            byte[] r0 = r1.getBytes(r2)
            r4.update(r0)
            return
    }
}
