.class final Lcom/mbridge/msdk/foundation/db/p$1;
.super Ljava/lang/Object;
.source "SCDao.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/foundation/db/p;->a(Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Lcom/mbridge/msdk/foundation/db/p;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/db/p;Ljava/util/List;)V
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/db/p$1;->b:Lcom/mbridge/msdk/foundation/db/p;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/db/p$1;->a:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/db/p$1;->a:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 154
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/db/p$1;->b:Lcom/mbridge/msdk/foundation/db/p;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/db/p;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J

    goto :goto_0

    :cond_0
    return-void
.end method
