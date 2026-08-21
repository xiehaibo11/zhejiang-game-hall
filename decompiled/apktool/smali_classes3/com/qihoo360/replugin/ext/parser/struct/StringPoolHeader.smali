.class public Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;
.super Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;
.source "StringPoolHeader.java"


# static fields
.field public static final SORTED_FLAG:I = 0x1

.field public static final UTF8_FLAG:I = 0x100


# instance fields
.field private flags:J

.field private stringCount:J

.field private stringsStart:J

.field private styleCount:J

.field private stylesStart:J


# direct methods
.method public constructor <init>(IIJ)V
    .locals 0

    .line 51
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;-><init>(IIJ)V

    return-void
.end method


# virtual methods
.method public getFlags()J
    .locals 2

    .line 71
    iget-wide v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->flags:J

    return-wide v0
.end method

.method public getStringCount()J
    .locals 2

    .line 55
    iget-wide v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stringCount:J

    return-wide v0
.end method

.method public getStringsStart()J
    .locals 2

    .line 79
    iget-wide v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stringsStart:J

    return-wide v0
.end method

.method public getStyleCount()J
    .locals 2

    .line 63
    iget-wide v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->styleCount:J

    return-wide v0
.end method

.method public getStylesStart()J
    .locals 2

    .line 87
    iget-wide v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stylesStart:J

    return-wide v0
.end method

.method public setFlags(J)V
    .locals 0

    .line 75
    iput-wide p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->flags:J

    return-void
.end method

.method public setStringCount(J)V
    .locals 0

    .line 59
    iput-wide p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stringCount:J

    return-void
.end method

.method public setStringsStart(J)V
    .locals 0

    .line 83
    iput-wide p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stringsStart:J

    return-void
.end method

.method public setStyleCount(J)V
    .locals 0

    .line 67
    iput-wide p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->styleCount:J

    return-void
.end method

.method public setStylesStart(J)V
    .locals 0

    .line 91
    iput-wide p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/StringPoolHeader;->stylesStart:J

    return-void
.end method
