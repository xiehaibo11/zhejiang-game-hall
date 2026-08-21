.class public final enum Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "TKState"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

.field public static final enum READY:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

.field public static final enum SO_FAIL:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    const/4 v1, 0x0

    const-string v2, "READY"

    invoke-direct {v0, v2, v1}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->READY:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    new-instance v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    const/4 v2, 0x1

    const-string v3, "SO_FAIL"

    invoke-direct {v0, v3, v2}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->SO_FAIL:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    sget-object v4, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->READY:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->$VALUES:[Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

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

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
    .locals 1

    const-class v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;
    .locals 1

    sget-object v0, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->$VALUES:[Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    invoke-virtual {v0}, [Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/offline/api/tk/ITkOfflineCompo$TKState;

    return-object v0
.end method
