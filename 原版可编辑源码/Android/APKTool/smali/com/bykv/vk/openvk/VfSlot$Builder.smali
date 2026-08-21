.class public Lcom/bykv/vk/openvk/VfSlot$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/VfSlot;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private b:Ljava/lang/String;

.field private bm:I

.field private c:I

.field private df:I

.field private f:F

.field private fo:Ljava/lang/String;

.field private fw:Ljava/lang/String;

.field private hq:I

.field private n:Ljava/lang/String;

.field private oh:F

.field private ou:Lcom/bykv/vk/openvk/TTAdLoadType;

.field private pp:Z

.field private pt:Z

.field private q:I

.field private qx:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private re:Ljava/lang/String;

.field private rg:Ljava/lang/String;

.field private rz:I

.field private un:[I

.field private ux:Ljava/lang/String;

.field private v:Z

.field private y:Ljava/lang/String;

.field private z:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 257
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x280

    .line 261
    iput v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->df:I

    const/16 v0, 0x140

    .line 262
    iput v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->q:I

    const/4 v0, 0x1

    .line 263
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pt:Z

    const/4 v1, 0x0

    .line 264
    iput-boolean v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pp:Z

    .line 265
    iput v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->c:I

    const-string v1, "defaultUser"

    .line 267
    iput-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ux:Ljava/lang/String;

    const/4 v1, 0x2

    .line 268
    iput v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->rz:I

    .line 276
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->v:Z

    .line 288
    sget-object v0, Lcom/bykv/vk/openvk/TTAdLoadType;->UNKNOWN:Lcom/bykv/vk/openvk/TTAdLoadType;

    iput-object v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ou:Lcom/bykv/vk/openvk/TTAdLoadType;

    return-void
.end method


# virtual methods
.method public build()Lcom/bykv/vk/openvk/VfSlot;
    .locals 3

    .line 433
    new-instance v0, Lcom/bykv/vk/openvk/VfSlot;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;-><init>(Lcom/bykv/vk/openvk/VfSlot$1;)V

    .line 434
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->rg:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 435
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->c:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 436
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pt:Z

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;Z)Z

    .line 437
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pp:Z

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->df(Lcom/bykv/vk/openvk/VfSlot;Z)Z

    .line 438
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->df:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->df(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 439
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->q:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->q(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 441
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->oh:F

    const/4 v2, 0x0

    cmpg-float v2, v1, v2

    if-gtz v2, :cond_0

    .line 442
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->df:I

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;F)F

    .line 443
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->q:I

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->df(Lcom/bykv/vk/openvk/VfSlot;F)F

    goto :goto_0

    .line 445
    :cond_0
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;F)F

    .line 446
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->f:F

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->df(Lcom/bykv/vk/openvk/VfSlot;F)F

    .line 449
    :goto_0
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->fw:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->df(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 450
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ux:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->q(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 451
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->rz:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->pt(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 452
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->bm:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->pp(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 453
    iget-boolean v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->v:Z

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->q(Lcom/bykv/vk/openvk/VfSlot;Z)Z

    .line 454
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->un:[I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;[I)[I

    .line 455
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->z:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->c(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 456
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->r:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->pt(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 457
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->b:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->pp(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 458
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->y:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->c(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 459
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->fo:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->fw(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 460
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->re:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->ux(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 461
    iget v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->hq:I

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->fw(Lcom/bykv/vk/openvk/VfSlot;I)I

    .line 462
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->qx:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rz(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 463
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->n:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->bm(Lcom/bykv/vk/openvk/VfSlot;Ljava/lang/String;)Ljava/lang/String;

    .line 464
    iget-object v1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ou:Lcom/bykv/vk/openvk/TTAdLoadType;

    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/VfSlot;->rg(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTAdLoadType;)Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object v0
.end method

.method public setAdCount(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 2

    const-string v0, "TT_AD_SDK"

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    const-string v1, "setAdCount: adCount must greater than 0 "

    .line 360
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->q(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/16 v1, 0x14

    if-le p1, v1, :cond_1

    const-string p1, "setAdCount: adCount must less than or equal to 20 "

    .line 365
    invoke-static {v0, p1}, Lcom/bykv/vk/openvk/api/rg;->q(Ljava/lang/String;Ljava/lang/String;)V

    move p1, v1

    .line 368
    :cond_1
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->c:I

    return-object p0
.end method

.method public setAdId(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 305
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->y:Ljava/lang/String;

    return-object p0
.end method

.method public setAdLoadType(Lcom/bykv/vk/openvk/TTAdLoadType;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 420
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ou:Lcom/bykv/vk/openvk/TTAdLoadType;

    return-object p0
.end method

.method public setAdType(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 300
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->hq:I

    return-object p0
.end method

.method public setAdloadSeq(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 393
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->z:I

    return-object p0
.end method

.method public setCodeId(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 325
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->rg:Ljava/lang/String;

    return-object p0
.end method

.method public setCreativeId(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 310
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->fo:Ljava/lang/String;

    return-object p0
.end method

.method public setExpressViewAcceptedSize(FF)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 336
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->oh:F

    .line 337
    iput p2, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->f:F

    return-object p0
.end method

.method public setExt(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 315
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->re:Ljava/lang/String;

    return-object p0
.end method

.method public varargs setExternalABVid([I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 403
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->un:[I

    return-object p0
.end method

.method public setExtraParam(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 291
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->b:Ljava/lang/String;

    return-object p0
.end method

.method public setImageAcceptedSize(II)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 330
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->df:I

    .line 331
    iput p2, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->q:I

    return-object p0
.end method

.method public setIsAutoPlay(Z)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 320
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->v:Z

    return-object p0
.end method

.method public setMediaExtra(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 373
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->fw:Ljava/lang/String;

    return-object p0
.end method

.method public setNativeAdType(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 388
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->bm:I

    return-object p0
.end method

.method public setOrientation(I)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 383
    iput p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->rz:I

    return-object p0
.end method

.method public setPrimeRit(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 398
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->r:Ljava/lang/String;

    return-object p0
.end method

.method public setSupportDeepLink(Z)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 342
    iput-boolean p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pt:Z

    return-object p0
.end method

.method public setUserData(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 409
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->n:Ljava/lang/String;

    return-object p0
.end method

.method public setUserID(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    .line 378
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->ux:Ljava/lang/String;

    return-object p0
.end method

.method public supportRenderControl()Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 1

    const/4 v0, 0x1

    .line 347
    iput-boolean v0, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->pp:Z

    return-object p0
.end method

.method public withBid(Ljava/lang/String;)Lcom/bykv/vk/openvk/VfSlot$Builder;
    .locals 0

    if-nez p1, :cond_0

    return-object p0

    .line 428
    :cond_0
    iput-object p1, p0, Lcom/bykv/vk/openvk/VfSlot$Builder;->qx:Ljava/lang/String;

    return-object p0
.end method
