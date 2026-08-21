.class public Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;
.super Ljava/lang/Object;
.source "EntityArrays.java"


# static fields
.field private static final APOS_ESCAPE:[[Ljava/lang/String;

.field private static final BASIC_ESCAPE:[[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v0, 0x4

    new-array v0, v0, [[Ljava/lang/String;

    const-string v1, "\""

    const-string v2, "&quot;"

    .line 34
    filled-new-array {v1, v2}, [Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const-string v1, "&"

    const-string v3, "&amp;"

    filled-new-array {v1, v3}, [Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x1

    aput-object v1, v0, v3

    const-string v1, "<"

    const-string v4, "&lt;"

    filled-new-array {v1, v4}, [Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x2

    aput-object v1, v0, v4

    const-string v1, ">"

    const-string v4, "&gt;"

    filled-new-array {v1, v4}, [Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x3

    aput-object v1, v0, v4

    sput-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->BASIC_ESCAPE:[[Ljava/lang/String;

    new-array v0, v3, [[Ljava/lang/String;

    const-string v1, "\'"

    const-string v3, "&apos;"

    .line 40
    filled-new-array {v1, v3}, [Ljava/lang/String;

    move-result-object v1

    aput-object v1, v0, v2

    sput-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->APOS_ESCAPE:[[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static APOS_ESCAPE()[[Ljava/lang/String;
    .locals 1

    .line 61
    sget-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->APOS_ESCAPE:[[Ljava/lang/String;

    invoke-virtual {v0}, [[Ljava/lang/String;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[Ljava/lang/String;

    return-object v0
.end method

.method public static BASIC_ESCAPE()[[Ljava/lang/String;
    .locals 1

    .line 52
    sget-object v0, Lcom/qihoo360/replugin/ext/parser/utils/xml/EntityArrays;->BASIC_ESCAPE:[[Ljava/lang/String;

    invoke-virtual {v0}, [[Ljava/lang/String;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [[Ljava/lang/String;

    return-object v0
.end method
