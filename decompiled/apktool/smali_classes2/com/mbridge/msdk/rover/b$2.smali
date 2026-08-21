.class final Lcom/mbridge/msdk/rover/b$2;
.super Lcom/mbridge/msdk/rover/h;
.source "RoverController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/rover/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/rover/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/rover/b;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/rover/b$2;->a:Lcom/mbridge/msdk/rover/b;

    invoke-direct {p0}, Lcom/mbridge/msdk/rover/h;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/rover/RoverCampaignUnit;)V
    .locals 4

    .line 77
    iget-object v0, p1, Lcom/mbridge/msdk/rover/RoverCampaignUnit;->ads:Ljava/util/ArrayList;

    if-eqz v0, :cond_1

    .line 78
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 79
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 81
    new-instance v2, Lcom/mbridge/msdk/rover/c;

    iget-object v3, p0, Lcom/mbridge/msdk/rover/b$2;->a:Lcom/mbridge/msdk/rover/b;

    iget-object v3, v3, Lcom/mbridge/msdk/rover/b;->a:Landroid/content/Context;

    invoke-direct {v2, p1, v1, v3}, Lcom/mbridge/msdk/rover/c;-><init>(Lcom/mbridge/msdk/rover/RoverCampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;)V

    goto :goto_0

    :cond_1
    return-void
.end method
