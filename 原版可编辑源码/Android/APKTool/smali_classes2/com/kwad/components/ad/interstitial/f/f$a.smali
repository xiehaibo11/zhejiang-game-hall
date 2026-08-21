.class public final Lcom/kwad/components/ad/interstitial/f/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/f/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private mh:Z

.field private mi:Z

.field private mj:I

.field private mk:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mh:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mi:Z

    iput v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mj:I

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mk:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/f/f$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mh:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/f/f$a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mi:Z

    return p0
.end method


# virtual methods
.method public final E(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mj:I

    return-void
.end method

.method public final eB()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mj:I

    return v0
.end method

.method public final eC()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mk:Z

    return v0
.end method

.method public final v(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mh:Z

    return-void
.end method

.method public final w(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mi:Z

    return-void
.end method

.method public final x(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/f$a;->mk:Z

    return-void
.end method
