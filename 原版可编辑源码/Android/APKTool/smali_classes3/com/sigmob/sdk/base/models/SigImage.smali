.class public Lcom/sigmob/sdk/base/models/SigImage;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field public height:I

.field public imageUrl:Ljava/lang/String;

.field public width:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getHeight()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/SigImage;->height:I

    return v0
.end method

.method public getImageUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigImage;->imageUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getWidth()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/SigImage;->width:I

    return v0
.end method

.method public setHeight(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/SigImage;->height:I

    return-void
.end method

.method public setImageUrl(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/SigImage;->imageUrl:Ljava/lang/String;

    return-void
.end method

.method public setWidth(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/SigImage;->width:I

    return-void
.end method
