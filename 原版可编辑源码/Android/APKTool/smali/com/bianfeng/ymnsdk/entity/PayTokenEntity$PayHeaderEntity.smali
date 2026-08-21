.class public Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;
.super Ljava/lang/Object;
.source "PayTokenEntity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/PayTokenEntity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "PayHeaderEntity"
.end annotation


# instance fields
.field private alg:Ljava/lang/String;

.field private typ:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    const-string v0, "HS256"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;->alg:Ljava/lang/String;

    .line 16
    const-string v0, "JWT"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayHeaderEntity;->typ:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 20
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
