.class Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue$RawValue;
.super Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;
.source "ResourceValue.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "RawValue"
.end annotation


# instance fields
.field private final dataType:S


# direct methods
.method private constructor <init>(IS)V
    .locals 0

    .line 74
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue;-><init>(I)V

    .line 75
    iput-short p2, p0, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue$RawValue;->dataType:S

    return-void
.end method

.method synthetic constructor <init>(ISLcom/qihoo360/replugin/ext/parser/struct/ResourceValue$1;)V
    .locals 0

    .line 70
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue$RawValue;-><init>(IS)V

    return-void
.end method


# virtual methods
.method public toStringValue()Ljava/lang/String;
    .locals 5

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-short v1, p0, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue$RawValue;->dataType:S

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/replugin/ext/parser/struct/ResourceValue$RawValue;->value:I

    int-to-long v1, v1

    const-wide v3, 0xffffffffL

    and-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
