.class public final enum Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/live/base/api/push/ILivePush;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "PushType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

.field public static final enum CLOD_LAUNCH:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

.field public static final enum SELF_DRIVING:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

.field public static final enum VIDEO:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;


# instance fields
.field private final value:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 14
    new-instance v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "SELF_DRIVING"

    invoke-direct {v0, v3, v1, v2}, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->SELF_DRIVING:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    .line 15
    new-instance v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    const/4 v3, 0x2

    const-string v4, "CLOD_LAUNCH"

    invoke-direct {v0, v4, v2, v3}, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->CLOD_LAUNCH:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    .line 16
    new-instance v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    const/4 v4, 0x3

    const-string v5, "VIDEO"

    invoke-direct {v0, v5, v3, v4}, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->VIDEO:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    new-array v4, v4, [Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    .line 13
    sget-object v5, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->SELF_DRIVING:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->CLOD_LAUNCH:Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->$VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    .line 23
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 24
    iput p3, p0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->value:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;
    .locals 1

    .line 13
    const-class v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    return-object p0
.end method

.method public static values()[Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;
    .locals 1

    .line 13
    sget-object v0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->$VALUES:[Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    invoke-virtual {v0}, [Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;

    return-object v0
.end method


# virtual methods
.method public final getValue()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/bytedance/android/live/base/api/push/ILivePush$PushType;->value:I

    return v0
.end method
