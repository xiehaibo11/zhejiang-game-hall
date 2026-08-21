.class public final enum Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/agconnect/core/service/auth/TokenSnapshot;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "State"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

.field public static final enum SIGNED_IN:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

.field public static final enum SIGNED_OUT:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

.field public static final enum TOKEN_INVALID:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

.field public static final enum TOKEN_UPDATED:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    const/4 v1, 0x0

    const-string v2, "SIGNED_IN"

    invoke-direct {v0, v2, v1}, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->SIGNED_IN:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    new-instance v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    const/4 v2, 0x1

    const-string v3, "TOKEN_UPDATED"

    invoke-direct {v0, v3, v2}, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->TOKEN_UPDATED:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    new-instance v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    const/4 v3, 0x2

    const-string v4, "TOKEN_INVALID"

    invoke-direct {v0, v4, v3}, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->TOKEN_INVALID:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    new-instance v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    const/4 v4, 0x3

    const-string v5, "SIGNED_OUT"

    invoke-direct {v0, v5, v4}, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->SIGNED_OUT:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    sget-object v6, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->SIGNED_IN:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    aput-object v6, v5, v1

    sget-object v1, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->TOKEN_UPDATED:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    aput-object v1, v5, v2

    sget-object v1, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->TOKEN_INVALID:Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->$VALUES:[Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

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

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;
    .locals 1

    const-class v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    return-object p0
.end method

.method public static values()[Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;
    .locals 1

    sget-object v0, Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->$VALUES:[Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    invoke-virtual {v0}, [Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/agconnect/core/service/auth/TokenSnapshot$State;

    return-object v0
.end method
