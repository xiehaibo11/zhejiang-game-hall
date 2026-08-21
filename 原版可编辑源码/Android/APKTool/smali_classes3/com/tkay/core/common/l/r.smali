.class public final Lcom/tkay/core/common/l/r;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 16
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    .line 17
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    if-ne v0, p1, :cond_0

    return-object p0

    :cond_0
    sub-int/2addr p1, v0

    .line 23
    invoke-static {p1}, Ljava/lang/Math;->abs(I)I

    move-result p1

    .line 25
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, p0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    if-ge p0, p1, :cond_1

    const-string v1, " "

    .line 27
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    .line 30
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
