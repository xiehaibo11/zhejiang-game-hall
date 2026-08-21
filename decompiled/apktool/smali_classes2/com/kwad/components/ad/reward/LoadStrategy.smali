.class public final enum Lcom/kwad/components/ad/reward/LoadStrategy;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kwad/components/ad/reward/LoadStrategy;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/kwad/components/ad/reward/LoadStrategy;

.field public static final enum FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

.field public static final enum MULTI:Lcom/kwad/components/ad/reward/LoadStrategy;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/components/ad/reward/LoadStrategy;

    const/4 v1, 0x0

    const-string v2, "FULL_TK"

    invoke-direct {v0, v2, v1}, Lcom/kwad/components/ad/reward/LoadStrategy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/LoadStrategy;->FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

    new-instance v0, Lcom/kwad/components/ad/reward/LoadStrategy;

    const/4 v2, 0x1

    const-string v3, "MULTI"

    invoke-direct {v0, v3, v2}, Lcom/kwad/components/ad/reward/LoadStrategy;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kwad/components/ad/reward/LoadStrategy;->MULTI:Lcom/kwad/components/ad/reward/LoadStrategy;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/kwad/components/ad/reward/LoadStrategy;

    sget-object v4, Lcom/kwad/components/ad/reward/LoadStrategy;->FULL_TK:Lcom/kwad/components/ad/reward/LoadStrategy;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/kwad/components/ad/reward/LoadStrategy;->$VALUES:[Lcom/kwad/components/ad/reward/LoadStrategy;

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

.method public static valueOf(Ljava/lang/String;)Lcom/kwad/components/ad/reward/LoadStrategy;
    .locals 1

    const-class v0, Lcom/kwad/components/ad/reward/LoadStrategy;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kwad/components/ad/reward/LoadStrategy;

    return-object p0
.end method

.method public static values()[Lcom/kwad/components/ad/reward/LoadStrategy;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/LoadStrategy;->$VALUES:[Lcom/kwad/components/ad/reward/LoadStrategy;

    invoke-virtual {v0}, [Lcom/kwad/components/ad/reward/LoadStrategy;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kwad/components/ad/reward/LoadStrategy;

    return-object v0
.end method
