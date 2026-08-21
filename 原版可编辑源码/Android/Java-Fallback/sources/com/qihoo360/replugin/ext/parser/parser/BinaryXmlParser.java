package com.qihoo360.replugin.ext.parser.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class BinaryXmlParser {
    private java.nio.ByteBuffer buffer;
    private java.nio.ByteOrder byteOrder;
    private java.lang.String[] resourceMap;
    private com.qihoo360.replugin.ext.parser.struct.StringPool stringPool;
    private com.qihoo360.replugin.ext.parser.parser.XmlStreamer xmlStreamer;

    public BinaryXmlParser(java.nio.ByteBuffer r2) {
            r1 = this;
            r1.<init>()
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            r1.byteOrder = r0
            java.nio.ByteBuffer r2 = r2.duplicate()
            r1.buffer = r2
            java.nio.ByteOrder r0 = r1.byteOrder
            r2.order(r0)
            return
    }

    private com.qihoo360.replugin.ext.parser.struct.xml.Attribute readAttribute() {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.buffer
            int r0 = r0.getInt()
            java.nio.ByteBuffer r1 = r4.buffer
            int r1 = r1.getInt()
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute r2 = new com.qihoo360.replugin.ext.parser.struct.xml.Attribute
            r2.<init>()
            if (r0 <= 0) goto L1c
            com.qihoo360.replugin.ext.parser.struct.StringPool r3 = r4.stringPool
            java.lang.String r0 = r3.get(r0)
            r2.setNamespace(r0)
        L1c:
            com.qihoo360.replugin.ext.parser.struct.StringPool r0 = r4.stringPool
            java.lang.String r0 = r0.get(r1)
            r2.setName(r0)
            java.lang.String r0 = r2.getName()
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L3b
            java.lang.String[] r0 = r4.resourceMap
            if (r0 == 0) goto L3b
            int r3 = r0.length
            if (r1 >= r3) goto L3b
            r0 = r0[r1]
            r2.setName(r0)
        L3b:
            java.nio.ByteBuffer r0 = r4.buffer
            int r0 = r0.getInt()
            if (r0 <= 0) goto L4c
            com.qihoo360.replugin.ext.parser.struct.StringPool r1 = r4.stringPool
            java.lang.String r0 = r1.get(r0)
            r2.setRawValue(r0)
        L4c:
            java.nio.ByteBuffer r0 = r4.buffer
            com.qihoo360.replugin.ext.parser.struct.StringPool r1 = r4.stringPool
            com.qihoo360.replugin.ext.parser.utils.ParseUtils.readResValue(r0, r1)
            return r2
    }

    private com.qihoo360.replugin.ext.parser.struct.ChunkHeader readChunkHeader() {
            r9 = this;
            java.nio.ByteBuffer r0 = r9.buffer
            boolean r0 = r0.hasRemaining()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            java.nio.ByteBuffer r0 = r9.buffer
            int r0 = r0.position()
            long r0 = (long) r0
            java.nio.ByteBuffer r2 = r9.buffer
            int r2 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r2)
            java.nio.ByteBuffer r3 = r9.buffer
            int r3 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r3)
            java.nio.ByteBuffer r4 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r4)
            if (r2 == 0) goto Lba
            r6 = 1
            if (r2 == r6) goto L7f
            r6 = 3
            if (r2 == r6) goto L79
            r6 = 384(0x180, float:5.38E-43)
            if (r2 == r6) goto L6b
            switch(r2) {
                case 256: goto L49;
                case 257: goto L49;
                case 258: goto L49;
                case 259: goto L49;
                case 260: goto L49;
                default: goto L32;
            }
        L32:
            com.qihoo360.replugin.ext.parser.exception.ParserException r0 = new com.qihoo360.replugin.ext.parser.exception.ParserException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Unexpected chunk type:"
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L49:
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeHeader r6 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeHeader
            r6.<init>(r2, r3, r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            int r2 = (int) r4
            r6.setLineNum(r2)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            int r2 = (int) r4
            r6.setCommentRef(r2)
            java.nio.ByteBuffer r2 = r9.buffer
            long r3 = (long) r3
            long r0 = r0 + r3
            int r0 = (int) r0
            r2.position(r0)
            return r6
        L6b:
            java.nio.ByteBuffer r6 = r9.buffer
            long r7 = (long) r3
            long r0 = r0 + r7
            int r0 = (int) r0
            r6.position(r0)
            com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader r0 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader
            r0.<init>(r2, r3, r4)
            return r0
        L79:
            com.qihoo360.replugin.ext.parser.struct.xml.XmlHeader r0 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlHeader
            r0.<init>(r2, r3, r4)
            return r0
        L7f:
            com.qihoo360.replugin.ext.parser.struct.StringPoolHeader r6 = new com.qihoo360.replugin.ext.parser.struct.StringPoolHeader
            r6.<init>(r2, r3, r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r6.setStringCount(r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r6.setStyleCount(r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r6.setFlags(r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r6.setStringsStart(r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r4 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r6.setStylesStart(r4)
            java.nio.ByteBuffer r2 = r9.buffer
            long r3 = (long) r3
            long r0 = r0 + r3
            int r0 = (int) r0
            r2.position(r0)
            return r6
        Lba:
            com.qihoo360.replugin.ext.parser.struct.xml.NullHeader r0 = new com.qihoo360.replugin.ext.parser.struct.xml.NullHeader
            r0.<init>(r2, r3, r4)
            return r0
    }

    private com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag readXmlNamespaceEndTag() {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.buffer
            int r0 = r0.getInt()
            java.nio.ByteBuffer r1 = r4.buffer
            int r1 = r1.getInt()
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag r2 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag
            r2.<init>()
            if (r0 <= 0) goto L1c
            com.qihoo360.replugin.ext.parser.struct.StringPool r3 = r4.stringPool
            java.lang.String r0 = r3.get(r0)
            r2.setPrefix(r0)
        L1c:
            if (r1 <= 0) goto L27
            com.qihoo360.replugin.ext.parser.struct.StringPool r0 = r4.stringPool
            java.lang.String r0 = r0.get(r1)
            r2.setUri(r0)
        L27:
            return r2
    }

    private com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag readXmlNamespaceStartTag() {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.buffer
            int r0 = r0.getInt()
            java.nio.ByteBuffer r1 = r4.buffer
            int r1 = r1.getInt()
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag r2 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag
            r2.<init>()
            if (r0 <= 0) goto L1c
            com.qihoo360.replugin.ext.parser.struct.StringPool r3 = r4.stringPool
            java.lang.String r0 = r3.get(r0)
            r2.setPrefix(r0)
        L1c:
            if (r1 <= 0) goto L27
            com.qihoo360.replugin.ext.parser.struct.StringPool r0 = r4.stringPool
            java.lang.String r0 = r0.get(r1)
            r2.setUri(r0)
        L27:
            return r2
    }

    private com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag readXmlNodeEndTag() {
            r4 = this;
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag r0 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag
            r0.<init>()
            java.nio.ByteBuffer r1 = r4.buffer
            int r1 = r1.getInt()
            java.nio.ByteBuffer r2 = r4.buffer
            int r2 = r2.getInt()
            if (r1 <= 0) goto L1c
            com.qihoo360.replugin.ext.parser.struct.StringPool r3 = r4.stringPool
            java.lang.String r1 = r3.get(r1)
            r0.setNamespace(r1)
        L1c:
            com.qihoo360.replugin.ext.parser.struct.StringPool r1 = r4.stringPool
            java.lang.String r1 = r1.get(r2)
            r0.setName(r1)
            com.qihoo360.replugin.ext.parser.parser.XmlStreamer r1 = r4.xmlStreamer
            if (r1 == 0) goto L2c
            r1.onEndTag(r0)
        L2c:
            return r0
    }

    private com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag readXmlNodeStartTag() {
            r6 = this;
            java.nio.ByteBuffer r0 = r6.buffer
            int r0 = r0.getInt()
            java.nio.ByteBuffer r1 = r6.buffer
            int r1 = r1.getInt()
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag r2 = new com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag
            r2.<init>()
            if (r0 <= 0) goto L1c
            com.qihoo360.replugin.ext.parser.struct.StringPool r3 = r6.stringPool
            java.lang.String r0 = r3.get(r0)
            r2.setNamespace(r0)
        L1c:
            com.qihoo360.replugin.ext.parser.struct.StringPool r0 = r6.stringPool
            java.lang.String r0 = r0.get(r1)
            r2.setName(r0)
            java.nio.ByteBuffer r0 = r6.buffer
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r0)
            java.nio.ByteBuffer r0 = r6.buffer
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r0)
            java.nio.ByteBuffer r0 = r6.buffer
            int r0 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r0)
            java.nio.ByteBuffer r1 = r6.buffer
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r1)
            java.nio.ByteBuffer r1 = r6.buffer
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r1)
            java.nio.ByteBuffer r1 = r6.buffer
            com.qihoo360.replugin.ext.parser.utils.Buffers.readUShort(r1)
            com.qihoo360.replugin.ext.parser.struct.xml.Attributes r1 = new com.qihoo360.replugin.ext.parser.struct.xml.Attributes
            r1.<init>(r0)
            r3 = 0
        L4a:
            if (r3 >= r0) goto L61
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute r4 = r6.readAttribute()
            com.qihoo360.replugin.ext.parser.parser.XmlStreamer r5 = r6.xmlStreamer
            if (r5 == 0) goto L5e
            java.lang.String r5 = r4.getRawValue()
            r4.setValue(r5)
            r1.set(r3, r4)
        L5e:
            int r3 = r3 + 1
            goto L4a
        L61:
            r2.setAttributes(r1)
            com.qihoo360.replugin.ext.parser.parser.XmlStreamer r0 = r6.xmlStreamer
            if (r0 == 0) goto L6b
            r0.onStartTag(r2)
        L6b:
            return r2
    }

    private long[] readXmlResourceMap(com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader r5) {
            r4 = this;
            int r5 = r5.getBodySize()
            int r5 = r5 / 4
            long[] r0 = new long[r5]
            r1 = 0
        L9:
            if (r1 >= r5) goto L16
            java.nio.ByteBuffer r2 = r4.buffer
            long r2 = com.qihoo360.replugin.ext.parser.utils.Buffers.readUInt(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L16:
            return r0
    }

    public void parse() {
            r6 = this;
            com.qihoo360.replugin.ext.parser.struct.ChunkHeader r0 = r6.readChunkHeader()
            if (r0 != 0) goto L7
            return
        L7:
            int r1 = r0.getChunkType()
            r2 = 3
            if (r1 == r2) goto L15
            int r0 = r0.getChunkType()
            if (r0 == 0) goto L15
            return
        L15:
            com.qihoo360.replugin.ext.parser.struct.ChunkHeader r0 = r6.readChunkHeader()
            if (r0 != 0) goto L1c
            return
        L1c:
            r1 = 1
            int r2 = r0.getChunkType()
            com.qihoo360.replugin.ext.parser.utils.ParseUtils.checkChunkType(r1, r2)
            java.nio.ByteBuffer r1 = r6.buffer
            com.qihoo360.replugin.ext.parser.struct.StringPoolHeader r0 = (com.qihoo360.replugin.ext.parser.struct.StringPoolHeader) r0
            com.qihoo360.replugin.ext.parser.struct.StringPool r0 = com.qihoo360.replugin.ext.parser.utils.ParseUtils.readStringPool(r1, r0)
            r6.stringPool = r0
            com.qihoo360.replugin.ext.parser.struct.ChunkHeader r0 = r6.readChunkHeader()
            if (r0 != 0) goto L35
            return
        L35:
            int r1 = r0.getChunkType()
            r2 = 384(0x180, float:5.38E-43)
            if (r1 != r2) goto L4c
            com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader r0 = (com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader) r0
            long[] r0 = r6.readXmlResourceMap(r0)
            int r0 = r0.length
            java.lang.String[] r0 = new java.lang.String[r0]
            r6.resourceMap = r0
            com.qihoo360.replugin.ext.parser.struct.ChunkHeader r0 = r6.readChunkHeader()
        L4c:
            if (r0 == 0) goto Lbd
            java.nio.ByteBuffer r1 = r6.buffer
            int r1 = r1.position()
            long r1 = (long) r1
            int r3 = r0.getChunkType()
            switch(r3) {
                case 256: goto L88;
                case 257: goto L7e;
                case 258: goto L7a;
                case 259: goto L76;
                case 260: goto L91;
                default: goto L5c;
            }
        L5c:
            int r3 = r0.getChunkType()
            r4 = 256(0x100, float:3.59E-43)
            if (r3 < r4) goto La2
            int r3 = r0.getChunkType()
            r4 = 383(0x17f, float:5.37E-43)
            if (r3 > r4) goto La2
            java.nio.ByteBuffer r3 = r6.buffer
            int r4 = r0.getBodySize()
            com.qihoo360.replugin.ext.parser.utils.Buffers.skip(r3, r4)
            goto L91
        L76:
            r6.readXmlNodeEndTag()
            goto L91
        L7a:
            r6.readXmlNodeStartTag()
            goto L91
        L7e:
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag r3 = r6.readXmlNamespaceEndTag()
            com.qihoo360.replugin.ext.parser.parser.XmlStreamer r4 = r6.xmlStreamer
            r4.onNamespaceEnd(r3)
            goto L91
        L88:
            com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag r3 = r6.readXmlNamespaceStartTag()
            com.qihoo360.replugin.ext.parser.parser.XmlStreamer r4 = r6.xmlStreamer
            r4.onNamespaceStart(r3)
        L91:
            java.nio.ByteBuffer r3 = r6.buffer
            int r0 = r0.getBodySize()
            long r4 = (long) r0
            long r1 = r1 + r4
            int r0 = (int) r1
            r3.position(r0)
            com.qihoo360.replugin.ext.parser.struct.ChunkHeader r0 = r6.readChunkHeader()
            goto L4c
        La2:
            com.qihoo360.replugin.ext.parser.exception.ParserException r1 = new com.qihoo360.replugin.ext.parser.exception.ParserException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Unexpected chunk type:"
            r2.append(r3)
            int r0 = r0.getChunkType()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Lbd:
            return
    }

    public void setXmlStreamer(com.qihoo360.replugin.ext.parser.parser.XmlStreamer r1) {
            r0 = this;
            r0.xmlStreamer = r1
            return
    }
}
