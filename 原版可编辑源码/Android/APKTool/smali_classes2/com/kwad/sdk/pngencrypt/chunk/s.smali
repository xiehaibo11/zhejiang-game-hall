.class public final Lcom/kwad/sdk/pngencrypt/chunk/s;
.super Lcom/kwad/sdk/pngencrypt/chunk/p;


# instance fields
.field private aGc:I

.field private aGd:I

.field private aGe:I

.field private aGf:I

.field private aGg:[I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    const-string v0, "tRNS"

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/p;-><init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V

    const/4 p1, 0x0

    new-array p1, p1, [I

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGg:[I

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget-boolean v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEJ:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {p1, v1}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGc:I

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget-boolean v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEK:Z

    if-eqz v0, :cond_2

    iget-object v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    array-length v0, v0

    new-array v2, v0, [I

    iput-object v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGg:[I

    :goto_0
    if-ge v1, v0, :cond_1

    iget-object v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGg:[I

    iget-object v3, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget-byte v3, v3, v1

    and-int/lit16 v3, v3, 0xff

    aput v3, v2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void

    :cond_2
    iget-object v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v0, v1}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGd:I

    iget-object v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    const/4 v1, 0x2

    invoke-static {v0, v1}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGe:I

    iget-object p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    const/4 v0, 0x4

    invoke-static {p1, v0}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/s;->aGf:I

    return-void
.end method
