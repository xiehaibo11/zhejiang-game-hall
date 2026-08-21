.class final Lcom/mbridge/msdk/videocommon/download/d$2;
.super Ljava/lang/Object;
.source "UnitCacheCtroller.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/videocommon/download/d;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/videocommon/download/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/videocommon/download/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 1048
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    iput-object p2, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 1052
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/d;)Lcom/mbridge/msdk/videocommon/listener/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1053
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/d;)Lcom/mbridge/msdk/videocommon/listener/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    .line 1056
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 1057
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_1

    .line 1059
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1067
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/d;)Lcom/mbridge/msdk/videocommon/listener/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1068
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/d;)Lcom/mbridge/msdk/videocommon/listener/a;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1070
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 1071
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 1072
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "UnitCacheCtroller"

    const-string p2, "Is not check video download status"

    .line 1073
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 1079
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    .line 1080
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->b:Lcom/mbridge/msdk/videocommon/download/d;

    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d$2;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v0, :cond_2

    .line 1082
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method
