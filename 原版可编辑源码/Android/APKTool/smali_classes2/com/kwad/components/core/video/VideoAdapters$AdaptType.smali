.class final enum Lcom/kwad/components/core/video/VideoAdapters$AdaptType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/video/VideoAdapters;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "AdaptType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/core/video/VideoAdapters$AdaptType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

.field public static final enum LANDSCAPE_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

.field public static final enum LANDSCAPE_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

.field public static final enum PORTRAIT_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

.field public static final enum PORTRAIT_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    const/4 v1, 0x0

    const-string v2, "PORTRAIT_VERTICAL"

    invoke-direct {v0, v2, v1}, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    new-instance v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    const/4 v2, 0x1

    const-string v3, "PORTRAIT_HORIZONTAL"

    invoke-direct {v0, v3, v2}, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    new-instance v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    const/4 v3, 0x2

    const-string v4, "LANDSCAPE_VERTICAL"

    invoke-direct {v0, v4, v3}, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->LANDSCAPE_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    new-instance v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    const/4 v4, 0x3

    const-string v5, "LANDSCAPE_HORIZONTAL"

    invoke-direct {v0, v5, v4}, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->LANDSCAPE_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    sget-object v6, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    aput-object v6, v5, v1

    sget-object v1, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->PORTRAIT_HORIZONTAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    aput-object v1, v5, v2

    sget-object v1, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->LANDSCAPE_VERTICAL:Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->$VALUES:[Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

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

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/core/video/VideoAdapters$AdaptType;
    .locals 1

    const-class v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/core/video/VideoAdapters$AdaptType;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->$VALUES:[Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    invoke-virtual {v0}, [Lcom/kwad/components/core/video/VideoAdapters$AdaptType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/core/video/VideoAdapters$AdaptType;

    return-object v0
.end method
