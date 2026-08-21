.class final Lcom/tkay/expressad/exoplayer/e/a/a$a;
.super Lcom/tkay/expressad/exoplayer/e/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/e/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# instance fields
.field public final aV:J

.field public final aW:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/e/a/a$b;",
            ">;"
        }
    .end annotation
.end field

.field public final aX:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/e/a/a$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(IJ)V
    .locals 0

    .line 192
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/e/a/a;-><init>(I)V

    .line 193
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aV:J

    .line 194
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    .line 195
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    return-void
.end method

.method private f(I)I
    .locals 5

    .line 264
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    if-ge v2, v0, :cond_1

    .line 266
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;

    .line 267
    iget v4, v4, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aU:I

    if-ne v4, p1, :cond_0

    add-int/lit8 v3, v3, 0x1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 271
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    :goto_1
    if-ge v1, v0, :cond_3

    .line 273
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    .line 274
    iget v2, v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aU:I

    if-ne v2, p1, :cond_2

    add-int/lit8 v3, v3, 0x1

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    :cond_3
    return v3
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/e/a/a$a;)V
    .locals 1

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/e/a/a$b;)V
    .locals 1

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final d(I)Lcom/tkay/expressad/exoplayer/e/a/a$b;
    .locals 4

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 228
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/e/a/a$b;

    .line 229
    iget v3, v2, Lcom/tkay/expressad/exoplayer/e/a/a$b;->aU:I

    if-ne v3, p1, :cond_0

    return-object v2

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public final e(I)Lcom/tkay/expressad/exoplayer/e/a/a$a;
    .locals 4

    .line 246
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 248
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;

    .line 249
    iget v3, v2, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aU:I

    if-ne v3, p1, :cond_0

    return-object v2

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    .line 283
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aU:I

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/e/a/a$a;->c(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " leaves: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aW:Ljava/util/List;

    .line 284
    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " containers: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/e/a/a$a;->aX:Ljava/util/List;

    .line 285
    invoke-interface {v1}, Ljava/util/List;->toArray()[Ljava/lang/Object;

    move-result-object v1

    invoke-static {v1}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
