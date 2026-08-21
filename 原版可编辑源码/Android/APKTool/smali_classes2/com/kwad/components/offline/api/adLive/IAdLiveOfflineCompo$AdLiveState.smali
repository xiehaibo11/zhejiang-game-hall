.class public final enum Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "AdLiveState"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

.field public static final enum READY:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

.field public static final enum SO_FAIL:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    const/4 v1, 0x0

    const-string v2, "READY"

    invoke-direct {v0, v2, v1}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->READY:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    new-instance v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    const/4 v2, 0x1

    const-string v3, "SO_FAIL"

    invoke-direct {v0, v3, v2}, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->SO_FAIL:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    sget-object v4, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->READY:Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->$VALUES:[Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

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

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
    .locals 1

    const-class v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;
    .locals 1

    sget-object v0, Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->$VALUES:[Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    invoke-virtual {v0}, [Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/offline/api/adLive/IAdLiveOfflineCompo$AdLiveState;

    return-object v0
.end method
