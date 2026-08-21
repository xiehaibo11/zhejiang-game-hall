.class public final enum Lcom/kwad/components/core/playable/PlayableSource;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/core/playable/PlayableSource;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum ENDCARD_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum PENDANT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum PENDANT_CLICK_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum PENDANT_CLICK_NOT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum PLAY_FINISHED_NORMAL:Lcom/kwad/components/core/playable/PlayableSource;

.field public static final enum UNKNOWN_TRYPLAY_ENTRY_SOURCE:Lcom/kwad/components/core/playable/PlayableSource;


# instance fields
.field private code:I


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v1, 0x0

    const-string v2, "UNKNOWN_TRYPLAY_ENTRY_SOURCE"

    invoke-direct {v0, v2, v1, v1}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->UNKNOWN_TRYPLAY_ENTRY_SOURCE:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v2, 0x1

    const-string v3, "PLAY_FINISHED_NORMAL"

    invoke-direct {v0, v3, v2, v2}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PLAY_FINISHED_NORMAL:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v3, 0x2

    const-string v4, "PENDANT_CLICK_NOT_AUTO"

    invoke-direct {v0, v4, v3, v3}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_NOT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v4, 0x3

    const-string v5, "PENDANT_CLICK_AUTO"

    invoke-direct {v0, v5, v4, v4}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v5, 0x4

    const-string v6, "PENDANT_AUTO"

    invoke-direct {v0, v6, v5, v5}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v6, 0x5

    const-string v7, "ACTIONBAR_CLICK"

    invoke-direct {v0, v7, v6, v6}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    new-instance v0, Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v7, 0x6

    const-string v8, "ENDCARD_CLICK"

    invoke-direct {v0, v8, v7, v7}, Lcom/kwad/components/core/playable/PlayableSource;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/kwad/components/core/playable/PlayableSource;->ENDCARD_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/kwad/components/core/playable/PlayableSource;

    sget-object v9, Lcom/kwad/components/core/playable/PlayableSource;->UNKNOWN_TRYPLAY_ENTRY_SOURCE:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v9, v8, v1

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->PLAY_FINISHED_NORMAL:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v1, v8, v2

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_NOT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v1, v8, v3

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v1, v8, v4

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v1, v8, v5

    sget-object v1, Lcom/kwad/components/core/playable/PlayableSource;->ACTIONBAR_CLICK:Lcom/kwad/components/core/playable/PlayableSource;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/kwad/components/core/playable/PlayableSource;->$VALUES:[Lcom/kwad/components/core/playable/PlayableSource;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/kwad/components/core/playable/PlayableSource;->code:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/core/playable/PlayableSource;
    .locals 1

    const-class v0, Lcom/kwad/components/core/playable/PlayableSource;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/core/playable/PlayableSource;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/core/playable/PlayableSource;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->$VALUES:[Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {v0}, [Lcom/kwad/components/core/playable/PlayableSource;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/core/playable/PlayableSource;

    return-object v0
.end method


# virtual methods
.method public final getCode()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/playable/PlayableSource;->code:I

    return v0
.end method
