.class public Lcom/kwad/sdk/api/model/NativeAdExtraData;
.super Ljava/lang/Object;


# instance fields
.field private enableShake:Z

.field private showLiveStatus:I

.field private showLiveStyle:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getShowLiveStatus()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->showLiveStatus:I

    return v0
.end method

.method public getShowLiveStyle()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->showLiveStyle:I

    return v0
.end method

.method public isEnableShake()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->enableShake:Z

    return v0
.end method

.method public setEnableShake(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->enableShake:Z

    return-void
.end method

.method public setShowLiveStatus(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->showLiveStatus:I

    return-void
.end method

.method public setShowLiveStyle(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/api/model/NativeAdExtraData;->showLiveStyle:I

    return-void
.end method
