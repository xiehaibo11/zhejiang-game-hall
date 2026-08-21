.class public final enum Lcom/bianfeng/splitscreenwindow/ShowType;
.super Ljava/lang/Enum;
.source "ShowType.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/bianfeng/splitscreenwindow/ShowType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum ACTIVITY_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum FENPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum FENPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum QUANPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

.field public static final enum QUANPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;


# direct methods
.method static constructor <clinit>()V
    .locals 9

    .line 7
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "ACTIVITY_PORTRAIT"

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "ACTIVITY_LAND"

    const/4 v3, 0x1

    invoke-direct {v0, v1, v3}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "QUANPING_PORTRAIT"

    const/4 v4, 0x2

    invoke-direct {v0, v1, v4}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "FENPING_PORTRAIT"

    const/4 v5, 0x3

    invoke-direct {v0, v1, v5}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "QUANPING_LAND"

    const/4 v6, 0x4

    invoke-direct {v0, v1, v6}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    new-instance v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    const-string v1, "FENPING_LAND"

    const/4 v7, 0x5

    invoke-direct {v0, v1, v7}, Lcom/bianfeng/splitscreenwindow/ShowType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    const/4 v1, 0x6

    new-array v1, v1, [Lcom/bianfeng/splitscreenwindow/ShowType;

    .line 6
    sget-object v8, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    aput-object v8, v1, v2

    sget-object v2, Lcom/bianfeng/splitscreenwindow/ShowType;->ACTIVITY_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    aput-object v2, v1, v3

    sget-object v2, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    aput-object v2, v1, v4

    sget-object v2, Lcom/bianfeng/splitscreenwindow/ShowType;->FENPING_PORTRAIT:Lcom/bianfeng/splitscreenwindow/ShowType;

    aput-object v2, v1, v5

    sget-object v2, Lcom/bianfeng/splitscreenwindow/ShowType;->QUANPING_LAND:Lcom/bianfeng/splitscreenwindow/ShowType;

    aput-object v2, v1, v6

    aput-object v0, v1, v7

    sput-object v1, Lcom/bianfeng/splitscreenwindow/ShowType;->$VALUES:[Lcom/bianfeng/splitscreenwindow/ShowType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 6
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/bianfeng/splitscreenwindow/ShowType;
    .locals 1

    .line 6
    const-class v0, Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/bianfeng/splitscreenwindow/ShowType;

    return-object p0
.end method

.method public static values()[Lcom/bianfeng/splitscreenwindow/ShowType;
    .locals 1

    .line 6
    sget-object v0, Lcom/bianfeng/splitscreenwindow/ShowType;->$VALUES:[Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-virtual {v0}, [Lcom/bianfeng/splitscreenwindow/ShowType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/bianfeng/splitscreenwindow/ShowType;

    return-object v0
.end method
