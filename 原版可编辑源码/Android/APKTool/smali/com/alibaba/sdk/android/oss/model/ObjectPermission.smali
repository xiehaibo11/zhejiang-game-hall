.class public final enum Lcom/alibaba/sdk/android/oss/model/ObjectPermission;
.super Ljava/lang/Enum;
.source "ObjectPermission.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/alibaba/sdk/android/oss/model/ObjectPermission;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

.field public static final enum Default:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

.field public static final enum Private:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

.field public static final enum PublicRead:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

.field public static final enum PublicReadWrite:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

.field public static final enum Unknown:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;


# instance fields
.field private permissionString:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 31
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v1, 0x0

    const-string v2, "Private"

    const-string v3, "private"

    invoke-direct {v0, v2, v1, v3}, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Private:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 37
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v2, 0x1

    const-string v3, "PublicRead"

    const-string v4, "public-read"

    invoke-direct {v0, v3, v2, v4}, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicRead:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 42
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v3, 0x2

    const-string v4, "PublicReadWrite"

    const-string v5, "public-read-write"

    invoke-direct {v0, v4, v3, v5}, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicReadWrite:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 48
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v4, 0x3

    const-string v5, "Default"

    const-string v6, "default"

    invoke-direct {v0, v5, v4, v6}, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Default:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 53
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v5, 0x4

    const-string v6, "Unknown"

    const-string v7, ""

    invoke-direct {v0, v6, v5, v7}, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Unknown:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 25
    sget-object v7, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Private:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    aput-object v7, v6, v1

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicRead:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    aput-object v1, v6, v2

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicReadWrite:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    aput-object v1, v6, v3

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Default:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 57
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 58
    iput-object p3, p0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->permissionString:Ljava/lang/String;

    return-void
.end method

.method public static parsePermission(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/ObjectPermission;
    .locals 5

    const/4 v0, 0x4

    new-array v1, v0, [Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    .line 62
    sget-object v2, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Private:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    sget-object v2, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicRead:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v4, 0x1

    aput-object v2, v1, v4

    sget-object v2, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->PublicReadWrite:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v4, 0x2

    aput-object v2, v1, v4

    sget-object v2, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Default:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    const/4 v4, 0x3

    aput-object v2, v1, v4

    :goto_0
    if-ge v3, v0, :cond_1

    .line 63
    aget-object v2, v1, v3

    .line 64
    iget-object v4, v2, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->permissionString:Ljava/lang/String;

    invoke-virtual {v4, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    return-object v2

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 69
    :cond_1
    sget-object p0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->Unknown:Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/ObjectPermission;
    .locals 1

    .line 25
    const-class v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    return-object p0
.end method

.method public static values()[Lcom/alibaba/sdk/android/oss/model/ObjectPermission;
    .locals 1

    .line 25
    sget-object v0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    invoke-virtual {v0}, [Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/alibaba/sdk/android/oss/model/ObjectPermission;

    return-object v0
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/alibaba/sdk/android/oss/model/ObjectPermission;->permissionString:Ljava/lang/String;

    return-object v0
.end method
