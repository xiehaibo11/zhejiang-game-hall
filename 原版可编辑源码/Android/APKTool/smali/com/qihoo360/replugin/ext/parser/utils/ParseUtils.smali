.class public Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;
.super Ljava/lang/Object;
.source "ParseUtils.java"


# static fields
.field public static charsetUTF8:Ljava/nio/charset/Charset;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "UTF-8"

    .line 43
    invoke-static {v0}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->charsetUTF8:Ljava/nio/charset/Charset;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkChunkType(II)V
    .locals 3

    if-ne p0, p1, :cond_0

    return-void

    .line 170
    :cond_0
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Expect chunk type:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ", but got:"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 171
    invoke-static {p1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private static readLen(Ljava/nio/ByteBuffer;)I
    .locals 2

    .line 75
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUByte(Ljava/nio/ByteBuffer;)S

    move-result v0

    and-int/lit16 v1, v0, 0x80

    if-eqz v1, :cond_0

    and-int/lit8 v0, v0, 0x7f

    shl-int/lit8 v0, v0, 0x7

    or-int/lit8 v0, v0, 0x0

    .line 79
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUByte(Ljava/nio/ByteBuffer;)S

    move-result p0

    add-int/2addr v0, p0

    :cond_0
    return v0
.end method

.method private static readLen16(Ljava/nio/ByteBuffer;)I
    .locals 2

    .line 92
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    move-result v0

    const v1, 0x8000

    and-int/2addr v1, v0

    if-eqz v1, :cond_0

    and-int/lit16 v0, v0, 0x7fff

    shl-int/lit8 v0, v0, 0xf

    or-int/lit8 v0, v0, 0x0

    .line 95
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    move-result p0

    add-int/2addr v0, p0

    :cond_0
    return v0
.end method

.method public static readResValue(Ljava/nio/ByteBuffer;Lcom/qihoo360/replugin/ext/parser/struct/StringPool;)Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;
    .locals 0

    .line 162
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    .line 163
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUByte(Ljava/nio/ByteBuffer;)S

    .line 164
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUByte(Ljava/nio/ByteBuffer;)S

    move-result p1

    .line 165
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->getInt()I

    move-result p0

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;->raw(IS)Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;

    move-result-object p0

    return-object p0
.end method

.method public static readString(Ljava/nio/ByteBuffer;Z)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_0

    .line 52
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readLen(Ljava/nio/ByteBuffer;)I

    .line 53
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readLen(Ljava/nio/ByteBuffer;)I

    move-result p1

    .line 54
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readBytes(Ljava/nio/ByteBuffer;I)[B

    move-result-object p1

    .line 55
    new-instance v0, Ljava/lang/String;

    sget-object v1, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->charsetUTF8:Ljava/nio/charset/Charset;

    invoke-direct {v0, p1, v1}, Ljava/lang/String;-><init>([BLjava/nio/charset/Charset;)V

    .line 57
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUByte(Ljava/nio/ByteBuffer;)S

    return-object v0

    .line 61
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readLen16(Ljava/nio/ByteBuffer;)I

    move-result p1

    .line 62
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readString(Ljava/nio/ByteBuffer;I)Ljava/lang/String;

    move-result-object p1

    .line 64
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUShort(Ljava/nio/ByteBuffer;)I

    return-object p1
.end method

.method public static readStringPool(Ljava/nio/ByteBuffer;Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;)Lcom/qihoo360/replugin/ext/parser/struct/StringPool;
    .locals 13

    .line 108
    invoke-virtual {p0}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    int-to-long v0, v0

    .line 109
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStringCount()J

    move-result-wide v2

    long-to-int v2, v2

    new-array v3, v2, [J

    .line 111
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStringCount()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v4, v4, v6

    const/4 v5, 0x0

    if-lez v4, :cond_0

    move v4, v5

    :goto_0
    int-to-long v8, v4

    .line 112
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStringCount()J

    move-result-wide v10

    cmp-long v8, v8, v10

    if-gez v8, :cond_0

    .line 113
    invoke-static {p0}, Lcom/qihoo360/replugin/ext/parser/utils/Buffers;->readUInt(Ljava/nio/ByteBuffer;)J

    move-result-wide v8

    aput-wide v8, v3, v4

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 118
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getFlags()J

    move-result-wide v8

    const-wide/16 v10, 0x1

    and-long/2addr v8, v10

    cmp-long v4, v8, v6

    .line 120
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getFlags()J

    move-result-wide v8

    const-wide/16 v10, 0x100

    and-long/2addr v8, v10

    cmp-long v4, v8, v6

    if-eqz v4, :cond_1

    const/4 v4, 0x1

    goto :goto_1

    :cond_1
    move v4, v5

    .line 123
    :goto_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStringsStart()J

    move-result-wide v6

    add-long/2addr v6, v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getHeaderSize()I

    move-result v8

    int-to-long v8, v8

    sub-long/2addr v6, v8

    long-to-int v8, v6

    .line 124
    invoke-virtual {p0, v8}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 126
    new-array v8, v2, [Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;

    move v9, v5

    :goto_2
    if-ge v9, v2, :cond_2

    .line 128
    new-instance v10, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;

    aget-wide v11, v3, v9

    add-long/2addr v11, v6

    invoke-direct {v10, v9, v11, v12}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;-><init>(IJ)V

    aput-object v10, v8, v9

    add-int/lit8 v9, v9, 0x1

    goto :goto_2

    :cond_2
    const/4 v3, 0x0

    const-wide/16 v6, -0x1

    .line 133
    new-instance v9, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStringCount()J

    move-result-wide v10

    long-to-int v10, v10

    invoke-direct {v9, v10}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;-><init>(I)V

    :goto_3
    if-ge v5, v2, :cond_4

    .line 134
    aget-object v10, v8, v5

    .line 135
    invoke-virtual {v10}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;->getOffset()J

    move-result-wide v11

    cmp-long v11, v11, v6

    if-nez v11, :cond_3

    .line 136
    invoke-virtual {v10}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;->getIdx()I

    move-result v10

    invoke-virtual {v9, v10, v3}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->set(ILjava/lang/String;)V

    goto :goto_4

    .line 140
    :cond_3
    invoke-virtual {v10}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;->getOffset()J

    move-result-wide v6

    long-to-int v3, v6

    invoke-virtual {p0, v3}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 141
    invoke-virtual {v10}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;->getOffset()J

    move-result-wide v6

    .line 142
    invoke-static {p0, v4}, Lcom/qihoo360/replugin/ext/parser/utils/ParseUtils;->readString(Ljava/nio/ByteBuffer;Z)Ljava/lang/String;

    move-result-object v3

    .line 144
    invoke-virtual {v10}, Lcom/qihoo360/replugin/ext/parser/parser/StringPoolEntry;->getIdx()I

    move-result v10

    invoke-virtual {v9, v10, v3}, Lcom/qihoo360/replugin/ext/parser/struct/StringPool;->set(ILjava/lang/String;)V

    :goto_4
    add-int/lit8 v5, v5, 0x1

    goto :goto_3

    .line 148
    :cond_4
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getStyleCount()J

    .line 152
    invoke-virtual {p1}, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->getBodySize()I

    move-result p1

    int-to-long v2, p1

    add-long/2addr v0, v2

    long-to-int p1, v0

    invoke-virtual {p0, p1}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    return-object v9
.end method
