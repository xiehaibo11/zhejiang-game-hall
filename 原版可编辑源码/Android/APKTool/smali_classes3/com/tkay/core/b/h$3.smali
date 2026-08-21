.class final Lcom/tkay/core/b/h$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/h;->a(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/tkay/core/common/f/aj;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/h;)V
    .locals 0

    .line 319
    iput-object p1, p0, Lcom/tkay/core/b/h$3;->a:Lcom/tkay/core/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)I
    .locals 2

    .line 322
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 323
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide p0

    cmpl-double p0, v0, p0

    if-lez p0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    if-nez p0, :cond_1

    const/4 p0, 0x0

    return p0

    :cond_1
    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method public final synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 2

    .line 319
    check-cast p1, Lcom/tkay/core/common/f/aj;

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 1322
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 1323
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide p1

    cmpl-double p1, v0, p1

    if-lez p1, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    if-nez p1, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_1
    const/4 p1, 0x1

    return p1
.end method
