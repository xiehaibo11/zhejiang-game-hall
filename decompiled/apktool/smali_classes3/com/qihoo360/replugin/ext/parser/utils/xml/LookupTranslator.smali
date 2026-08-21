.class Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;
.super Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;
.source "LookupTranslator.java"


# instance fields
.field private final longest:I

.field private final lookupMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/CharSequence;",
            ">;"
        }
    .end annotation
.end field

.field private final shortest:I


# direct methods
.method public varargs constructor <init>([[Ljava/lang/CharSequence;)V
    .locals 9

    .line 51
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/utils/xml/CharSequenceTranslator;-><init>()V

    .line 52
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->lookupMap:Ljava/util/HashMap;

    const/4 v0, 0x0

    const v1, 0x7fffffff

    if-eqz p1, :cond_3

    .line 56
    array-length v2, p1

    move v3, v0

    move v4, v3

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v5, p1, v3

    .line 57
    iget-object v6, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->lookupMap:Ljava/util/HashMap;

    aget-object v7, v5, v0

    invoke-interface {v7}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x1

    aget-object v8, v5, v8

    invoke-virtual {v6, v7, v8}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 58
    aget-object v5, v5, v0

    invoke-interface {v5}, Ljava/lang/CharSequence;->length()I

    move-result v5

    if-ge v5, v1, :cond_0

    move v1, v5

    :cond_0
    if-le v5, v4, :cond_1

    move v4, v5

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    move v0, v4

    .line 67
    :cond_3
    iput v1, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->shortest:I

    .line 68
    iput v0, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->longest:I

    return-void
.end method


# virtual methods
.method public translate(Ljava/lang/CharSequence;ILjava/io/Writer;)I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 76
    iget v0, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->longest:I

    add-int v1, p2, v0

    .line 77
    invoke-interface {p1}, Ljava/lang/CharSequence;->length()I

    move-result v2

    if-le v1, v2, :cond_0

    .line 78
    invoke-interface {p1}, Ljava/lang/CharSequence;->length()I

    move-result v0

    sub-int/2addr v0, p2

    .line 81
    :cond_0
    :goto_0
    iget v1, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->shortest:I

    if-lt v0, v1, :cond_2

    add-int v1, p2, v0

    .line 82
    invoke-interface {p1, p2, v1}, Ljava/lang/CharSequence;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v1

    .line 83
    iget-object v2, p0, Lcom/qihoo360/replugin/ext/parser/utils/xml/LookupTranslator;->lookupMap:Ljava/util/HashMap;

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/CharSequence;

    if-eqz v1, :cond_1

    .line 85
    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/io/Writer;->write(Ljava/lang/String;)V

    return v0

    :cond_1
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    return p1
.end method
