.class public Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;
.super Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;
.source "XmlNodeHeader.java"


# instance fields
.field private commentRef:I

.field private lineNum:I


# direct methods
.method public constructor <init>(IIJ)V
    .locals 0

    .line 41
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/qihoo360/replugin/ext/parser/struct/ChunkHeader;-><init>(IIJ)V

    return-void
.end method


# virtual methods
.method public getCommentRef()I
    .locals 1

    .line 53
    iget v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->commentRef:I

    return v0
.end method

.method public getLineNum()I
    .locals 1

    .line 45
    iget v0, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->lineNum:I

    return v0
.end method

.method public setCommentRef(I)V
    .locals 0

    .line 57
    iput p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->commentRef:I

    return-void
.end method

.method public setLineNum(I)V
    .locals 0

    .line 49
    iput p1, p0, Lcom/qihoo360/replugin/ext/parser/struct/xml/XmlNodeHeader;->lineNum:I

    return-void
.end method
