.class final Lcom/kwad/components/ad/reward/i/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/i/b;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;ILorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/sdk/core/report/AdTrackLog;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic jz:Landroid/content/Context;

.field final synthetic xr:I


# direct methods
.method constructor <init>(Landroid/content/Context;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/i/b$1;->jz:Landroid/content/Context;

    iput p2, p0, Lcom/kwad/components/ad/reward/i/b$1;->xr:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/report/AdTrackLog;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/i/b$1;->jz:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v0

    iput v0, p1, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailStatusBarHeight:I

    iget v0, p0, Lcom/kwad/components/ad/reward/i/b$1;->xr:I

    iput v0, p1, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailCallPositionY:I

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/i/b$1;->a(Lcom/kwad/sdk/core/report/AdTrackLog;)V

    return-void
.end method
