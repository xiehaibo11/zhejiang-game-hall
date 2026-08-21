.class final Lcom/kwad/components/ad/interstitial/d/a$2;
.super Landroid/view/OrientationEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a;->a(Lcom/kwad/components/ad/interstitial/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic jd:Lcom/kwad/components/ad/interstitial/d/c;

.field final synthetic je:Lcom/kwad/components/ad/interstitial/d/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/a;Landroid/content/Context;Lcom/kwad/components/ad/interstitial/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a$2;->je:Lcom/kwad/components/ad/interstitial/d/a;

    iput-object p3, p0, Lcom/kwad/components/ad/interstitial/d/a$2;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-direct {p0, p2}, Landroid/view/OrientationEventListener;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final onOrientationChanged(I)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a$2;->je:Lcom/kwad/components/ad/interstitial/d/a;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a$2;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-static {p1, v0}, Lcom/kwad/components/ad/interstitial/d/a;->a(Lcom/kwad/components/ad/interstitial/d/a;Lcom/kwad/components/ad/interstitial/d/c;)V

    return-void
.end method
