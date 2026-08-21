.class public Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;
.super Ljava/lang/Object;
.source "BinaryXmlParser.java"


# instance fields
.field private buffer:Ljava/nio/ByteBuffer;

.field private byteOrder:Ljava/nio/ByteOrder;

.field private resourceMap:[Ljava/lang/String;

.field private stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

.field private xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;


# direct methods
.method public constructor <init>(Ljava/nio/ByteBuffer;)V
    .locals 1

    .line 69
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 62
    sget-object v0, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->byteOrder:Ljava/nio/ByteOrder;

    .line 70
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->duplicate()Ljava/nio/ByteBuffer;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    .line 71
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->byteOrder:Ljava/nio/ByteOrder;

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    return-void
.end method

.method private readAttribute()Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;
    .locals 4

    .line 194
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v0

    .line 195
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    .line 196
    new-instance v2, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    invoke-direct {v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;-><init>()V

    if-lez v0, :cond_0

    .line 198
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->setNamespace(Ljava/lang/String;)V

    .line 201
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->setName(Ljava/lang/String;)V

    .line 202
    invoke-virtual {v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->resourceMap:[Ljava/lang/String;

    if-eqz v0, :cond_1

    array-length v3, v0

    if-ge v1, v3, :cond_1

    .line 204
    aget-object v0, v0, v1

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->setName(Ljava/lang/String;)V

    .line 208
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v0

    if-lez v0, :cond_2

    .line 210
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v1, v0}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->setRawValue(Ljava/lang/String;)V

    .line 212
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-static {v0, v1}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readResValue(Ljava/nio/ByteBuffer;Lcom/qihoo360/replugin/ext/parser/struct/StringPool;)Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;

    return-object v2
.end method

.method private readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;
    .locals 9

    .line 254
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->hasRemaining()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 258
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    int-to-long v0, v0

    .line 259
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    move-result v2

    .line 260
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v3}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    move-result v3

    .line 261
    iget-object v4, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v4}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    if-eqz v2, :cond_4

    const/4 v6, 0x1

    if-eq v2, v6, :cond_3

    const/4 v6, 0x3

    if-eq v2, v6, :cond_2

    const/16 v6, 0x180

    if-eq v2, v6, :cond_1

    packed-switch v2, :pswitch_data_0

    .line 291
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unexpected chunk type:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 283
    :pswitch_0
    new-instance v6, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;

    invoke-direct {v6, v2, v3, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;-><init>(IIJ)V

    .line 284
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    long-to-int v2, v4

    invoke-virtual {v6, v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->setLineNum(I)V

    .line 285
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    long-to-int v2, v4

    invoke-virtual {v6, v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->setCommentRef(I)V

    .line 286
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    int-to-long v3, v3

    add-long/2addr v0, v3

    long-to-int v0, v0

    invoke-virtual {v2, v0}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    return-object v6

    .line 276
    :cond_1
    iget-object v6, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    int-to-long v7, v3

    add-long/2addr v0, v7

    long-to-int v0, v0

    invoke-virtual {v6, v0}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 277
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;

    invoke-direct {v0, v2, v3, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;-><init>(IIJ)V

    return-object v0

    .line 265
    :cond_2
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlHeader;

    invoke-direct {v0, v2, v3, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlHeader;-><init>(IIJ)V

    return-object v0

    .line 267
    :cond_3
    new-instance v6, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;

    invoke-direct {v6, v2, v3, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;-><init>(IIJ)V

    .line 268
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    invoke-virtual {v6, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->setStringCount(J)V

    .line 269
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    invoke-virtual {v6, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->setStyleCount(J)V

    .line 270
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    invoke-virtual {v6, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->setFlags(J)V

    .line 271
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    invoke-virtual {v6, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->setStringsStart(J)V

    .line 272
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v4

    invoke-virtual {v6, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->setStylesStart(J)V

    .line 273
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    int-to-long v3, v3

    add-long/2addr v0, v3

    long-to-int v0, v0

    invoke-virtual {v2, v0}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    return-object v6

    .line 289
    :cond_4
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/struct/xml/NullHeader;

    invoke-direct {v0, v2, v3, v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/xml/NullHeader;-><init>(IIJ)V

    return-object v0

    :pswitch_data_0
    .packed-switch 0x100
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method private readXmlNamespaceEndTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;
    .locals 4

    .line 231
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v0

    .line 232
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    .line 233
    new-instance v2, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;

    invoke-direct {v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;-><init>()V

    if-lez v0, :cond_0

    .line 235
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;->setPrefix(Ljava/lang/String;)V

    :cond_0
    if-lez v1, :cond_1

    .line 238
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;->setUri(Ljava/lang/String;)V

    :cond_1
    return-object v2
.end method

.method private readXmlNamespaceStartTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;
    .locals 4

    .line 218
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v0

    .line 219
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    .line 220
    new-instance v2, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;

    invoke-direct {v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;-><init>()V

    if-lez v0, :cond_0

    .line 222
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;->setPrefix(Ljava/lang/String;)V

    :cond_0
    if-lez v1, :cond_1

    .line 225
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;->setUri(Ljava/lang/String;)V

    :cond_1
    return-object v2
.end method

.method private readXmlNodeEndTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;
    .locals 4

    .line 143
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;

    invoke-direct {v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;-><init>()V

    .line 144
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    .line 145
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v2

    if-lez v1, :cond_0

    .line 147
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v3, v1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;->setNamespace(Ljava/lang/String;)V

    .line 149
    :cond_0
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v1, v2}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;->setName(Ljava/lang/String;)V

    .line 150
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    if-eqz v1, :cond_1

    .line 151
    invoke-interface {v1, v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;->onEndTag(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;)V

    :cond_1
    return-object v0
.end method

.method private readXmlNodeStartTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;
    .locals 6

    .line 157
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v0

    .line 158
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->getInt()I

    move-result v1

    .line 159
    new-instance v2, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;

    invoke-direct {v2}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;-><init>()V

    if-lez v0, :cond_0

    .line 161
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->setNamespace(Ljava/lang/String;)V

    .line 163
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->get(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->setName(Ljava/lang/String;)V

    .line 167
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 168
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 169
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    move-result v0

    .line 170
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v1}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 171
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v1}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 172
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v1}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 175
    new-instance v1, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;-><init>(I)V

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_2

    .line 177
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readAttribute()Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;

    move-result-object v4

    .line 178
    iget-object v5, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    if-eqz v5, :cond_1

    .line 179
    invoke-virtual {v4}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->getRawValue()Ljava/lang/String;

    move-result-object v5

    .line 180
    invoke-virtual {v4, v5}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;->setValue(Ljava/lang/String;)V

    .line 181
    invoke-virtual {v1, v3, v4}, Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;->set(ILcom/qihoo360/replugin/ext/parser/struct/xml/Attribute;)V

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 184
    :cond_2
    invoke-virtual {v2, v1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;->setAttributes(Lcom/qihoo360/replugin/ext/parser/struct/xml/Attributes;)V

    .line 186
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    if-eqz v0, :cond_3

    .line 187
    invoke-interface {v0, v2}, Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;->onStartTag(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;)V

    :cond_3
    return-object v2
.end method

.method private readXmlResourceMap(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;)[J
    .locals 4

    .line 244
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;->getBodySize()I

    move-result p1

    div-int/lit8 p1, p1, 0x4

    .line 245
    new-array v0, p1, [J

    const/4 v1, 0x0

    :goto_0
    if-ge v1, p1, :cond_0

    .line 247
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-static {v2}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v2

    aput-wide v2, v0, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method


# virtual methods
.method public parse()V
    .locals 6

    .line 78
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 82
    :cond_0
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_1

    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 89
    :cond_1
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    :cond_2
    const/4 v1, 0x1

    .line 93
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->checkChunkType(II)V

    .line 94
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    check-cast v0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readStringPool(Ljava/nio/ByteBuffer;Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;)Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->stringPool:Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    .line 97
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;

    move-result-object v0

    if-nez v0, :cond_3

    return-void

    .line 101
    :cond_3
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v1

    const/16 v2, 0x180

    if-ne v1, v2, :cond_4

    .line 102
    check-cast v0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readXmlResourceMap(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlResourceMapHeader;)[J

    move-result-object v0

    .line 103
    array-length v0, v0

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->resourceMap:[Ljava/lang/String;

    .line 104
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;

    move-result-object v0

    :cond_4
    :goto_0
    if-eqz v0, :cond_6

    .line 111
    iget-object v1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    int-to-long v1, v1

    .line 112
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v3

    packed-switch v3, :pswitch_data_0

    .line 130
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v3

    const/16 v4, 0x100

    if-lt v3, v4, :cond_5

    .line 131
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v3

    const/16 v4, 0x17f

    if-gt v3, v4, :cond_5

    .line 132
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getBodySize()I

    move-result v4

    invoke-static {v3, v4}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->skip(Ljava/nio/ByteBuffer;I)V

    goto :goto_1

    .line 125
    :pswitch_0
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readXmlNodeEndTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeEndTag;

    goto :goto_1

    .line 122
    :pswitch_1
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readXmlNodeStartTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeStartTag;

    goto :goto_1

    .line 114
    :pswitch_2
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readXmlNamespaceEndTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;

    move-result-object v3

    .line 115
    iget-object v4, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    invoke-interface {v4, v3}, Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;->onNamespaceEnd(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceEndTag;)V

    goto :goto_1

    .line 118
    :pswitch_3
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readXmlNamespaceStartTag()Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;

    move-result-object v3

    .line 119
    iget-object v4, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    invoke-interface {v4, v3}, Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;->onNamespaceStart(Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNamespaceStartTag;)V

    .line 137
    :goto_1
    :pswitch_4
    iget-object v3, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getBodySize()I

    move-result v0

    int-to-long v4, v0

    add-long/2addr v1, v4

    long-to-int v0, v1

    invoke-virtual {v3, v0}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 138
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->readChunkHeader()Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;

    move-result-object v0

    goto :goto_0

    .line 134
    :cond_5
    new-instance v1, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unexpected chunk type:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;->getChunkType()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_6
    return-void

    :pswitch_data_0
    .packed-switch 0x100
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_4
    .end packed-switch
.end method

.method public setXmlStreamer(Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;)V
    .locals 0

    .line 296
    iput-object p1, p0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->xmlStreamer:Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;

    return-void
.end method
