.class public Lcom/kwad/sdk/pngencrypt/chunk/e;
.super Ljava/lang/Object;


# instance fields
.field final aDE:Lcom/kwad/sdk/pngencrypt/k;

.field aFx:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;",
            ">;"
        }
    .end annotation
.end field

.field aFy:Z


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFx:Ljava/util/List;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFy:Z

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aDE:Lcom/kwad/sdk/pngencrypt/k;

    return-void
.end method

.method private static a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;",
            ">;"
        }
    .end annotation

    if-nez p2, :cond_0

    new-instance p2, Lcom/kwad/sdk/pngencrypt/chunk/e$1;

    invoke-direct {p2, p1}, Lcom/kwad/sdk/pngencrypt/chunk/e$1;-><init>(Ljava/lang/String;)V

    invoke-static {p0, p2}, Lcom/kwad/sdk/pngencrypt/chunk/b;->a(Ljava/util/List;Lcom/kwad/sdk/pngencrypt/chunk/c;)Ljava/util/List;

    move-result-object p0

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/pngencrypt/chunk/e$2;

    invoke-direct {v0, p1, p2}, Lcom/kwad/sdk/pngencrypt/chunk/e$2;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/b;->a(Ljava/util/List;Lcom/kwad/sdk/pngencrypt/chunk/c;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final Ha()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFx:Ljava/util/List;

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;I)V
    .locals 0

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->cR(I)V

    iget-object p2, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFx:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->adE:Ljava/lang/String;

    const-string p2, "PLTE"

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFy:Z

    :cond_0
    return-void
.end method

.method public final aj(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "+",
            "Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFx:Ljava/util/List;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/pngencrypt/chunk/e;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ChunkList: read: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/e;->aFx:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
