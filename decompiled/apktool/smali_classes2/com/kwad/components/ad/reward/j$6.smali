.class final Lcom/kwad/components/ad/reward/j$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Callable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/concurrent/Callable<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic pR:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$6;->pR:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private gh()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$6;->pR:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/f/a;->getCurrentShowShopItemInfo()Lcom/kwad/components/offline/api/core/adlive/model/LiveShopItemInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/offline/api/core/adlive/model/LiveShopItemInfo;->itemId:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final synthetic call()Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/j$6;->gh()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
