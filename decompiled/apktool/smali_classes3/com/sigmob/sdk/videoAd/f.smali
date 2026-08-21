.class public Lcom/sigmob/sdk/videoAd/f;
.super Lcom/sigmob/sdk/base/common/g;

# interfaces
.implements Ljava/io/Serializable;
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/sigmob/sdk/base/common/g;",
        "Ljava/io/Serializable;",
        "Ljava/lang/Comparable<",
        "Lcom/sigmob/sdk/videoAd/f;",
        ">;"
    }
.end annotation


# static fields
.field private static final serialVersionUID:J


# instance fields
.field private final a:F


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/base/common/a;F)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/g$a;->b:Lcom/sigmob/sdk/base/common/g$a;

    invoke-direct {p0, v0, p1, p2}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/common/g$a;Lcom/sigmob/sdk/base/common/a;F)V
    .locals 6

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v4, p2

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/g;-><init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/common/a;Ljava/lang/String;)V

    const/4 p1, 0x0

    cmpl-float p1, p3, p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkArgument(Z)Z

    iput p3, p0, Lcom/sigmob/sdk/videoAd/f;->a:F

    return-void
.end method

.method constructor <init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;FLjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, p4, v0}, Lcom/sigmob/sdk/base/common/g;-><init>(Lcom/sigmob/sdk/base/common/g$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    cmpl-float p1, p3, p1

    if-ltz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkArgument(Z)Z

    iput p3, p0, Lcom/sigmob/sdk/videoAd/f;->a:F

    return-void
.end method

.method private q()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/f;->a:F

    return v0
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/videoAd/f;)I
    .locals 4

    invoke-direct {p1}, Lcom/sigmob/sdk/videoAd/f;->q()F

    move-result p1

    invoke-direct {p0}, Lcom/sigmob/sdk/videoAd/f;->q()F

    move-result v0

    float-to-double v0, v0

    float-to-double v2, p1

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Double;->compare(DD)I

    move-result p1

    return p1
.end method

.method public synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/sigmob/sdk/videoAd/f;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoAd/f;->a(Lcom/sigmob/sdk/videoAd/f;)I

    move-result p1

    return p1
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    sget-object v0, Ljava/util/Locale;->US:Ljava/util/Locale;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    iget v2, p0, Lcom/sigmob/sdk/videoAd/f;->a:F

    invoke-static {v2}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoAd/f;->k()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    const-string v2, "%2f: %s"

    invoke-static {v0, v2, v1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
