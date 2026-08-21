.class public Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
.super Ljava/lang/Object;


# instance fields
.field private df:Ljava/lang/String;

.field private pt:Lorg/json/JSONObject;

.field private q:Lorg/json/JSONObject;

.field private rg:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static builder()Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
    .locals 1

    .line 15
    new-instance v0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;-><init>()V

    return-object v0
.end method


# virtual methods
.method public getExtJson()Lorg/json/JSONObject;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->q:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getLabel()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->df:Ljava/lang/String;

    return-object v0
.end method

.method public getMaterialMeta()Lorg/json/JSONObject;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->pt:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getTag()Ljava/lang/String;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public setExtJson(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->q:Lorg/json/JSONObject;

    return-object p0
.end method

.method public setLabel(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->df:Ljava/lang/String;

    return-object p0
.end method

.method public setMaterialMeta(Lorg/json/JSONObject;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->pt:Lorg/json/JSONObject;

    return-object p0
.end method

.method public setTag(Ljava/lang/String;)Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;->rg:Ljava/lang/String;

    return-object p0
.end method
