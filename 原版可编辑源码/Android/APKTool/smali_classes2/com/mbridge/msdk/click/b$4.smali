.class final Lcom/mbridge/msdk/click/b$4;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Lcom/mbridge/msdk/click/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZZIZLjava/lang/Boolean;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Z

.field final synthetic c:I

.field final synthetic d:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZI)V
    .locals 0

    .line 984
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    iput-object p2, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean p3, p0, Lcom/mbridge/msdk/click/b$4;->b:Z

    iput p4, p0, Lcom/mbridge/msdk/click/b$4;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 6

    .line 989
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v0

    .line 990
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/click/b;)Ljava/lang/String;

    move-result-object v2

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/b$4;->b:Z

    const/4 v4, 0x0

    iget v5, p0, Lcom/mbridge/msdk/click/b$4;->c:I

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    .line 992
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    if-eqz p1, :cond_0

    .line 993
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 996
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 1032
    :try_start_0
    iget-boolean p2, p0, Lcom/mbridge/msdk/click/b$4;->b:Z

    if-eqz p2, :cond_0

    .line 1033
    iget-object p2, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p2}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/click/b;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v0

    .line 1034
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p2, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p2}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/click/b;)Ljava/lang/String;

    move-result-object v2

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/b$4;->b:Z

    const/4 v4, 0x0

    iget v5, p0, Lcom/mbridge/msdk/click/b$4;->c:I

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;ZII)J

    :cond_0
    if-eqz p1, :cond_1

    .line 1037
    instance-of p2, p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    if-eqz p2, :cond_1

    .line 1038
    iget-object p2, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    check-cast p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    invoke-static {p2, p1, v0, v1, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)V

    .line 1040
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->d(Lcom/mbridge/msdk/click/b;)Ljava/util/HashMap;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1041
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    if-eqz p1, :cond_2

    .line 1042
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    iget-object p2, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1045
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final b(Ljava/lang/Object;)V
    .locals 7

    if-eqz p1, :cond_0

    .line 1008
    :try_start_0
    instance-of v0, p1, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    if-eqz v0, :cond_0

    .line 1009
    move-object v4, p1

    check-cast v4, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    const-string p1, "MBridge SDK M"

    .line 1010
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Redirection done...  code: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;->getCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1011
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    if-eqz v4, :cond_0

    .line 1013
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setJumpResult(Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;)V

    .line 1014
    iget-object v1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    iget-object v2, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/b$4;->b:Z

    iget v5, p0, Lcom/mbridge/msdk/click/b$4;->c:I

    const/4 v6, 0x1

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;IZ)V

    .line 1018
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_1

    .line 1019
    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->d:Lcom/mbridge/msdk/click/b;

    invoke-static {p1}, Lcom/mbridge/msdk/click/b;->d(Lcom/mbridge/msdk/click/b;)Ljava/util/HashMap;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1021
    :cond_1
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_2

    .line 1022
    sget-object p1, Lcom/mbridge/msdk/click/b;->c:Ljava/util/Set;

    iget-object v0, p0, Lcom/mbridge/msdk/click/b$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1025
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method
