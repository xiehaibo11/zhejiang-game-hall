.class public final Lcom/kwad/sdk/pngencrypt/chunk/w;
.super Ljava/lang/Object;


# instance fields
.field private final aGi:Lcom/kwad/sdk/pngencrypt/chunk/e;

.field private final aGj:Z


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/chunk/e;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/w;->aGi:Lcom/kwad/sdk/pngencrypt/chunk/e;

    instance-of p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/f;

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/w;->aGj:Z

    return-void

    :cond_0
    const/4 p1, 0x1

    goto :goto_0
.end method

.method private fk(Ljava/lang/String;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "+",
            "Lcom/kwad/sdk/pngencrypt/chunk/t;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/w;->aGi:Lcom/kwad/sdk/pngencrypt/chunk/e;

    const-string v2, "tEXt"

    invoke-virtual {v1, v2, p1}, Lcom/kwad/sdk/pngencrypt/chunk/e;->aj(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/w;->aGi:Lcom/kwad/sdk/pngencrypt/chunk/e;

    const-string v2, "zTXt"

    invoke-virtual {v1, v2, p1}, Lcom/kwad/sdk/pngencrypt/chunk/e;->aj(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/w;->aGi:Lcom/kwad/sdk/pngencrypt/chunk/e;

    const-string v2, "iTXt"

    invoke-virtual {v1, v2, p1}, Lcom/kwad/sdk/pngencrypt/chunk/e;->aj(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    return-object v0
.end method


# virtual methods
.method public final fl(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/w;->fk(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, ""

    return-object p1

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/pngencrypt/chunk/t;

    invoke-virtual {v1}, Lcom/kwad/sdk/pngencrypt/chunk/t;->Hk()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
