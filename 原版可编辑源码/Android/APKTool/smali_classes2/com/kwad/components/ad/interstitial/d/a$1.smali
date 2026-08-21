.class final Lcom/kwad/components/ad/interstitial/d/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/interstitial/d/c$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/a;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic jd:Lcom/kwad/components/ad/interstitial/d/c;

.field final synthetic je:Lcom/kwad/components/ad/interstitial/d/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/a;Lcom/kwad/components/ad/interstitial/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->je:Lcom/kwad/components/ad/interstitial/d/a;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->je:Lcom/kwad/components/ad/interstitial/d/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/a;->a(Lcom/kwad/components/ad/interstitial/d/a;Lcom/kwad/components/ad/interstitial/d/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->je:Lcom/kwad/components/ad/interstitial/d/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-static {v0, v1}, Lcom/kwad/components/ad/interstitial/d/a;->b(Lcom/kwad/components/ad/interstitial/d/a;Lcom/kwad/components/ad/interstitial/d/c;)V

    return-void
.end method
