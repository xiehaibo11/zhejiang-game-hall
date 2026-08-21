.class final Lcom/tkay/core/common/f/am$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f/am;->c(Ljava/lang/String;)Ljava/util/List;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/tkay/core/common/f/am$a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/am;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/am;)V
    .locals 0

    .line 162
    iput-object p1, p0, Lcom/tkay/core/common/f/am$1;->a:Lcom/tkay/core/common/f/am;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/am$a;Lcom/tkay/core/common/f/am$a;)I
    .locals 4

    .line 165
    iget-wide v0, p0, Lcom/tkay/core/common/f/am$a;->d:D

    iget-wide v2, p1, Lcom/tkay/core/common/f/am$a;->d:D

    cmpl-double v0, v0, v2

    if-lez v0, :cond_0

    const/4 p0, -0x1

    return p0

    .line 167
    :cond_0
    iget-wide v0, p0, Lcom/tkay/core/common/f/am$a;->d:D

    iget-wide p0, p1, Lcom/tkay/core/common/f/am$a;->d:D

    cmpl-double p0, v0, p0

    if-nez p0, :cond_1

    const/4 p0, 0x0

    return p0

    :cond_1
    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method public final bridge synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 4

    .line 162
    check-cast p1, Lcom/tkay/core/common/f/am$a;

    check-cast p2, Lcom/tkay/core/common/f/am$a;

    .line 1165
    iget-wide v0, p1, Lcom/tkay/core/common/f/am$a;->d:D

    iget-wide v2, p2, Lcom/tkay/core/common/f/am$a;->d:D

    cmpl-double v0, v0, v2

    if-lez v0, :cond_0

    const/4 p1, -0x1

    return p1

    .line 1167
    :cond_0
    iget-wide v0, p1, Lcom/tkay/core/common/f/am$a;->d:D

    iget-wide p1, p2, Lcom/tkay/core/common/f/am$a;->d:D

    cmpl-double p1, v0, p1

    if-nez p1, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_1
    const/4 p1, 0x1

    return p1
.end method
