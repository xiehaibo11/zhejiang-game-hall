package com.qihoo360.replugin.ext.parser.parser;

import com.qihoo360.replugin.ext.parser.exception.ParserException;
import com.qihoo360.replugin.ext.parser.struct.ChunkHeader;
import com.qihoo360.replugin.ext.parser.struct.ChunkType;
import com.qihoo360.replugin.ext.parser.struct.StringPool;
import com.qihoo360.replugin.ext.parser.struct.StringPoolHeader;
import com.qihoo360.replugin.ext.parser.struct.xml.Attribute;
import com.qihoo360.replugin.ext.parser.struct.xml.Attributes;
import com.qihoo360.replugin.ext.parser.struct.xml.NullHeader;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlHeader;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeHeader;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlResourceMapHeader;
import com.qihoo360.replugin.ext.parser.utils.Buffers;
import com.qihoo360.replugin.ext.parser.utils.ParseUtils;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class BinaryXmlParser {
    private ByteBuffer buffer;
    private ByteOrder byteOrder = ByteOrder.LITTLE_ENDIAN;
    private String[] resourceMap;
    private StringPool stringPool;
    private XmlStreamer xmlStreamer;

    public BinaryXmlParser(ByteBuffer byteBuffer) {
        ByteBuffer byteBufferDuplicate = byteBuffer.duplicate();
        this.buffer = byteBufferDuplicate;
        byteBufferDuplicate.order(this.byteOrder);
    }

    public void parse() {
        ChunkHeader chunkHeader;
        ChunkHeader chunkHeader2 = readChunkHeader();
        if (chunkHeader2 == null) {
            return;
        }
        if ((chunkHeader2.getChunkType() == 3 || chunkHeader2.getChunkType() == 0) && (chunkHeader = readChunkHeader()) != null) {
            ParseUtils.checkChunkType(1, chunkHeader.getChunkType());
            this.stringPool = ParseUtils.readStringPool(this.buffer, (StringPoolHeader) chunkHeader);
            ChunkHeader chunkHeader3 = readChunkHeader();
            if (chunkHeader3 == null) {
                return;
            }
            if (chunkHeader3.getChunkType() == 384) {
                this.resourceMap = new String[readXmlResourceMap((XmlResourceMapHeader) chunkHeader3).length];
                chunkHeader3 = readChunkHeader();
            }
            while (chunkHeader3 != null) {
                long jPosition = this.buffer.position();
                switch (chunkHeader3.getChunkType()) {
                    case 256:
                        this.xmlStreamer.onNamespaceStart(readXmlNamespaceStartTag());
                        break;
                    case 257:
                        this.xmlStreamer.onNamespaceEnd(readXmlNamespaceEndTag());
                        break;
                    case ChunkType.XML_START_ELEMENT:
                        readXmlNodeStartTag();
                        break;
                    case ChunkType.XML_END_ELEMENT:
                        readXmlNodeEndTag();
                        break;
                    case ChunkType.XML_CDATA:
                        break;
                    default:
                        if (chunkHeader3.getChunkType() >= 256 && chunkHeader3.getChunkType() <= 383) {
                            Buffers.skip(this.buffer, chunkHeader3.getBodySize());
                        } else {
                            throw new ParserException("Unexpected chunk type:" + chunkHeader3.getChunkType());
                        }
                        break;
                }
                this.buffer.position((int) (jPosition + ((long) chunkHeader3.getBodySize())));
                chunkHeader3 = readChunkHeader();
            }
        }
    }

    private XmlNodeEndTag readXmlNodeEndTag() {
        XmlNodeEndTag xmlNodeEndTag = new XmlNodeEndTag();
        int i = this.buffer.getInt();
        int i2 = this.buffer.getInt();
        if (i > 0) {
            xmlNodeEndTag.setNamespace(this.stringPool.get(i));
        }
        xmlNodeEndTag.setName(this.stringPool.get(i2));
        XmlStreamer xmlStreamer = this.xmlStreamer;
        if (xmlStreamer != null) {
            xmlStreamer.onEndTag(xmlNodeEndTag);
        }
        return xmlNodeEndTag;
    }

    private XmlNodeStartTag readXmlNodeStartTag() {
        int i = this.buffer.getInt();
        int i2 = this.buffer.getInt();
        XmlNodeStartTag xmlNodeStartTag = new XmlNodeStartTag();
        if (i > 0) {
            xmlNodeStartTag.setNamespace(this.stringPool.get(i));
        }
        xmlNodeStartTag.setName(this.stringPool.get(i2));
        Buffers.readUShort(this.buffer);
        Buffers.readUShort(this.buffer);
        int uShort = Buffers.readUShort(this.buffer);
        Buffers.readUShort(this.buffer);
        Buffers.readUShort(this.buffer);
        Buffers.readUShort(this.buffer);
        Attributes attributes = new Attributes(uShort);
        for (int i3 = 0; i3 < uShort; i3++) {
            Attribute attribute = readAttribute();
            if (this.xmlStreamer != null) {
                attribute.setValue(attribute.getRawValue());
                attributes.set(i3, attribute);
            }
        }
        xmlNodeStartTag.setAttributes(attributes);
        XmlStreamer xmlStreamer = this.xmlStreamer;
        if (xmlStreamer != null) {
            xmlStreamer.onStartTag(xmlNodeStartTag);
        }
        return xmlNodeStartTag;
    }

    private Attribute readAttribute() {
        String[] strArr;
        int i = this.buffer.getInt();
        int i2 = this.buffer.getInt();
        Attribute attribute = new Attribute();
        if (i > 0) {
            attribute.setNamespace(this.stringPool.get(i));
        }
        attribute.setName(this.stringPool.get(i2));
        if (attribute.getName().isEmpty() && (strArr = this.resourceMap) != null && i2 < strArr.length) {
            attribute.setName(strArr[i2]);
        }
        int i3 = this.buffer.getInt();
        if (i3 > 0) {
            attribute.setRawValue(this.stringPool.get(i3));
        }
        ParseUtils.readResValue(this.buffer, this.stringPool);
        return attribute;
    }

    private XmlNamespaceStartTag readXmlNamespaceStartTag() {
        int i = this.buffer.getInt();
        int i2 = this.buffer.getInt();
        XmlNamespaceStartTag xmlNamespaceStartTag = new XmlNamespaceStartTag();
        if (i > 0) {
            xmlNamespaceStartTag.setPrefix(this.stringPool.get(i));
        }
        if (i2 > 0) {
            xmlNamespaceStartTag.setUri(this.stringPool.get(i2));
        }
        return xmlNamespaceStartTag;
    }

    private XmlNamespaceEndTag readXmlNamespaceEndTag() {
        int i = this.buffer.getInt();
        int i2 = this.buffer.getInt();
        XmlNamespaceEndTag xmlNamespaceEndTag = new XmlNamespaceEndTag();
        if (i > 0) {
            xmlNamespaceEndTag.setPrefix(this.stringPool.get(i));
        }
        if (i2 > 0) {
            xmlNamespaceEndTag.setUri(this.stringPool.get(i2));
        }
        return xmlNamespaceEndTag;
    }

    private long[] readXmlResourceMap(XmlResourceMapHeader xmlResourceMapHeader) {
        int bodySize = xmlResourceMapHeader.getBodySize() / 4;
        long[] jArr = new long[bodySize];
        for (int i = 0; i < bodySize; i++) {
            jArr[i] = Buffers.readUInt(this.buffer);
        }
        return jArr;
    }

    private ChunkHeader readChunkHeader() {
        if (!this.buffer.hasRemaining()) {
            return null;
        }
        long jPosition = this.buffer.position();
        int uShort = Buffers.readUShort(this.buffer);
        int uShort2 = Buffers.readUShort(this.buffer);
        long uInt = Buffers.readUInt(this.buffer);
        if (uShort == 0) {
            return new NullHeader(uShort, uShort2, uInt);
        }
        if (uShort == 1) {
            StringPoolHeader stringPoolHeader = new StringPoolHeader(uShort, uShort2, uInt);
            stringPoolHeader.setStringCount(Buffers.readUInt(this.buffer));
            stringPoolHeader.setStyleCount(Buffers.readUInt(this.buffer));
            stringPoolHeader.setFlags(Buffers.readUInt(this.buffer));
            stringPoolHeader.setStringsStart(Buffers.readUInt(this.buffer));
            stringPoolHeader.setStylesStart(Buffers.readUInt(this.buffer));
            this.buffer.position((int) (jPosition + ((long) uShort2)));
            return stringPoolHeader;
        }
        if (uShort == 3) {
            return new XmlHeader(uShort, uShort2, uInt);
        }
        if (uShort == 384) {
            this.buffer.position((int) (jPosition + ((long) uShort2)));
            return new XmlResourceMapHeader(uShort, uShort2, uInt);
        }
        switch (uShort) {
            case 256:
            case 257:
            case ChunkType.XML_START_ELEMENT:
            case ChunkType.XML_END_ELEMENT:
            case ChunkType.XML_CDATA:
                XmlNodeHeader xmlNodeHeader = new XmlNodeHeader(uShort, uShort2, uInt);
                xmlNodeHeader.setLineNum((int) Buffers.readUInt(this.buffer));
                xmlNodeHeader.setCommentRef((int) Buffers.readUInt(this.buffer));
                this.buffer.position((int) (jPosition + ((long) uShort2)));
                return xmlNodeHeader;
            default:
                throw new ParserException("Unexpected chunk type:" + uShort);
        }
    }

    public void setXmlStreamer(XmlStreamer xmlStreamer) {
        this.xmlStreamer = xmlStreamer;
    }
}
