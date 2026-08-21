.class Lcom/qihoo360/replugin/ext/parser/utils/xml/UnicodeUnpairedSurrogateRemover;
.super Lcom/qihoo360/replugin/ext/parser/utils/xml/CodePointTranslator;
.source "UnicodeUnpairedSurrogateRemover.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/utils/xml/CodePointTranslator;-><init>()V

    return-void
.end method


# virtual methods
.method public translate(ILjava/io/Writer;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const p2, 0xd800

    if-lt p1, p2, :cond_0

    const p2, 0xdfff

    if-gt p1, p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
