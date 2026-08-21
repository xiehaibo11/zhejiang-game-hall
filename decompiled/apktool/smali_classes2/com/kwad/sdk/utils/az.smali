.class public final Lcom/kwad/sdk/utils/az;
.super Ljava/lang/Object;


# instance fields
.field private final mHeight:I

.field private final mWidth:I


# direct methods
.method public constructor <init>(II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/utils/az;->mWidth:I

    iput p2, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    return-void
.end method


# virtual methods
.method public final Ju()F
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/az;->mWidth:I

    int-to-float v0, v0

    return v0
.end method

.method public final Jv()F
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    int-to-float v0, v0

    return v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    if-ne p0, p1, :cond_1

    return v1

    :cond_1
    instance-of v2, p1, Lcom/kwad/sdk/utils/az;

    if-eqz v2, :cond_2

    check-cast p1, Lcom/kwad/sdk/utils/az;

    iget v2, p0, Lcom/kwad/sdk/utils/az;->mWidth:I

    iget v3, p1, Lcom/kwad/sdk/utils/az;->mWidth:I

    if-ne v2, v3, :cond_2

    iget v2, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    iget p1, p1, Lcom/kwad/sdk/utils/az;->mHeight:I

    if-ne v2, p1, :cond_2

    return v1

    :cond_2
    return v0
.end method

.method public final getHeight()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    return v0
.end method

.method public final hashCode()I
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    iget v1, p0, Lcom/kwad/sdk/utils/az;->mWidth:I

    shl-int/lit8 v2, v1, 0x10

    ushr-int/lit8 v1, v1, 0x10

    or-int/2addr v1, v2

    xor-int/2addr v0, v1

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/kwad/sdk/utils/az;->mWidth:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "x"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/utils/az;->mHeight:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
