.class public final enum Lcom/tkay/core/api/TYAdConst$CURRENCY;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/api/TYAdConst;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "CURRENCY"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/tkay/core/api/TYAdConst$CURRENCY;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/tkay/core/api/TYAdConst$CURRENCY;

.field public static final enum RMB:Lcom/tkay/core/api/TYAdConst$CURRENCY;

.field public static final enum RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

.field public static final enum USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 21
    new-instance v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v1, 0x0

    const-string v2, "RMB"

    invoke-direct {v0, v2, v1}, Lcom/tkay/core/api/TYAdConst$CURRENCY;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    .line 22
    new-instance v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v2, 0x1

    const-string v3, "RMB_CENT"

    invoke-direct {v0, v3, v2}, Lcom/tkay/core/api/TYAdConst$CURRENCY;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    .line 23
    new-instance v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v3, 0x2

    const-string v4, "USD"

    invoke-direct {v0, v4, v3}, Lcom/tkay/core/api/TYAdConst$CURRENCY;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/tkay/core/api/TYAdConst$CURRENCY;

    .line 20
    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    aput-object v5, v4, v1

    sget-object v1, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/tkay/core/api/TYAdConst$CURRENCY;->$VALUES:[Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 20
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 20
    const-class v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object p0
.end method

.method public static values()[Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 20
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->$VALUES:[Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-virtual {v0}, [Lcom/tkay/core/api/TYAdConst$CURRENCY;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method
