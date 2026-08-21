.class public Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private blurRadius:I

.field private cacheInMemory:Z

.field private cacheOnDisk:Z

.field private considerExifParams:Z

.field private cornerRound:I

.field private decodingOptions:Landroid/graphics/BitmapFactory$Options;

.field private delayBeforeLoading:I

.field private imageForEmptyUri:Landroid/graphics/drawable/Drawable;

.field private imageOnFail:Landroid/graphics/drawable/Drawable;

.field private imageOnLoading:Landroid/graphics/drawable/Drawable;

.field private imageResForEmptyUri:I

.field private imageResOnFail:I

.field private imageResOnLoading:I

.field private isCircle:Z

.field private isFrameSequence:Z

.field private isSyncLoading:Z

.field private resetViewBeforeLoading:Z

.field private resources:Landroid/content/res/Resources;

.field private strokeColor:I

.field private strokeWidth:F


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnLoading:I

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResForEmptyUri:I

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnFail:I

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnLoading:Landroid/graphics/drawable/Drawable;

    iput-object v1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageForEmptyUri:Landroid/graphics/drawable/Drawable;

    iput-object v1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnFail:Landroid/graphics/drawable/Drawable;

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resetViewBeforeLoading:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheInMemory:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk:Z

    new-instance v1, Landroid/graphics/BitmapFactory$Options;

    invoke-direct {v1}, Landroid/graphics/BitmapFactory$Options;-><init>()V

    iput-object v1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->decodingOptions:Landroid/graphics/BitmapFactory$Options;

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->delayBeforeLoading:I

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->considerExifParams:Z

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isSyncLoading:Z

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnLoading:I

    return p0
.end method

.method static synthetic access$100(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResForEmptyUri:I

    return p0
.end method

.method static synthetic access$1000(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->delayBeforeLoading:I

    return p0
.end method

.method static synthetic access$1100(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->considerExifParams:Z

    return p0
.end method

.method static synthetic access$1200(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isSyncLoading:Z

    return p0
.end method

.method static synthetic access$1300(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->blurRadius:I

    return p0
.end method

.method static synthetic access$1400(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isFrameSequence:Z

    return p0
.end method

.method static synthetic access$1500(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cornerRound:I

    return p0
.end method

.method static synthetic access$1600(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isCircle:Z

    return p0
.end method

.method static synthetic access$1700(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeColor:I

    return p0
.end method

.method static synthetic access$1800(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)F
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeWidth:F

    return p0
.end method

.method static synthetic access$1900(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Landroid/content/res/Resources;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resources:Landroid/content/res/Resources;

    return-object p0
.end method

.method static synthetic access$200(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnFail:I

    return p0
.end method

.method static synthetic access$300(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Landroid/graphics/drawable/Drawable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnLoading:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method static synthetic access$400(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Landroid/graphics/drawable/Drawable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageForEmptyUri:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method static synthetic access$500(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Landroid/graphics/drawable/Drawable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnFail:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method static synthetic access$600(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resetViewBeforeLoading:Z

    return p0
.end method

.method static synthetic access$700(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheInMemory:Z

    return p0
.end method

.method static synthetic access$800(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk:Z

    return p0
.end method

.method static synthetic access$900(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;)Landroid/graphics/BitmapFactory$Options;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->decodingOptions:Landroid/graphics/BitmapFactory$Options;

    return-object p0
.end method


# virtual methods
.method public bitmapConfig(Landroid/graphics/Bitmap$Config;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->decodingOptions:Landroid/graphics/BitmapFactory$Options;

    iput-object p1, v0, Landroid/graphics/BitmapFactory$Options;->inPreferredConfig:Landroid/graphics/Bitmap$Config;

    return-object p0

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "bitmapConfig can\'t be null"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public build()Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;
    .locals 2

    new-instance v0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;-><init>(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;Lcom/kwad/components/offline/api/core/api/IImageLoader$1;)V

    return-object v0
.end method

.method public cacheInMemory()Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheInMemory:Z

    return-object p0
.end method

.method public cacheInMemory(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheInMemory:Z

    return-object p0
.end method

.method public cacheOnDisc()Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;

    move-result-object v0

    return-object v0
.end method

.method public cacheOnDisc(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-virtual {p0, p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;

    move-result-object p1

    return-object p1
.end method

.method public cacheOnDisk(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk:Z

    return-object p0
.end method

.method public cloneFrom(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 1

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2000(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnLoading:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2100(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResForEmptyUri:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2200(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnFail:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2300(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnLoading:Landroid/graphics/drawable/Drawable;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2400(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageForEmptyUri:Landroid/graphics/drawable/Drawable;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2500(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnFail:Landroid/graphics/drawable/Drawable;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2600(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resetViewBeforeLoading:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2700(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheInMemory:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2800(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cacheOnDisk:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$2900(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Landroid/graphics/BitmapFactory$Options;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->decodingOptions:Landroid/graphics/BitmapFactory$Options;

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3000(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->delayBeforeLoading:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3100(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->considerExifParams:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3200(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isSyncLoading:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3300(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->blurRadius:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3400(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isFrameSequence:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3500(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cornerRound:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3600(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isCircle:Z

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3700(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeColor:I

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3800(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)F

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeWidth:F

    invoke-static {p1}, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;->access$3900(Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat;)Landroid/content/res/Resources;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resources:Landroid/content/res/Resources;

    return-object p0
.end method

.method public considerExifParams(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->considerExifParams:Z

    return-object p0
.end method

.method public setBlurRadius(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->blurRadius:I

    return-object p0
.end method

.method public setCircle(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isCircle:Z

    return-object p0
.end method

.method public setCornerRound(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->cornerRound:I

    return-object p0
.end method

.method public setFrameSequence(Z)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isFrameSequence:Z

    return-object p0
.end method

.method public setResources(Landroid/content/res/Resources;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->resources:Landroid/content/res/Resources;

    return-object p0
.end method

.method public setStrokeColor(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeColor:I

    return-object p0
.end method

.method public setStrokeWidth(F)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 1

    const/4 v0, 0x0

    cmpl-float v0, p1, v0

    if-lez v0, :cond_0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->strokeWidth:F

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->isCircle:Z

    :cond_0
    return-object p0
.end method

.method public showImageForEmptyUri(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResForEmptyUri:I

    return-object p0
.end method

.method public showImageForEmptyUri(Landroid/graphics/drawable/Drawable;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageForEmptyUri:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method public showImageOnFail(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnFail:I

    return-object p0
.end method

.method public showImageOnFail(Landroid/graphics/drawable/Drawable;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnFail:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method public showImageOnLoading(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnLoading:I

    return-object p0
.end method

.method public showImageOnLoading(Landroid/graphics/drawable/Drawable;)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageOnLoading:Landroid/graphics/drawable/Drawable;

    return-object p0
.end method

.method public showStubImage(I)Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput p1, p0, Lcom/kwad/components/offline/api/core/api/IImageLoader$DisplayImageOptionsCompat$Builder;->imageResOnLoading:I

    return-object p0
.end method
