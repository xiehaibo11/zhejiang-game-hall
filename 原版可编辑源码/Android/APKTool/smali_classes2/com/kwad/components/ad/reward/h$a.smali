.class final Lcom/kwad/components/ad/reward/h$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static oS:Lcom/kwad/components/ad/reward/h;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/h;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/h;-><init>(B)V

    sput-object v0, Lcom/kwad/components/ad/reward/h$a;->oS:Lcom/kwad/components/ad/reward/h;

    return-void
.end method

.method static synthetic fH()Lcom/kwad/components/ad/reward/h;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/h$a;->oS:Lcom/kwad/components/ad/reward/h;

    return-object v0
.end method
