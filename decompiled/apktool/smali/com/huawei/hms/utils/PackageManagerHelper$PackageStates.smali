.class public final enum Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;
.super Ljava/lang/Enum;
.source "PackageManagerHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/utils/PackageManagerHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "PackageStates"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum DISABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

.field public static final enum ENABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

.field public static final enum NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

.field public static final enum SPOOF:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

.field public static final synthetic a:[Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;


# direct methods
.method public static constructor <clinit>()V
    .locals 7

    .line 1
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    const/4 v1, 0x0

    const-string v2, "ENABLED"

    invoke-direct {v0, v2, v1}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->ENABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    .line 5
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    const/4 v2, 0x1

    const-string v3, "DISABLED"

    invoke-direct {v0, v3, v2}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->DISABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    .line 9
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    const/4 v3, 0x2

    const-string v4, "NOT_INSTALLED"

    invoke-direct {v0, v4, v3}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    .line 13
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    const/4 v4, 0x3

    const-string v5, "SPOOF"

    invoke-direct {v0, v5, v4}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->SPOOF:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    .line 14
    sget-object v6, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->ENABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    aput-object v6, v5, v1

    sget-object v1, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->DISABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    aput-object v1, v5, v2

    sget-object v1, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->a:[Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 1
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;
    .locals 1

    .line 1
    const-class v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    return-object p0
.end method

.method public static values()[Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;
    .locals 1

    .line 1
    sget-object v0, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->a:[Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v0}, [Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    return-object v0
.end method
