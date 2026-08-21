.class public final enum Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/live/base/api/push/ILivePush;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "ClickType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

.field public static final enum CLOSE:Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

.field public static final enum LIVE:Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;


# instance fields
.field private final value:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 29
    new-instance v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    const/4 v1, 0x0

    const-string v2, "LIVE"

    const-string v3, "live"

    invoke-direct {v0, v2, v1, v3}, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->LIVE:Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    .line 30
    new-instance v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    const/4 v2, 0x1

    const-string v3, "CLOSE"

    const-string v4, "close"

    invoke-direct {v0, v3, v2, v4}, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->CLOSE:Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    .line 28
    sget-object v4, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->LIVE:Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->$VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

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

    .line 38
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 39
    iput-object p3, p0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->value:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;
    .locals 1

    .line 28
    const-class v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    return-object p0
.end method

.method public static values()[Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;
    .locals 1

    .line 28
    sget-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->$VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    invoke-virtual {v0}, [Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;

    return-object v0
.end method


# virtual methods
.method public final getValue()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/push/ILivePush$ClickType;->value:Ljava/lang/String;

    return-object v0
.end method
