.class public Lcom/bianfeng/seppellita/manager/PolicysManager;
.super Ljava/lang/Object;
.source "PolicysManager.java"

# interfaces
.implements Lcom/bianfeng/seppellita/manager/IPolicysManager;


# instance fields
.field private volatile policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPolicys(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 25
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/PolicysManager;->policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    if-nez v0, :cond_0

    return-object p1

    .line 28
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/PolicysManager;->policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getAbtest()Ljava/util/List;

    move-result-object v0

    .line 29
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    return-object p1

    .line 33
    :cond_1
    :try_start_0
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->getMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    .line 34
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const-string v3, "pg"

    .line 35
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 36
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;

    .line 37
    invoke-virtual {v4}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getPage()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v3}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 38
    invoke-virtual {v4}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getListBean()Lcom/bianfeng/seppellita/bean/ListPostBean;

    move-result-object v4

    .line 40
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    const-string v0, "ab"

    .line 43
    invoke-static {v2}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 44
    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object p1
.end method

.method public getPolicys(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 53
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/PolicysManager;->policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 56
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/manager/PolicysManager;->policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getAbtest()Ljava/util/List;

    move-result-object v0

    .line 57
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_1

    return-object v1

    .line 61
    :cond_1
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;

    .line 62
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getPage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v2}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getTest_name()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 63
    invoke-virtual {v2}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getUser_tag()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_3
    return-object v1
.end method

.method public setPolicysBean(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/bianfeng/seppellita/manager/PolicysManager;->policysBean:Lcom/bianfeng/seppellita/bean/InitBean$DataBean;

    return-void
.end method
