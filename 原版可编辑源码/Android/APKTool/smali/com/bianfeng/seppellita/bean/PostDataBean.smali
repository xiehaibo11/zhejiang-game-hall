.class public Lcom/bianfeng/seppellita/bean/PostDataBean;
.super Ljava/lang/Object;
.source "PostDataBean.java"


# instance fields
.field private apihub_secret:Ljava/lang/String;

.field private data:Ljava/lang/String;

.field private encrypt_key:Ljava/lang/String;

.field private idList:Ljava/lang/String;

.field private site:Ljava/lang/String;

.field private time:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/util/List;Ljava/util/List;Ljava/lang/String;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/EventBean;",
            ">;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Lcom/bianfeng/seppellita/bean/AppInfoBean;",
            ")V"
        }
    .end annotation

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->data:Ljava/lang/String;

    .line 23
    invoke-static {p2}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->idList:Ljava/lang/String;

    .line 25
    invoke-virtual {p4}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApihub_secret()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->apihub_secret:Ljava/lang/String;

    .line 26
    invoke-virtual {p4}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getEncrypt_key()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->encrypt_key:Ljava/lang/String;

    .line 27
    iput-object p3, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->time:Ljava/lang/String;

    .line 28
    invoke-virtual {p4}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getSite()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->site:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getApihub_secret()Ljava/lang/String;
    .locals 1

    .line 41
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->apihub_secret:Ljava/lang/String;

    return-object v0
.end method

.method public getData()Ljava/lang/String;
    .locals 1

    .line 32
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->data:Ljava/lang/String;

    return-object v0
.end method

.method public getEncrypt_key()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->encrypt_key:Ljava/lang/String;

    return-object v0
.end method

.method public getIdList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/seppellita/exception/SeppellitaException;
        }
    .end annotation

    .line 36
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->idList:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->getList(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getSite()Ljava/lang/String;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->site:Ljava/lang/String;

    return-object v0
.end method

.method public getTime()Ljava/lang/String;
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->time:Ljava/lang/String;

    return-object v0
.end method

.method public setSite(Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/PostDataBean;->site:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 65
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
