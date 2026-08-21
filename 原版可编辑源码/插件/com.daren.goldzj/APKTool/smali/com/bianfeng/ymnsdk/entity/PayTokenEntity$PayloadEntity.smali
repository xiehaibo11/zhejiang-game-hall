.class public Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;
.super Ljava/lang/Object;
.source "PayTokenEntity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/PayTokenEntity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "PayloadEntity"
.end annotation


# instance fields
.field private app_id:Ljava/lang/String;

.field private aud:Ljava/lang/String;

.field private exp:I

.field private iat:I

.field private iss:Ljava/lang/String;

.field private sub:Ljava/lang/String;

.field private uid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ymn sdk_server JWT"

    .line 2
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->iss:Ljava/lang/String;

    const/4 v0, 0x0

    .line 17
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->iat:I

    .line 18
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->exp:I

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->app_id:Ljava/lang/String;

    .line 20
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->sub:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->uid:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public setAud(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->aud:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
