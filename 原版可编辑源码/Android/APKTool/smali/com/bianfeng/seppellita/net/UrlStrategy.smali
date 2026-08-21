.class Lcom/bianfeng/seppellita/net/UrlStrategy;
.super Ljava/lang/Object;
.source "UrlStrategy.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;
    }
.end annotation


# static fields
.field private static final SEPPELLITA_POST_URL:Ljava/lang/String; = "sl_url_main"

.field private static final SEPPELLITA_POST_URL_2:Ljava/lang/String; = "sl_url_alternate"


# instance fields
.field private urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

.field private urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;


# direct methods
.method public constructor <init>()V
    .locals 4

    const-string v0, ""

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    const-string v2, "sl_url_main"

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-object v1, v0

    .line 24
    :goto_0
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    const-string v3, "sl_url_alternate"

    invoke-virtual {v2, v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 28
    :catch_1
    new-instance v2, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-direct {v2, p0, v1, v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;-><init>(Lcom/bianfeng/seppellita/net/UrlStrategy;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v2, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/seppellita/net/UrlStrategy;)Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;
    .locals 0

    .line 10
    iget-object p0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    return-object p0
.end method


# virtual methods
.method getAction()Ljava/lang/String;
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    if-eqz v0, :cond_0

    .line 74
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->getUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 76
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/net/UrlStrategy;->getUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method getUrl()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->getUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onFail()V
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->increment()V

    .line 40
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    if-eqz v0, :cond_0

    .line 41
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->increment()V

    :cond_0
    return-void
.end method

.method public onSuc()V
    .locals 1

    .line 32
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->setTo0()V

    .line 33
    iget-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    if-eqz v0, :cond_0

    .line 34
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;->setTo0()V

    :cond_0
    return-void
.end method

.method public setUrlBean(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 68
    new-instance v0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-direct {v0, p0, p1, p2}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;-><init>(Lcom/bianfeng/seppellita/net/UrlStrategy;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    return-void
.end method

.method public setUrls(Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;)V
    .locals 4

    const-string v0, "setUrls--->"

    .line 46
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    if-eqz p1, :cond_2

    .line 47
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;->getAction()Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;->getAction()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 51
    :cond_0
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;->getAction()Ljava/util/List;

    move-result-object p1

    .line 52
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    .line 53
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 54
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 55
    new-instance v0, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-direct {v0, p0, p1, p1}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;-><init>(Lcom/bianfeng/seppellita/net/UrlStrategy;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    return-void

    .line 58
    :cond_1
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 59
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 60
    new-instance v1, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    invoke-direct {v1, p0, v0, p1}, Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;-><init>(Lcom/bianfeng/seppellita/net/UrlStrategy;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/bianfeng/seppellita/net/UrlStrategy;->urlActionBean:Lcom/bianfeng/seppellita/net/UrlStrategy$UrlBean;

    return-void

    :cond_2
    :goto_0
    const-string p1, "setUrls---null>"

    .line 48
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-void
.end method
