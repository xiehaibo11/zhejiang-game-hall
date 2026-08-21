.class final Lcom/kwad/components/ad/interstitial/monitor/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/interstitial/monitor/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final iZ:Lcom/kwad/components/ad/interstitial/monitor/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/b;-><init>(B)V

    sput-object v0, Lcom/kwad/components/ad/interstitial/monitor/b$a;->iZ:Lcom/kwad/components/ad/interstitial/monitor/b;

    return-void
.end method

.method static synthetic cM()Lcom/kwad/components/ad/interstitial/monitor/b;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/interstitial/monitor/b$a;->iZ:Lcom/kwad/components/ad/interstitial/monitor/b;

    return-object v0
.end method
