.class final Lcom/kwad/sdk/pngencrypt/p;
.super Ljava/lang/Object;


# instance fields
.field public final aDG:Lcom/kwad/sdk/pngencrypt/e;

.field public final aEC:Lcom/kwad/sdk/pngencrypt/k;

.field aEm:I

.field aEp:I

.field aEq:I

.field aEr:I

.field aEs:I

.field public final aFe:Z

.field aFf:I

.field aFg:I

.field aFh:I

.field aFi:I

.field aFj:I

.field aFk:I

.field aFl:I

.field buf:[B


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;Lcom/kwad/sdk/pngencrypt/e;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iput-object p2, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    if-eqz p2, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFe:Z

    return-void
.end method


# virtual methods
.method final h([BI)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->buf:[B

    iput p2, p0, Lcom/kwad/sdk/pngencrypt/p;->aFl:I

    return-void
.end method

.method final update(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFf:I

    iget-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aFe:Z

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/e;->GH()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEm:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/e;->aEq:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEq:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/e;->aEp:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEp:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/e;->aEs:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEs:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/e;->aEr:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEr:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/e;->GG()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFg:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/e;->GF()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFh:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/e;->GI()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFi:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aDG:Lcom/kwad/sdk/pngencrypt/e;

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/e;->GJ()I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFj:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEM:I

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aFj:I

    mul-int/2addr p1, v0

    add-int/lit8 p1, p1, 0x7

    div-int/lit8 p1, p1, 0x8

    :goto_0
    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFk:I

    return-void

    :cond_0
    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aEm:I

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aEp:I

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aEq:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aEr:I

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/p;->aEs:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFh:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFg:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEn:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFi:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEo:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aFj:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/p;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEO:I

    goto :goto_0
.end method
