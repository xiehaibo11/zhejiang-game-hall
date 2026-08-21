.class public final enum Lcom/alibaba/sdk/android/oss/model/StorageClass;
.super Ljava/lang/Enum;
.source "StorageClass.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/alibaba/sdk/android/oss/model/StorageClass;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/alibaba/sdk/android/oss/model/StorageClass;

.field public static final enum Archive:Lcom/alibaba/sdk/android/oss/model/StorageClass;

.field public static final enum IA:Lcom/alibaba/sdk/android/oss/model/StorageClass;

.field public static final enum Standard:Lcom/alibaba/sdk/android/oss/model/StorageClass;

.field public static final enum Unknown:Lcom/alibaba/sdk/android/oss/model/StorageClass;


# instance fields
.field private storageClassString:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 30
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    const/4 v1, 0x0

    const-string v2, "Standard"

    invoke-direct {v0, v2, v1, v2}, Lcom/alibaba/sdk/android/oss/model/StorageClass;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->Standard:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    .line 35
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    const/4 v2, 0x1

    const-string v3, "IA"

    invoke-direct {v0, v3, v2, v3}, Lcom/alibaba/sdk/android/oss/model/StorageClass;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->IA:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    .line 40
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    const/4 v3, 0x2

    const-string v4, "Archive"

    invoke-direct {v0, v4, v3, v4}, Lcom/alibaba/sdk/android/oss/model/StorageClass;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->Archive:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    .line 45
    new-instance v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    const/4 v4, 0x3

    const-string v5, "Unknown"

    invoke-direct {v0, v5, v4, v5}, Lcom/alibaba/sdk/android/oss/model/StorageClass;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->Unknown:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/alibaba/sdk/android/oss/model/StorageClass;

    .line 25
    sget-object v6, Lcom/alibaba/sdk/android/oss/model/StorageClass;->Standard:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    aput-object v6, v5, v1

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/StorageClass;->IA:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    aput-object v1, v5, v2

    sget-object v1, Lcom/alibaba/sdk/android/oss/model/StorageClass;->Archive:Lcom/alibaba/sdk/android/oss/model/StorageClass;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/alibaba/sdk/android/oss/model/StorageClass;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/StorageClass;

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

    .line 49
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 50
    iput-object p3, p0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->storageClassString:Ljava/lang/String;

    return-void
.end method

.method public static parse(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/StorageClass;
    .locals 5

    .line 54
    invoke-static {}, Lcom/alibaba/sdk/android/oss/model/StorageClass;->values()[Lcom/alibaba/sdk/android/oss/model/StorageClass;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 55
    invoke-virtual {v3}, Lcom/alibaba/sdk/android/oss/model/StorageClass;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    return-object v3

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 60
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Unable to parse "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    goto :goto_2

    :goto_1
    throw v0

    :goto_2
    goto :goto_1
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/alibaba/sdk/android/oss/model/StorageClass;
    .locals 1

    .line 25
    const-class v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/alibaba/sdk/android/oss/model/StorageClass;

    return-object p0
.end method

.method public static values()[Lcom/alibaba/sdk/android/oss/model/StorageClass;
    .locals 1

    .line 25
    sget-object v0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->$VALUES:[Lcom/alibaba/sdk/android/oss/model/StorageClass;

    invoke-virtual {v0}, [Lcom/alibaba/sdk/android/oss/model/StorageClass;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/alibaba/sdk/android/oss/model/StorageClass;

    return-object v0
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/alibaba/sdk/android/oss/model/StorageClass;->storageClassString:Ljava/lang/String;

    return-object v0
.end method
