.class final enum Lorg/cocos2dx/lib/Cocos2dxVideoView$State;
.super Ljava/lang/Enum;
.source "Cocos2dxVideoView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxVideoView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x401a
    name = "State"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lorg/cocos2dx/lib/Cocos2dxVideoView$State;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum PAUSED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum PLAYBACK_COMPLETED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum PREPARED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum PREPARING:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum STARTED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

.field public static final enum STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;


# direct methods
.method static constructor <clinit>()V
    .locals 11

    .line 49
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v1, 0x0

    const-string v2, "IDLE"

    invoke-direct {v0, v2, v1}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 50
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v2, 0x1

    const-string v3, "ERROR"

    invoke-direct {v0, v3, v2}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 51
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v3, 0x2

    const-string v4, "INITIALIZED"

    invoke-direct {v0, v4, v3}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 52
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v4, 0x3

    const-string v5, "PREPARING"

    invoke-direct {v0, v5, v4}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PREPARING:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 53
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v5, 0x4

    const-string v6, "PREPARED"

    invoke-direct {v0, v6, v5}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PREPARED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 54
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v6, 0x5

    const-string v7, "STARTED"

    invoke-direct {v0, v7, v6}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STARTED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 55
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v7, 0x6

    const-string v8, "PAUSED"

    invoke-direct {v0, v8, v7}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PAUSED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 56
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/4 v8, 0x7

    const-string v9, "STOPPED"

    invoke-direct {v0, v9, v8}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    .line 57
    new-instance v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/16 v9, 0x8

    const-string v10, "PLAYBACK_COMPLETED"

    invoke-direct {v0, v10, v9}, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PLAYBACK_COMPLETED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    const/16 v0, 0x9

    .line 48
    new-array v0, v0, [Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    sget-object v10, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->IDLE:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v10, v0, v1

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->ERROR:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v2

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->INITIALIZED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v3

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PREPARING:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v4

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PREPARED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v5

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STARTED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v6

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PAUSED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v7

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->STOPPED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v8

    sget-object v1, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->PLAYBACK_COMPLETED:Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    aput-object v1, v0, v9

    sput-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->$VALUES:[Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 48
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lorg/cocos2dx/lib/Cocos2dxVideoView$State;
    .locals 1

    .line 48
    const-class v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    return-object p0
.end method

.method public static values()[Lorg/cocos2dx/lib/Cocos2dxVideoView$State;
    .locals 1

    .line 48
    sget-object v0, Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->$VALUES:[Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    invoke-virtual {v0}, [Lorg/cocos2dx/lib/Cocos2dxVideoView$State;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lorg/cocos2dx/lib/Cocos2dxVideoView$State;

    return-object v0
.end method
