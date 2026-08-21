.class public final enum Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;
.super Ljava/lang/Enum;
.source ""


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "ComponentType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

.field public static final enum ACTIVITY:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

.field public static final enum BROADCAST:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

.field public static final enum SERVICE:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    const/4 v1, 0x0

    const-string v2, "ACTIVITY"

    invoke-direct {v0, v2, v1}, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->ACTIVITY:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    new-instance v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    const/4 v2, 0x1

    const-string v3, "SERVICE"

    invoke-direct {v0, v3, v2}, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->SERVICE:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    new-instance v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    const/4 v3, 0x2

    const-string v4, "BROADCAST"

    invoke-direct {v0, v4, v3}, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->BROADCAST:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    sget-object v5, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->ACTIVITY:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->SERVICE:Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->$VALUES:[Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;
    .locals 1

    const-class v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    return-object p0
.end method

.method public static values()[Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;
    .locals 1

    sget-object v0, Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->$VALUES:[Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    invoke-virtual {v0}, [Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/appgallery/serviceverifykit/api/ServiceVerifyKit$Builder$ComponentType;

    return-object v0
.end method
