.class final Lcom/kwad/components/ad/reward/d$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final oz:Lcom/kwad/components/ad/reward/d;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/d;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/d;-><init>(B)V

    sput-object v0, Lcom/kwad/components/ad/reward/d$a;->oz:Lcom/kwad/components/ad/reward/d;

    return-void
.end method

.method static synthetic fx()Lcom/kwad/components/ad/reward/d;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/d$a;->oz:Lcom/kwad/components/ad/reward/d;

    return-object v0
.end method
