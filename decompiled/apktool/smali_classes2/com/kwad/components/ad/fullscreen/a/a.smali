.class public final Lcom/kwad/components/ad/fullscreen/a/a;
.super Ljava/lang/Object;


# static fields
.field public static fX:Lcom/kwad/sdk/core/config/item/k;

.field public static fY:Lcom/kwad/sdk/core/config/item/k;

.field public static fZ:Lcom/kwad/sdk/core/config/item/k;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "fullscreenSkipType"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/fullscreen/a/a;->fX:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const/4 v2, 0x5

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "fullscreenSkipShowTime"

    invoke-direct {v0, v3, v2}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/fullscreen/a/a;->fY:Lcom/kwad/sdk/core/config/item/k;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    const-string v2, "fullScreenShakeMaxCount"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/fullscreen/a/a;->fZ:Lcom/kwad/sdk/core/config/item/k;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
