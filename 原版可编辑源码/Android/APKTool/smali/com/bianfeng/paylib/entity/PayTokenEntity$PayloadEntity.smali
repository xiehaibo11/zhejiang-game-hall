.class public Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;
.super Ljava/lang/Object;
.source "PayTokenEntity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/entity/PayTokenEntity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "PayloadEntity"
.end annotation


# instance fields
.field private app_id:Ljava/lang/String;

.field private aud:Ljava/lang/String;

.field private exp:Ljava/lang/String;

.field private iat:Ljava/lang/String;

.field private iss:Ljava/lang/String;

.field private sub:Ljava/lang/String;

.field private uid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ymn sdk_server JWT"

    .line 35
    iput-object v0, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->iss:Ljava/lang/String;

    .line 48
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/SystemUtil;->getSystemCurrentTime()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    add-long/2addr v2, v0

    .line 50
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->iat:Ljava/lang/String;

    .line 51
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->exp:Ljava/lang/String;

    .line 52
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->app_id:Ljava/lang/String;

    .line 53
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->sub:Ljava/lang/String;

    .line 54
    iput-object p2, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->uid:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public setAud(Ljava/lang/String;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/PayTokenEntity$PayloadEntity;->aud:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 59
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getGson()Lcom/bianfeng/thridlibrary/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/thridlibrary/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
