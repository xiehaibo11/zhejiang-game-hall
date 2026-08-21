.class final Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;
.super Ljava/lang/Object;
.source "interstitial.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/jscommon/interstitial;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/interstitial/jscommon/interstitial;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/jscommon/interstitial;Ljava/util/List;Ljava/lang/String;)V
    .locals 0

    .line 541
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->c:Lcom/mbridge/msdk/interstitial/jscommon/interstitial;

    iput-object p2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->a:Ljava/util/List;

    iput-object p3, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const/4 v0, 0x0

    .line 546
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->a:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 547
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->a:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 549
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->c:Lcom/mbridge/msdk/interstitial/jscommon/interstitial;

    invoke-static {v2}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a(Lcom/mbridge/msdk/interstitial/jscommon/interstitial;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v2

    .line 550
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/db/l;->b(Ljava/lang/String;)V

    .line 551
    invoke-static {}, Lcom/mbridge/msdk/interstitial/jscommon/interstitial;->a()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "======\u66f4\u65b0frequence\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " sUnitId:"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/jscommon/interstitial$2;->b:Ljava/lang/String;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
