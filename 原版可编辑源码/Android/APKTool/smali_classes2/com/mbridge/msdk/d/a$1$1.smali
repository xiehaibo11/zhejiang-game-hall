.class final Lcom/mbridge/msdk/d/a$1$1;
.super Lcom/mbridge/msdk/d/b/b;
.source "ShortCutsDataManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/d/a$1;->runTask()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/d/a$1;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/d/a$1;)V
    .locals 0

    .line 84
    iput-object p1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    invoke-direct {p0}, Lcom/mbridge/msdk/d/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object v0, v0, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    if-eqz p3, :cond_1

    .line 102
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getJmDo()I

    move-result p3

    sget v0, Lcom/mbridge/msdk/d/a;->a:I

    if-ne p3, v0, :cond_1

    .line 103
    iget-object p1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object p1, p1, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    invoke-interface {p1}, Lcom/mbridge/msdk/d/a/a;->a()V

    return-void

    .line 106
    :cond_1
    iget-object p3, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object p3, p3, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    invoke-interface {p3, p1, p2}, Lcom/mbridge/msdk/d/a/a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/util/List;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/net/c/b;",
            ">;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignUnit;",
            ")V"
        }
    .end annotation

    .line 87
    iget-object p1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object p1, p1, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    if-nez p1, :cond_0

    return-void

    .line 90
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getJmDo()I

    move-result p1

    sget v0, Lcom/mbridge/msdk/d/a;->a:I

    if-ne p1, v0, :cond_1

    .line 91
    iget-object p1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object p1, p1, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    invoke-interface {p1}, Lcom/mbridge/msdk/d/a/a;->a()V

    return-void

    .line 94
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object p1, p1, Lcom/mbridge/msdk/d/a$1;->b:Lcom/mbridge/msdk/d/a/a;

    iget-object v0, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object v0, v0, Lcom/mbridge/msdk/d/a$1;->d:Lcom/mbridge/msdk/d/a;

    iget-object v1, p0, Lcom/mbridge/msdk/d/a$1$1;->a:Lcom/mbridge/msdk/d/a$1;

    iget-object v1, v1, Lcom/mbridge/msdk/d/a$1;->a:Landroid/content/Context;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p2

    invoke-static {v0, v1, p2}, Lcom/mbridge/msdk/d/a;->a(Lcom/mbridge/msdk/d/a;Landroid/content/Context;Ljava/util/List;)Ljava/util/List;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/d/a/a;->a(Ljava/util/List;)V

    return-void
.end method
