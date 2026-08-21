.class public final Lcom/kwad/components/ad/interstitial/d/c$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private final context:Landroid/content/Context;

.field private jE:I

.field private jF:Z

.field private jG:I

.field private jH:Z

.field private jI:Lcom/kwad/sdk/utils/ac$a;

.field public jJ:D

.field public jK:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->context:Landroid/content/Context;

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/c$b;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jG:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/c$b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jH:Z

    return p0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    return-object p0
.end method

.method public final c(D)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jJ:D

    return-object p0
.end method

.method public final cV()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jE:I

    return v0
.end method

.method public final cW()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jF:Z

    return v0
.end method

.method public final cX()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jH:Z

    return v0
.end method

.method public final cY()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jG:I

    return v0
.end method

.method public final cZ()D
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jJ:D

    return-wide v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->context:Landroid/content/Context;

    return-object v0
.end method

.method public final getTouchCoords()Lcom/kwad/sdk/utils/ac$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jI:Lcom/kwad/sdk/utils/ac$a;

    return-object v0
.end method

.method public final k(Z)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jF:Z

    return-object p0
.end method

.method public final l(Z)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jH:Z

    return-object p0
.end method

.method public final m(Z)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jK:Z

    return-object p0
.end method

.method public final y(I)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jE:I

    return-object p0
.end method

.method public final z(I)Lcom/kwad/components/ad/interstitial/d/c$b;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/d/c$b;->jG:I

    return-object p0
.end method
