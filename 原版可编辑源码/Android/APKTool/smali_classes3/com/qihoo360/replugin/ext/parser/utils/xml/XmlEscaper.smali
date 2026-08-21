.class public Lcom/qihoo360/replugin/ext/parser/utils/xml/XmlEscaper;
.super Ljava/lang/Object;
.source "XmlEscaper.java"


# static fields
.field public static final ESCAPE_XML10:Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;


# direct methods
.method static constructor <clinit>()V
    .locals 11

    .line 36
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/AggregateTranslator;

    const/4 v1, 0x6

    new-array v2, v1, [Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;

    new-instance v3, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;

    .line 38
    invoke-static {}, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->BASIC_ESCAPE()[[Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;-><init>([[Ljava/lang/CharSequence;)V

    const/4 v4, 0x0

    aput-object v3, v2, v4

    new-instance v3, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;

    .line 39
    invoke-static {}, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->APOS_ESCAPE()[[Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, v5}, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;-><init>([[Ljava/lang/CharSequence;)V

    const/4 v5, 0x1

    aput-object v3, v2, v5

    new-instance v3, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;

    const/16 v6, 0x1f

    new-array v6, v6, [[Ljava/lang/String;

    const-string v7, ""

    const-string v8, "\u0000"

    filled-new-array {v8, v7}, [Ljava/lang/String;

    move-result-object v8

    aput-object v8, v6, v4

    const-string v4, "\u0001"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    aput-object v4, v6, v5

    const-string v4, "\u0002"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x2

    aput-object v4, v6, v5

    const-string v4, "\u0003"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    const/4 v8, 0x3

    aput-object v4, v6, v8

    const-string v4, "\u0004"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    const/4 v9, 0x4

    aput-object v4, v6, v9

    const-string v4, "\u0005"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    const/4 v10, 0x5

    aput-object v4, v6, v10

    const-string v4, "\u0006"

    filled-new-array {v4, v7}, [Ljava/lang/String;

    move-result-object v4

    aput-object v4, v6, v1

    const-string v1, "\u0007"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x7

    aput-object v1, v6, v4

    const-string v1, "\u0008"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x8

    aput-object v1, v6, v4

    const-string v1, "\u000b"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x9

    aput-object v1, v6, v4

    const-string v1, "\u000c"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xa

    aput-object v1, v6, v4

    const-string v1, "\u000e"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xb

    aput-object v1, v6, v4

    const-string v1, "\u000f"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xc

    aput-object v1, v6, v4

    const-string v1, "\u0010"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xd

    aput-object v1, v6, v4

    const-string v1, "\u0011"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xe

    aput-object v1, v6, v4

    const-string v1, "\u0012"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0xf

    aput-object v1, v6, v4

    const-string v1, "\u0013"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x10

    aput-object v1, v6, v4

    const-string v1, "\u0014"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x11

    aput-object v1, v6, v4

    const-string v1, "\u0015"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x12

    aput-object v1, v6, v4

    const-string v1, "\u0016"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x13

    aput-object v1, v6, v4

    const-string v1, "\u0017"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x14

    aput-object v1, v6, v4

    const-string v1, "\u0018"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x15

    aput-object v1, v6, v4

    const-string v1, "\u0019"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x16

    aput-object v1, v6, v4

    const-string v1, "\u001a"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x17

    aput-object v1, v6, v4

    const-string v1, "\u001b"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x18

    aput-object v1, v6, v4

    const-string v1, "\u001c"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x19

    aput-object v1, v6, v4

    const-string v1, "\u001d"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x1a

    aput-object v1, v6, v4

    const-string v1, "\u001e"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x1b

    aput-object v1, v6, v4

    const-string v1, "\u001f"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x1c

    aput-object v1, v6, v4

    const-string v1, "\ufffe"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x1d

    aput-object v1, v6, v4

    const-string v1, "\uffff"

    filled-new-array {v1, v7}, [Ljava/lang/String;

    move-result-object v1

    const/16 v4, 0x1e

    aput-object v1, v6, v4

    invoke-direct {v3, v6}, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;-><init>([[Ljava/lang/CharSequence;)V

    aput-object v3, v2, v5

    const/16 v1, 0x7f

    const/16 v3, 0x84

    .line 74
    invoke-static {v1, v3}, Lcom/qihoo360/replugin/ext/parser/utils/xml/NumericEntityEscaper;->between(II)Lcom/qihoo360/replugin/ext/parser/utils/xml/NumericEntityEscaper;

    move-result-object v1

    aput-object v1, v2, v8

    const/16 v1, 0x86

    const/16 v3, 0x9f

    .line 75
    invoke-static {v1, v3}, Lcom/qihoo360/replugin/ext/parser/utils/xml/NumericEntityEscaper;->between(II)Lcom/qihoo360/replugin/ext/parser/utils/xml/NumericEntityEscaper;

    move-result-object v1

    aput-object v1, v2, v9

    new-instance v1, Lcom/qihoo360/replugin/ext/parser/utils/xml/UnicodeUnpairedSurrogateRemover;

    invoke-direct {v1}, Lcom/qihoo360/replugin/ext/parser/utils/xml/UnicodeUnpairedSurrogateRemover;-><init>()V

    aput-object v1, v2, v10

    invoke-direct {v0, v2}, Lcom/qihoo360/replugin/ext/parser/utils/xml/AggregateTranslator;-><init>([Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;)V

    sput-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/XmlEscaper;->ESCAPE_XML10:Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static escapeXml10(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 83
    sget-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/XmlEscaper;->ESCAPE_XML10:Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;

    invoke-virtual {v0, p0}, Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;->translate(Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
