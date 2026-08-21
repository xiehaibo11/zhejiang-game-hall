.class public final enum Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/utils/DeviceUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "NetworkType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum ETHERNET:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum MOBILE:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum MOBILE_2G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum MOBILE_3G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum MOBILE_4G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum MOBILE_5G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

.field public static final enum WIFI:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;


# instance fields
.field private final mId:I


# direct methods
.method static constructor <clinit>()V
    .locals 11

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v1, 0x0

    const-string v2, "UNKNOWN"

    invoke-direct {v0, v2, v1, v1}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v2, 0x1

    const-string v3, "ETHERNET"

    const/16 v4, 0x65

    invoke-direct {v0, v3, v2, v4}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->ETHERNET:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v3, 0x2

    const-string v4, "WIFI"

    const/16 v5, 0x64

    invoke-direct {v0, v4, v3, v5}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->WIFI:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v4, 0x3

    const-string v5, "MOBILE"

    invoke-direct {v0, v5, v4, v2}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v5, 0x4

    const-string v6, "MOBILE_2G"

    invoke-direct {v0, v6, v5, v3}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_2G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v6, 0x5

    const-string v7, "MOBILE_3G"

    invoke-direct {v0, v7, v6, v4}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_3G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v7, 0x6

    const-string v8, "MOBILE_4G"

    invoke-direct {v0, v8, v7, v5}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_4G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    new-instance v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/4 v8, 0x7

    const-string v9, "MOBILE_5G"

    invoke-direct {v0, v9, v8, v6}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_5G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    const/16 v9, 0x8

    new-array v9, v9, [Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    sget-object v10, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v10, v9, v1

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->ETHERNET:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v2

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->WIFI:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v3

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v4

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_2G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v5

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_3G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v6

    sget-object v1, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->MOBILE_4G:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    aput-object v1, v9, v7

    aput-object v0, v9, v8

    sput-object v9, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->$VALUES:[Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->mId:I

    return-void
.end method

.method static synthetic a(Landroid/content/Context;I)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 0

    invoke-static {p0, p1}, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->b(Landroid/content/Context;I)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    move-result-object p0

    return-object p0
.end method

.method private static b(Landroid/content/Context;I)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 1

    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_2

    const/4 v0, 0x3

    if-eq p1, v0, :cond_2

    const/4 v0, 0x4

    if-eq p1, v0, :cond_2

    const/4 v0, 0x5

    if-eq p1, v0, :cond_2

    const/16 p0, 0x9

    if-eq p1, p0, :cond_0

    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->UNKNOWN:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :cond_0
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->ETHERNET:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :cond_1
    sget-object p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->WIFI:Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0

    :cond_2
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/DeviceUtils;->getDataNetworkType(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    move-result-object p0

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 1

    const-class v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object p0
.end method

.method public static values()[Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;
    .locals 1

    sget-object v0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->$VALUES:[Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    invoke-virtual {v0}, [Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;

    return-object v0
.end method


# virtual methods
.method public getId()I
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->mId:I

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    iget v0, p0, Lcom/czhj/sdk/common/utils/DeviceUtils$NetworkType;->mId:I

    invoke-static {v0}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
