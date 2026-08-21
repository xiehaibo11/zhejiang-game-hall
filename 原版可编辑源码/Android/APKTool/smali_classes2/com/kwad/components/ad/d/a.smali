.class public final Lcom/kwad/components/ad/d/a;
.super Ljava/lang/Object;


# static fields
.field public static bA:Lcom/kwad/sdk/core/config/item/p;

.field public static bB:Lcom/kwad/sdk/core/config/item/p;

.field public static bC:Lcom/kwad/sdk/core/config/item/p;

.field public static bz:Lcom/kwad/sdk/core/config/item/p;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "kwaiLogoUrl"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/d/a;->bz:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "attentionTips"

    const-string v2, "\u53bb\u5173\u6ce8TA"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/d/a;->bA:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "viewHomeTips"

    const-string v2, "\u67e5\u770bTA\u7684\u4e3b\u9875"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/d/a;->bB:Lcom/kwad/sdk/core/config/item/p;

    new-instance v0, Lcom/kwad/sdk/core/config/item/p;

    const-string v1, "buyNowTips"

    const-string v2, "\u7acb\u5373\u62a2\u8d2d"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/config/item/p;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/ad/d/a;->bC:Lcom/kwad/sdk/core/config/item/p;

    return-void
.end method

.method public static init()V
    .locals 0

    return-void
.end method
