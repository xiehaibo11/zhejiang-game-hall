.class public final enum Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;
.super Ljava/lang/Enum;
.source "OSSRequest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/alibaba/sdk/android/oss/model/OSSRequest;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "CRC64Config"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

.field public static final enum NO:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

.field public static final enum NULL:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

.field public static final enum YES:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 37
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    const/4 v1, 0x0

    const-string v2, "NULL"

    invoke-direct {v0, v2, v1}, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->NULL:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    .line 38
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    const/4 v2, 0x1

    const-string v3, "YES"

    invoke-direct {v0, v3, v2}, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->YES:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    .line 39
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    const/4 v3, 0x2

    const-string v4, "NO"

    invoke-direct {v0, v4, v3}, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->NO:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    .line 36
    sget-object v5, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->NULL:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    aput-object v5, v4, v1

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->YES:Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 36
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;
    .locals 1

    .line 36
    const-class v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    return-object p0
.end method

.method public static values()[Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;
    .locals 1

    .line 36
    sget-object v0, Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    invoke-virtual {v0}, [Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/alibaba/sdk/android/oss/model/OSSRequest$CRC64Config;

    return-object v0
.end method
