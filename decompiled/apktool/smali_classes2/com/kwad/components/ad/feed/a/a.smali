.class public final Lcom/kwad/components/ad/feed/a/a;
.super Ljava/lang/Object;


# static fields
.field public static ee:Lcom/kwad/sdk/core/config/item/d;

.field public static ef:Lcom/kwad/sdk/core/config/item/k;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/config/item/d;

    const/4 v1, 0x0

    const-string v2, "feedAdClickGuideSwitch"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/d;-><init>(Ljava/lang/String;Z)V

    sput-object v0, Lcom/kwad/components/ad/feed/a/a;->ee:Lcom/kwad/sdk/core/config/item/d;

    new-instance v0, Lcom/kwad/sdk/core/config/item/k;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "feedNativeRenderSwitch"

    invoke-direct {v0, v2, v1}, Lcom/kwad/sdk/core/config/item/k;-><init>(Ljava/lang/String;Ljava/lang/Integer;)V

    sput-object v0, Lcom/kwad/components/ad/feed/a/a;->ef:Lcom/kwad/sdk/core/config/item/k;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
