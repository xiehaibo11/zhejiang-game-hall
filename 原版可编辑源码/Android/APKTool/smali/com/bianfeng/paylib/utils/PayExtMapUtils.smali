.class public Lcom/bianfeng/paylib/utils/PayExtMapUtils;
.super Ljava/lang/Object;
.source "PayExtMapUtils.java"


# static fields
.field private static privateKey:Ljava/lang/String;

.field private static sub:Ljava/lang/String;

.field private static uid:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getPrivateKey()Ljava/lang/String;
    .locals 1

    .line 25
    sget-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->privateKey:Ljava/lang/String;

    return-object v0
.end method

.method public static getSub()Ljava/lang/String;
    .locals 1

    .line 29
    sget-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->sub:Ljava/lang/String;

    return-object v0
.end method

.method public static getUid()Ljava/lang/String;
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public static updataOrder(Ljava/util/Map;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 18
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayPrivateKey()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->privateKey:Ljava/lang/String;

    const-string v0, "role_name"

    .line 19
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    sput-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->uid:Ljava/lang/String;

    const-string v0, "role_id"

    .line 20
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    sput-object v0, Lcom/bianfeng/paylib/utils/PayExtMapUtils;->sub:Ljava/lang/String;

    return-object p0
.end method
