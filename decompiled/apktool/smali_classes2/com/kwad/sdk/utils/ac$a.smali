.class public final Lcom/kwad/sdk/utils/ac$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/ac;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private aIJ:I

.field private aIK:I

.field private aIL:I

.field private aIM:I

.field private mHeight:I

.field private mWidth:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIJ:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIK:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIL:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIM:I

    return-void
.end method

.method public constructor <init>(II)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIJ:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIK:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIL:I

    iput v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIM:I

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    iput p2, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    return-void
.end method


# virtual methods
.method public final IJ()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIJ:I

    return v0
.end method

.method public final IK()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIK:I

    return v0
.end method

.method public final IL()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIL:I

    return v0
.end method

.method public final IM()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->aIM:I

    return v0
.end method

.method public final f(FF)V
    .locals 0

    float-to-int p1, p1

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->aIJ:I

    float-to-int p1, p2

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->aIK:I

    return-void
.end method

.method public final g(FF)V
    .locals 0

    float-to-int p1, p1

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->aIL:I

    float-to-int p1, p2

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->aIM:I

    return-void
.end method

.method public final getHeight()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    return v0
.end method

.method public final getWidth()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "TouchCoords{mWidth="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mHeight="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mDownX="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->aIJ:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mDownY="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->aIK:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mUpX="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->aIL:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mUpY="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/ac$a;->aIM:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final x(II)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/utils/ac$a;->mWidth:I

    iput p2, p0, Lcom/kwad/sdk/utils/ac$a;->mHeight:I

    return-void
.end method
