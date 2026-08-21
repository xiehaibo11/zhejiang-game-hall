.class public abstract Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/pngencrypt/chunk/PngChunk$ChunkOrderingConstraint;
    }
.end annotation


# instance fields
.field protected final aEC:Lcom/kwad/sdk/pngencrypt/k;

.field public final aFC:Z

.field public final aFD:Z

.field public final aFE:Z

.field protected aFF:Lcom/kwad/sdk/pngencrypt/chunk/d;

.field private aFG:Z

.field protected aFH:I

.field public final adE:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFG:Z

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFH:I

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->adE:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->fh(Ljava/lang/String;)Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFC:Z

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->fi(Ljava/lang/String;)Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFD:Z

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->fj(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFE:Z

    return-void
.end method

.method private GZ()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFF:Lcom/kwad/sdk/pngencrypt/chunk/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/pngencrypt/chunk/d;->GZ()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    return-wide v0
.end method

.method private Hb()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFF:Lcom/kwad/sdk/pngencrypt/chunk/d;

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/chunk/d;->len:I

    return v0

    :cond_0
    const/4 v0, -0x1

    return v0
.end method


# virtual methods
.method protected abstract a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
.end method

.method final b(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFF:Lcom/kwad/sdk/pngencrypt/chunk/d;

    return-void
.end method

.method final cR(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->aFH:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "chunk id= "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->adE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " (len="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->Hb()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " offset="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/PngChunk;->GZ()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
